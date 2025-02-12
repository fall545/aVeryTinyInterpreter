#ifndef COMMEN_H
#define COMMEN_H

#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
#include <ctime>

enum LogLevel {
    INFO,
    DEBUG,
    ERROR
};

// 输出日志到文件和控制台
void logMessage(LogLevel level, const std::string& message) {
    // 获取当前时间
    auto now = std::chrono::system_clock::now();
    auto now_time_t = std::chrono::system_clock::to_time_t(now);
    std::string timeStr = std::ctime(&now_time_t);
    timeStr = timeStr.substr(0, timeStr.length() - 1);  // 移除时间末尾的换行符

    // 格式化日志级别
    std::string levelStr;
    switch (level) {
        case INFO: levelStr = "INFO"; break;
        case DEBUG: levelStr = "DEBUG"; break;
        case ERROR: levelStr = "ERROR"; break;
    }

    // 构建日志消息
    std::string logMessage = "[" + timeStr + "] [" + levelStr + "] " + message;

    // 输出到控制台
    std::cout << logMessage << std::endl;

    // 输出到日志文件
    std::ofstream logFile("app.log", std::ios_base::app);  // 追加模式
    if (logFile.is_open()) {
        logFile << logMessage << std::endl;
        logFile.close();
    }
    else {
        std::cerr << "Unable to open log file!" << std::endl;
    }
}

int main() {
    logMessage(INFO, "This is an informational message.");
    logMessage(DEBUG, "This is a debug message.");
    logMessage(ERROR, "This is an error message.");

    return 0;
}

#endif