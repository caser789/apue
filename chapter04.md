Files and directories
==============================

## stat, fstat, fstatat, lstat

* lstat: link stat
* stat struct

## file types

* regular file
* directory
* block special file
* character special file
* FIFO
* socket
* symbolic link


* stat.st_mode


## set-user-id and set-group-id

* stat.st_uid
* stat.st_gid


* S_ISUID
* S_ISGID


* 文件如果有 set-uid-bit 则运行时的 user 就是 文件的 owner 而不是运行者

## file access permissions

## access and faccessat

## umask

## chmod, fchmod, fchmodat

## sticky bit

* save text part of a program in swap
* saved-text bit
* S_ISVTX

现在由于有了 virtual memory ，不再需要

## chown, fchown, fchownat, lchown
## file size

* stat.st_size
* stat.st_blksize
* stat.st_blocks

```
ls -l core
du -s core
```

## file truncation

* truncate
* ftruncate

## file system

disk drive: partition | partition | partition

partition: boot block | super block | cylinder group | cylinder group

cylinder group: super block copy | cg info | i-node map | block bitmap | i-node | i-node | ... | data block | data block

## link, linkat, unlink, unlinkat, remove

* 临时文件技巧，create or open 后马上 unlink

## rename, renameat
## symbolic link
## creating and reading symbolic links
## futimens, utimensat, utimes

