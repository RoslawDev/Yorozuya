// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <std___Tree_ptr.hpp>
#include <std__allocator.hpp>


START_ATF_NAMESPACE
    namespace std
    {
        #pragma pack(push, 8)
        template<>
        struct  _Tree_val<_Tmap_traits<basic_string<char,char_traits<char>,allocator<char> >,AreaList,less<basic_string<char,char_traits<char>,allocator<char> > >,allocator<pair<basic_string<char,char_traits<char>,allocator<char> > const ,AreaList> >,0> > : _Tree_ptr<_Tmap_traits<basic_string<char,char_traits<char>,allocator<char> >,AreaList,less<basic_string<char,char_traits<char>,allocator<char> > >,allocator<pair<basic_string<char,char_traits<char>,allocator<char> > const ,AreaList> >,0> >
        {
            allocator<pair<basic_string<char,char_traits<char>,allocator<char> > const ,AreaList> > _Alval;
        };
        #pragma pack(pop)    
        static_assert(ATF::checkSize<std::_Tree_val<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,AreaList,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,AreaList> >,0> >, 40>(), "std::_Tree_val<std::_Tmap_traits<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,AreaList,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,AreaList> >,0> >");
    }; // end namespace std
END_ATF_NAMESPACE
