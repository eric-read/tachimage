#pragma clang diagnostic push
#pragma ide diagnostic ignored "OCUnusedGlobalDeclarationInspection"
#ifndef SKIA_STUBS_H
#define SKIA_STUBS_H

#include <stdint.h>

class SkBitmapStub21 {
public:
    enum SkColorType {
        kUnknown_SkColorType,
        kAlpha_8_SkColorType,
        kRGB_565_SkColorType,
        kARGB_4444_SkColorType,
        kRGBA_8888_SkColorType,
        kBGRA_8888_SkColorType,
        kIndex_8_SkColorType,

        kLastEnum_SkColorType = kIndex_8_SkColorType,
    };
    enum SkAlphaType {};

    struct SkIPoint {
        int32_t fX, fY;
    };

    struct SkImageInfo {
        int         fWidth;
        int         fHeight;
        SkColorType fColorType;
        SkAlphaType fAlphaType;
    };

    mutable void* fPixelRef;
    mutable int   fPixelLockCount;
    mutable void* fPixels;
    mutable void* fColorTable;

    SkIPoint    fPixelRefOrigin;
    SkImageInfo fInfo;
    uint32_t    fRowBytes;
    uint8_t     fFlags;
};

#endif //SKIA_STUBS_H

#pragma clang diagnostic pop
