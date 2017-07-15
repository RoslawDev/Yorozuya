// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CR3Font.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        using CR3FontCalcStrIndexPitInWidthA1_ptr = int (WINAPIV*)(struct CR3Font*, char*, int, int);
        using CR3FontCalcStrIndexPitInWidthA1_clbk = int (WINAPIV*)(struct CR3Font*, char*, int, int, CR3FontCalcStrIndexPitInWidthA1_ptr);
        using CR3FontCalcStrIndexPitInWidthW2_ptr = int (WINAPIV*)(struct CR3Font*, wchar_t*, int, int);
        using CR3FontCalcStrIndexPitInWidthW2_clbk = int (WINAPIV*)(struct CR3Font*, wchar_t*, int, int, CR3FontCalcStrIndexPitInWidthW2_ptr);
        using CR3FontCalcStrPixelSizeA3_ptr = void (WINAPIV*)(struct CR3Font*, char*, struct tagSIZE*, int);
        using CR3FontCalcStrPixelSizeA3_clbk = void (WINAPIV*)(struct CR3Font*, char*, struct tagSIZE*, int, CR3FontCalcStrPixelSizeA3_ptr);
        using CR3FontCalcStrPixelSizeW4_ptr = void (WINAPIV*)(struct CR3Font*, wchar_t*, struct tagSIZE*, int);
        using CR3FontCalcStrPixelSizeW4_clbk = void (WINAPIV*)(struct CR3Font*, wchar_t*, struct tagSIZE*, int, CR3FontCalcStrPixelSizeW4_ptr);
        using CR3FontClearCache5_ptr = void (WINAPIV*)(struct CR3Font*);
        using CR3FontClearCache5_clbk = void (WINAPIV*)(struct CR3Font*, CR3FontClearCache5_ptr);
        using CR3FontDeleteDeviceObjects6_ptr = int32_t (WINAPIV*)(struct CR3Font*);
        using CR3FontDeleteDeviceObjects6_clbk = int32_t (WINAPIV*)(struct CR3Font*, CR3FontDeleteDeviceObjects6_ptr);
        using CR3FontDrawFullText7_ptr = void (WINAPIV*)(struct CR3Font*, struct FONT2DVERTEX*);
        using CR3FontDrawFullText7_clbk = void (WINAPIV*)(struct CR3Font*, struct FONT2DVERTEX*, CR3FontDrawFullText7_ptr);
        using CR3FontDrawTextA8_ptr = int32_t (WINAPIV*)(struct CR3Font*, float*, uint32_t, char*, uint32_t, float);
        using CR3FontDrawTextA8_clbk = int32_t (WINAPIV*)(struct CR3Font*, float*, uint32_t, char*, uint32_t, float, CR3FontDrawTextA8_ptr);
        using CR3FontDrawTextA9_ptr = int32_t (WINAPIV*)(struct CR3Font*, float, float, uint32_t, char*, float**, uint32_t, float);
        using CR3FontDrawTextA9_clbk = int32_t (WINAPIV*)(struct CR3Font*, float, float, uint32_t, char*, float**, uint32_t, float, CR3FontDrawTextA9_ptr);
        using CR3FontDrawTextA10_ptr = int32_t (WINAPIV*)(struct CR3Font*, float, float, uint32_t, char*, uint32_t, float);
        using CR3FontDrawTextA10_clbk = int32_t (WINAPIV*)(struct CR3Font*, float, float, uint32_t, char*, uint32_t, float, CR3FontDrawTextA10_ptr);
        using CR3FontDrawTextW11_ptr = int32_t (WINAPIV*)(struct CR3Font*, float*, uint32_t, wchar_t*, uint32_t, float);
        using CR3FontDrawTextW11_clbk = int32_t (WINAPIV*)(struct CR3Font*, float*, uint32_t, wchar_t*, uint32_t, float, CR3FontDrawTextW11_ptr);
        using CR3FontDrawTextW12_ptr = int32_t (WINAPIV*)(struct CR3Font*, float, float, uint32_t, wchar_t*, float**, uint32_t, float);
        using CR3FontDrawTextW12_clbk = int32_t (WINAPIV*)(struct CR3Font*, float, float, uint32_t, wchar_t*, float**, uint32_t, float, CR3FontDrawTextW12_ptr);
        using CR3FontDrawTextW13_ptr = int32_t (WINAPIV*)(struct CR3Font*, float, float, uint32_t, wchar_t*, uint32_t, float);
        using CR3FontDrawTextW13_clbk = int32_t (WINAPIV*)(struct CR3Font*, float, float, uint32_t, wchar_t*, uint32_t, float, CR3FontDrawTextW13_ptr);
        using CR3FontFillItA14_ptr = int32_t (WINAPIV*)(struct CR3Font*, struct FONT2DVERTEX*, float*, uint32_t, char*, uint32_t, float);
        using CR3FontFillItA14_clbk = int32_t (WINAPIV*)(struct CR3Font*, struct FONT2DVERTEX*, float*, uint32_t, char*, uint32_t, float, CR3FontFillItA14_ptr);
        using CR3FontFillItW15_ptr = int32_t (WINAPIV*)(struct CR3Font*, wchar_t*, float*, uint32_t, wchar_t*, uint32_t, float);
        using CR3FontFillItW15_clbk = int32_t (WINAPIV*)(struct CR3Font*, wchar_t*, float*, uint32_t, wchar_t*, uint32_t, float, CR3FontFillItW15_ptr);
        using CR3FontGetBestPosCacheA16_ptr = void (WINAPIV*)(struct CR3Font*, uint32_t, uint32_t*, uint32_t*, uint32_t*);
        using CR3FontGetBestPosCacheA16_clbk = void (WINAPIV*)(struct CR3Font*, uint32_t, uint32_t*, uint32_t*, uint32_t*, CR3FontGetBestPosCacheA16_ptr);
        using CR3FontGetBestPosCacheW17_ptr = void (WINAPIV*)(struct CR3Font*, wchar_t*, uint32_t, int*, int*, int*, int*);
        using CR3FontGetBestPosCacheW17_clbk = void (WINAPIV*)(struct CR3Font*, wchar_t*, uint32_t, int*, int*, int*, int*, CR3FontGetBestPosCacheW17_ptr);
        using CR3FontGetOutLineColor18_ptr = uint32_t (WINAPIV*)(struct CR3Font*);
        using CR3FontGetOutLineColor18_clbk = uint32_t (WINAPIV*)(struct CR3Font*, CR3FontGetOutLineColor18_ptr);
        using CR3FontInitDeviceObjects19_ptr = int32_t (WINAPIV*)(struct CR3Font*, struct IDirect3DDevice8*, uint32_t, uint32_t, uint32_t);
        using CR3FontInitDeviceObjects19_clbk = int32_t (WINAPIV*)(struct CR3Font*, struct IDirect3DDevice8*, uint32_t, uint32_t, uint32_t, CR3FontInitDeviceObjects19_ptr);
        using CR3FontInvalidateDeviceObjects20_ptr = int32_t (WINAPIV*)(struct CR3Font*);
        using CR3FontInvalidateDeviceObjects20_clbk = int32_t (WINAPIV*)(struct CR3Font*, CR3FontInvalidateDeviceObjects20_ptr);
        using CR3FontIsExistCacheA21_ptr = int64_t (WINAPIV*)(struct CR3Font*, char*, uint32_t, uint32_t*, uint32_t*);
        using CR3FontIsExistCacheA21_clbk = int64_t (WINAPIV*)(struct CR3Font*, char*, uint32_t, uint32_t*, uint32_t*, CR3FontIsExistCacheA21_ptr);
        using CR3FontIsExistCacheW22_ptr = int64_t (WINAPIV*)(struct CR3Font*, wchar_t*, uint32_t, int*, int*);
        using CR3FontIsExistCacheW22_clbk = int64_t (WINAPIV*)(struct CR3Font*, wchar_t*, uint32_t, int*, int*, CR3FontIsExistCacheW22_ptr);
        using CR3FontMemAllocate23_ptr = void (WINAPIV*)(struct CR3Font*);
        using CR3FontMemAllocate23_clbk = void (WINAPIV*)(struct CR3Font*, CR3FontMemAllocate23_ptr);
        using CR3FontMemFree24_ptr = void (WINAPIV*)(struct CR3Font*);
        using CR3FontMemFree24_clbk = void (WINAPIV*)(struct CR3Font*, CR3FontMemFree24_ptr);
        using CR3FontPrepareDrawText25_ptr = void (WINAPIV*)(struct CR3Font*);
        using CR3FontPrepareDrawText25_clbk = void (WINAPIV*)(struct CR3Font*, CR3FontPrepareDrawText25_ptr);
        using CR3FontPrivateInit26_ptr = void (WINAPIV*)(struct CR3Font*);
        using CR3FontPrivateInit26_clbk = void (WINAPIV*)(struct CR3Font*, CR3FontPrivateInit26_ptr);
        using CR3FontPrivateRelease27_ptr = void (WINAPIV*)(struct CR3Font*);
        using CR3FontPrivateRelease27_clbk = void (WINAPIV*)(struct CR3Font*, CR3FontPrivateRelease27_ptr);
        using CR3FontRestoreDeviceObjects28_ptr = int32_t (WINAPIV*)(struct CR3Font*);
        using CR3FontRestoreDeviceObjects28_clbk = int32_t (WINAPIV*)(struct CR3Font*, CR3FontRestoreDeviceObjects28_ptr);
        using CR3FontSetCacheA29_ptr = void (WINAPIV*)(struct CR3Font*, char*, uint32_t, uint32_t, uint32_t, uint32_t);
        using CR3FontSetCacheA29_clbk = void (WINAPIV*)(struct CR3Font*, char*, uint32_t, uint32_t, uint32_t, uint32_t, CR3FontSetCacheA29_ptr);
        using CR3FontSetCacheW30_ptr = void (WINAPIV*)(struct CR3Font*, wchar_t*, uint32_t, int, int, int, int);
        using CR3FontSetCacheW30_clbk = void (WINAPIV*)(struct CR3Font*, wchar_t*, uint32_t, int, int, int, int, CR3FontSetCacheW30_ptr);
        using CR3FontSetCharSet31_ptr = void (WINAPIV*)(struct CR3Font*, uint32_t);
        using CR3FontSetCharSet31_clbk = void (WINAPIV*)(struct CR3Font*, uint32_t, CR3FontSetCharSet31_ptr);
        using CR3FontSetFont32_ptr = void (WINAPIV*)(struct CR3Font*, char*);
        using CR3FontSetFont32_clbk = void (WINAPIV*)(struct CR3Font*, char*, CR3FontSetFont32_ptr);
        using CR3FontSetOutLineColor33_ptr = void (WINAPIV*)(struct CR3Font*, uint32_t);
        using CR3FontSetOutLineColor33_clbk = void (WINAPIV*)(struct CR3Font*, uint32_t, CR3FontSetOutLineColor33_ptr);
        
        using CR3Fontdtor_CR3Font34_ptr = int64_t (WINAPIV*)(struct CR3Font*);
        using CR3Fontdtor_CR3Font34_clbk = int64_t (WINAPIV*)(struct CR3Font*, CR3Fontdtor_CR3Font34_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE