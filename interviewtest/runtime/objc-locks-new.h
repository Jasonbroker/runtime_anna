/*
 * Copyright (c) 2017 Apple Inc.  All Rights Reserved.
 * 
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */

/***********************************************************************
* objc-locks-new.h
* Declarations of all locks used in the runtime.
**********************************************************************/

#ifndef _OBJC_LOCKS_NEW_H
#define _OBJC_LOCKS_NEW_H

// fork() safety requires careful tracking of all locks used in the runtime.
// Thou shalt not declare any locks outside this file.
// http://guojing.me/linux-kernel-architecture/posts/read-and-write-spin-lock/
// 自旋锁
//『未锁』标志字段，当没有内核控制路径在读或者写时设置这个位，否则就清0。这个『未锁』标志存放在lock字段的第24位。
//如果自旋锁为空，那么lock字段的值位0x010000000，如果一个两个或者多个进程因为读获取了自旋锁，那么lock字段的值位0x00ffffff，0x00fffffe等。与spinlock_t结构一样，rwlock_t结构也包含break_lock字段。
extern rwlock_t runtimeLock;
extern mutex_t DemangleCacheLock;

#endif
