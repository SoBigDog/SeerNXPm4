# Seer NXP iMX8QM m4内核固件

# 简介

## m4内核说明

### 简要说明一下m4内核拥有的资源

![](doc\map\1571739422(1).jpg)

![f70c71659e2e76487f05c2ac4a12cf5](doc\map\f70c71659e2e76487f05c2ac4a12cf5.png)

翻译如下及解释如下：

* cortex m4内核带有FPU
* AHB总线（带有本地内存控制器）包含TCM和高速缓冲支持
* 256K的内存（128K TCMU和128K TCML）
* 16K code缓冲
* 16K system缓冲
* 加密加速单元
* 中断控制器
* 唤醒中断控制器
* 内存保护单元
* FPU
* 支持对系统总线的独占访问
* 从图中我们可以看到支持1个UART，1个I2C，1个GPIO

m4最大支持的频率

![1571729234](doc\map\1571729234.jpg)

和stm32不同的是这里PLL总线速度是792M的是M4内核的3倍。

### m4如何与linux通讯

这个引入OCRAM这个设备，文档描述如下

![](doc\map\1571739912(1).png)

iMX8QM提供了256K的共享内存用于linux和M4核的通讯，这一块内存独立于SRAM和ddr，linux控制的数据总线称为AXI总线，另一端被称为SRAM内存

### m4内存映射

![](doc\map\1571903123(1).jpg)

* LPCG:Low-Power Clock Gating(低功率时钟控制器)
* MU1_A:
* MU0_A3:
* MU0_A2:
* MU0_A1:
* MU0_A0:
* MU0_B:
* WDOG:看门狗
* BBS_SIM:
* IMTMUX:
* LPI2C:Low-Power I2C
* LPUART:Low-Power UART
* LPIT:低功耗周期性中断定时器（Low-power Periodic Interrupt Timer）
* TPM:Timer PWM Module
* SEMA42:
* RGPIO:
* TCMU:
* TCML:



























