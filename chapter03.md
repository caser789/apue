File I/O
==============================

## Intro

1. open
2. read
3. write
4. lseek
5. close

- dup
- fcntl
- sync
- fsync
- ioctl

## descriptor

<unistd.h>

stdin  | 0 | STDIN_FILENO
stdout | 1 | STDOUT_FILENO
stderr | 2 | STDERR_FILENO

OPEN_MAX 每个进程打开文件数的限制

## open and openat
## create

same as:

```
open(path, O_WRONLY | O_CREAT | O_TRUNC, mode);
```

if want write and read

create: create, close, open

better way:

```
open(path, O_RDWR | O_CREAT | O_TRUNC, mode);
```
## close

进程终止时会自动关闭所拥有的文件

## lseek

- file attr
    - current file offset
- get current offset by lseek + 0
- pipe, FIFO and socket can not seek

* cmd
    * od -c file.hole

## read
## write
## I/O efficiency
## File sharing

* process table entry

    - fd flags
    - file pointer

* file table entry

    - file status flags
    - current file offset
    - v-node pointer

* v-node table entry

    - v-node information
    - i-node

* i-node table entry

    - i-node info
    - data

* each process has its own file table entry, so its own offset, but same v-node table entry
* lseek has no I/O

## atomic operation

### O_APPEND

* 任何需要多个 system call 的操作不可能是原子的
* O_APPEND 使 kernal 每次 write 前都置于 EOF

### pread
### pwrite
### create

* O_CREAT
* O_EXCL

## dup and dup2

* same file table
* both are atomic

## sync, fsync, fdatasync

* delayed write
* sync: just queue modified block buffer for writing and return
* fsync: specific a file, wait for complete
* fdatasync: like fsync, but not sync file attributes

## fcntl
## ioctl
## /dev/fd
