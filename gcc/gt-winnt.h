/* Type information for config/i386/winnt.c.
   Copyright (C) 2004, 2007, 2009 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 3, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */

/* This file is machine generated.  Do not edit.  */

void
gt_ggc_mx_export_list (void *x_p)
{
  struct export_list * const x = (struct export_list *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_11export_list ((*x).next);
      gt_ggc_m_S ((*x).name);
    }
}

void
gt_ggc_mx_extern_list (void *x_p)
{
  struct extern_list * const x = (struct extern_list *)x_p;
  if (ggc_test_and_set_mark (x))
    {
      gt_ggc_m_11extern_list ((*x).next);
      gt_ggc_m_9tree_node ((*x).decl);
      gt_ggc_m_S ((*x).name);
    }
}

void
gt_pch_nx_export_list (void *x_p)
{
  struct export_list * const x = (struct export_list *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_11export_list, gt_ggc_e_11export_list))
    {
      gt_pch_n_11export_list ((*x).next);
      gt_pch_n_S ((*x).name);
    }
}

void
gt_pch_nx_extern_list (void *x_p)
{
  struct extern_list * const x = (struct extern_list *)x_p;
  if (gt_pch_note_object (x, x, gt_pch_p_11extern_list, gt_ggc_e_11extern_list))
    {
      gt_pch_n_11extern_list ((*x).next);
      gt_pch_n_9tree_node ((*x).decl);
      gt_pch_n_S ((*x).name);
    }
}

void
gt_pch_p_11export_list (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct export_list * const x ATTRIBUTE_UNUSED = (struct export_list *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).next), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).name), cookie);
}

void
gt_pch_p_11extern_list (ATTRIBUTE_UNUSED void *this_obj,
	void *x_p,
	ATTRIBUTE_UNUSED gt_pointer_operator op,
	ATTRIBUTE_UNUSED void *cookie)
{
  struct extern_list * const x ATTRIBUTE_UNUSED = (struct extern_list *)x_p;
  if ((void *)(x) == this_obj)
    op (&((*x).next), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).decl), cookie);
  if ((void *)(x) == this_obj)
    op (&((*x).name), cookie);
}

/* GC roots.  */

EXPORTED_CONST struct ggc_root_tab gt_ggc_r_gt_winnt_h[] = {
  {
    &export_head,
    1,
    sizeof (export_head),
    &gt_ggc_mx_export_list,
    &gt_pch_nx_export_list
  },
  {
    &extern_head,
    1,
    sizeof (extern_head),
    &gt_ggc_mx_extern_list,
    &gt_pch_nx_extern_list
  },
  LAST_GGC_ROOT_TAB
};

