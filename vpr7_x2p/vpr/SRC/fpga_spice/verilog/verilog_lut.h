
void dump_verilog_pb_primitive_lut(FILE* fp,
                                   char* subckt_prefix,
                                   t_pb* prim_pb,
                                   t_logical_block* mapped_logical_block,
                                   t_pb_graph_node* cur_pb_graph_node,
                                   int index,
                                   t_spice_model* spice_model,
                                   int lut_status,
                                   t_rr_node* pb_rr_graph);
