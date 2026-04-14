# 普中 C51 开发板模板工程

这是一个基于 STC/8051 (C51) 的最小模板工程，用于快速开始普中开发板项目开发。

## 功能说明

- 提供基础工程目录结构
- 已包含延时驱动 (`Delay.c/.h`)
- 可直接使用 EIDE 的构建/烧录任务

## 目录结构

```text
inc/        头文件（配置、寄存器定义、驱动接口）
src/        源文件（main、驱动实现）
build/      编译输出目录
tools/      辅助工具（如 stcflash.py）
```

## 开发环境建议

- VS Code
- EIDE 插件（Embedded IDE）
- 对应 C51 工具链（Keil C51 或你当前 EIDE 工程配置的工具链）

## 快速开始

1. 打开工作区：`StandardTemplate.code-workspace`
2. 修改 `src/main.c`，编写你的业务逻辑
3. 在 VS Code 任务中执行：
	- `build`：仅编译
	- `flash`：仅下载
	- `build and flash`：编译并下载

## 文件说明

- `src/main.c`：程序入口
- `src/Delay.c`：延时函数实现
- `inc/Config.h`：项目配置

## 注意事项

- 下载前请确认串口号、芯片型号、时钟配置正确
- 若烧录失败，优先检查供电、串口连接和复位时序

## License

仅供学习与项目原型开发使用，可按需修改。
