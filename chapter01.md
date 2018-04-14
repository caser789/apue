Intro
==============================

## 1. intro

操作系统
1. 提供硬件接口
2. 提供软件运行环境

## 2. Architecture

kernel
system calls
library functions
shell

## 3. Logging in

### Login name

1. `/etc/passwd`
2. `{login name}:{encrypted password}:{numeric User ID}:{numeric group ID}:{comment}:{home directory}:{shell}`

### Shells

## 4. Files and Directories

1. File System

- a directory is a file contains directory entries

- file attributes:
    - type
    - size
    - owner
    - permission
    - time modified

- cmds
    - `stat`
    - `fstat`

2. Filename

- cannot contain / and null

3. Pathname

- implementation of `ls`

4. Working Directory

- process attributes
    - working directory / current working directory
5. Home Directory


## 5. Input and Output

1. file descriptor
2. stdin, stdout, stderr
3. unbuffered I/O
4. standard I/O

## 6. Programs and Processes

- program
- processes and process ID
- process control

    - return 0 to child
    - return pid to parent
    - `waitpid` wait for the child to terminate

- threads and thread IDs

## 7. Error Handling

- err handle
    1. return a negative value or return a pointer to an object return null
    2. set errno tells why

- files
    - `errno.h`
    - intro(2)
    - errno(3)

- functions
    - strerror
    - perror

- 出错信息应包含运行程序名

### error recovery

- fatal error no recovery action
- nonfatal can recovery
- delay and retry
- exponential backoff algorithm

## 8. User Identification

### UID

- user id can not change
- root or superuser uid == 0

- function
    - `getuid`

### Group ID

- group by projects or department

- file
    - `/etc/group`
- function
    - `getgid`

- count of group
    - 16 at most

## 9. Signals

- 3 way to handle
    - ignore
    - let the default action occur
    - provide a function

- ways to generate signal
    - control-C
    - control-backslach
    - delete key
    - `kill`
    - if send to another process, you have to be its owner


## 10. Time Values

- 2 kinds
    - calendar time `time_t`
    - process time (CPU time) `clock_t` = User CPU time + system CPU time

- cmd
    - time(1)

## 11. System Calles and Library Functions

- consider system calls to c functions
- sbrk vs malloc (c function vs system call)

## 12. Summary
