/*
www.sourceforge.net/projects/tinyxpath
Copyright (c) 2002 Yves Berquin (yvesb@users.sourceforge.net)

This software is provided 'as-is', without any express or implied
warranty. In no event will the authors be held liable for any
damages arising from the use of this software.

Permission is granted to anyone to use this software for any
purpose, including commercial applications, and to alter it and
redistribute it freely, subject to the following restrictions:

1. The origin of this software must not be misrepresented; you must
not claim that you wrote the original software. If you use this
software in a product, an acknowledgment in the product documentation
would be appreciated but is not required.

2. Altered source versions must be plainly marked as such, and
must not be misrepresented as being the original software.

3. This notice may not be removed or altered from any source
distribution.
*/

/**
   \file xmlutil.h
   \author Yves Berquin
   XML utilities functions
*/

#ifndef __XMLUTIL_H
#define __XMLUTIL_H

#include "tinyxml.h"
const l_select_value = 0x10000L, l_select_mask = 0xffff0000, l_value_mask = 0xffff;


extern void v_clone_children (
   TiXmlNode * XNp_source, 
   TiXmlNode * XNp_target);
extern void v_mark_first_level (
   TiXmlNode * XNp_target, 
   long l_value);
extern void v_mark_first_level_name (
   TiXmlNode * XNp_target, 
   const char * cp_lookup_name,
   long l_value);
extern void v_mark_all_children (
   TiXmlNode * XNp_source, 
   long l_id);
extern void v_mark_children_attrib (
   TiXmlNode * XNp_target, 
   const char * cp_name,
   long l_mother_value, 
   long l_child_value);
extern void v_mark_children_name (
   TiXmlNode * XNp_target, 
   const char * cp_name,
   long l_mother_value, 
   long l_child_value);
extern void v_mark_children_inside (
   TiXmlNode * XNp_target,
   long l_mother_value,
   long l_child_value);
extern void v_mark_children_inside_one_level (
   TiXmlNode * XNp_target,
   long l_mother_value,
   long l_child_value);
extern void v_retain_attrib_tree (
   TiXmlNode * XNp_target,
   long l_source_value);
extern void v_mark_descendant (
	TiXmlNode * XNp_target, 
	const char * cp_label, 
	bool o_self,
	long l_mother, long l_target);
extern void v_mark_parent (
	TiXmlNode * XNp_target, 
	const char * cp_label, 
	long l_mother, long l_target);
extern void v_mark_ancestor (
	TiXmlNode * XNp_target, 
	const char * cp_label, 
	bool o_self,
	long l_mother, long l_target);
extern void v_mark_following_sibling (
	TiXmlNode * XNp_target, 
	const char * cp_label, 
	long l_mother, long l_target);
extern void v_mark_preceding_sibling (
	TiXmlNode * XNp_target, 
	const char * cp_label, 
	long l_mother, long l_target);
extern void v_mark_following (
	TiXmlNode * XNp_target, 
	const char * cp_label, 
	long l_mother, long l_target);
extern void v_mark_preceding (
	TiXmlNode * XNp_target, 
	const char * cp_label, 
	long l_mother, long l_target);
extern void v_mark_self (
	TiXmlNode * XNp_target, 
	const char * cp_label, 
	long l_mother, long l_target);
extern int i_get_first_marked (
   TiXmlNode * XNp_node,
   long l_source_value,
   TiXmlNode * & XNp_out,
   TiXmlAttribute * & XAp_out);
extern TIXML_STRING S_get_all_text_content (TiXmlNode * XNp_source);
extern int i_count_marked_element (TiXmlNode * XNp_node, long l_source_value);
extern void v_mark_node_and_attribute (
	TiXmlNode * XNp_node, 
	long l_marker);

extern void v_initialize_all_children (TiXmlNode * XNp_target);
extern void v_set_user_value (TiXmlNode * XNp_node, long l_value);
extern void v_set_user_value (TiXmlAttribute * XAp_att, long l_value);
extern long l_get_user_value (TiXmlNode * XNp_node);
extern long l_get_user_value (TiXmlAttribute * XAp_att);
extern void v_upgrade_marker (TiXmlNode * XNp_target, long l_source, long l_new);
extern int i_xml_cardinality (TiXmlElement * XEp_elem);
extern int i_xml_valid_sibling (TiXmlElement * XEp_elem);
extern unsigned u_count_children (TiXmlElement * XEp_elem, const char * cp_elem);
extern unsigned u_count_children (TiXmlElement * XEp_elem);
extern unsigned u_count_all_children (const TiXmlElement * XEp_elem);
extern TiXmlNode * XNp_copy_selected_node (TiXmlNode * XNp_root);
extern TiXmlNode * XNp_copy_selected_node (TiXmlNode * XNp_root, const char * cp_lookup);
extern TIXML_STRING S_string_value (const TiXmlElement * XEp_elem);

#endif

