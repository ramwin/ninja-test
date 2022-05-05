[官网](https://ninja-build.org/manual.html)

# 命令
* 编译:  
```
ninja -C .
```

# 变量
```
cflags = -g

rule cc
    command = gcc $cflags -c $in -o $out
```

# 编译
```
build outputs: rulename inputs
```
