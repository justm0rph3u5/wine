/* Wine Vulkan ICD private data structures
 *
 * Copyright 2017 Roderick Colenbrander
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

#ifndef __WINE_VULKAN_LOADER_H
#define __WINE_VULKAN_LOADER_H

#include "wine/debug.h"

#define VK_NO_PROTOTYPES
#include "wine/vulkan.h"
#include "wine/vulkan_driver.h"

#include "loader_thunks.h"

struct vulkan_func
{
    const char *name;
    void *func;
};

void *wine_vk_get_device_proc_addr(const char *name) DECLSPEC_HIDDEN;
void *wine_vk_get_phys_dev_proc_addr(const char *name) DECLSPEC_HIDDEN;
void *wine_vk_get_instance_proc_addr(const char *name) DECLSPEC_HIDDEN;

extern const struct unix_funcs *unix_funcs;

#endif /* __WINE_VULKAN_LOADER_H */
