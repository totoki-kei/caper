#ifndef CAPER_TGT_HPP
#define CAPER_TGT_HPP

#include "caper_ast.hpp"

////////////////////////////////////////////////////////////////
// collect_informations
void collect_informations(
    GenerateOptions&    options,
    symbol_map_type&    terminal_types,
    symbol_map_type&    nonterminal_types,
    const value_type&   ast);

////////////////////////////////////////////////////////////////
// make_target_parser
void make_target_parser(
    tgt::parsing_table&             table,
    std::map<std::string, size_t>&  token_id_map,
    action_map_type&                actions,
    const value_type&               ast,
    const symbol_map_type&          terminal_types,
    const symbol_map_type&          nonterminal_types);

#endif // CAPER_TGT_HPP
