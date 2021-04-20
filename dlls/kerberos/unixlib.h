/*
 * Copyright 2017 Dmitry Timoshkov
 * Copyright 2017 George Popoff
 * Copyright 2008 Robert Shearman for CodeWeavers
 * Copyright 2017,2021 Hans Leidekker for CodeWeavers
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

struct krb5_funcs
{
    NTSTATUS (CDECL *acquire_credentials_handle)(const char *, ULONG, const char *, const char *, LSA_SEC_HANDLE *,
                                                 TimeStamp *);
    NTSTATUS (CDECL *delete_context)(LSA_SEC_HANDLE);
    NTSTATUS (CDECL *free_credentials_handle)(LSA_SEC_HANDLE);
    NTSTATUS (CDECL *initialize_context)(LSA_SEC_HANDLE, LSA_SEC_HANDLE, const char *, ULONG, SecBufferDesc *,
                                         LSA_SEC_HANDLE *, SecBufferDesc *, ULONG *, TimeStamp *);
};

extern const struct krb5_funcs *krb5_funcs;
