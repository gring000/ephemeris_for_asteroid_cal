# ephemeris_for_asteroid_cal
The calculator for asteroid status

# 使用方法
```bash
$ ./CalAsteroid
# 输入要计算的天数
$ Input how many days to calculate from 2019-Jan-01 12:00:00 : 100
# 输入要计算的小行星数量
$ Input how many asteroids you want to evaluate : 1
# 将小行星的初始条件放入 2019_Input 文件夹, 以太阳中心平赤道坐标系的X,Y,Z, Vx, Vy, Vz
$ Put your initial condition to a file with name asteroids.dat
$ ast0.dat
```
输出的结果存放于 ast0.dat 中，坐标系为太阳中心平赤道坐标系。


# 对于不同的时间系统的转换，有用的网站
[Terrestrial_Time](https://en.wikipedia.org/wiki/Terrestrial_Time)

[Date and Time Definitions](https://www.usno.navy.mil/USNO/earth-orientation/eo-info/general/date-time-def)

[Different Real Time](http://leapsecond.com/java/gpsclock.htm)
