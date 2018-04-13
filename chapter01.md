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
## 8. User Identification
## 9. Signals
## 10. Time Values
## 11. System Calles and Library Functions
## 12. Summary
