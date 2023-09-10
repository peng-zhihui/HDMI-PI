#### by [ylj2000] (https://github.com/ylj2000)

# About hardware and software

> The hardware part of this project refers to the principle diagram of Zhihui. The PCB part is made of the original plate factory that is too high, so it is replaced. It is a core board with a way to add a rotary board.The connection between the two plates here is a row needle. Although it is not good for this high -speed signal, the actual test can be used.The screen uses the screen in the open source project of Zhihui Pocket-LCD, open source link: https://github.com/peng-zhihui/pocketlcd.
> Because the information of the Longxun scheme is not easy to get it, this project is doing the Toshiba solution. At present, this screen has been lit, and then I will try to find the time to light up other screens as much as possible.Due to the characteristics of the MIPI screen, it must be customized for each screen.This project will open the source to the source code of the screen. There is currently no code in the state switching. You can only insert HDMI first and then plug in the power to display. If you unplug HDMI, you need to re -call.Because the IIC interface is not added with a pull -up resistance in the original schematic diagram, I did not notice it here, so I need to connect the IIC pull -ups when debugging.

