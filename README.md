# imitate_cp
使用C++ fstream类模拟Linux下的cp指令
## 环境
- Linux
## USAGE
编译
```S
g++ cp.cpp -o cp
```
运行
```S
./cp filenames filenamed
```
## 运行结果
```S
wcq@DESKTOP-PL6DIJT:~/code/imitate_cp$ ./cp haha.c xixi.c
open src success
open dest success
read 1500 success
write 1500 success
read 1500 success
write 1500 success
read 1500 success
write 1500 success
read 1500 success
write 1500 success
read 1500 success
write 1500 success
read 1500 success
write 1500 success
read 1233 success
write 1233 success
copy success
```
