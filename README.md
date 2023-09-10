> This is a HDMI to MIPI module I recently designed, which can be used to drive various mobile phone screens as monitors.

## What is the use?

Everyone knows that the screen quality of the mobile phone is very high, and the price is low (after all, the popularity of smartphones is supported, it is very cheap to buy it as maintenance accessories). Compared with most desktop display, it has very invincible resolution and pixel density, pixel density, and pixel density, and pixels density, pixel density, and pixel density, and pixel density, pixel density, and pixel density, and pixel density, pixel density, and pixel density.The perspective, color restoration and even refresh rate.

Everyone knows that I have a persistent pursuit of small and exquisite electronic products, but there is almost no mini display made of mobile phone screens on the market, so this project is to solve this demand.As for the mini HDMI display, the development boards such as television boxes, SLR cameras, and raspberry pie have HDMI interfaces. ** is not fragrant with a high -scoring screen carried by you?**

## hardware principle

At present, most mobile phone screens and small high -resolution high refresh rates are basically MIPI interfaces. Compared with RGB, LVDS, SPI and other interfaces, MIPI is a very powerful high -speed interface. It is divided into two specifications of CSI and DSI(Yes, the DSI reserved from the Raspberry Pi), you can freely configure the number of LANE according to the needs of the bandwidth, and each LANE transmission rate exceeds 1Gbps.

HDMI is the most commonly used video interface, and almost all video output devices will bring a HDMI interface.

** Therefore, what we need is a hardware module with HDMI to MIPI.** There are several solutions to achieve this purpose, take FPGA or use ASIC chips.

The plan of FPGA has an old brother open source here: https://hackaday.io/project/364-mipi-display-shieldhdmi-adapter

He successfully drove the iPhone4's screen with Spartan-6 FPGA and accepted the HDMI signal input. If you are interested, you can refer to it.

! [] (/4.Docs/images/1.jpg)

Because I am not very familiar with FPGA, I use ASIC -specific IC solution to design.

####

Toshiba has a TC358870XBG chip with a screen driver that supports 2X4LANE. The input source is HDMI. This is currently a more popular solution in AR glasses. The chip is very powerful, but the disadvantage is that the data is extremely scarce.** I spent a long time getting the original DataSheet and related documents, and it was shared in the warehouse.**

According to the original assessment board, I also designed a test module, and the circuit has been open to the warehouse.


! [] (/4.Docs/images/2.jpg)

I haven't written the software of this solution. Interested students can refer to the document for subsequent development. ** also welcome progressive students to submit code to the warehouse ~ **

> At present, the firmware code of the Toshiba solution has been basically implemented by [ylj2000] (https://github.com/ylj2000).The open source code of classmates ~
"
> Everyone can go to his warehouse to understand specifically:
"
> [YLJ2000/HDMI_TO_MIPI: A HDMI to Mipi Conversion Module Based on Toshiba TC358870 (github.com)] (https://github.com/ylj2000/hdmi_mipi)

#### dragon news solution

There is also a Longxun solution LT6911 in China, which is slightly weaker than Longxun's performance compared to the above solution, but the chip has a built -in 51 -core MCU, so you can directly program on the film (Toshiba needs an additional single -chip machine I2CConfigure chip).

The advantage of this solution is that the cost is relatively low, and the peripheral circuit of the chip is more concise. The disadvantage is that ** information is less than Toshiba ... **

The manufacturer does not open the software and hard data, and does not even have DataSheet, so it is almost impossible to develop it personal.** But **, Universal Wild Iron Man still got some information with the agent through some special means, including some source code (the core lib is encapsulated, I can't get it, only the upper API).However, because I signed the NDA confidentiality agreement, I was not easy to share with the source code part. I am open source except for the source code, and everyone does not need the source code if everyone DIY.Reference to students who directly copy the project.



! [] (/4.Docs/images/3.jpg)

! [] (/4.Docs/images/4.jpg)

The effect of the final driver is as follows. Take a 5.5 -inch screen as an example:

! [] (/4.Docs/images/5.jpg)

## Summarize

I will continue to use this module to try to drive more screens. Students with development ability can continue to develop on the basis of the Toshiba solution I give.This scheme: D

#### Finding information and development is not easy, remember to point the stars for the warehouse ~~