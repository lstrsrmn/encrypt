//
// Created by matthew on 19/05/2020.
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "../include/keyGenerator.h"

/* BigInteger Extended Euclidean Algorithm Tests */

TEST(BigIntegerAlgorithmTests, ExtendedEuclidean128By128Bit) {
    // ARRANGE
    uint128 a0, y0;
    uint128 b0, x0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *x0Raw = (uint64 *) &x0, *y0Raw = (uint64 *) &y0;

    a0Raw[0] = 0x8b10d6079c969025, a0Raw[1] = 0x1c3d0df9f69a8e29;
    b0Raw[0] = 0xd9777299cd7e881d, b0Raw[1] = 0x1b2fedbdc067e0e8;
    x0Raw[0] = 0x5c76b6fd1dcf0382, x0Raw[1] = 0xff13836adb131532;
    y0Raw[0] = 0xf31f8e679e44b763, y0Raw[1] = 0xf5a18f8320a4d2;

    uint128 a1, y1;
    uint128 b1, x1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *x1Raw = (uint64 *) &x1, *y1Raw = (uint64 *) &y1;

    a1Raw[0] = 0xe2c2987c36a94978, a1Raw[1] = 0xa2e40993e5031f81;
    b1Raw[0] = 0x0e40b2ab2434d263, b1Raw[1] = 0xd78760846af177c8;
    x1Raw[0] = 0xcddb21461799fa88, x1Raw[1] = 0xaf1cda59ce1d6a2f;
    y1Raw[0] = 0x7bb772450a95aa0b, y1Raw[1] = 0x3d21e4e3e0aa09fb;

    uint128 a2, y2;
    uint128 b2, x2;
    uint64 *a2Raw = (uint64 *) &a2, *b2Raw = (uint64 *) &b2, *x2Raw = (uint64 *) &x2, *y2Raw = (uint64 *) &y2;

    a2Raw[0] = 0xa4ac6df74db2b800, a2Raw[1] = 0x59dfa888f069e864;
    b2Raw[0] = 0xb841d330ec5ebd04, b2Raw[1] = 0x1fded1868ee32473;
    x2Raw[0] = 0xd2c6c287519463e1, x2Raw[1] = 0xfcaacc24326dab41;
    y2Raw[0] = 0x09a04db80d8b72c1, y2Raw[1] = 0x96602630f700403;

    uint128 a3, y3;
    uint128 b3, x3;
    uint64 *a3Raw = (uint64 *) &a3, *b3Raw = (uint64 *) &b3, *x3Raw = (uint64 *) &x3, *y3Raw = (uint64 *) &y3;

    a3Raw[0] = 0x26aeae58dc0b2db1, a3Raw[1] = 0x4b2572c955808398;
    b3Raw[0] = 0x5e2f0000e57d17fc, b3Raw[1] = 0x1e89e77f905772dd;
    x3Raw[0] = 0xf98e94e18ad6edd5, x3Raw[1] = 0xc1b6d5cb177c25e;
    y3Raw[0] = 0xae138c4581fd1e51, y3Raw[1] = 0xe2354448dea54d0e;

    // ACT
    uint128 xc0;
    uint128 yc0;
    extendedEuclidean(a0, b0, xc0, yc0);
    uint128 xc1;
    uint128 yc1;
    extendedEuclidean(a1, b1, xc1, yc1);
    uint128 xc2;
    uint128 yc2;
    extendedEuclidean(a2, b2, xc2, yc2);
    uint128 xc3;
    uint128 yc3;
    extendedEuclidean(a3, b3, xc3, yc3);

    // ASSERT
    ASSERT_EQ(xc0, x0);
    ASSERT_EQ(yc0, y0);
    ASSERT_EQ(xc1, x1);
    ASSERT_EQ(yc1, y1);
    ASSERT_EQ(xc2, x2);
    ASSERT_EQ(yc2, y2);
    ASSERT_EQ(xc3, x3);
    ASSERT_EQ(yc3, y3);
}

TEST(BigIntegerAlgorithmTests, ExtendedEuclidean256By128Bit) {
    // ARRANGE
    uint256 a0, y0;
    uint128 b0, x0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *x0Raw = (uint64 *) &x0, *y0Raw = (uint64 *) &y0;

    a0Raw[0] = 0x89259a8ec4bdf87f, a0Raw[1] = 0xe94b6d92e2245899, a0Raw[2] = 0x2144905c440fda29, a0Raw[3] = 0x7859afb0622241a0;
    b0Raw[0] = 0x07f21ad5f3e4d285, b0Raw[1] = 0x500f67126f27d59e;
    x0Raw[0] = 0xb5a5722dffef8c3a, x0Raw[1] = 0xdf2ec1df05619ef0;
    y0Raw[0] = 0x956b644ae40fd6bf, y0Raw[1] = 0xf4ab32d929651ff7, y0Raw[2] = 0x40afd2ba21980b75, y0Raw[3] = 0x3155281e8807d224;

    uint256 a1, y1;
    uint128 b1, x1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *x1Raw = (uint64 *) &x1, *y1Raw = (uint64 *) &y1;

    a1Raw[0] = 0x05d68ea05c381f66, a1Raw[1] = 0x249527c5769ff18b, a1Raw[2] = 0xd9c64a5e58e9ca9f, a1Raw[3] = 0x751e298e6da530c0;
    b1Raw[0] = 0xa27f879965dc2cd0, b1Raw[1] = 0xdd1db058cec1d2e4;
    x1Raw[0] = 0xdf07c8b2cc024e7b, x1Raw[1] = 0x33aaa31883d72ef9;
    y1Raw[0] = 0x561dba7db14572e0, y1Raw[1] = 0x53fa05ec4d382c20, y1Raw[2] = 0x4c13aa2d17f4e4ee, y1Raw[3] = 0xe4a2499b719b1d2e;

    uint256 a2, y2;
    uint128 b2, x2;
    uint64 *a2Raw = (uint64 *) &a2, *b2Raw = (uint64 *) &b2, *x2Raw = (uint64 *) &x2, *y2Raw = (uint64 *) &y2;

    a2Raw[0] = 0x6175c72d37a3cbb8, a2Raw[1] = 0x6adaf701f39c7800, a2Raw[2] = 0x806564cd60371519, a2Raw[3] = 0xa7328902ab3e3ece;
    b2Raw[0] = 0x5f93b7f9c00c7f24, b2Raw[1] = 0x42379b04b4c1936e;
    x2Raw[0] = 0x99fcbaf32d5d5536, x2Raw[1] = 0xfb02802485c491a8;
    y2Raw[0] = 0x1d10ec28dc2865e5, y2Raw[1] = 0xc6e20103585b061b, y2Raw[2] = 0x9407da07b73fdd6a, y2Raw[3] = 0xc99aa743d8eba4d;

    uint256 a3, y3;
    uint128 b3, x3;
    uint64 *a3Raw = (uint64 *) &a3, *b3Raw = (uint64 *) &b3, *x3Raw = (uint64 *) &x3, *y3Raw = (uint64 *) &y3;

    a3Raw[0] = 0x98668bb59bf0f749, a3Raw[1] = 0xf3907b40a6f27ffe, a3Raw[2] = 0xfb9d8b0ca52f4b4c, a3Raw[3] = 0xa461849339b2c8b;
    b3Raw[0] = 0xccbc2206a7d31f99, b3Raw[1] = 0xb480e0ba836a1fc9;
    x3Raw[0] = 0xc5519c18936ec2ee, x3Raw[1] = 0x3c7d69f0b06ca5;
    y3Raw[0] = 0x0f0ab4a01cb5484f, y3Raw[1] = 0x489b7999910638f1, y3Raw[2] = 0xe8b126e7eb4e64d1, y3Raw[3] = 0xfffc8e9bcd5ea56e;

    // ACT
    uint128 xc0;
    uint256 yc0;
    extendedEuclidean(a0, b0, xc0, yc0);
    uint128 xc1;
    uint256 yc1;
    extendedEuclidean(a1, b1, xc1, yc1);
    uint128 xc2;
    uint256 yc2;
    extendedEuclidean(a2, b2, xc2, yc2);
    uint128 xc3;
    uint256 yc3;
    extendedEuclidean(a3, b3, xc3, yc3);

    // ASSERT
    ASSERT_EQ(xc0, x0);
    ASSERT_EQ(yc0, y0);
    ASSERT_EQ(xc1, x1);
    ASSERT_EQ(yc1, y1);
    ASSERT_EQ(xc2, x2);
    ASSERT_EQ(yc2, y2);
    ASSERT_EQ(xc3, x3);
    ASSERT_EQ(yc3, y3);
}

TEST(BigIntegerAlgorithmTests, ExtendedEuclidean256By256Bit) {
    // ARRANGE
    uint256 a0, y0;
    uint256 b0, x0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *x0Raw = (uint64 *) &x0, *y0Raw = (uint64 *) &y0;

    a0Raw[0] = 0xd91891e3976dc07e, a0Raw[1] = 0x79ab94b47b283386, a0Raw[2] = 0x3a742c96ce10cd6e, a0Raw[3] = 0x524b453e6b6a495c;
    b0Raw[0] = 0x3f0038e5316f82d3, b0Raw[1] = 0x3fb15adb3b6ae482, b0Raw[2] = 0x14b16994b52ad9b1, b0Raw[3] = 0xaf4df990fbe05398;
    x0Raw[0] = 0x17b2d3ce1066f552, x0Raw[1] = 0xa19384c6412a67ff, x0Raw[2] = 0x193e51593af39a65, x0Raw[3] = 0x1d3856856e8e0140;
    y0Raw[0] = 0x68399aec16f6aea7, y0Raw[1] = 0x31d35ac5322b8aff, y0Raw[2] = 0x6df4eb741947286a, y0Raw[3] = 0xf248789d685c61ff;

    uint256 a1, y1;
    uint256 b1, x1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *x1Raw = (uint64 *) &x1, *y1Raw = (uint64 *) &y1;

    a1Raw[0] = 0x09835c73ec50fc10, a1Raw[1] = 0x4f7889c01e62ef20, a1Raw[2] = 0x01baafc1b9263b57, a1Raw[3] = 0xff75a5353e4c24da;
    b1Raw[0] = 0x98c0b24721b2e0c4, b1Raw[1] = 0xbab342282088e917, b1Raw[2] = 0xf523a88b11e14226, b1Raw[3] = 0x89cf217620cfd5f7;
    x1Raw[0] = 0x3da42a8f610816b8, x1Raw[1] = 0xabe6f19e8139b167, x1Raw[2] = 0x68aea00c8080e7ad, x1Raw[3] = 0x4b6b7841b5699f2;
    y1Raw[0] = 0x823259597917a7f1, y1Raw[1] = 0x0481e3f1c51a962a, y1Raw[2] = 0xc914cf3a105ca09a, y1Raw[3] = 0xf7431594f8b3370c;

    uint256 a2, y2;
    uint256 b2, x2;
    uint64 *a2Raw = (uint64 *) &a2, *b2Raw = (uint64 *) &b2, *x2Raw = (uint64 *) &x2, *y2Raw = (uint64 *) &y2;

    a2Raw[0] = 0x1efbf312ff0e3320, a2Raw[1] = 0x5d5cc87c63226dfe, a2Raw[2] = 0x621062a7c07c458b, a2Raw[3] = 0xfdc7c6e3576659bf;
    b2Raw[0] = 0xd913f675f6338f41, b2Raw[1] = 0x29906ada49ed2f34, b2Raw[2] = 0x3e979c924df61c50, b2Raw[3] = 0x61cb9eaac66dc199;
    x2Raw[0] = 0x94f9b9174a9bcff5, x2Raw[1] = 0x49d96f9f354f1f99, x2Raw[2] = 0xc950cfb1f884d502, x2Raw[3] = 0xcffcf0e518f8e70d;
    y2Raw[0] = 0x3a21bc461f98fb21, y2Raw[1] = 0xa43725340a00e8e8, y2Raw[2] = 0x23858f0b05a2223d, y2Raw[3] = 0x7c97777ea034994d;

    uint256 a3, y3;
    uint256 b3, x3;
    uint64 *a3Raw = (uint64 *) &a3, *b3Raw = (uint64 *) &b3, *x3Raw = (uint64 *) &x3, *y3Raw = (uint64 *) &y3;

    a3Raw[0] = 0x996e640e18e2ac78, a3Raw[1] = 0x230d0efc18e0afc7, a3Raw[2] = 0x4778f981108a62dc, a3Raw[3] = 0xb7670fc5524daf7d;
    b3Raw[0] = 0x28ec06620df2139d, b3Raw[1] = 0x91d16e3935a936cd, b3Raw[2] = 0x3a888bb7d51ab1cf, b3Raw[3] = 0xbadfd04d021aeaf0;
    x3Raw[0] = 0x918aff2fe425dee0, x3Raw[1] = 0x6f08bdbf21410088, x3Raw[2] = 0x5961626bf7962533, x3Raw[3] = 0xcabc76339e7d09cb;
    y3Raw[0] = 0x6d9f8abfc1e3fdb5, y3Raw[1] = 0x2d2ca1d364141d40, y3Raw[2] = 0x48a129de8db66bb2, y3Raw[3] = 0x344638c8004749cb;

    // ACT
    uint256 xc0;
    uint256 yc0;
    extendedEuclidean(a0, b0, xc0, yc0);
    uint256 xc1;
    uint256 yc1;
    extendedEuclidean(a1, b1, xc1, yc1);
    uint256 xc2;
    uint256 yc2;
    extendedEuclidean(a2, b2, xc2, yc2);
    uint256 xc3;
    uint256 yc3;
    extendedEuclidean(a3, b3, xc3, yc3);

    // ASSERT
    ASSERT_EQ(xc0, x0);
    ASSERT_EQ(yc0, y0);
    ASSERT_EQ(xc1, x1);
    ASSERT_EQ(yc1, y1);
    ASSERT_EQ(xc2, x2);
    ASSERT_EQ(yc2, y2);
    ASSERT_EQ(xc3, x3);
    ASSERT_EQ(yc3, y3);
}

TEST(BigIntegerAlgorithmTests, ExtendedEuclidean512By256Bit) {
    // ARRANGE
    uint512 a0, y0;
    uint256 b0, x0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *x0Raw = (uint64 *) &x0, *y0Raw = (uint64 *) &y0;

    a0Raw[0] = 0x8188f91d85e5f141, a0Raw[1] = 0xe84471b0ab2df39e, a0Raw[2] = 0x6fe57dad72dc6759, a0Raw[3] = 0x2ba4a9b0ec86504b, a0Raw[4] = 0x4bc4c7f45753fff4, a0Raw[5] = 0x108d51641e15ead3, a0Raw[6] = 0x8ddf3d39bddefd01, a0Raw[7] = 0x79b845dcc76282e7;
    b0Raw[0] = 0x3fa44323ed7db331, b0Raw[1] = 0x812d7d90ce858c0b, b0Raw[2] = 0xf63d237e74c1e952, b0Raw[3] = 0xa3a4f56db9260f4e;
    x0Raw[0] = 0x86d9125b2e116c6c, x0Raw[1] = 0x82cd4f298dd08fc2, x0Raw[2] = 0xb4179891c11fe944, x0Raw[3] = 0x50f62da46c1e601;
    y0Raw[0] = 0x783445840bf6aea5, y0Raw[1] = 0xc052b9543a5293d6, y0Raw[2] = 0xe988e00536391fb6, y0Raw[3] = 0xf879dd926ae83783, y0Raw[4] = 0x63bcfd1c1ec0ee55, y0Raw[5] = 0x79dfdd06cd6c1b02, y0Raw[6] = 0x62d30d8f363f6cb5, y0Raw[7] = 0xfc3c7b99a064e8f0;

    uint512 a1, y1;
    uint256 b1, x1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *x1Raw = (uint64 *) &x1, *y1Raw = (uint64 *) &y1;

    a1Raw[0] = 0xc924c00bac205a8b, a1Raw[1] = 0xe94efda4671e21bc, a1Raw[2] = 0x9181c8b6dded3e7a, a1Raw[3] = 0x1262b6eddf978c07, a1Raw[4] = 0x62471e460091355b, a1Raw[5] = 0xefb955fbf2f4f951, a1Raw[6] = 0xac8ed32a9e54d3ed, a1Raw[7] = 0x4c2c32b5af630f;
    b1Raw[0] = 0x0563a731ae1b7228, b1Raw[1] = 0x8ce5c1004cc7fedb, b1Raw[2] = 0x37547f5389cb8612, b1Raw[3] = 0x2650fe465ef5a500;
    x1Raw[0] = 0x7bb926ea001c949d, x1Raw[1] = 0x8b2a339521eb6215, x1Raw[2] = 0x6b6d8ab064b614e2, x1Raw[3] = 0xff14c82abf6bae0e;
    y1Raw[0] = 0x8b5a0ba12a19cf45, y1Raw[1] = 0x5c84d6b4ae065410, y1Raw[2] = 0x9c98c716ffbb8b80, y1Raw[3] = 0x4eba0dce64df74a5, y1Raw[4] = 0xc5acf20bf858f361, y1Raw[5] = 0xca5bbd25f0122d22, y1Raw[6] = 0x6c2d9981eddb4ae7, y1Raw[7] = 0x1d39c94ed5245;

    uint512 a2, y2;
    uint256 b2, x2;
    uint64 *a2Raw = (uint64 *) &a2, *b2Raw = (uint64 *) &b2, *x2Raw = (uint64 *) &x2, *y2Raw = (uint64 *) &y2;

    a2Raw[0] = 0x67c9b269a74c8219, a2Raw[1] = 0x4a9d489fe249df37, a2Raw[2] = 0x4e3d51dcda138753, a2Raw[3] = 0x26a5361bfa3963df, a2Raw[4] = 0x03617e432cd95b9d, a2Raw[5] = 0x53c95b4a7ac652c1, a2Raw[6] = 0xa03999672f259e79, a2Raw[7] = 0x74e6d0b889f92750;
    b2Raw[0] = 0x40121bda23491cc4, b2Raw[1] = 0x5b6ec2240516e31b, b2Raw[2] = 0x6b918bbdf1c23bf7, b2Raw[3] = 0x6aa8a86a8fec0ce4;
    x2Raw[0] = 0x2f0aa13983de8d99, x2Raw[1] = 0xf353a832eb5178ef, x2Raw[2] = 0x3ae43c9b1717ff33, x2Raw[3] = 0x7be440f709f4b08;
    y2Raw[0] = 0x233175ac325a2dc4, y2Raw[1] = 0xbc5a73103dca3091, y2Raw[2] = 0x3683166a6fd0d82a, y2Raw[3] = 0xd73b8b4f665ef8ba, y2Raw[4] = 0x0412d1ca09ba0c6c, y2Raw[5] = 0x14881476d5aa315b, y2Raw[6] = 0x7d8381cbc158c54b, y2Raw[7] = 0xf7835edb2e458082;

    uint512 a3, y3;
    uint256 b3, x3;
    uint64 *a3Raw = (uint64 *) &a3, *b3Raw = (uint64 *) &b3, *x3Raw = (uint64 *) &x3, *y3Raw = (uint64 *) &y3;

    a3Raw[0] = 0x3f17e882738c2675, a3Raw[1] = 0x13b107e5a34d8a44, a3Raw[2] = 0xfea543288896eb1a, a3Raw[3] = 0xf464400f2af79826, a3Raw[4] = 0x3eebf43c01a62728, a3Raw[5] = 0xc0d763d80326a5e0, a3Raw[6] = 0x4517b06039ee823b, a3Raw[7] = 0xdae26146e185380c;
    b3Raw[0] = 0x83a8d5a6b54eea59, b3Raw[1] = 0x19c722a27d5bb16f, b3Raw[2] = 0x4f57e6080dd98542, b3Raw[3] = 0x4647915de602d84d;
    x3Raw[0] = 0x6a12962f624044b5, x3Raw[1] = 0xf276e746717f20f6, x3Raw[2] = 0xb717b165930fb33e, x3Raw[3] = 0xfefd25aa623d9a57;
    y3Raw[0] = 0x506bef13bc8f9c88, y3Raw[1] = 0x91b580bbaeb8822a, y3Raw[2] = 0xeaa4a9c46340c49f, y3Raw[3] = 0xfcfd1480346630a2, y3Raw[4] = 0x9bf80f969cd53294, y3Raw[5] = 0x7b9afd97e129107c, y3Raw[6] = 0xe1ea321d1ce1510d, y3Raw[7] = 0x326312e0af3c687;

    // ACT
    uint256 xc0;
    uint512 yc0;
    extendedEuclidean(a0, b0, xc0, yc0);
    uint256 xc1;
    uint512 yc1;
    extendedEuclidean(a1, b1, xc1, yc1);
    uint256 xc2;
    uint512 yc2;
    extendedEuclidean(a2, b2, xc2, yc2);
    uint256 xc3;
    uint512 yc3;
    extendedEuclidean(a3, b3, xc3, yc3);

    // ASSERT
    ASSERT_EQ(xc0, x0);
    ASSERT_EQ(yc0, y0);
    ASSERT_EQ(xc1, x1);
    ASSERT_EQ(yc1, y1);
    ASSERT_EQ(xc2, x2);
    ASSERT_EQ(yc2, y2);
    ASSERT_EQ(xc3, x3);
    ASSERT_EQ(yc3, y3);
}

TEST(BigIntegerAlgorithmTests, ExtendedEuclidean512By512Bit) {
    // ARRANGE
    uint512 a0, y0;
    uint512 b0, x0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *x0Raw = (uint64 *) &x0, *y0Raw = (uint64 *) &y0;

    a0Raw[0] = 0xa8a09802ccf07b33, a0Raw[1] = 0x2eb34c02158e7b9c, a0Raw[2] = 0xc8572fed7e06fcae, a0Raw[3] = 0x876aa0e22dfc6522, a0Raw[4] = 0x5051ae840762095c, a0Raw[5] = 0x22a9da68ea5fe46a, a0Raw[6] = 0xe13eb7c5ac9687bc, a0Raw[7] = 0x439a899357a268b;
    b0Raw[0] = 0x71061f7b4f04f368, b0Raw[1] = 0xcf81d40dacd67f78, b0Raw[2] = 0xbf177a393e3c3eea, b0Raw[3] = 0xa24ab45b99035a2a, b0Raw[4] = 0xe53f86a68afc3cbb, b0Raw[5] = 0x3b344092c18bfbec, b0Raw[6] = 0x9cb752666df9d9b7, b0Raw[7] = 0xcfcccd038ca7d636;
    x0Raw[0] = 0x5f464f0c39080813, x0Raw[1] = 0x44062827656a2d28, x0Raw[2] = 0xc19512b9ed9c6c6a, x0Raw[3] = 0x1d663e54bfdb36be, x0Raw[4] = 0x16449d38e3e816e1, x0Raw[5] = 0x0f168d93ccf4656f, x0Raw[6] = 0x52da07ac79682892, x0Raw[7] = 0xa45134e507d3c884;
    y0Raw[0] = 0x1d801bf527d74da3, y0Raw[1] = 0xd3494c562fd13f21, y0Raw[2] = 0xe06af0f60edd0aae, y0Raw[3] = 0x789c119f1970ea11, y0Raw[4] = 0x836538a3933ca143, y0Raw[5] = 0x2c80ee5d751cb7f5, y0Raw[6] = 0x9c21598a0f541850, y0Raw[7] = 0x1dd3c353fb90d82;

    uint512 a1, y1;
    uint512 b1, x1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *x1Raw = (uint64 *) &x1, *y1Raw = (uint64 *) &y1;

    a1Raw[0] = 0x720cbea453836167, a1Raw[1] = 0x231aca5405dc01a8, a1Raw[2] = 0x008e18cee853d54b, a1Raw[3] = 0xc8a26b2a9e89b933, a1Raw[4] = 0x3b0d59a9b5147b22, a1Raw[5] = 0x748978ee07257199, a1Raw[6] = 0x69b5975504aacc81, a1Raw[7] = 0xe4371935e67be485;
    b1Raw[0] = 0xe8a4e4484c3ff80a, b1Raw[1] = 0x28d6a3ff202f2972, b1Raw[2] = 0x8c12f0b8d377314c, b1Raw[3] = 0x27b4222ac934c7f9, b1Raw[4] = 0x67997551f401ae04, b1Raw[5] = 0x67a74174db4d2aad, b1Raw[6] = 0x204eda6d3f68c338, b1Raw[7] = 0xcafb6c54b1e47f3b;
    x1Raw[0] = 0x5a21bae263eabd09, x1Raw[1] = 0x1e2092c2d07d139b, x1Raw[2] = 0xabf45b62e20ddb6d, x1Raw[3] = 0x0b7b776ca4c8301e, x1Raw[4] = 0x2bdfec5506e0942c, x1Raw[5] = 0x315e73083995dab7, x1Raw[6] = 0xe73c40f8da197446, x1Raw[7] = 0xeede97a167965e61;
    y1Raw[0] = 0x5994830b422b7c0a, y1Raw[1] = 0xc6b53ac8d117afb7, y1Raw[2] = 0x64fbcf978e4abea7, y1Raw[3] = 0xa6012c9fb1fc6b85, y1Raw[4] = 0x7cb91b67b24c3cfe, y1Raw[5] = 0x288de450661dfeb4, y1Raw[6] = 0x53767d0b3135e018, y1Raw[7] = 0x134290fc1d2b5fc1;

    uint512 a2, y2;
    uint512 b2, x2;
    uint64 *a2Raw = (uint64 *) &a2, *b2Raw = (uint64 *) &b2, *x2Raw = (uint64 *) &x2, *y2Raw = (uint64 *) &y2;

    a2Raw[0] = 0xaba1187e2647fd92, a2Raw[1] = 0xb553ec859cf38b88, a2Raw[2] = 0xb6c0ef0765a21ba1, a2Raw[3] = 0xbc084bda06752d7b, a2Raw[4] = 0xc9be6c93104a542f, a2Raw[5] = 0x55b9c7d34dd45796, a2Raw[6] = 0x04bfc143a7c4a272, a2Raw[7] = 0x1185452b262fad74;
    b2Raw[0] = 0x3d0e11da2d053825, b2Raw[1] = 0xc02ffec020c9c887, b2Raw[2] = 0xb355bb3ea93625ba, b2Raw[3] = 0x752430010947897d, b2Raw[4] = 0xe5d3fe27fad41e55, b2Raw[5] = 0x139b15bca9432099, b2Raw[6] = 0x4582794ecda9ffd8, b2Raw[7] = 0xdc4b2912b210cb7f;
    x2Raw[0] = 0x3b495e011506c1ee, x2Raw[1] = 0x8f3721c561bfd347, x2Raw[2] = 0x8a0bbcdb3d8096a2, x2Raw[3] = 0x8b544da107d81be8, x2Raw[4] = 0xca00485db38bfd61, x2Raw[5] = 0x6b9ec21bd6ba8496, x2Raw[6] = 0xc229ecdfef91567f, x2Raw[7] = 0x4e76c204e5cb08e5;
    y2Raw[0] = 0x71c085488e250da1, y2Raw[1] = 0x3b7169c8995b302b, y2Raw[2] = 0x5057285979c7b799, y2Raw[3] = 0x4e093e1bfd619ac8, y2Raw[4] = 0xe87e8da6ec0bc04d, y2Raw[5] = 0x39ac321d75c1f9af, y2Raw[6] = 0x1c69800ec54ffe85, y2Raw[7] = 0xf9c2712ad2e83fa4;

    uint512 a3, y3;
    uint512 b3, x3;
    uint64 *a3Raw = (uint64 *) &a3, *b3Raw = (uint64 *) &b3, *x3Raw = (uint64 *) &x3, *y3Raw = (uint64 *) &y3;

    a3Raw[0] = 0xab557aa057d1fe65, a3Raw[1] = 0x6c6a9314c1cab594, a3Raw[2] = 0xab8a09ea8143e091, a3Raw[3] = 0x5066fa674dbcfa34, a3Raw[4] = 0xb8cf757cee1452cd, a3Raw[5] = 0x0b4b68efe27adebb, a3Raw[6] = 0xd60ecec9e7ecbb3c, a3Raw[7] = 0x6606b9e9d1894df4;
    b3Raw[0] = 0xb322ac100a990752, b3Raw[1] = 0xcdd644bb9185a760, b3Raw[2] = 0xd5c90477bd8ddf4c, b3Raw[3] = 0xc223387bd2f1e31b, b3Raw[4] = 0x64bc942e0f6d5d23, b3Raw[5] = 0x075b0b6bd40086e2, b3Raw[6] = 0xacf11a2fb45c8aad, b3Raw[7] = 0x6d849101c56d2e20;
    x3Raw[0] = 0xe7325b8594ba81b9, x3Raw[1] = 0x80dc6a685c80cb82, x3Raw[2] = 0x621d9d948ac435de, x3Raw[3] = 0x0230007e921bb917, x3Raw[4] = 0xb53b1e42eeb44eaa, x3Raw[5] = 0x792740a72be99547, x3Raw[6] = 0x342e6fb1fd826582, x3Raw[7] = 0xff740d8946f6918d;
    y3Raw[0] = 0x0d78d49a31fad6eb, y3Raw[1] = 0x57b0e2765a279a32, y3Raw[2] = 0xa35d96903e1f83aa, y3Raw[3] = 0xac9eabeef9dcf13a, y3Raw[4] = 0xc2d38ec7e1d4242f, y3Raw[5] = 0x7f122d628c4d688e, y3Raw[6] = 0x370d643f834c2822, y3Raw[7] = 0x825fc184fdafc0;

    // ACT
    uint512 xc0;
    uint512 yc0;
    extendedEuclidean(a0, b0, xc0, yc0);
    uint512 xc1;
    uint512 yc1;
    extendedEuclidean(a1, b1, xc1, yc1);
    uint512 xc2;
    uint512 yc2;
    extendedEuclidean(a2, b2, xc2, yc2);
    uint512 xc3;
    uint512 yc3;
    extendedEuclidean(a3, b3, xc3, yc3);

    // ASSERT
    ASSERT_EQ(xc0, x0);
    ASSERT_EQ(yc0, y0);
    ASSERT_EQ(xc1, x1);
    ASSERT_EQ(yc1, y1);
    ASSERT_EQ(xc2, x2);
    ASSERT_EQ(yc2, y2);
    ASSERT_EQ(xc3, x3);
    ASSERT_EQ(yc3, y3);
}

TEST(BigIntegerAlgorithmTests, ExtendedEuclidean1024By512Bit) {
    // ARRANGE
    uint1024 a0, y0;
    uint512 b0, x0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *x0Raw = (uint64 *) &x0, *y0Raw = (uint64 *) &y0;

    a0Raw[0] = 0x56470c959a5ea32b, a0Raw[1] = 0x89740bc5e1ca19f8, a0Raw[2] = 0xb4609c481ce75edb, a0Raw[3] = 0xf111089f72dcd509, a0Raw[4] = 0x54a47eb80bdb16a9, a0Raw[5] = 0xc1f1140745b4d403, a0Raw[6] = 0x9b42b25a96a4a161, a0Raw[7] = 0x2b88471a07e3cccc, a0Raw[8] = 0x14839003662dfb34, a0Raw[9] = 0xe8df86ca63e092a6, a0Raw[10] = 0x3ebbee4027279c91, a0Raw[11] = 0x31471ca018605f77, a0Raw[12] = 0x78971ffb35f1195b, a0Raw[13] = 0x00732dc972adf669, a0Raw[14] = 0x21e893e7dcc4adc0, a0Raw[15] = 0x9650ec5848e2a5cb;
    b0Raw[0] = 0xabea2e86044f46f2, b0Raw[1] = 0xeda72ef421e46b88, b0Raw[2] = 0x3418c13702fb5fa2, b0Raw[3] = 0x3984926d0e064cb3, b0Raw[4] = 0xdc374c90cd27dcc8, b0Raw[5] = 0x379100c677a91918, b0Raw[6] = 0x21bdd411b2c69c6d, b0Raw[7] = 0x2763f0bf5b7ac6b8;
    x0Raw[0] = 0xbd2de8b30941af39, x0Raw[1] = 0x12fec40e3777b4bc, x0Raw[2] = 0x4b6a3444fbd23724, x0Raw[3] = 0xaf161402a4f79fbe, x0Raw[4] = 0x9885c0e071f5ccf2, x0Raw[5] = 0x8114ee1785a45227, x0Raw[6] = 0xb502dccf71e8e1e1, x0Raw[7] = 0x19c30de7e6871a7;
    y0Raw[0] = 0xb786fc747a36202f, y0Raw[1] = 0x2c1a796a46974bce, y0Raw[2] = 0x550b59b0c5b3f242, y0Raw[3] = 0xb198975ee15d88d5, y0Raw[4] = 0x307b78522d4a149a, y0Raw[5] = 0xd0a8d54746b6a53f, y0Raw[6] = 0x745520f8bce1f3d6, y0Raw[7] = 0x751fd14c223c9f47, y0Raw[8] = 0x7e6c8e51923bc89b, y0Raw[9] = 0x10d55f6c5f1116bb, y0Raw[10] = 0xb663c1cf81da4d2c, y0Raw[11] = 0x483219f56268b13d, y0Raw[12] = 0xaf64de13c2bfb1a6, y0Raw[13] = 0x507657a24cc84809, y0Raw[14] = 0xc409e372f013af07, y0Raw[15] = 0xf9db0e041bcbdbf7;

    uint1024 a1, y1;
    uint512 b1, x1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *x1Raw = (uint64 *) &x1, *y1Raw = (uint64 *) &y1;

    a1Raw[0] = 0x52dfbc92ab4edc04, a1Raw[1] = 0xfaf65ab3907b651d, a1Raw[2] = 0x56fdf0b29ad29e55, a1Raw[3] = 0xfc3bef06ff81d5d4, a1Raw[4] = 0x94cd2b1c7a1149bc, a1Raw[5] = 0xf498b568854a2449, a1Raw[6] = 0x0f3d21ca53d478f2, a1Raw[7] = 0xa62360fd06c55f62, a1Raw[8] = 0x8042f55bf2d4c14d, a1Raw[9] = 0xa8a0dff45fb7ae86, a1Raw[10] = 0xca9a14fae55d1001, a1Raw[11] = 0x4e6d70f7ce4c862a, a1Raw[12] = 0x6a684c733ce0c744, a1Raw[13] = 0xa7a8a52cf86be502, a1Raw[14] = 0x672699bfb2c9630e, a1Raw[15] = 0x828d2de52b239685;
    b1Raw[0] = 0x47cf6a1b8a13b22e, b1Raw[1] = 0x65b13f263826ad42, b1Raw[2] = 0xacf514a2250fc529, b1Raw[3] = 0x8ca95b53684e9bb5, b1Raw[4] = 0x532de69e91d516aa, b1Raw[5] = 0xc504435a03550640, b1Raw[6] = 0xe7caa17c55137480, b1Raw[7] = 0xcb157fd9317e4628;
    x1Raw[0] = 0x3593d4b5677bd28d, x1Raw[1] = 0x60e0de5612fdc718, x1Raw[2] = 0xa5d2a625fde62eb1, x1Raw[3] = 0x35cb0c7c3d0cdbad, x1Raw[4] = 0xcc145f846b908f12, x1Raw[5] = 0xf51115718c5730c2, x1Raw[6] = 0xe5aefb788e21c21d, x1Raw[7] = 0x26e6f7b75a046023;
    y1Raw[0] = 0x3935754a79db34b1, y1Raw[1] = 0x18aacc2d5de75cac, y1Raw[2] = 0x9d2acd774a34aa70, y1Raw[3] = 0x582ee32d4f510c32, y1Raw[4] = 0xfd0a1eccf6453b22, y1Raw[5] = 0xa26cd28dad265e0e, y1Raw[6] = 0x4e17e59cc51e51fb, y1Raw[7] = 0x775a0f47fbdd3849, y1Raw[8] = 0x2b096fcb4b2e5472, y1Raw[9] = 0x6fe3bb9cce1d7d9b, y1Raw[10] = 0x2ecae65c91e7d8ae, y1Raw[11] = 0x6aa3a05df87ad8d4, y1Raw[12] = 0x140055910199d95c, y1Raw[13] = 0xc1b03ca1e894d505, y1Raw[14] = 0xa1500325472d3cb9, y1Raw[15] = 0xe6fdedf08f0539e5;

    uint1024 a2, y2;
    uint512 b2, x2;
    uint64 *a2Raw = (uint64 *) &a2, *b2Raw = (uint64 *) &b2, *x2Raw = (uint64 *) &x2, *y2Raw = (uint64 *) &y2;

    a2Raw[0] = 0x7518f620cea8b923, a2Raw[1] = 0x2db4363fa4d99feb, a2Raw[2] = 0xf2d18104b569ca80, a2Raw[3] = 0xd57e2bcc6df872c0, a2Raw[4] = 0x0772610fafb6c26f, a2Raw[5] = 0x36916cc04b03104c, a2Raw[6] = 0x6e9ee933758420f7, a2Raw[7] = 0x23acc12b6396f3bc, a2Raw[8] = 0xdafee971a6dbba70, a2Raw[9] = 0x7bb9da2f905f879a, a2Raw[10] = 0x201a0fbb065d39f6, a2Raw[11] = 0xb84a0c4313d62915, a2Raw[12] = 0xbb379ef50e1b8f31, a2Raw[13] = 0xf9011f62264f713c, a2Raw[14] = 0x8fac5bcbf60280c5, a2Raw[15] = 0xf78c1fc418249b8c;
    b2Raw[0] = 0xfa7c33975bb731c3, b2Raw[1] = 0x8aff57a03c858e50, b2Raw[2] = 0x0d6b739277ff34bf, b2Raw[3] = 0xc98872e2cb66c3f2, b2Raw[4] = 0x2c9ffbf5f3577ec6, b2Raw[5] = 0x5eea50a001c901c7, b2Raw[6] = 0x22fa9466a2039899, b2Raw[7] = 0xf96840964f014031;
    x2Raw[0] = 0x1c3729a710c8c293, x2Raw[1] = 0x6f52baafc5aa3ace, x2Raw[2] = 0x83c5b1553172a1ed, x2Raw[3] = 0x75c86adf48865639, x2Raw[4] = 0xdddb161454620273, x2Raw[5] = 0xa6d6f75e6533d40e, x2Raw[6] = 0xbd4aab669d2cb69c, x2Raw[7] = 0x719343085bec10c0;
    y2Raw[0] = 0xc0e1246f1c25d2f8, y2Raw[1] = 0x3ded7f5731de47a1, y2Raw[2] = 0x7d1f112c0fe6259d, y2Raw[3] = 0x30c3654cc38dfd54, y2Raw[4] = 0x0c59f8f770ad2b8c, y2Raw[5] = 0x797fc1f3cdf86eb6, y2Raw[6] = 0xdbb9c7f3f808a2bb, y2Raw[7] = 0x968607bcf6a6d025, y2Raw[8] = 0x2969681836f28150, y2Raw[9] = 0xb19853a7b43554c7, y2Raw[10] = 0xc193d177a97550d9, y2Raw[11] = 0x60151f730f491735, y2Raw[12] = 0xe8fed179f44a811d, y2Raw[13] = 0x56218d1cea735ad6, y2Raw[14] = 0x19c48d5b4fe46f6f, y2Raw[15] = 0x8f458ec8ba0a8877;

    uint1024 a3, y3;
    uint512 b3, x3;
    uint64 *a3Raw = (uint64 *) &a3, *b3Raw = (uint64 *) &b3, *x3Raw = (uint64 *) &x3, *y3Raw = (uint64 *) &y3;

    a3Raw[0] = 0xdce2c16f44b276bf, a3Raw[1] = 0x8ab2dad573ace4e7, a3Raw[2] = 0x9be9f09aa96b1af8, a3Raw[3] = 0x33d11b9bedb8d479, a3Raw[4] = 0x73dcbaa06013807e, a3Raw[5] = 0xa29515ea9f2e679d, a3Raw[6] = 0xbbed70e9d48b8a49, a3Raw[7] = 0xf484738f586bec8e, a3Raw[8] = 0x8ba824ceb6bfd8b3, a3Raw[9] = 0x888d223e02ce445a, a3Raw[10] = 0x4b30298c943e092e, a3Raw[11] = 0x92b04d6f1c1cd5b6, a3Raw[12] = 0x6f9ace2b9a0e2ad7, a3Raw[13] = 0x8c7df1b5581a4be4, a3Raw[14] = 0xb185a59186c76a0f, a3Raw[15] = 0x16cbdd3bb2509074;
    b3Raw[0] = 0x8a5c32acd5c71c44, b3Raw[1] = 0xdf811f386d68672f, b3Raw[2] = 0x38c01f462b1a199f, b3Raw[3] = 0xfe25b43427ed599c, b3Raw[4] = 0x21668790d05ecef0, b3Raw[5] = 0x0b23a8d06f240fe2, b3Raw[6] = 0xb2ef360dd30ababd, b3Raw[7] = 0x27b52360322bd91d;
    x3Raw[0] = 0x2edd4d5e544dad13, x3Raw[1] = 0x8c1bb4502207d55f, x3Raw[2] = 0x6efa0c0d8eec7056, x3Raw[3] = 0x707c9f89cfafc43d, x3Raw[4] = 0x3ff04e0e2e5f9ebc, x3Raw[5] = 0x3c2e6ddd8056545b, x3Raw[6] = 0xf42c59d189a5764b, x3Raw[7] = 0xf9d75a3e35bf35b6;
    y3Raw[0] = 0x171916c106c365e5, y3Raw[1] = 0x077304d6b93e2b07, y3Raw[2] = 0x021f29b2492e87bf, y3Raw[3] = 0xd291a1fab28c531c, y3Raw[4] = 0xaca43d18beb2edb5, y3Raw[5] = 0x1c94ab80449fc5eb, y3Raw[6] = 0x0796467e3e8f555d, y3Raw[7] = 0x60a156cd9dc7cad3, y3Raw[8] = 0x46afd93d015090de, y3Raw[9] = 0xf5c905d836348522, y3Raw[10] = 0x25be35911e97dfe0, y3Raw[11] = 0xb1c69dffc00f47d2, y3Raw[12] = 0xf4fff0208cf1b59a, y3Raw[13] = 0xc47e5a12015ce8b1, y3Raw[14] = 0xeb6d00c74973874f, y3Raw[15] = 0x389299163c00f67;

    // ACT
    uint512 xc0;
    uint1024 yc0;
    extendedEuclidean(a0, b0, xc0, yc0);
    uint512 xc1;
    uint1024 yc1;
    extendedEuclidean(a1, b1, xc1, yc1);
    uint512 xc2;
    uint1024 yc2;
    extendedEuclidean(a2, b2, xc2, yc2);
    uint512 xc3;
    uint1024 yc3;
    extendedEuclidean(a3, b3, xc3, yc3);

    // ASSERT
    ASSERT_EQ(xc0, x0);
    ASSERT_EQ(yc0, y0);
    ASSERT_EQ(xc1, x1);
    ASSERT_EQ(yc1, y1);
    ASSERT_EQ(xc2, x2);
    ASSERT_EQ(yc2, y2);
    ASSERT_EQ(xc3, x3);
    ASSERT_EQ(yc3, y3);
}

TEST(BigIntegerAlgorithmTests, ExtendedEuclidean1024By1024Bit) {
    // ARRANGE
    uint1024 a0, y0;
    uint1024 b0, x0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *x0Raw = (uint64 *) &x0, *y0Raw = (uint64 *) &y0;

    a0Raw[0] = 0x06b18948592b3a14, a0Raw[1] = 0x5cdbc3935779cc23, a0Raw[2] = 0xfcc85a2b2b10b580, a0Raw[3] = 0x58af2f7016700082, a0Raw[4] = 0x24ba8105a6b1f527, a0Raw[5] = 0xb3cd4772a135c299, a0Raw[6] = 0xba77799aca4c2e7d, a0Raw[7] = 0xa5a954bb2eda0841, a0Raw[8] = 0xc46c6c334632f53c, a0Raw[9] = 0x87ad6b58e03948b9, a0Raw[10] = 0x6351484f0183675e, a0Raw[11] = 0x94a0902a02860533, a0Raw[12] = 0xe0773e41ce348dca, a0Raw[13] = 0xe60233c7a805fe0c, a0Raw[14] = 0x68bb4b0bcae00eb2, a0Raw[15] = 0x8c355f5eef5f3ef;
    b0Raw[0] = 0xa3bde6c74043fa82, b0Raw[1] = 0xfc824d7593c1295d, b0Raw[2] = 0xd6f92abc98364e05, b0Raw[3] = 0x2bd25448db74835b, b0Raw[4] = 0x053eae82a6d8a428, b0Raw[5] = 0xc623a8b973490d15, b0Raw[6] = 0xe01ea2e43faf0889, b0Raw[7] = 0x543baa02936ac642, b0Raw[8] = 0x2b58fd7115ddaedb, b0Raw[9] = 0xd8cad0d39c084a8d, b0Raw[10] = 0xbcb87468ac12e8ca, b0Raw[11] = 0x3b042d529665f5c0, b0Raw[12] = 0xe7c5410684979252, b0Raw[13] = 0xc207df7f78263331, b0Raw[14] = 0x4651630761dbbb0b, b0Raw[15] = 0x758142031d9c0702;
    x0Raw[0] = 0x17f20edab1ad4ca2, x0Raw[1] = 0xacd50e660af4065e, x0Raw[2] = 0xfdb64742a7d4adab, x0Raw[3] = 0xd7d0b8b08b3baab4, x0Raw[4] = 0xc9dff276523f9f82, x0Raw[5] = 0x13205c2b277097d4, x0Raw[6] = 0x459239087901d4e0, x0Raw[7] = 0xf8335d26641cdf81, x0Raw[8] = 0x4cb9d08d82489c30, x0Raw[9] = 0xec7d50f21b7adc35, x0Raw[10] = 0x9eee460df5e18e6a, x0Raw[11] = 0x347d82cd08fa2029, x0Raw[12] = 0x2ac90633c19fed63, x0Raw[13] = 0xa6fa6e0c95958918, x0Raw[14] = 0x8055a54ee6abab70, x0Raw[15] = 0x321e2ea482fa391;
    y0Raw[0] = 0x234a9707f7335e71, y0Raw[1] = 0x3d066f44d13da5ab, y0Raw[2] = 0x144be5470cd12dae, y0Raw[3] = 0xab079da39452dfa1, y0Raw[4] = 0x0e0c784a58085ffb, y0Raw[5] = 0x438b568f0522cf2e, y0Raw[6] = 0x967695ca801031ce, y0Raw[7] = 0x04c79f9b6911d4f1, y0Raw[8] = 0x3c7465d05f223b48, y0Raw[9] = 0x7bb5eb6c6d6f97ee, y0Raw[10] = 0x4d7a261ecdbf4451, y0Raw[11] = 0x6039c43cdad0acac, y0Raw[12] = 0x2cab90d17ed660fe, y0Raw[13] = 0x86f55921feee51e3, y0Raw[14] = 0x27aada87d37bed96, y0Raw[15] = 0xffc432d96ca10248;

    uint1024 a1, y1;
    uint1024 b1, x1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *x1Raw = (uint64 *) &x1, *y1Raw = (uint64 *) &y1;

    a1Raw[0] = 0x229146f899b33f2c, a1Raw[1] = 0xa09757a8687d8aca, a1Raw[2] = 0x303aa1bc503bda9c, a1Raw[3] = 0x1062ef4551ff9aae, a1Raw[4] = 0xfb92bdb7a6b496c1, a1Raw[5] = 0x02b880a7ef53c8fc, a1Raw[6] = 0xc00419ececca16dd, a1Raw[7] = 0xb14a7f02f9d30862, a1Raw[8] = 0xb9cd746dd10d7d92, a1Raw[9] = 0x31f52e41aa71d77f, a1Raw[10] = 0xacfaf63fc8fc95dc, a1Raw[11] = 0xfe5900dab9b2e7c1, a1Raw[12] = 0x08503e33a24231f1, a1Raw[13] = 0xc187c54acdd45747, a1Raw[14] = 0x5ae98433793218a3, a1Raw[15] = 0x3d0b67a186a8eae1;
    b1Raw[0] = 0xcfaa20b7f47d498d, b1Raw[1] = 0x4c32f8deceb287d4, b1Raw[2] = 0x6ed8cddf7fe74137, b1Raw[3] = 0xfe37912c72237605, b1Raw[4] = 0x07ae5844a3436ce7, b1Raw[5] = 0x7d6d42bfadb8afad, b1Raw[6] = 0x61c2f2e4644292e8, b1Raw[7] = 0x29e5c4a6ee78c495, b1Raw[8] = 0xea20d67eec60efa5, b1Raw[9] = 0x01f7e7e3db7bbaa0, b1Raw[10] = 0xc36f66d1bfd273e6, b1Raw[11] = 0x3fc1a08a5f4c0bb3, b1Raw[12] = 0xb988c7c5397e9aaa, b1Raw[13] = 0xf8bcc7f033944e5b, b1Raw[14] = 0x9750eb7119ead5a4, b1Raw[15] = 0x57671336beb9078;
    x1Raw[0] = 0x3830fa38094bce0a, x1Raw[1] = 0x49ea25780d113ca0, x1Raw[2] = 0x23bd1f6201100156, x1Raw[3] = 0x942b26365058b974, x1Raw[4] = 0x73c1718c12b02d41, x1Raw[5] = 0x40369844c595c557, x1Raw[6] = 0x4767210d60c09a02, x1Raw[7] = 0xa609338e64ca04ec, x1Raw[8] = 0xaf11f8a4f2dabb68, x1Raw[9] = 0xd558ddd1cf06b8c0, x1Raw[10] = 0x49ed0242a1e0ac24, x1Raw[11] = 0xfb2daa416b9c3db0, x1Raw[12] = 0xf72d87f9e31e7278, x1Raw[13] = 0x7a929f32722c33d4, x1Raw[14] = 0x051b38040f829054, x1Raw[15] = 0x22ce71f95a8023c;
    y1Raw[0] = 0x3d3bad2459d01cad, y1Raw[1] = 0xaf85ab97616dcc04, y1Raw[2] = 0x8ae52274543efdf4, y1Raw[3] = 0xf9952270f4e76cec, y1Raw[4] = 0x15d1377074b1b9fb, y1Raw[5] = 0x09846a28b5a32e10, y1Raw[6] = 0xc2e97cba62ec3d41, y1Raw[7] = 0xb23de1616ee9ed23, y1Raw[8] = 0x0c91462cb5464247, y1Raw[9] = 0xc98c761198859140, y1Raw[10] = 0x8512e6afc04d3733, y1Raw[11] = 0xae6149bb1c918f7d, y1Raw[12] = 0xf6a54473fce75aff, y1Raw[13] = 0xc38ce2fbc9a1eb56, y1Raw[14] = 0xbee69082dfdad4a4, y1Raw[15] = 0xe7b0af6d5ccf81a3;

    uint1024 a2, y2;
    uint1024 b2, x2;
    uint64 *a2Raw = (uint64 *) &a2, *b2Raw = (uint64 *) &b2, *x2Raw = (uint64 *) &x2, *y2Raw = (uint64 *) &y2;

    a2Raw[0] = 0x7bf82e2b1fbd688a, a2Raw[1] = 0xf56bb342122b7aa5, a2Raw[2] = 0x3ce0bc03e50ff179, a2Raw[3] = 0x8d29a461645a55ef, a2Raw[4] = 0xd1e0ce1c2d170750, a2Raw[5] = 0xd1bc842aae5de3d9, a2Raw[6] = 0x96b62a356e76d1c2, a2Raw[7] = 0x2f32ea91f26fbfb6, a2Raw[8] = 0x6b05eef32193fa0a, a2Raw[9] = 0x5b532a07a1da3826, a2Raw[10] = 0xe98956dc90fc4668, a2Raw[11] = 0xa0239c9553fcdf66, a2Raw[12] = 0x114918ad554f0b68, a2Raw[13] = 0x6923859783cc19e0, a2Raw[14] = 0x94b66247bac0723c, a2Raw[15] = 0xfc6611fb90798def;
    b2Raw[0] = 0x2dd06d2ae4b74597, b2Raw[1] = 0xed6be12ad43aea08, b2Raw[2] = 0xf9f0614d380d3c5b, b2Raw[3] = 0xbebba86522016381, b2Raw[4] = 0x501ff9167026dc12, b2Raw[5] = 0x987a6414f7615941, b2Raw[6] = 0x1d06f04699e91ff2, b2Raw[7] = 0x23869fd7ea94877c, b2Raw[8] = 0x88b8555f1997b495, b2Raw[9] = 0xc4dc88db59a0dd1b, b2Raw[10] = 0x5b7f46c016408404, b2Raw[11] = 0x90019a9e9aadb13e, b2Raw[12] = 0x556f386549f29734, b2Raw[13] = 0xa0d90fe1d70b00c6, b2Raw[14] = 0xee1f0a3e6c5b3749, b2Raw[15] = 0xadbe4fb4cfdd56ab;
    x2Raw[0] = 0xf45252e9559007ed, x2Raw[1] = 0x6dbd85dfdea83ba7, x2Raw[2] = 0x2dfbba7daa4b230e, x2Raw[3] = 0xc0b202a620446b96, x2Raw[4] = 0xf60288f643d15de6, x2Raw[5] = 0x4dc8a3938034cf52, x2Raw[6] = 0xa5d465f2f9187b63, x2Raw[7] = 0xbec9aecd881e0efd, x2Raw[8] = 0x22d09b667091cba2, x2Raw[9] = 0x432d7e7b1bea2ec0, x2Raw[10] = 0x4d1bffe7d33113fe, x2Raw[11] = 0x658b0d8614f1d990, x2Raw[12] = 0x29ff9750a6a017f5, x2Raw[13] = 0x2afc5bc758c7873a, x2Raw[14] = 0x8fa1c9d1ab6b7b67, x2Raw[15] = 0x44c9598309c636de;
    y2Raw[0] = 0xe3d69b4697b65d99, y2Raw[1] = 0x718f948248013cce, y2Raw[2] = 0xf194ce7f2c7f19ce, y2Raw[3] = 0xf33fb07f8db654b1, y2Raw[4] = 0x0382ecad44fdb8d5, y2Raw[5] = 0xcebba33f14c615e0, y2Raw[6] = 0x584e8dc92ae4ae02, y2Raw[7] = 0xa26d72082e59b1da, y2Raw[8] = 0x97454aec29d2b7eb, y2Raw[9] = 0xad3b1035570f5e57, y2Raw[10] = 0xa343610b5c5e937f, y2Raw[11] = 0x7e8b670f32163b72, y2Raw[12] = 0xe46a4455f9f7f445, y2Raw[13] = 0x703a1b30bce064e3, y2Raw[14] = 0xc801ff78c26e4d9f, y2Raw[15] = 0x9c12ba83543da72f;

    uint1024 a3, y3;
    uint1024 b3, x3;
    uint64 *a3Raw = (uint64 *) &a3, *b3Raw = (uint64 *) &b3, *x3Raw = (uint64 *) &x3, *y3Raw = (uint64 *) &y3;

    a3Raw[0] = 0xfaf70fd3ef9944b1, a3Raw[1] = 0x2f5b63bad96d23a3, a3Raw[2] = 0x059bf708d0d7061d, a3Raw[3] = 0x15bd6fd3c4f0b6aa, a3Raw[4] = 0x981db5ba39444c55, a3Raw[5] = 0xb35f87fe7c6e9e24, a3Raw[6] = 0xa4ca052bf697fd07, a3Raw[7] = 0xa240a67e47714c66, a3Raw[8] = 0x9e569546a18be483, a3Raw[9] = 0xab179a56ba7cb730, a3Raw[10] = 0xacc43aa57b2ff92a, a3Raw[11] = 0x1f364931965a86ac, a3Raw[12] = 0x58cedc50713f1355, a3Raw[13] = 0xd6aebf77d4eb931a, a3Raw[14] = 0x6fa479ee5585ce48, a3Raw[15] = 0x76128ffc1dc4a86b;
    b3Raw[0] = 0x45de85da2042ce3d, b3Raw[1] = 0xc748d059c6c14a78, b3Raw[2] = 0x1113a4dd4d7cf239, b3Raw[3] = 0xacede5aa9d1feb56, b3Raw[4] = 0xe3804e3fba897ca5, b3Raw[5] = 0x0917aab652c65de7, b3Raw[6] = 0x15e6015d4bab3a52, b3Raw[7] = 0x0af33d72ccd1f952, b3Raw[8] = 0x5c27bdab981b18da, b3Raw[9] = 0x1b52d1b642c35e1f, b3Raw[10] = 0xc6f9322a9cdc504d, b3Raw[11] = 0x43a00938b379636b, b3Raw[12] = 0x32ff1768b6f6358b, b3Raw[13] = 0x1ac0a03922c0508d, b3Raw[14] = 0x8d2aa39778d911da, b3Raw[15] = 0xed11a538e5b3e5b1;
    x3Raw[0] = 0x9ca335cb4dfb27e9, x3Raw[1] = 0x9e57ecdc5e01b4ae, x3Raw[2] = 0x1a4abf530c2029f6, x3Raw[3] = 0x7a58a5f651499857, x3Raw[4] = 0x925647db7415c61e, x3Raw[5] = 0xb8a4eea157c6401e, x3Raw[6] = 0xec63f49b0d69872d, x3Raw[7] = 0x7f8f90f9e9796e88, x3Raw[8] = 0x85495a2c191f8de9, x3Raw[9] = 0x086f1d9e03854d72, x3Raw[10] = 0x0cfe66575aed9a67, x3Raw[11] = 0x8a34084d022c0470, x3Raw[12] = 0xbacb2a1ed9cfacc5, x3Raw[13] = 0xb772d1a086258c25, x3Raw[14] = 0x42260e8ce5cd1cdf, x3Raw[15] = 0xb6a227431664d701;
    y3Raw[0] = 0x364cb02a728b7a08, y3Raw[1] = 0xceb421ed1370faba, y3Raw[2] = 0xfa16f144acecc2d8, y3Raw[3] = 0x7aca3df6838acb70, y3Raw[4] = 0xd55556adfe627f08, y3Raw[5] = 0xd620c2a8be3b1b91, y3Raw[6] = 0x0574f122bebcbb8d, y3Raw[7] = 0x64aa66dede922838, y3Raw[8] = 0x17f0220b9f1d405d, y3Raw[9] = 0xdf4f7860ccd65a37, y3Raw[10] = 0x173df3e41182875b, y3Raw[11] = 0x77ac7eb0866257c8, y3Raw[12] = 0x887661cf6446e8d0, y3Raw[13] = 0x8d7dd93f857c8239, y3Raw[14] = 0x96d88de06a978835, y3Raw[15] = 0x248a532b6a4bc9f9;

    // ACT
    uint1024 xc0;
    uint1024 yc0;
    extendedEuclidean(a0, b0, xc0, yc0);
    uint1024 xc1;
    uint1024 yc1;
    extendedEuclidean(a1, b1, xc1, yc1);
    uint1024 xc2;
    uint1024 yc2;
    extendedEuclidean(a2, b2, xc2, yc2);
    uint1024 xc3;
    uint1024 yc3;
    extendedEuclidean(a3, b3, xc3, yc3);

    // ASSERT
    ASSERT_EQ(xc0, x0);
    ASSERT_EQ(yc0, y0);
    ASSERT_EQ(xc1, x1);
    ASSERT_EQ(yc1, y1);
    ASSERT_EQ(xc2, x2);
    ASSERT_EQ(yc2, y2);
    ASSERT_EQ(xc3, x3);
    ASSERT_EQ(yc3, y3);
}

TEST(BigIntegerAlgorithmTests, ExtendedEuclidean2048By1024Bit) {
    // ARRANGE
    uint2048 a0, y0;
    uint1024 b0, x0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *x0Raw = (uint64 *) &x0, *y0Raw = (uint64 *) &y0;

    a0Raw[0] = 0x20ef0d35dc538075, a0Raw[1] = 0xbdee48b50f86c185, a0Raw[2] = 0x1ca5589da5121edd, a0Raw[3] = 0x02b09d6a51e045aa, a0Raw[4] = 0x50a49b7cfc9db540, a0Raw[5] = 0x88ca99e4da869f91, a0Raw[6] = 0xf21e9eaca0c1e585, a0Raw[7] = 0x099ec8e8a5ffd812, a0Raw[8] = 0xe3e1aee04d633cf1, a0Raw[9] = 0x7b42076dce19a6be, a0Raw[10] = 0x0b4f6bf9aa473e4c, a0Raw[11] = 0xd7676f8f5e90125d, a0Raw[12] = 0xfea85700e4449f16, a0Raw[13] = 0x628ec331b1f93e83, a0Raw[14] = 0xeb2791e94716ba59, a0Raw[15] = 0x48b89407f53ca7ae, a0Raw[16] = 0x446bbf21155b9cc7, a0Raw[17] = 0xea5c6fd92854658e, a0Raw[18] = 0xfe46b962f8f0734f, a0Raw[19] = 0xaaf81c44d196460e, a0Raw[20] = 0x50f340e765a6c39a, a0Raw[21] = 0xb0774926e48a51b1, a0Raw[22] = 0x6a88c238ef6cadb5, a0Raw[23] = 0x392b41d6912c55bf, a0Raw[24] = 0x8e7fa2f67a42bbab, a0Raw[25] = 0x4162f8a5619f8f7b, a0Raw[26] = 0x07bc86d09a3420a4, a0Raw[27] = 0x7596e7157d0eebff, a0Raw[28] = 0xc938145b44be3636, a0Raw[29] = 0x9376fa8331a8dbd6, a0Raw[30] = 0x2d70e330384425e4, a0Raw[31] = 0x38329ef4b601ad3f;
    b0Raw[0] = 0x1ace1ce4b60efe54, b0Raw[1] = 0x54f8997b06da19dd, b0Raw[2] = 0xaad0bb5043ec70e5, b0Raw[3] = 0x0e758b3211110fd0, b0Raw[4] = 0x417b6a30903bc53b, b0Raw[5] = 0x80ed29efdb9f57ff, b0Raw[6] = 0xafb368bad3dce677, b0Raw[7] = 0xb8aee045f817a6af, b0Raw[8] = 0x2a2929578daa9bc2, b0Raw[9] = 0x6d948441a03d4e50, b0Raw[10] = 0xc6fb3b2ad98b23dd, b0Raw[11] = 0xd2e1060b3761efd4, b0Raw[12] = 0xbb14fff0b6cd304f, b0Raw[13] = 0xadfb0aa21d297678, b0Raw[14] = 0x40bb57ea37d030dd, b0Raw[15] = 0x6b38648178fc8490;
    x0Raw[0] = 0xa8758e23ea45a8b1, x0Raw[1] = 0x42c85e7ccc9d5385, x0Raw[2] = 0xd53b06a013f8d87e, x0Raw[3] = 0x0cb4bc8a5ae4b925, x0Raw[4] = 0x0dac54469fbfa2f5, x0Raw[5] = 0xb61416e4c0d7c123, x0Raw[6] = 0x65abc590163a88d3, x0Raw[7] = 0xb7365f621f7d08df, x0Raw[8] = 0x0e0cb30dce9b2868, x0Raw[9] = 0x2b0670945af835da, x0Raw[10] = 0x325c995ebdf1e30f, x0Raw[11] = 0x8fc0f34780f74a3c, x0Raw[12] = 0xe064c7d704e44f2b, x0Raw[13] = 0xe3ef4f30d2a3b931, x0Raw[14] = 0xf6c5c8ad975776a6, x0Raw[15] = 0xecce0b75a960e5fe;
    y0Raw[0] = 0x7d5be4a37480cceb, y0Raw[1] = 0xd674c36391ef1e10, y0Raw[2] = 0xacd88d0f1a7880d4, y0Raw[3] = 0x580453b47e033079, y0Raw[4] = 0x262905ed914beddb, y0Raw[5] = 0x1e305fb39542f189, y0Raw[6] = 0x030c20b68943d236, y0Raw[7] = 0x43b29244a8797d90, y0Raw[8] = 0x1aaa19ce0b24e69a, y0Raw[9] = 0xae09c1d9bad6951f, y0Raw[10] = 0x54d8078c62729b5f, y0Raw[11] = 0xd10f60bdf522236f, y0Raw[12] = 0x020b622096848dbe, y0Raw[13] = 0xddef295090e59aa1, y0Raw[14] = 0x48ddddb2f9163007, y0Raw[15] = 0x25137fdb0a21e462, y0Raw[16] = 0x5e2542e4e24332ee, y0Raw[17] = 0x39b8c2ec5a9c0418, y0Raw[18] = 0x4abd04ac853b75a2, y0Raw[19] = 0x73c1c6540a9be246, y0Raw[20] = 0x55a99cc5dbc94309, y0Raw[21] = 0x9129f81c6b007f02, y0Raw[22] = 0x35c81222d6e4cc92, y0Raw[23] = 0xb1818823f6d09eef, y0Raw[24] = 0xcbb9b35be83a8856, y0Raw[25] = 0x18d13b263648fac7, y0Raw[26] = 0xdc846d0658c2f7b1, y0Raw[27] = 0xf15ea8a730ef281f, y0Raw[28] = 0xe5a69651ce104dac, y0Raw[29] = 0x682864910125796f, y0Raw[30] = 0xc5c38bf5b33d1d6d, y0Raw[31] = 0xa0f917f4c42b0b3;

    uint2048 a1, y1;
    uint1024 b1, x1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *x1Raw = (uint64 *) &x1, *y1Raw = (uint64 *) &y1;

    a1Raw[0] = 0x6e116c19772f2c17, a1Raw[1] = 0x403b23653c825935, a1Raw[2] = 0x9f5b30a23e13b806, a1Raw[3] = 0x5d078729c7ffa0d4, a1Raw[4] = 0x8cad656130cce959, a1Raw[5] = 0xfff88a4e49c8ce21, a1Raw[6] = 0x45063d132e0c5701, a1Raw[7] = 0x685d529cc0aa59f2, a1Raw[8] = 0xad1d06bde5e57ae8, a1Raw[9] = 0x32b0a8e68b4ed6da, a1Raw[10] = 0x1aae9476b50ff1ff, a1Raw[11] = 0xe23ed74ce093cb8d, a1Raw[12] = 0x72900b66911a6783, a1Raw[13] = 0x5be8a8fcc17a49d4, a1Raw[14] = 0xc4ace5c97e238bb8, a1Raw[15] = 0x4cd21883c2b90f82, a1Raw[16] = 0xa8095a4975e3c142, a1Raw[17] = 0x850c6b3b115fde97, a1Raw[18] = 0x0426820b4d39ccb4, a1Raw[19] = 0x9bf26e3e119c556c, a1Raw[20] = 0x220dbfc818122e96, a1Raw[21] = 0xc26e5e9500c4572a, a1Raw[22] = 0xa4324f27059aacb1, a1Raw[23] = 0xb749711de81af3e1, a1Raw[24] = 0x4a27785403d43bf7, a1Raw[25] = 0x53162e4fda0d37e9, a1Raw[26] = 0x796e63c81179e003, a1Raw[27] = 0x0e009fcdea699810, a1Raw[28] = 0xcc2af74c7b37f253, a1Raw[29] = 0xe6245ed7aa4eb844, a1Raw[30] = 0x4dd4dd6be7d152a7, a1Raw[31] = 0x8cb4fdfa58e40469;
    b1Raw[0] = 0xf0004b99cf7caaf8, b1Raw[1] = 0xbb463a75f4bb252a, b1Raw[2] = 0x069e0556f5300ce9, b1Raw[3] = 0x94eb7d85053e35cd, b1Raw[4] = 0x0946db439971c37c, b1Raw[5] = 0x58c9e34233b1531a, b1Raw[6] = 0xd6785614c6228550, b1Raw[7] = 0xc260bb638e83cbc5, b1Raw[8] = 0x78a029b351ad4e48, b1Raw[9] = 0x0c474c0aadfa2644, b1Raw[10] = 0x2b65dcbee79c2ff5, b1Raw[11] = 0xff4aa10c9db5bda7, b1Raw[12] = 0xfbc01e3148171891, b1Raw[13] = 0x74239bf83353a0ef, b1Raw[14] = 0x598b3911a780799a, b1Raw[15] = 0x636f29fac4ed7a75;
    x1Raw[0] = 0x118a778a74abdd77, x1Raw[1] = 0xffe1f85c6f919821, x1Raw[2] = 0xb797ca6ad813ef4a, x1Raw[3] = 0xaa21cf6995ad7a65, x1Raw[4] = 0x2cbb2a48384e8cfc, x1Raw[5] = 0xed8e9f71d6085299, x1Raw[6] = 0x147d258d4379cace, x1Raw[7] = 0x1f325d33a5549e8e, x1Raw[8] = 0xf4f8b6f73b8251cc, x1Raw[9] = 0x73f6a9baec95e1ee, x1Raw[10] = 0xd10d37d23d9c701d, x1Raw[11] = 0x976b706b36499d28, x1Raw[12] = 0xc86b6cc8fd1f4f85, x1Raw[13] = 0x79fe48fa30699c06, x1Raw[14] = 0x6729a706ef6ef243, x1Raw[15] = 0xdea1c51a9ee2557c;
    y1Raw[0] = 0x7d0c875cf9250576, y1Raw[1] = 0xa6dda7b3590aed40, y1Raw[2] = 0xfbaf00e4eecf2379, y1Raw[3] = 0x31e5d80fac6b010b, y1Raw[4] = 0xe9d49c298c888787, y1Raw[5] = 0x7dbdc8f14061e35c, y1Raw[6] = 0x0eb8d3e56ec10326, y1Raw[7] = 0x9dc2786b3b5e2b24, y1Raw[8] = 0xacd7b5e4a7b89ed1, y1Raw[9] = 0xfe50cc1bdd6c34cf, y1Raw[10] = 0xd21fcaf23687ea0d, y1Raw[11] = 0x1316f5c96ff9c7ad, y1Raw[12] = 0x2ddc18ed02761a25, y1Raw[13] = 0x84e160df06b490d0, y1Raw[14] = 0xf4ca7bd6d7c8c47f, y1Raw[15] = 0x16adc0c631cab776, y1Raw[16] = 0x26f275f2a0954e2e, y1Raw[17] = 0x7fcd21753b5a9364, y1Raw[18] = 0xa492f944ee0041a5, y1Raw[19] = 0xffc429d2345a2908, y1Raw[20] = 0xb0e78eae4d7ab2be, y1Raw[21] = 0x6d5a2f3ccba5e238, y1Raw[22] = 0x058b6f8d1ef91f5f, y1Raw[23] = 0x08d9eaa3013c0f4c, y1Raw[24] = 0x2e3bce0ff6498c7c, y1Raw[25] = 0x248b257ccff50453, y1Raw[26] = 0x8e4d267f5e2154af, y1Raw[27] = 0x6d7e9f5fc1104e41, y1Raw[28] = 0x3906fa0dd9763160, y1Raw[29] = 0x3d8ad1773e891605, y1Raw[30] = 0xab19ad00a67a29e9, y1Raw[31] = 0x2f37e7a7f92986ef;

    uint2048 a2, y2;
    uint1024 b2, x2;
    uint64 *a2Raw = (uint64 *) &a2, *b2Raw = (uint64 *) &b2, *x2Raw = (uint64 *) &x2, *y2Raw = (uint64 *) &y2;

    a2Raw[0] = 0xab00c6eb87994f5f, a2Raw[1] = 0x2e98025b3039e5bd, a2Raw[2] = 0x353a62e824ebf07d, a2Raw[3] = 0xc2b8b16adfbbcc39, a2Raw[4] = 0x3faeb86165f4bd8e, a2Raw[5] = 0x67f424b9cd2be87c, a2Raw[6] = 0x6cfbb3e9ed8b0fc9, a2Raw[7] = 0x4d9c028208953bc4, a2Raw[8] = 0xbbe3ebc4e5c14798, a2Raw[9] = 0x013c2994ef54445e, a2Raw[10] = 0x7039b891d2851034, a2Raw[11] = 0x01466e08ac93c08f, a2Raw[12] = 0x5e0304b42fbf20e4, a2Raw[13] = 0x125421b757692700, a2Raw[14] = 0xadf9604e76d98843, a2Raw[15] = 0x9f910a7d732ad304, a2Raw[16] = 0xa453bcb10bb792c7, a2Raw[17] = 0x286fc6d05c65f5ff, a2Raw[18] = 0xb6d301f534bd4b68, a2Raw[19] = 0x2bfc76b6160afb17, a2Raw[20] = 0x4d70538365b995e5, a2Raw[21] = 0x599a47c5bdf21b90, a2Raw[22] = 0x8a79428a386d3ea7, a2Raw[23] = 0x4c71d8818b192f27, a2Raw[24] = 0x1f9b90ce829fde90, a2Raw[25] = 0x2bc92b46a359c775, a2Raw[26] = 0xf4ce0c4fd04e4a0e, a2Raw[27] = 0xc25c03ace1694dbd, a2Raw[28] = 0x456b8ee1b7a088f9, a2Raw[29] = 0xfb497faa96750d18, a2Raw[30] = 0x14b0fd001afc5eaa, a2Raw[31] = 0x11a24b445e173e17;
    b2Raw[0] = 0x943031a2f962507f, b2Raw[1] = 0xd7e03811fe388ce4, b2Raw[2] = 0xd01aae1e392aff09, b2Raw[3] = 0x323ee6ec8adf8038, b2Raw[4] = 0x611c681dfa624e70, b2Raw[5] = 0xab3b02c39b32dcbb, b2Raw[6] = 0x7508f858e15b5a6d, b2Raw[7] = 0x4e5896c2a32164e8, b2Raw[8] = 0x315f4186ad74b3db, b2Raw[9] = 0xd0c20426b99e4c40, b2Raw[10] = 0x6aa681a12041e19d, b2Raw[11] = 0xe4f92e4571041b08, b2Raw[12] = 0x17e47018c47233c0, b2Raw[13] = 0xacc38bb268dd44b0, b2Raw[14] = 0xc860ef650d8932a0, b2Raw[15] = 0x7ac24bec9bee2dd0;
    x2Raw[0] = 0x7d56b948af3adf39, x2Raw[1] = 0x5a0bffa06411667e, x2Raw[2] = 0x52548e36c3f0af3f, x2Raw[3] = 0x5282fd16b77cc7a2, x2Raw[4] = 0x367a6f22160179f1, x2Raw[5] = 0x26efb244270eeb12, x2Raw[6] = 0x94874b087666211b, x2Raw[7] = 0x9e80e2af5cbe2861, x2Raw[8] = 0x55e25d25fe707881, x2Raw[9] = 0x16e9c596f3ac4e7e, x2Raw[10] = 0x2da3b8148fe11167, x2Raw[11] = 0x7548767b5740c567, x2Raw[12] = 0xd708f4c5b7d39b0e, x2Raw[13] = 0x41da162e234224f0, x2Raw[14] = 0x46446adaf2c7982e, x2Raw[15] = 0x1460d76a1f00511c;
    y2Raw[0] = 0x904dbf3d16946026, y2Raw[1] = 0xbbeaae6a6d465a79, y2Raw[2] = 0xf78499ec560fa634, y2Raw[3] = 0xe14f4d1948db9a00, y2Raw[4] = 0xe809c4c348678267, y2Raw[5] = 0xa05a823518d70dd4, y2Raw[6] = 0xd8e892f321af5557, y2Raw[7] = 0x1c5a8303ab6365dd, y2Raw[8] = 0x2c44533937597969, y2Raw[9] = 0xf099405c3cf74da7, y2Raw[10] = 0x45df33a777d7e760, y2Raw[11] = 0xe80a5925a95040ee, y2Raw[12] = 0x310e894e94de1186, y2Raw[13] = 0x87d488921138cd73, y2Raw[14] = 0x2c97151e359456b6, y2Raw[15] = 0x3ee95b9b9b0ef7df, y2Raw[16] = 0xa4bcb60da8643a61, y2Raw[17] = 0xf0fb2d32a35dd520, y2Raw[18] = 0x91ee4c9a78b9098a, y2Raw[19] = 0xcdf3c44a860946db, y2Raw[20] = 0x0010c4df06db4e60, y2Raw[21] = 0xbaf1bf8ad45bfe17, y2Raw[22] = 0x1fe5347ff0ebfa05, y2Raw[23] = 0x7c00992e3c9dcdf3, y2Raw[24] = 0xe3827759f91763d8, y2Raw[25] = 0x65fe46b23c04ad32, y2Raw[26] = 0x054355741ad930f8, y2Raw[27] = 0x1d43dcbd783b6fd3, y2Raw[28] = 0x44ab15271ced426a, y2Raw[29] = 0x0f8757409fc7539d, y2Raw[30] = 0x2f84e153e8528c99, y2Raw[31] = 0xfd129dc22539db03;

    uint2048 a3, y3;
    uint1024 b3, x3;
    uint64 *a3Raw = (uint64 *) &a3, *b3Raw = (uint64 *) &b3, *x3Raw = (uint64 *) &x3, *y3Raw = (uint64 *) &y3;

    a3Raw[0] = 0x55c1b450a4d936bb, a3Raw[1] = 0x47b4f9080ef6178e, a3Raw[2] = 0x2d37f0477579d686, a3Raw[3] = 0xf6c2f17bf8367b75, a3Raw[4] = 0x3786087fe353f8f8, a3Raw[5] = 0x070dec0206cab272, a3Raw[6] = 0x94e4570c16df84c2, a3Raw[7] = 0xe65fdc9e4a35fa29, a3Raw[8] = 0xb0230655af7087d0, a3Raw[9] = 0x6906cb8a88835f8e, a3Raw[10] = 0x6d3372e2cde5d2d2, a3Raw[11] = 0x14e6f58812dfdd97, a3Raw[12] = 0xa505d50c5365f5ee, a3Raw[13] = 0xa3d9cdffae54cedd, a3Raw[14] = 0xb2c7d9bf24975d35, a3Raw[15] = 0x9af2299333da0ae4, a3Raw[16] = 0x0f78fefe41f8f6bf, a3Raw[17] = 0x70dafb5959b0d676, a3Raw[18] = 0x672dfd7d3511ad4e, a3Raw[19] = 0xe0837f6f06a9379b, a3Raw[20] = 0xb584ec36274620c0, a3Raw[21] = 0xd21faccd7382c9f3, a3Raw[22] = 0x7774786dbb5a8ffc, a3Raw[23] = 0x2fb313b07a3cf557, a3Raw[24] = 0x9dcdc58cdb25720b, a3Raw[25] = 0xdd3b4404f9429ca4, a3Raw[26] = 0xe4343834025403c6, a3Raw[27] = 0x62c67edc6dcad05e, a3Raw[28] = 0xf9e1391017111df5, a3Raw[29] = 0x07853619560d143e, a3Raw[30] = 0x59b2e1354dcd2a04, a3Raw[31] = 0xc3df81f4e0f85970;
    b3Raw[0] = 0x9518fded723dea61, b3Raw[1] = 0x06f69e98b8363989, b3Raw[2] = 0xc0d818398c7afe66, b3Raw[3] = 0x42c33515a76e1e99, b3Raw[4] = 0xb5a81519cf22b408, b3Raw[5] = 0xe7c7a30e5e7b4292, b3Raw[6] = 0x75235f4c4618fd54, b3Raw[7] = 0x282fef9e5aa6399c, b3Raw[8] = 0x32c8beae95e84b84, b3Raw[9] = 0x13233d23078c7c30, b3Raw[10] = 0x88bd0e9b96eb5778, b3Raw[11] = 0xd478e478049d9209, b3Raw[12] = 0xa958a6cfb7a681a2, b3Raw[13] = 0x621acd56fb15ab27, b3Raw[14] = 0x0a12b6c90b8bb9fb, b3Raw[15] = 0x5e626224b8b44707;
    x3Raw[0] = 0x547deba10449c77c, x3Raw[1] = 0xff1acdcfaeee520f, x3Raw[2] = 0xed7cb7554d50e3b3, x3Raw[3] = 0x02ad80e70d5bae83, x3Raw[4] = 0x5942af56d62d3720, x3Raw[5] = 0x9b1ecaea1acc6d0f, x3Raw[6] = 0x214ee80fdcdf9018, x3Raw[7] = 0x45245386c25b6c54, x3Raw[8] = 0x516514d1566b3008, x3Raw[9] = 0x06db45e9aa834fb6, x3Raw[10] = 0x0da41979f4788c3a, x3Raw[11] = 0x52ca57f400887aee, x3Raw[12] = 0x543badb891236de4, x3Raw[13] = 0x10ca0de7a302da59, x3Raw[14] = 0x01db5bed96133458, x3Raw[15] = 0xd620e73d389ce457;
    y3Raw[0] = 0x1df0843d6777a98d, y3Raw[1] = 0x9ce5b83b185f8340, y3Raw[2] = 0x0fe616cb72cea1fe, y3Raw[3] = 0x209053d120f7d522, y3Raw[4] = 0xc8b5d92a11c4344c, y3Raw[5] = 0xbb248cbd3d31f76d, y3Raw[6] = 0xc80d537dca785d08, y3Raw[7] = 0xbdb317d788cb34f9, y3Raw[8] = 0xcee790697dbb0f1d, y3Raw[9] = 0xa252395292962553, y3Raw[10] = 0xe68c3d5d53833016, y3Raw[11] = 0xb59d767992616bf3, y3Raw[12] = 0x3f5be72d02b430ea, y3Raw[13] = 0x637360f34b45e380, y3Raw[14] = 0xcaf5b669d466c808, y3Raw[15] = 0x80144abdac934c74, y3Raw[16] = 0xfb7487196e87f478, y3Raw[17] = 0x34f352f508c273da, y3Raw[18] = 0x402e832067ad3fc3, y3Raw[19] = 0xd1602a43d394f6be, y3Raw[20] = 0x94ca4e0561e252a4, y3Raw[21] = 0x02ec778676645560, y3Raw[22] = 0x84002bba637883fe, y3Raw[23] = 0x8be81a544db2c430, y3Raw[24] = 0x6f0107afc1c809ec, y3Raw[25] = 0x365eddfb5b563e81, y3Raw[26] = 0x509169856ccfa868, y3Raw[27] = 0xa78685f45820cb25, y3Raw[28] = 0xc4253195d87ad056, y3Raw[29] = 0x37d868b1695188ff, y3Raw[30] = 0xce0c5188c1da9ecb, y3Raw[31] = 0x56e5096eb7ff72f8;

    // ACT
    uint1024 xc0;
    uint2048 yc0;
    extendedEuclidean(a0, b0, xc0, yc0);
    uint1024 xc1;
    uint2048 yc1;
    extendedEuclidean(a1, b1, xc1, yc1);
    uint1024 xc2;
    uint2048 yc2;
    extendedEuclidean(a2, b2, xc2, yc2);
    uint1024 xc3;
    uint2048 yc3;
    extendedEuclidean(a3, b3, xc3, yc3);

    // ASSERT
    ASSERT_EQ(xc0, x0);
    ASSERT_EQ(yc0, y0);
    ASSERT_EQ(xc1, x1);
    ASSERT_EQ(yc1, y1);
    ASSERT_EQ(xc2, x2);
    ASSERT_EQ(yc2, y2);
    ASSERT_EQ(xc3, x3);
    ASSERT_EQ(yc3, y3);
}

TEST(BigIntegerAlgorithmTests, ExtendedEuclidean2048By2048Bit) {
    // ARRANGE
    uint2048 a0, y0;
    uint2048 b0, x0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *x0Raw = (uint64 *) &x0, *y0Raw = (uint64 *) &y0;

    a0Raw[0] = 0x2e27f771559fdb30, a0Raw[1] = 0xe3a8f7740621fb36, a0Raw[2] = 0x3d7cc3a7d675937c, a0Raw[3] = 0x20a2806769898db4, a0Raw[4] = 0xe08bb507faf6d488, a0Raw[5] = 0xd85db56fbab666c3, a0Raw[6] = 0x93f0104075ff3fbe, a0Raw[7] = 0xab0b66c441921073, a0Raw[8] = 0x0592724ffa035a69, a0Raw[9] = 0xe27333a951a317f8, a0Raw[10] = 0xf37be6dab40a217f, a0Raw[11] = 0xe3d53f3e05a5268b, a0Raw[12] = 0xfd9d93dee69da5f6, a0Raw[13] = 0x151bb518bea3b367, a0Raw[14] = 0xe7aa2ca7f51b309c, a0Raw[15] = 0x4123667e338cd8ad, a0Raw[16] = 0xf8adfbdd53bbf565, a0Raw[17] = 0x2fae82856d3627cd, a0Raw[18] = 0x489b239afa7aef8e, a0Raw[19] = 0x0ed22add97e701e2, a0Raw[20] = 0xa17b4b3c05124d02, a0Raw[21] = 0x8da6953bb51cabff, a0Raw[22] = 0x589123cd9f0e1130, a0Raw[23] = 0xc2292a22b717d2ca, a0Raw[24] = 0xaf47d431fede92a6, a0Raw[25] = 0xb7704c9e7d21255f, a0Raw[26] = 0x248bbf84d20faf3f, a0Raw[27] = 0x46a0a261a227c999, a0Raw[28] = 0xa74efa3e44ccc201, a0Raw[29] = 0x2d446b848154afe4, a0Raw[30] = 0xa7b8b476744f743b, a0Raw[31] = 0xf4060ce90cf156a1;
    b0Raw[0] = 0x2de38c27e9500fec, b0Raw[1] = 0xf255fa621c79a55b, b0Raw[2] = 0x71387d9fbdf38d8f, b0Raw[3] = 0x5a1f346a84554aa5, b0Raw[4] = 0x955efae93f0febbe, b0Raw[5] = 0x891d51cb3652e769, b0Raw[6] = 0x70905d4774c13fa8, b0Raw[7] = 0x576ca677dcb63e8a, b0Raw[8] = 0x29bceac51648672a, b0Raw[9] = 0x13b6c8c5a7079f76, b0Raw[10] = 0x6c48d16e7b57cf5d, b0Raw[11] = 0x1e847d3f2d749055, b0Raw[12] = 0xb29820b1ea807211, b0Raw[13] = 0x3ce0ef6d7dae606f, b0Raw[14] = 0x00392dedd8e63c7f, b0Raw[15] = 0x251cc1f63fd48c2c, b0Raw[16] = 0x87d6c5fe57f3f1e5, b0Raw[17] = 0xd2c2ad5c847d11d9, b0Raw[18] = 0x8d6c5159bba631f9, b0Raw[19] = 0x50a8625c9a9c929b, b0Raw[20] = 0xcf0597ed63266d86, b0Raw[21] = 0x017647db752887b3, b0Raw[22] = 0xc5833feecfe5cf11, b0Raw[23] = 0xf2053012574cd249, b0Raw[24] = 0x80bd2e531c8f8ac5, b0Raw[25] = 0x0c0c5dbae5c5def3, b0Raw[26] = 0x3eaaf51d595885dc, b0Raw[27] = 0xcfb0fb06cea50c98, b0Raw[28] = 0x9c406b13b92d1cbb, b0Raw[29] = 0x880577c5d679b7ac, b0Raw[30] = 0xa20bed2a10a7123a, b0Raw[31] = 0x113911a897158ab8;
    x0Raw[0] = 0x5f9f581917f21edf, x0Raw[1] = 0xf7d294a19b18914f, x0Raw[2] = 0x4d6000ccadf7bfca, x0Raw[3] = 0xfb8a1a7a0792615b, x0Raw[4] = 0xaad890be14b1b364, x0Raw[5] = 0xfbe6c68c8cac32aa, x0Raw[6] = 0x564584f18de79b25, x0Raw[7] = 0x0005f7f120c22a9b, x0Raw[8] = 0xda147a1c99e7835c, x0Raw[9] = 0x3b22eda2f2e791e9, x0Raw[10] = 0x32bdb59a29918746, x0Raw[11] = 0x6e150c52c077f4b7, x0Raw[12] = 0xac6c6048e9d831b5, x0Raw[13] = 0x22195c36e4a56272, x0Raw[14] = 0xedce045ffa092506, x0Raw[15] = 0x07feac87263d1315, x0Raw[16] = 0x01312b4214581e78, x0Raw[17] = 0x7432bbd31c38e110, x0Raw[18] = 0xff7817687f7a2fb0, x0Raw[19] = 0x2ff43a677545bcfa, x0Raw[20] = 0x5771875989c38120, x0Raw[21] = 0x3a8f40b4de5b92e0, x0Raw[22] = 0x444dadf3bbaaf4ab, x0Raw[23] = 0x8d93d8522b0f47c6, x0Raw[24] = 0x6794d9bd20ed1517, x0Raw[25] = 0xf0b74e63f6b3375a, x0Raw[26] = 0x119e45cbb7e1a971, x0Raw[27] = 0x17da66f6e8c1e719, x0Raw[28] = 0xcf2a15ebaa1f9dee, x0Raw[29] = 0xe910967c29c8086f, x0Raw[30] = 0x1f5914700504a7cf, x0Raw[31] = 0xfebc13cd5218c165;
    y0Raw[0] = 0x0ac38df3587ea657, y0Raw[1] = 0xd0cb1ebd3b08b606, y0Raw[2] = 0x00abf36ac293296f, y0Raw[3] = 0x0b7dff0877e7017a, y0Raw[4] = 0x0bd43db951b555c9, y0Raw[5] = 0x366758a8d5ec7a61, y0Raw[6] = 0xe644ca5cebaeb3c6, y0Raw[7] = 0x06bf269338bbd647, y0Raw[8] = 0x643aa1828f46fb4f, y0Raw[9] = 0x9716815d3367b599, y0Raw[10] = 0xbf9eb24b0a96a714, y0Raw[11] = 0x149a368db846c33c, y0Raw[12] = 0x783c8e8819953981, y0Raw[13] = 0xc460a02ed95eb4c1, y0Raw[14] = 0x4d7630efbbd9e538, y0Raw[15] = 0xe5c3f8af1375c2c4, y0Raw[16] = 0xd3b72f68d2484131, y0Raw[17] = 0xcd6ba8ac2a95fb56, y0Raw[18] = 0x8e6ccaa968dd08a7, y0Raw[19] = 0xabacdd2823fc75e6, y0Raw[20] = 0xf29ef06f00685790, y0Raw[21] = 0xf38d49cd10f783d8, y0Raw[22] = 0x1a3a2d061f87457c, y0Raw[23] = 0xdfeb0cd25ca89d43, y0Raw[24] = 0xc27923793a13bad4, y0Raw[25] = 0xf1ef8029d77180e0, y0Raw[26] = 0x8ef6a6fb72123dbf, y0Raw[27] = 0xd32f502600542c6d, y0Raw[28] = 0xf79ff78cd8962319, y0Raw[29] = 0x9998c41930258f4f, y0Raw[30] = 0xc88464d4b1705216, y0Raw[31] = 0x11ed8271bbaf9da3;

    uint2048 a1, y1;
    uint2048 b1, x1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *x1Raw = (uint64 *) &x1, *y1Raw = (uint64 *) &y1;

    a1Raw[0] = 0x85d4461c5429b729, a1Raw[1] = 0xf10f612e83d577ce, a1Raw[2] = 0x4c418a17165c9b76, a1Raw[3] = 0xb4b213b8e96d0252, a1Raw[4] = 0x8348ae3bec90f02a, a1Raw[5] = 0x4e2277d155b8695b, a1Raw[6] = 0x72d069cdbacbd236, a1Raw[7] = 0xc142fd95f304e23e, a1Raw[8] = 0xedddaf3ee6f40a05, a1Raw[9] = 0x7f7a22467b78a584, a1Raw[10] = 0xf4e5a6594ca23bde, a1Raw[11] = 0xfa3005d9241a99ad, a1Raw[12] = 0x61b47bf8c18eedaa, a1Raw[13] = 0x57affd87a3dfd798, a1Raw[14] = 0x6b6178229806449b, a1Raw[15] = 0x0ccc11f1663a4b44, a1Raw[16] = 0x17a5a76fd0ecc5cb, a1Raw[17] = 0x940af7976272c62e, a1Raw[18] = 0x26cbccbde602c21f, a1Raw[19] = 0x56c141a06dabec2f, a1Raw[20] = 0x0cc4e99a95b3e61f, a1Raw[21] = 0xce7120f74aeb9bb2, a1Raw[22] = 0xceccc87ba8bfa0c9, a1Raw[23] = 0x8aee833886182702, a1Raw[24] = 0x220b2e630ea52729, a1Raw[25] = 0x8ffc4e796ef475f7, a1Raw[26] = 0x646c7f3861b8dab1, a1Raw[27] = 0x8822da7ed7eb1d4c, a1Raw[28] = 0x33933b7d2e0397d3, a1Raw[29] = 0x2ca0a01bfe702071, a1Raw[30] = 0xe0dfacc20f94b7da, a1Raw[31] = 0x3379dd4cb7a61777;
    b1Raw[0] = 0xd14f716914cb5bc4, b1Raw[1] = 0x14563d8ef3c856fe, b1Raw[2] = 0xc14cb09ce928d3e3, b1Raw[3] = 0x1da67eb314fa68f0, b1Raw[4] = 0xeb6a495367ff0a6b, b1Raw[5] = 0xbe82a514c2256daa, b1Raw[6] = 0xdaf4a2376adea9ca, b1Raw[7] = 0xb55360be69dec78c, b1Raw[8] = 0x285d4ddc6aaf9652, b1Raw[9] = 0x8428dab7c4e8432a, b1Raw[10] = 0x80b8a9b0bbb48f56, b1Raw[11] = 0x8bc8e94b12941fb2, b1Raw[12] = 0xcbc7fe2c5d92f8a4, b1Raw[13] = 0xfbae969bc7e322f7, b1Raw[14] = 0x696b13f8348b5dfe, b1Raw[15] = 0xe22adac383856f3a, b1Raw[16] = 0x96dee67f99331458, b1Raw[17] = 0xcce32549bda683cb, b1Raw[18] = 0x1ac2a22eb84fb4a8, b1Raw[19] = 0x4e2d3dd9b8d5a418, b1Raw[20] = 0x1fc150008cb27ec6, b1Raw[21] = 0xa43a81030095e09d, b1Raw[22] = 0x4b1276378db910ea, b1Raw[23] = 0x378851cc21a5e5cf, b1Raw[24] = 0xb89284ca7cb2b7ae, b1Raw[25] = 0x004cc33f6da91ddc, b1Raw[26] = 0x5a9127ef59b23fc8, b1Raw[27] = 0x23f7bdcaa02c3465, b1Raw[28] = 0x3c7cfe2531e7e6c3, b1Raw[29] = 0x36ef45b14d7ff98e, b1Raw[30] = 0xe8ad79747924d4cb, b1Raw[31] = 0xbcd5098a0c599764;
    x1Raw[0] = 0xcb72ac7de51c4951, x1Raw[1] = 0x3a04ac5742a5b477, x1Raw[2] = 0x054b2cc8efdfcaf9, x1Raw[3] = 0xc49d7fca205ac886, x1Raw[4] = 0xd9f95aad8b0ed692, x1Raw[5] = 0x312e5efbcd708b5b, x1Raw[6] = 0x36d789612c145fa1, x1Raw[7] = 0xba539d4df9c50c72, x1Raw[8] = 0xcafbfd42873dada8, x1Raw[9] = 0xad542f0aeaa0da7d, x1Raw[10] = 0xaa82a1f00b5dda5c, x1Raw[11] = 0xee395f36206161cc, x1Raw[12] = 0x1f1d839b28742d0c, x1Raw[13] = 0x0de7eacbc8d76f2b, x1Raw[14] = 0xdd70e8aa1bf8c2c8, x1Raw[15] = 0x7f1dc82b9babb6d5, x1Raw[16] = 0xbd077ec85532c60c, x1Raw[17] = 0x6057a94798a8394a, x1Raw[18] = 0x0e41022abf9c2769, x1Raw[19] = 0x58519113e1b9c308, x1Raw[20] = 0x631c0910ef9ed302, x1Raw[21] = 0x010a9b0978600f8e, x1Raw[22] = 0x9752e5f0d90e2328, x1Raw[23] = 0x2565252668489c37, x1Raw[24] = 0x193214ff8b29e711, x1Raw[25] = 0x0ce138ddcfbe63ee, x1Raw[26] = 0x8842232f82f02c50, x1Raw[27] = 0x912d536c518b67df, x1Raw[28] = 0x962b4ffc9a91038c, x1Raw[29] = 0x8c2d87675df4bbd9, x1Raw[30] = 0x2bc0b3f7ac81c681, x1Raw[31] = 0xe8d375fe67e1a7ca;
    y1Raw[0] = 0xab4d40ee7f9d36e2, y1Raw[1] = 0xc8881e95fa21cde7, y1Raw[2] = 0x275bafffba4cb35d, y1Raw[3] = 0x0000957f2716dfa3, y1Raw[4] = 0x6c726e3dc75bd66a, y1Raw[5] = 0x5b7c879d3675cccf, y1Raw[6] = 0x46b6452add97c463, y1Raw[7] = 0xc1de3b0093238ea4, y1Raw[8] = 0xda29258f80ab5ee4, y1Raw[9] = 0xbced592ad2895206, y1Raw[10] = 0x69793c77017d12bc, y1Raw[11] = 0x2e035369fadffabc, y1Raw[12] = 0xba4aa407293b5ebd, y1Raw[13] = 0xddf901547e32aa2a, y1Raw[14] = 0x1ed5783e99e33eeb, y1Raw[15] = 0xe29c7fe2b453d2c6, y1Raw[16] = 0x68c729df5833c768, y1Raw[17] = 0x1b69b9c3934aa260, y1Raw[18] = 0x454db8a2c049ae14, y1Raw[19] = 0x27f7ec6b6e97af8f, y1Raw[20] = 0xbb8da2b6612af6a7, y1Raw[21] = 0x4989d6ba7a364081, y1Raw[22] = 0x02f6154328adbef9, y1Raw[23] = 0x02143b30e8a53fe5, y1Raw[24] = 0x8cb85d1bbe3e3475, y1Raw[25] = 0xbcf5e30f4ef0af1b, y1Raw[26] = 0x616c1744d701185a, y1Raw[27] = 0xb0967bc366c0fac1, y1Raw[28] = 0xfed19f5cf2bd5268, y1Raw[29] = 0x1f9dd4285f7948f6, y1Raw[30] = 0x6f8a37582a3bed7b, y1Raw[31] = 0x65138de73910afd;

    uint2048 a2, y2;
    uint2048 b2, x2;
    uint64 *a2Raw = (uint64 *) &a2, *b2Raw = (uint64 *) &b2, *x2Raw = (uint64 *) &x2, *y2Raw = (uint64 *) &y2;

    a2Raw[0] = 0x865c9406bef6fa27, a2Raw[1] = 0x8bacebb4f71cf7e9, a2Raw[2] = 0xa4b8aa92df03fdcc, a2Raw[3] = 0x5200a39ae023e914, a2Raw[4] = 0x0dc65654fa066284, a2Raw[5] = 0xd0f9a8c820096cee, a2Raw[6] = 0xd3753086568d4e63, a2Raw[7] = 0x6fc422ab06456d6a, a2Raw[8] = 0x8cbc2cd87320c612, a2Raw[9] = 0xd03cd2a984c893a5, a2Raw[10] = 0x3245c80b784d6ea4, a2Raw[11] = 0x20c8ebad142f4d3a, a2Raw[12] = 0xedfa0c1ae481c935, a2Raw[13] = 0x3bb7513cceda91a4, a2Raw[14] = 0x45afa9467942fb36, a2Raw[15] = 0x44dfb909aa08114f, a2Raw[16] = 0x8bf09249c3b9a3f8, a2Raw[17] = 0x052d1295d06671eb, a2Raw[18] = 0xa46583bf2fc9cc46, a2Raw[19] = 0x70b8ffbbd531335a, a2Raw[20] = 0x5923713386e750e2, a2Raw[21] = 0x36ac5f5901b7e9c8, a2Raw[22] = 0x070f02aebee9b48c, a2Raw[23] = 0xe4e977de20bcbbfc, a2Raw[24] = 0x1ed78de88219a3cb, a2Raw[25] = 0x9be19274571d9a76, a2Raw[26] = 0xb042f36c729df2c8, a2Raw[27] = 0xcde3f6cad2801e1e, a2Raw[28] = 0x92b98bec55a51a81, a2Raw[29] = 0x3fd5edf861f0c798, a2Raw[30] = 0xbf93ad2d708cb2fd, a2Raw[31] = 0x5149c0a5ff850c92;
    b2Raw[0] = 0x19215010d1486c4c, b2Raw[1] = 0xc6d722fdff5a5d0b, b2Raw[2] = 0x0ba0c95859f860e8, b2Raw[3] = 0x7b3448d0d5e11b45, b2Raw[4] = 0xa9c3aeb14dbce6d1, b2Raw[5] = 0x9167792ea08e802d, b2Raw[6] = 0xb711c257dd9c5630, b2Raw[7] = 0x2e48f58504badfc6, b2Raw[8] = 0x7591aba388af9772, b2Raw[9] = 0xd42ebfbcdce6a4f2, b2Raw[10] = 0x0b9962da44366e6b, b2Raw[11] = 0x625f3c63af8ba915, b2Raw[12] = 0x4aa24269ecca78b8, b2Raw[13] = 0xdf4a8e67dd8d9f42, b2Raw[14] = 0xd44a4f0690bf41cd, b2Raw[15] = 0xf9817a742ef131ce, b2Raw[16] = 0x58d17a7c657eb292, b2Raw[17] = 0x4f168e9a47c9f490, b2Raw[18] = 0x4798215cc33418cf, b2Raw[19] = 0x3a029299adc657d7, b2Raw[20] = 0xa63d627ad43b526d, b2Raw[21] = 0x6d338503a05a8d83, b2Raw[22] = 0x1711c3dc480df1cd, b2Raw[23] = 0x0c78ae70d52c0ebe, b2Raw[24] = 0x78a6d4d6499c6d0f, b2Raw[25] = 0xd46c4566802564b1, b2Raw[26] = 0x293566a16046c03b, b2Raw[27] = 0x946bf19b10b646db, b2Raw[28] = 0xe60285e50700a5f0, b2Raw[29] = 0x44471499c76daa64, b2Raw[30] = 0x6ef7a801c43f1d0d, b2Raw[31] = 0xad7d4cf32ca7884e;
    x2Raw[0] = 0xa265280c75aa584b, x2Raw[1] = 0x498491bb9d0d6dc0, x2Raw[2] = 0x30f1335f484d69c8, x2Raw[3] = 0xa4aeb902d9f1781a, x2Raw[4] = 0xf8199ece2fb491a4, x2Raw[5] = 0xa9896aa7ad395fe2, x2Raw[6] = 0xa454865ab21d32db, x2Raw[7] = 0x79958260340dfa1f, x2Raw[8] = 0xb4306a811854b45f, x2Raw[9] = 0x006b243ffd1bb350, x2Raw[10] = 0xc18cae863f18d9fb, x2Raw[11] = 0xe8d1f2dbb80e7d9f, x2Raw[12] = 0xb2eeefcab64a73c2, x2Raw[13] = 0xfb3b4d2daf00463d, x2Raw[14] = 0x90a8be96b7238c61, x2Raw[15] = 0x0f9755fbeb0a4f81, x2Raw[16] = 0x69758470c740e613, x2Raw[17] = 0x55a71085d170367e, x2Raw[18] = 0x9e2fc9b1807b198c, x2Raw[19] = 0x4efe69acbd7947c8, x2Raw[20] = 0x5738c229e0f5c70b, x2Raw[21] = 0x2aca5f9c7ace5436, x2Raw[22] = 0xb5b4c65356d9b51e, x2Raw[23] = 0x3f6ef53742fb16d3, x2Raw[24] = 0xc4d4f7bba9acb28f, x2Raw[25] = 0xb53a5eb1c0a731ce, x2Raw[26] = 0x9c96e8616f8761a0, x2Raw[27] = 0x0a5c5e491d294065, x2Raw[28] = 0x8eae4f43b6f6e2be, x2Raw[29] = 0x29167148b6f5cde0, x2Raw[30] = 0x885a84b3c6bfcc89, x2Raw[31] = 0x24bb25bfd2990c85;
    y2Raw[0] = 0x5d39ecb123d1b567, y2Raw[1] = 0x584120247aee021a, y2Raw[2] = 0x7dd601af3810eb97, y2Raw[3] = 0x904a1d56a9aada0e, y2Raw[4] = 0x5bd7f7ff255403dc, y2Raw[5] = 0xb285d3afe88546b0, y2Raw[6] = 0x715f98199a3f11d8, y2Raw[7] = 0x8eeb7286da727b7a, y2Raw[8] = 0x78341f9a20a870f2, y2Raw[9] = 0x4a0ccf8659ed796c, y2Raw[10] = 0xda2184f71677b9d1, y2Raw[11] = 0x053731023ea79711, y2Raw[12] = 0xa96542fb0660e4e9, y2Raw[13] = 0x292ebb51e0cd25f9, y2Raw[14] = 0xb791606eb948cd99, y2Raw[15] = 0xc0e22ab5d3bb71f2, y2Raw[16] = 0xfaa6bc9fa1d76cdd, y2Raw[17] = 0x48c2228baa57c2db, y2Raw[18] = 0x6a06188f047eedca, y2Raw[19] = 0x34abf68e84444c5e, y2Raw[20] = 0x152b8aa6b634207e, y2Raw[21] = 0x4e2dfd353058deb2, y2Raw[22] = 0x883ecd0a389f8bbf, y2Raw[23] = 0x12acaa3718c68f1a, y2Raw[24] = 0x8276ee161a507b10, y2Raw[25] = 0x6f69e1a4a85566d8, y2Raw[26] = 0xe1a5746a3008c9b8, y2Raw[27] = 0x0aca13a314d56a8e, y2Raw[28] = 0xe9e4f8b042a41928, y2Raw[29] = 0x62ba54ab22a185f3, y2Raw[30] = 0x87624793eddb0be5, y2Raw[31] = 0xeeca2d22ff8430ef;

    uint2048 a3, y3;
    uint2048 b3, x3;
    uint64 *a3Raw = (uint64 *) &a3, *b3Raw = (uint64 *) &b3, *x3Raw = (uint64 *) &x3, *y3Raw = (uint64 *) &y3;

    a3Raw[0] = 0x08acba4d1ef91775, a3Raw[1] = 0x85906740c60bff78, a3Raw[2] = 0x2ab350becb324416, a3Raw[3] = 0x022bdf60d53f9c1d, a3Raw[4] = 0x6cee335546d67795, a3Raw[5] = 0x0b3175ee021d7ed3, a3Raw[6] = 0xb35b76b16cbbb726, a3Raw[7] = 0xfcc5c35aa9de8040, a3Raw[8] = 0xc97b5e74417263eb, a3Raw[9] = 0x8eb60352cec45be8, a3Raw[10] = 0x484dfe380a6654fa, a3Raw[11] = 0x05c93a335b1f52c5, a3Raw[12] = 0xfd11c2fa8c017816, a3Raw[13] = 0x338642bd9ba8251f, a3Raw[14] = 0x5474d1dac3964032, a3Raw[15] = 0x5a6472bed29fce43, a3Raw[16] = 0x3d71e5c324752ecd, a3Raw[17] = 0xe29337af8958df2d, a3Raw[18] = 0xc00f34089a42d6aa, a3Raw[19] = 0x9b22e92d626479ea, a3Raw[20] = 0x5e8635c78e92bab8, a3Raw[21] = 0x825cb02310d59776, a3Raw[22] = 0x08b015e636a5cf8e, a3Raw[23] = 0x7b00e798cbaf52ed, a3Raw[24] = 0xc3ab48384dbd17c5, a3Raw[25] = 0xffd3e61ac58c927d, a3Raw[26] = 0x9f8d42f6186f89f2, a3Raw[27] = 0xfae2f6747a74c4a5, a3Raw[28] = 0x01cf9ab012e8081c, a3Raw[29] = 0xda60654723d1e166, a3Raw[30] = 0xa0b3a863b368a21d, a3Raw[31] = 0xf0cd96065fabea51;
    b3Raw[0] = 0x264e3c307938b857, b3Raw[1] = 0xf117291e9a884e13, b3Raw[2] = 0x9c2e17e3c417c0af, b3Raw[3] = 0x67a1d64e87b822c8, b3Raw[4] = 0x12cbcd7b0209809d, b3Raw[5] = 0x83b8a1f1d6c81dd8, b3Raw[6] = 0x805b8344d95e284d, b3Raw[7] = 0xff0dccdb442c5dca, b3Raw[8] = 0x83d787c965673a83, b3Raw[9] = 0x7f4abae31908ab82, b3Raw[10] = 0x14d1fbb714cd66ac, b3Raw[11] = 0xec75ff50239419fe, b3Raw[12] = 0x2d9fd989338a2bd7, b3Raw[13] = 0x273bdb846304e7c6, b3Raw[14] = 0xab64239878d5b13f, b3Raw[15] = 0x345071fd3d2b4bd3, b3Raw[16] = 0x51a65cdab9b443de, b3Raw[17] = 0x3e965ac20baa4005, b3Raw[18] = 0x9671f6705aaea60a, b3Raw[19] = 0xee5fcc15600c6180, b3Raw[20] = 0xd4a3a07e478ace0a, b3Raw[21] = 0x8d410b0c03b23ac2, b3Raw[22] = 0x5febf82e64a0c361, b3Raw[23] = 0xa73db8aa34a1bd36, b3Raw[24] = 0x94993f30a3bf5e16, b3Raw[25] = 0x3fc381c705a67348, b3Raw[26] = 0x86e3ae9b36478201, b3Raw[27] = 0xf606db29e9096de1, b3Raw[28] = 0x301c4ae0ee39791a, b3Raw[29] = 0xc855ed928437592f, b3Raw[30] = 0xd11df6b5b5075ed6, b3Raw[31] = 0x4f2026f512f5b8e6;
    x3Raw[0] = 0xf674ffb4b5b4fb9c, x3Raw[1] = 0xefa178f98edccbf8, x3Raw[2] = 0x54a6e374eff0fea7, x3Raw[3] = 0xeca67b89b02f3373, x3Raw[4] = 0xa234cf42fbcbc957, x3Raw[5] = 0xdf3ae6b27d213abc, x3Raw[6] = 0xec8fe0f2a670451d, x3Raw[7] = 0xb93526cdb9a03042, x3Raw[8] = 0x84f05abc087489e7, x3Raw[9] = 0xf9d00b6d92f788f8, x3Raw[10] = 0x0ed0eda539ed6ce5, x3Raw[11] = 0x4450ebd9c5f51659, x3Raw[12] = 0x6de5995aa3f65281, x3Raw[13] = 0x9c2bdd95a874cbf2, x3Raw[14] = 0xbbc30e048b9435da, x3Raw[15] = 0xf4cde27358f2eba4, x3Raw[16] = 0x7909f247d5d8569b, x3Raw[17] = 0xd12edaee7e27813b, x3Raw[18] = 0xac284323afd18254, x3Raw[19] = 0x49310075ff142057, x3Raw[20] = 0x7ea67b680abe9baf, x3Raw[21] = 0x38a51bb277059317, x3Raw[22] = 0xe3e05475ccdcecc2, x3Raw[23] = 0xf725f430b5da985f, x3Raw[24] = 0x759ca5846a84acec, x3Raw[25] = 0x4f698ebfb97c6ca7, x3Raw[26] = 0x449e04f4c474db1a, x3Raw[27] = 0xb38d6ea8955bdbee, x3Raw[28] = 0x23440a2028eb1ac7, x3Raw[29] = 0xf5df962fe3943295, x3Raw[30] = 0x83945c2a7236b381, x3Raw[31] = 0x19607aaeac1ae0b2;
    y3Raw[0] = 0xde19148688eda2d3, y3Raw[1] = 0xb62792760c6a4502, y3Raw[2] = 0x85a0161e87c2a81d, y3Raw[3] = 0x0e06f42da94efdc5, y3Raw[4] = 0xec2a1208abab9276, y3Raw[5] = 0xdefb4dd7b86bea99, y3Raw[6] = 0x62e6431460d6d24f, y3Raw[7] = 0x80ed8f24978d86cf, y3Raw[8] = 0xd97fbd6e10cb9ba7, y3Raw[9] = 0x93dc0d122b4840d3, y3Raw[10] = 0x47de866d343f9520, y3Raw[11] = 0x7d27911b74647522, y3Raw[12] = 0x7af5ce9e701d9e7d, y3Raw[13] = 0x4fe62278899760ac, y3Raw[14] = 0x0512124653944f5c, y3Raw[15] = 0x494721950483549e, y3Raw[16] = 0x274543106b497af0, y3Raw[17] = 0x1701ce9152a60e12, y3Raw[18] = 0x4c9c81d78930dcd8, y3Raw[19] = 0x0bd283d46b1f060e, y3Raw[20] = 0x6e2e9bdc27b0af54, y3Raw[21] = 0x38a0b494a764c801, y3Raw[22] = 0x5c688236d0f44d04, y3Raw[23] = 0xaac26e38aea9dd6f, y3Raw[24] = 0x60f013f4e8247dff, y3Raw[25] = 0x0ad168a47b6700bd, y3Raw[26] = 0x78ed90ac1732a22f, y3Raw[27] = 0xe29e05ce483aabee, y3Raw[28] = 0xf553c8b566ec6ad2, y3Raw[29] = 0xf1e4d48375c059f6, y3Raw[30] = 0xec0fd757c6be495f, y3Raw[31] = 0xb2c540a69a78c161;

    // ACT
    uint2048 xc0;
    uint2048 yc0;
    extendedEuclidean(a0, b0, xc0, yc0);
    uint2048 xc1;
    uint2048 yc1;
    extendedEuclidean(a1, b1, xc1, yc1);
    uint2048 xc2;
    uint2048 yc2;
    extendedEuclidean(a2, b2, xc2, yc2);
    uint2048 xc3;
    uint2048 yc3;
    extendedEuclidean(a3, b3, xc3, yc3);

    // ASSERT
    ASSERT_EQ(xc0, x0);
    ASSERT_EQ(yc0, y0);
    ASSERT_EQ(xc1, x1);
    ASSERT_EQ(yc1, y1);
    ASSERT_EQ(xc2, x2);
    ASSERT_EQ(yc2, y2);
    ASSERT_EQ(xc3, x3);
    ASSERT_EQ(yc3, y3);
}

TEST(BigIntegerAlgorithmTests, ExtendedEuclidean4096By2048Bit) {
    // ARRANGE
    uint4096 a0, y0;
    uint2048 b0, x0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *x0Raw = (uint64 *) &x0, *y0Raw = (uint64 *) &y0;

    a0Raw[0] = 0x17234761e4681218, a0Raw[1] = 0x66727195270e12db, a0Raw[2] = 0x7a18f7a31c84b6cc, a0Raw[3] = 0x8f603f92ae7fdb32, a0Raw[4] = 0xa0494ac185e41863, a0Raw[5] = 0x4fcda42641bb3b21, a0Raw[6] = 0xc358c24424d86c73, a0Raw[7] = 0xefba8cb4b29bdb3e, a0Raw[8] = 0x140b0f4dd94b21e1, a0Raw[9] = 0xc1e56dbbae3eef2c, a0Raw[10] = 0xfcfd18e80354d5d6, a0Raw[11] = 0xbe20de2e841c065e, a0Raw[12] = 0x64e35e1ba017d2e4, a0Raw[13] = 0xb6d91a802f405e98, a0Raw[14] = 0x78ca23d7f508299f, a0Raw[15] = 0x79dc2bb3fd4f43c0, a0Raw[16] = 0x6af36ce2d0be4e78, a0Raw[17] = 0xd8c98fa70f575499, a0Raw[18] = 0x4a79c1c6931601ae, a0Raw[19] = 0x01b4bbaefbda5c2e, a0Raw[20] = 0xabc271125b0b499e, a0Raw[21] = 0x8c2ad1c40612e25f, a0Raw[22] = 0xa9b061163da8f2b5, a0Raw[23] = 0x5240b6086b842ec6, a0Raw[24] = 0x4ce94f83dcb1c983, a0Raw[25] = 0xdf609955ba177aa8, a0Raw[26] = 0xe442f71d57b3f167, a0Raw[27] = 0xc34780985546f86e, a0Raw[28] = 0x6d79e94e84125bdc, a0Raw[29] = 0xafffc709fe29e0db, a0Raw[30] = 0xc68a3c2934e8d4ec, a0Raw[31] = 0x70e365e3660d286b, a0Raw[32] = 0x8a4513986497f693, a0Raw[33] = 0xab9c45a3ad65848d, a0Raw[34] = 0xf56a4989f762ce55, a0Raw[35] = 0xd502ab2b740ad53d, a0Raw[36] = 0x19df0eab2ab80da3, a0Raw[37] = 0xfff8a4040538735d, a0Raw[38] = 0xb4d6bb0515095a92, a0Raw[39] = 0x2dd867af877625f2, a0Raw[40] = 0x94adeab34fb78a3b, a0Raw[41] = 0xb30a437990a25b64, a0Raw[42] = 0x88491c013e7c2f84, a0Raw[43] = 0xa1380071b5ca5fb4, a0Raw[44] = 0x64924fbf943d4b4e, a0Raw[45] = 0xa582cef609a904b3, a0Raw[46] = 0x0b03104b8401fc04, a0Raw[47] = 0x20654ed8ca787043, a0Raw[48] = 0x78c82f58c30dd85f, a0Raw[49] = 0xd3bae5c4dca03947, a0Raw[50] = 0x5f9f4b5e8a0f58cf, a0Raw[51] = 0xcebcf565f39d99f0, a0Raw[52] = 0x85bfc5f2191dc14c, a0Raw[53] = 0xcaf499f445977306, a0Raw[54] = 0xfa0480ce1b56ec11, a0Raw[55] = 0xabcfe3f48b1e168c, a0Raw[56] = 0x701e5c6b9f5830ae, a0Raw[57] = 0x635e36df99ea6c2b, a0Raw[58] = 0xb0bd50c5f8e72e96, a0Raw[59] = 0xbcbb555e2178b501, a0Raw[60] = 0x315edb8332090d4f, a0Raw[61] = 0x102c160be67e8b44, a0Raw[62] = 0x6c4da98f863060d6, a0Raw[63] = 0xe256185bfc97325c;
    b0Raw[0] = 0x6ec2aeceac623fed, b0Raw[1] = 0x8dcba2ddc81b8a4d, b0Raw[2] = 0xfcc87f7b9707a811, b0Raw[3] = 0xbc9cb7dc84ea6a2c, b0Raw[4] = 0x926adb3dd8875121, b0Raw[5] = 0xbc06fc975bcf8446, b0Raw[6] = 0xfef6a8e4e9f1b940, b0Raw[7] = 0x70ff96d351125c0a, b0Raw[8] = 0xfc9dde4d62523433, b0Raw[9] = 0xe6f935149a567ce4, b0Raw[10] = 0x09be51510720191c, b0Raw[11] = 0xfe7c0c298d6ed686, b0Raw[12] = 0x8be3bd143de9549b, b0Raw[13] = 0x0dad806b28836c05, b0Raw[14] = 0x729de54f58546040, b0Raw[15] = 0x81fd94ec00f5f342, b0Raw[16] = 0x91b5069e7476102e, b0Raw[17] = 0x0f96f144ace47b3a, b0Raw[18] = 0xd682c2524806811a, b0Raw[19] = 0xb676fdd1874b2bdd, b0Raw[20] = 0x7daf43645aef9f1a, b0Raw[21] = 0x6f8a8bc94e8d30b7, b0Raw[22] = 0xb1959c92abae09ca, b0Raw[23] = 0x73be3359777b6d05, b0Raw[24] = 0xdd225943aa1720b2, b0Raw[25] = 0x5693b6047178646e, b0Raw[26] = 0x48f6d91fcc3dde7d, b0Raw[27] = 0xc7515597b668da20, b0Raw[28] = 0x0187d4d22c2c4b05, b0Raw[29] = 0x3843dc3e7877fc92, b0Raw[30] = 0x56cee2a598f12317, b0Raw[31] = 0x9f6da7e3b69ea2f1;
    x0Raw[0] = 0x5fbaedc621db0b35, x0Raw[1] = 0x3f94de6527dd1399, x0Raw[2] = 0x875240681f890e0d, x0Raw[3] = 0xdb241829968eee44, x0Raw[4] = 0x5a0a1c223bd1c093, x0Raw[5] = 0x070af0eccb509745, x0Raw[6] = 0x852932a3451c06e3, x0Raw[7] = 0xe2cd9bff980698a3, x0Raw[8] = 0x1875d85b55a64ea2, x0Raw[9] = 0x524cb4c937018913, x0Raw[10] = 0x9a70e86f55ae86a8, x0Raw[11] = 0xe868ed1b2a7419d1, x0Raw[12] = 0xf198db2ca141a03c, x0Raw[13] = 0x50009b264c32c643, x0Raw[14] = 0xd5f9d39aaa6643fa, x0Raw[15] = 0x9775f98cc1568f54, x0Raw[16] = 0x9a3c06573d7781b7, x0Raw[17] = 0x83cbd5b03073befa, x0Raw[18] = 0x38baf5bb0847598e, x0Raw[19] = 0x9e42aced99c753b1, x0Raw[20] = 0x1c08b72bd9ad9409, x0Raw[21] = 0xf9fea47e1014a95d, x0Raw[22] = 0x84a6cf4a58d8f6c1, x0Raw[23] = 0x17db0b5352f0edba, x0Raw[24] = 0x144435bf623131ee, x0Raw[25] = 0x653d6415b7cdee48, x0Raw[26] = 0xd874f4555459227f, x0Raw[27] = 0x0ae5ad70b51ea92f, x0Raw[28] = 0xbb76c724e6a6ba23, x0Raw[29] = 0xd3d8d2636e9cdacb, x0Raw[30] = 0xfd8185ddd762d060, x0Raw[31] = 0xf6eaa2bc1096b3f4;
    y0Raw[0] = 0xe33f72dff604a20d, y0Raw[1] = 0xcf5a32763b81157d, y0Raw[2] = 0x7b4d57cf09ad97ca, y0Raw[3] = 0x14dcad209516b5da, y0Raw[4] = 0xf5ae53adce97b6d2, y0Raw[5] = 0x3d50f14d60306648, y0Raw[6] = 0x98a9c0af18e3d7f9, y0Raw[7] = 0x6d2219f77953d510, y0Raw[8] = 0x87f3f1c8f004bb57, y0Raw[9] = 0x01a03ff314c26cbe, y0Raw[10] = 0xbf32f866f9052db5, y0Raw[11] = 0x1763a5cb693ae775, y0Raw[12] = 0x3907547b0353a4bc, y0Raw[13] = 0x4cba4e1cbbb23afb, y0Raw[14] = 0x26ad2f95443c9b0c, y0Raw[15] = 0x95d02ac334fe4bfd, y0Raw[16] = 0x65650c01a94eecbf, y0Raw[17] = 0xa4c92e78bbc46aef, y0Raw[18] = 0xb15d42de05c39744, y0Raw[19] = 0x91e1b08f3865bac9, y0Raw[20] = 0x270bbf0d867d84b7, y0Raw[21] = 0x24448e823b6cd205, y0Raw[22] = 0x1b8bc96dcead0160, y0Raw[23] = 0x4b473f5513c985f8, y0Raw[24] = 0xa856f88dcb516ec0, y0Raw[25] = 0xa7cc0618bfc3bc92, y0Raw[26] = 0x84bdd791a28bdef2, y0Raw[27] = 0x046ae40b768e964f, y0Raw[28] = 0xb5d2f99a709bd14c, y0Raw[29] = 0x4dec5ab815974690, y0Raw[30] = 0x3c1bf99d0d512006, y0Raw[31] = 0x0017858ed7288d25, y0Raw[32] = 0x5d07c9385690a80a, y0Raw[33] = 0x918b1d08e075d35c, y0Raw[34] = 0xcefbc27dbedc80b2, y0Raw[35] = 0x4836868584b94c64, y0Raw[36] = 0x4775827aac95ec84, y0Raw[37] = 0x9a449f947c20e6f6, y0Raw[38] = 0xc5ec0d33604fb2a2, y0Raw[39] = 0x3f7026833af04a55, y0Raw[40] = 0xfee765ad0c907e94, y0Raw[41] = 0x4616dfccad518fe0, y0Raw[42] = 0x4de57a6ae37db577, y0Raw[43] = 0x5bc1427add58a777, y0Raw[44] = 0xd186d7d4ba3632dc, y0Raw[45] = 0xcc9b820dbc60c236, y0Raw[46] = 0x446975bb5caca887, y0Raw[47] = 0x04e02c76755f28f9, y0Raw[48] = 0x69aefc0c83360130, y0Raw[49] = 0x2608bc1226436c1c, y0Raw[50] = 0xd35c04a0644d8de3, y0Raw[51] = 0x068d28aacad931f7, y0Raw[52] = 0x9b12fd2f78b98028, y0Raw[53] = 0xf4e7e54181324227, y0Raw[54] = 0x061a1406f98c9c81, y0Raw[55] = 0xfd0e1c8eba14d6fb, y0Raw[56] = 0x4ff005a916a92d51, y0Raw[57] = 0xa9f2ee92ece58b26, y0Raw[58] = 0xca3c829aad0ce445, y0Raw[59] = 0xfac54564dcdab3bf, y0Raw[60] = 0xa4b9e9d077648712, y0Raw[61] = 0xaecdb76806e1a02b, y0Raw[62] = 0xb1b3f95be6bc7083, y0Raw[63] = 0xce542812c729280;

    uint4096 a1, y1;
    uint2048 b1, x1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *x1Raw = (uint64 *) &x1, *y1Raw = (uint64 *) &y1;

    a1Raw[0] = 0x5310119dbf28faed, a1Raw[1] = 0xa2ba7ccd9ea7db6d, a1Raw[2] = 0x9675b96c92653dbd, a1Raw[3] = 0x96db47a552b6ab98, a1Raw[4] = 0xc71e4ced764f7d78, a1Raw[5] = 0x80c3b4e213034000, a1Raw[6] = 0x3886834f243f1779, a1Raw[7] = 0xecbf89b42113803f, a1Raw[8] = 0xc1712b8a5556dc9d, a1Raw[9] = 0xb2fe4799d705e36c, a1Raw[10] = 0xe8143b052c76109b, a1Raw[11] = 0x794ecfeb8c79cae2, a1Raw[12] = 0x5de262d494d85b9c, a1Raw[13] = 0xbdb93cdfd9fca372, a1Raw[14] = 0xf80add93d1e3ac6a, a1Raw[15] = 0x837af4d9d8fe0b82, a1Raw[16] = 0x16677c634c305647, a1Raw[17] = 0x36c61b174791e4f8, a1Raw[18] = 0x9698d94f262dcd9a, a1Raw[19] = 0x6aed0a3cd9a68d2c, a1Raw[20] = 0x6f83ff42cb662ab9, a1Raw[21] = 0xf5a012d86d3e5957, a1Raw[22] = 0x032696fb8c4e048b, a1Raw[23] = 0x0d97a16520588bf1, a1Raw[24] = 0x671c3ea6e123d0d8, a1Raw[25] = 0x26312b0046e4f783, a1Raw[26] = 0xf0e598a0caa786be, a1Raw[27] = 0xfddea2d3f55143b2, a1Raw[28] = 0x7b6be59da37baf07, a1Raw[29] = 0x53c1461cf9322c2f, a1Raw[30] = 0x927aa474a55767aa, a1Raw[31] = 0x0b12d15b1b663cdb, a1Raw[32] = 0xa8dba12f1fc3743a, a1Raw[33] = 0x8599ed7a873fbdb6, a1Raw[34] = 0xef96a70b464fe142, a1Raw[35] = 0x8dd161044f84d6f1, a1Raw[36] = 0xe835f3006078d5f8, a1Raw[37] = 0xb8f6da85e19b9dc5, a1Raw[38] = 0x028889afbd195190, a1Raw[39] = 0xeadd2fd4a2e5388f, a1Raw[40] = 0x132ce1ccd0ea218f, a1Raw[41] = 0x0085186f46892f77, a1Raw[42] = 0xc9e4960335e2e461, a1Raw[43] = 0xc7e7f6bd026bfe35, a1Raw[44] = 0xacfd004bad821618, a1Raw[45] = 0xd7989cdca9a3478a, a1Raw[46] = 0x412aa0788e47091e, a1Raw[47] = 0x72eedec72c511b74, a1Raw[48] = 0xe9c1c2fb77b6ae03, a1Raw[49] = 0x0190d5a30dae6421, a1Raw[50] = 0xc3787426841ef338, a1Raw[51] = 0x18f16913c2928ad2, a1Raw[52] = 0xc9d979b5efc4c7bd, a1Raw[53] = 0xdd8d9bd09aeb9adf, a1Raw[54] = 0xc1aa5c896e51e206, a1Raw[55] = 0xf7df4e5b54fa71dc, a1Raw[56] = 0xe41cb14fce0fa364, a1Raw[57] = 0x25c6719cc07cdd29, a1Raw[58] = 0xd5d59d8b43b1ffbb, a1Raw[59] = 0x45009c180f19e255, a1Raw[60] = 0x12879bc4b49e98e5, a1Raw[61] = 0x6fc38abe956dee0b, a1Raw[62] = 0xcde97f4592755521, a1Raw[63] = 0x42d2c313941cc227;
    b1Raw[0] = 0x7a69033122ee2078, b1Raw[1] = 0x03e9b3718ed8048c, b1Raw[2] = 0xf1ac905cdebc1a25, b1Raw[3] = 0xace83999adbe44ed, b1Raw[4] = 0x710d29f1fe99cce2, b1Raw[5] = 0x306e010f93bec108, b1Raw[6] = 0x461dfb49037080bf, b1Raw[7] = 0xac94cb424243b464, b1Raw[8] = 0xa9f49e7c01478549, b1Raw[9] = 0x15abaa363f565a6c, b1Raw[10] = 0x69c0fd0942e899ef, b1Raw[11] = 0x0e394bdb60941ba6, b1Raw[12] = 0xb0a48f0337605cb9, b1Raw[13] = 0xd96746738af84ebb, b1Raw[14] = 0xad5fcd85cbb5eb31, b1Raw[15] = 0xc4b810d941b31217, b1Raw[16] = 0xcf025a240efc90a3, b1Raw[17] = 0xab0dd3dfa61152dd, b1Raw[18] = 0x95dfc2cf35ded841, b1Raw[19] = 0xae0405e32d404be1, b1Raw[20] = 0xfb5a7ef5cf5f12d9, b1Raw[21] = 0x466b278c78d00263, b1Raw[22] = 0xc8fba05948e335d7, b1Raw[23] = 0x0e21be4361a3df7b, b1Raw[24] = 0x4832ae253747a0c0, b1Raw[25] = 0xa08792bcd69cce3c, b1Raw[26] = 0x36bcb83e3f7652da, b1Raw[27] = 0xbe96b2424af77576, b1Raw[28] = 0xada2437a50ef66c0, b1Raw[29] = 0xe6ac14d62cb4b0b8, b1Raw[30] = 0xe196428643ebebf9, b1Raw[31] = 0x900cb1d8af2e7ff5;
    x1Raw[0] = 0xea8600a7c22bd385, x1Raw[1] = 0x22abd070cbdbdd9c, x1Raw[2] = 0xabed9cd08c81df44, x1Raw[3] = 0x393b4cce594448c4, x1Raw[4] = 0xc53483f1a5422e79, x1Raw[5] = 0xfed9555114ce0e58, x1Raw[6] = 0x2820214aa173ffa3, x1Raw[7] = 0x2e37f06f940b32ca, x1Raw[8] = 0x40ac59f218c5a490, x1Raw[9] = 0xb4f583038f75372a, x1Raw[10] = 0x17f11d659402cf4a, x1Raw[11] = 0x9538b41d0d45ec6c, x1Raw[12] = 0xf12fe692841ed6be, x1Raw[13] = 0x7aeba6a31a98190f, x1Raw[14] = 0x5158b2dd27add837, x1Raw[15] = 0x0c882e60b0db6d03, x1Raw[16] = 0x62c81271df73b03c, x1Raw[17] = 0x09277586fb86accf, x1Raw[18] = 0x973423d962861c60, x1Raw[19] = 0x6c989a719638a502, x1Raw[20] = 0x3fcb6ee269ec8c8e, x1Raw[21] = 0x28ef475b6ab059dd, x1Raw[22] = 0x23fc16aa1d05c8ca, x1Raw[23] = 0xddac6be53c63ce3f, x1Raw[24] = 0x740b8ce189a3fa50, x1Raw[25] = 0x5fd089cc1bea2ca8, x1Raw[26] = 0x96fe9b33adf94ce8, x1Raw[27] = 0x6d10bcb20c91f93c, x1Raw[28] = 0x7f0677248248b036, x1Raw[29] = 0xe4160751aee56fee, x1Raw[30] = 0xf4a4ad0edec563d5, x1Raw[31] = 0x15fbbbb72f700f85;
    y1Raw[0] = 0x634a33e6ebf892c4, y1Raw[1] = 0xab3c37b4ab314a8f, y1Raw[2] = 0x56e2bae039560575, y1Raw[3] = 0x02f94439dbf61def, y1Raw[4] = 0x2013f571d76c7447, y1Raw[5] = 0x73490d55beca6fac, y1Raw[6] = 0xd140d7a6670f3b1a, y1Raw[7] = 0x51b6050e990bbe54, y1Raw[8] = 0x7cdd8d040d81fe7b, y1Raw[9] = 0xbfb5093ac16bee40, y1Raw[10] = 0x37188aab07cfa22f, y1Raw[11] = 0x445a2e47def56dde, y1Raw[12] = 0x291482868efe0098, y1Raw[13] = 0xcde0c58a91c2335a, y1Raw[14] = 0x52ce849387de9f4e, y1Raw[15] = 0x05559f762aa7eb3c, y1Raw[16] = 0x29ee503643450684, y1Raw[17] = 0x622de2a906b6c61e, y1Raw[18] = 0xaeb54c182ed9ea08, y1Raw[19] = 0xcc6f452950e7e16d, y1Raw[20] = 0x9130fb21e5874e3e, y1Raw[21] = 0x59671feb1caa32d4, y1Raw[22] = 0x5718bac4aedd1c06, y1Raw[23] = 0x3015a5e49afbca98, y1Raw[24] = 0xef2bb1a3f8d635b9, y1Raw[25] = 0x5f22a96ca2fc9679, y1Raw[26] = 0xecf6352e39fbeba6, y1Raw[27] = 0xb26c487be307e0f2, y1Raw[28] = 0x857a17d8461ca307, y1Raw[29] = 0x5327f8a1f6340902, y1Raw[30] = 0x48c05d7e45360571, y1Raw[31] = 0x578759ddc63c818b, y1Raw[32] = 0xe1a382dc73a19caa, y1Raw[33] = 0xab5d47ae194bf283, y1Raw[34] = 0xc3fe8afb92628c5c, y1Raw[35] = 0x35a24cfa0382927a, y1Raw[36] = 0x42f902f385f1e383, y1Raw[37] = 0x10e386d766057aa6, y1Raw[38] = 0x9870e63ccc71e5f1, y1Raw[39] = 0x43e2d36b86d320a3, y1Raw[40] = 0x52de9a0b01bf903f, y1Raw[41] = 0xbbca23f5bb8dbf21, y1Raw[42] = 0x991c0fe56c813f8f, y1Raw[43] = 0xd8c3b100906b3f72, y1Raw[44] = 0x327fc130646645cc, y1Raw[45] = 0x38ede545eda34efb, y1Raw[46] = 0x8687064628edb4e7, y1Raw[47] = 0x94cf5e2d8c62510d, y1Raw[48] = 0x09853e3c8c9ccaac, y1Raw[49] = 0xf58f21f5117e8ea8, y1Raw[50] = 0xab711088fe1e6e9e, y1Raw[51] = 0x5ad5523760d165fe, y1Raw[52] = 0xa07b8bb92f098466, y1Raw[53] = 0x681355a86ba94750, y1Raw[54] = 0x552f3c0ff3de5b52, y1Raw[55] = 0x2d265dc1a6be5316, y1Raw[56] = 0x863f7da290555404, y1Raw[57] = 0xa61d46ab476fd334, y1Raw[58] = 0x94036057efad0635, y1Raw[59] = 0x57f9388cf50a4e60, y1Raw[60] = 0x5c5a4a6fb19f323e, y1Raw[61] = 0x1d54a1f971c7ef09, y1Raw[62] = 0xbef10eec6a5c43a7, y1Raw[63] = 0xf5cd588df8cbd8bc;

    uint4096 a2, y2;
    uint2048 b2, x2;
    uint64 *a2Raw = (uint64 *) &a2, *b2Raw = (uint64 *) &b2, *x2Raw = (uint64 *) &x2, *y2Raw = (uint64 *) &y2;

    a2Raw[0] = 0x1d2048ecb2388501, a2Raw[1] = 0xe54863d5f8b4bcdd, a2Raw[2] = 0xb5c09a9d19bc05a4, a2Raw[3] = 0x466ff677966cac53, a2Raw[4] = 0xeb6d795428fa7af6, a2Raw[5] = 0x214a22ef556bd803, a2Raw[6] = 0x3657bf8c61acda00, a2Raw[7] = 0x652906537bcb3813, a2Raw[8] = 0x4e6a75ca3fe7b7b8, a2Raw[9] = 0x728ea91f5829ffc7, a2Raw[10] = 0xe9b26794e0e4fd68, a2Raw[11] = 0x710fd16e09d0c954, a2Raw[12] = 0x83db4804cd71392b, a2Raw[13] = 0x16891c98b4b640a2, a2Raw[14] = 0x36e42007246d9767, a2Raw[15] = 0x30d34781e7cbde63, a2Raw[16] = 0xad1fb12c28f70267, a2Raw[17] = 0xd741394f3d827a68, a2Raw[18] = 0xb6c8fb9adcb6effc, a2Raw[19] = 0xedaafe1fe9accb99, a2Raw[20] = 0x3d6bbb6fa46e348a, a2Raw[21] = 0x36c74ba4ed3308c4, a2Raw[22] = 0xb7189bcb78359d7a, a2Raw[23] = 0x857fb75ee4ae2bf5, a2Raw[24] = 0x9bf553e182e5040d, a2Raw[25] = 0xc5f28861223f6bda, a2Raw[26] = 0xbba62a0c39dc0996, a2Raw[27] = 0xf8fb7ec5e7636d0e, a2Raw[28] = 0x807b412a3be42dfa, a2Raw[29] = 0xdf56d94d745b6de1, a2Raw[30] = 0x619fd97ef1163e04, a2Raw[31] = 0xe365124fbb081d06, a2Raw[32] = 0x8c4ecc6f979f4aba, a2Raw[33] = 0x4888f40a46bcd3eb, a2Raw[34] = 0x65782b35125c48cc, a2Raw[35] = 0x23b68b9e304f69b2, a2Raw[36] = 0x19015d41169e5740, a2Raw[37] = 0x059e1dd5b058d96f, a2Raw[38] = 0xc2b71bf4f61921b7, a2Raw[39] = 0xbed022e0fcb8f6ae, a2Raw[40] = 0xb5e36c7532009367, a2Raw[41] = 0x6b3b598a05d296e0, a2Raw[42] = 0xb89513013bf855b0, a2Raw[43] = 0x5be934f655c04723, a2Raw[44] = 0x9182516c8bb3aa42, a2Raw[45] = 0x7848d75b7fc4a4d2, a2Raw[46] = 0x915a18de4aacfd74, a2Raw[47] = 0x595dd9d01cca8882, a2Raw[48] = 0x54a851058c50b481, a2Raw[49] = 0xa531cd3d73fd288d, a2Raw[50] = 0x9e6a3638c60269c1, a2Raw[51] = 0xb6a2b2a9a0e1303a, a2Raw[52] = 0x5610883cba2eda68, a2Raw[53] = 0x1692c7a2e6728472, a2Raw[54] = 0x63b780d20384b546, a2Raw[55] = 0xdc58b3a016a60514, a2Raw[56] = 0xffb75671ad63cc34, a2Raw[57] = 0x6387045ee55a3288, a2Raw[58] = 0xea1d579336365bee, a2Raw[59] = 0x225d6fd70d6288fc, a2Raw[60] = 0x1b9258de80a69ea1, a2Raw[61] = 0x716ba35508ac0724, a2Raw[62] = 0x3bf6809ea7d07095, a2Raw[63] = 0xe2db6639bdbc0407;
    b2Raw[0] = 0x3bb40d38fb24dea7, b2Raw[1] = 0x66f64f3e5359cdb1, b2Raw[2] = 0x17da3a712f95349e, b2Raw[3] = 0x1fbbc58c77a69e3b, b2Raw[4] = 0xccc705111c60dc3b, b2Raw[5] = 0xf53c3cbdb17703f8, b2Raw[6] = 0xc4baf2884d30b0ba, b2Raw[7] = 0x649f4fda3dd60c21, b2Raw[8] = 0x36e67a11e01b423d, b2Raw[9] = 0x0bd3945eb098aa8a, b2Raw[10] = 0x701fac24266db575, b2Raw[11] = 0xe34fa9ddc1a39951, b2Raw[12] = 0x9076782bfa983a5d, b2Raw[13] = 0x6c477b35edd2438e, b2Raw[14] = 0xba77a28e80fffdab, b2Raw[15] = 0x640635270a31d10e, b2Raw[16] = 0x88f2693f3e9f315d, b2Raw[17] = 0x106422a1b1975c7e, b2Raw[18] = 0xc77f8f8044e20eeb, b2Raw[19] = 0x68cc4ff913f4e6a1, b2Raw[20] = 0x3f6c4adf93190919, b2Raw[21] = 0x9024cee6a66fd3e0, b2Raw[22] = 0x003d3bc403c5c0a9, b2Raw[23] = 0x5705f8f8c59caab4, b2Raw[24] = 0x145d52a3f1c387da, b2Raw[25] = 0x8a144b31c9229db7, b2Raw[26] = 0x06bd7644b6fe4dd7, b2Raw[27] = 0x2994429ba9535647, b2Raw[28] = 0x7a7b5c451a23ffcf, b2Raw[29] = 0x804df7c1bb3a0dd8, b2Raw[30] = 0x325d13ad101f9736, b2Raw[31] = 0x7a8a978e8a2c1410;
    x2Raw[0] = 0xcd49d295878a9dc4, x2Raw[1] = 0x3d5b1b9e3638a816, x2Raw[2] = 0x2551ef7835900a80, x2Raw[3] = 0x638fa58cc6cc83e0, x2Raw[4] = 0xa1fca45263b8f7ed, x2Raw[5] = 0x566b972657ddd133, x2Raw[6] = 0xbb2a967ff664fb18, x2Raw[7] = 0x9b9ff71d5f28d710, x2Raw[8] = 0xffd6c89d595d8594, x2Raw[9] = 0xc3d5e62b65f26bc7, x2Raw[10] = 0x4a78a6915e1bf16c, x2Raw[11] = 0x56e34485bcb628ff, x2Raw[12] = 0x3ca747804836c407, x2Raw[13] = 0x8dcf01ccdb8a3542, x2Raw[14] = 0xe2ef1ed8d15fc006, x2Raw[15] = 0xb1ba15dc5dbcb7e5, x2Raw[16] = 0xfce1c7160dfb2709, x2Raw[17] = 0x8cec14164f71768a, x2Raw[18] = 0x3175f1f5786044a5, x2Raw[19] = 0xa33470aca8a9e369, x2Raw[20] = 0xcc9955da5fff9f30, x2Raw[21] = 0xa0b7db07937d5602, x2Raw[22] = 0x5585f491676f75ba, x2Raw[23] = 0xf5ce45fed44d224b, x2Raw[24] = 0xee31e2e32bdbf735, x2Raw[25] = 0xa2e081c21e565482, x2Raw[26] = 0x9e59189ed088870f, x2Raw[27] = 0x2f15be61a03ebb6e, x2Raw[28] = 0x86cd7f5fab475359, x2Raw[29] = 0xcb06a44ed2b7be8e, x2Raw[30] = 0x75b1dbc698c4adc4, x2Raw[31] = 0xe605d2d439845fde;
    y2Raw[0] = 0x743df5e9a4824c7b, y2Raw[1] = 0x354bdcb12435c2d3, y2Raw[2] = 0x6a2eaaa06cca3bda, y2Raw[3] = 0x7ff7d01a6bdb7569, y2Raw[4] = 0x38ff18db965c7680, y2Raw[5] = 0x619be50b75d91efc, y2Raw[6] = 0xa37fdff4f3a497ae, y2Raw[7] = 0xeed3ec4a4108cf6e, y2Raw[8] = 0x5536744fd3b140b1, y2Raw[9] = 0x7197720c17b84590, y2Raw[10] = 0x67e73e96095cc044, y2Raw[11] = 0x1247baf27c978580, y2Raw[12] = 0xbe69e9b428d02aaf, y2Raw[13] = 0x1396d5563a830756, y2Raw[14] = 0x22a0f805f60ad6bd, y2Raw[15] = 0x6ab192c32e645961, y2Raw[16] = 0x532c34524f328c92, y2Raw[17] = 0x94cbbf4b70db8f4f, y2Raw[18] = 0xe0dc68980140c03f, y2Raw[19] = 0xab7bb4e58522bdb1, y2Raw[20] = 0x2a636a57df61321f, y2Raw[21] = 0x5b87d04c24185793, y2Raw[22] = 0x5adf1de369d0fb13, y2Raw[23] = 0xc3b64f3ec7c34468, y2Raw[24] = 0x222fc00e7411f1b8, y2Raw[25] = 0xfaad6c2cc2df5e18, y2Raw[26] = 0x39e50656cb7f7009, y2Raw[27] = 0x58f487832eadb985, y2Raw[28] = 0xa6c0eba6330208fc, y2Raw[29] = 0xb8b76a501ea4bd90, y2Raw[30] = 0x7c4a51f00463f372, y2Raw[31] = 0x6b9223c4b7c1f643, y2Raw[32] = 0x2c36947fece03e1e, y2Raw[33] = 0xff26195cc04170ba, y2Raw[34] = 0xb6ad12d7917dfb08, y2Raw[35] = 0x94f09f28240451ab, y2Raw[36] = 0x57b71252837b6886, y2Raw[37] = 0x0cdb761d51af9274, y2Raw[38] = 0x9ee5e136d2e39c6d, y2Raw[39] = 0x1847829ce27d8a02, y2Raw[40] = 0x66fc5517b4df169c, y2Raw[41] = 0x465eb355abd3ab43, y2Raw[42] = 0xcd5108538e3f8be7, y2Raw[43] = 0xdbd0f357815ee0e0, y2Raw[44] = 0x8208424fc2cfb215, y2Raw[45] = 0x5362d4b86a0c65cb, y2Raw[46] = 0x3dcbbcbd9058483e, y2Raw[47] = 0xbd963be75f45eca6, y2Raw[48] = 0x33c59ba1ae845c1b, y2Raw[49] = 0xe774545ee0adcc74, y2Raw[50] = 0x41e86cd77237d00c, y2Raw[51] = 0x5689f655b98bc724, y2Raw[52] = 0xe63cbf5cc645d3cf, y2Raw[53] = 0x977a6b412e2eeed5, y2Raw[54] = 0x170361343eed47b7, y2Raw[55] = 0xa50af70ec298b784, y2Raw[56] = 0x690b980cc7a4e800, y2Raw[57] = 0x42687d8c0c95de01, y2Raw[58] = 0xe51f2828e6ddf3e0, y2Raw[59] = 0xf052d83c360dd5df, y2Raw[60] = 0x7be1f20b0dbff01a, y2Raw[61] = 0x11857a3a50902ce0, y2Raw[62] = 0xcd7f668a83f50c42, y2Raw[63] = 0x301743afed2000ff;

    uint4096 a3, y3;
    uint2048 b3, x3;
    uint64 *a3Raw = (uint64 *) &a3, *b3Raw = (uint64 *) &b3, *x3Raw = (uint64 *) &x3, *y3Raw = (uint64 *) &y3;

    a3Raw[0] = 0x89b52663f1e04706, a3Raw[1] = 0x656d101779865fbb, a3Raw[2] = 0xb105f768f0e43b05, a3Raw[3] = 0x19903c98f32af829, a3Raw[4] = 0xda522a520438b683, a3Raw[5] = 0x903d196f87f96378, a3Raw[6] = 0x9f01c190ffd42b2a, a3Raw[7] = 0x10cf454e47096664, a3Raw[8] = 0x0569f7f29428ed46, a3Raw[9] = 0x04db25cfe4a233ba, a3Raw[10] = 0xb27fcda69a5bfafd, a3Raw[11] = 0xd177df48e8597983, a3Raw[12] = 0x8a3017a8cb81a073, a3Raw[13] = 0x879b6890b0707aad, a3Raw[14] = 0x148e2f49fdfa68ec, a3Raw[15] = 0xa04fdba381cb2fee, a3Raw[16] = 0x506f39c9ef20d71e, a3Raw[17] = 0x81ce3c15de61dbf3, a3Raw[18] = 0xd405861883020e18, a3Raw[19] = 0xc8b19a06727834ae, a3Raw[20] = 0x4b9d2fbee34ea075, a3Raw[21] = 0xa7cb0b09198d9862, a3Raw[22] = 0x57d94004841b38ef, a3Raw[23] = 0x80d5c53e36d4c1a4, a3Raw[24] = 0x04799af8cd406e20, a3Raw[25] = 0x357e872eadcafef3, a3Raw[26] = 0xabdc33e8bba33a13, a3Raw[27] = 0x0c3dadc0b2858356, a3Raw[28] = 0x68389afa91540078, a3Raw[29] = 0x2a722ca97cb2d135, a3Raw[30] = 0x4b5606826c0e94d9, a3Raw[31] = 0xb96bc1bb49ae831f, a3Raw[32] = 0x49ad72e339ef7503, a3Raw[33] = 0xaf3f493b64064a19, a3Raw[34] = 0x8a7b0904ca79f91a, a3Raw[35] = 0x91a53fb60678d263, a3Raw[36] = 0x25ded30f43d8d9d5, a3Raw[37] = 0xc85973a387eac569, a3Raw[38] = 0xb24c533b55a9816e, a3Raw[39] = 0x66cbeda6f77d012c, a3Raw[40] = 0x00e80b9c1134dea9, a3Raw[41] = 0x46c063ad6d5384e8, a3Raw[42] = 0x971e4bbe5643aca3, a3Raw[43] = 0xeff48dcdf9afcbf1, a3Raw[44] = 0x36a6dcd0d235645a, a3Raw[45] = 0xe6f9af2cc3ec08a2, a3Raw[46] = 0x66f457930a0757d6, a3Raw[47] = 0xda00abb88acb180c, a3Raw[48] = 0x7b292557902614bf, a3Raw[49] = 0x085f77007f9ee76a, a3Raw[50] = 0xf739c94adcead412, a3Raw[51] = 0x2c9db47a6ac2e570, a3Raw[52] = 0x747d586434f7bb51, a3Raw[53] = 0x0de0733323410fe4, a3Raw[54] = 0xfeb802e24d5688c1, a3Raw[55] = 0xf6514a8f5a95c531, a3Raw[56] = 0xb38fe4141d1c6036, a3Raw[57] = 0x588cc47a1dc1ff81, a3Raw[58] = 0xdcda23d9426fb5cb, a3Raw[59] = 0x5b02e3d543727477, a3Raw[60] = 0xa6b1c6afe2ec3f43, a3Raw[61] = 0xf8a47e2cd07e7c1c, a3Raw[62] = 0x469882ad797ff69a, a3Raw[63] = 0x2cd2d5485a2f51d7;
    b3Raw[0] = 0x5e86a8fa5029c6c8, b3Raw[1] = 0x73df7985fc737db6, b3Raw[2] = 0x2c678f14590ef313, b3Raw[3] = 0xcb078d3203eb7447, b3Raw[4] = 0x98e5f8554e7dbde9, b3Raw[5] = 0xb2de1c84e141e8e1, b3Raw[6] = 0x3d7b7d4a4468dab4, b3Raw[7] = 0x972f2fcf9f82468a, b3Raw[8] = 0x9a8cba3d924c075b, b3Raw[9] = 0x762c9015547260be, b3Raw[10] = 0xf887960b7f976395, b3Raw[11] = 0x61ef685892f7ea37, b3Raw[12] = 0x72a700c69c033bd3, b3Raw[13] = 0x83eb8176b7feea9f, b3Raw[14] = 0x9994b247ccd75339, b3Raw[15] = 0x6dc2a54d167ede84, b3Raw[16] = 0x18e9aa39471e8ff9, b3Raw[17] = 0x70f67a68bc4f4447, b3Raw[18] = 0x469a860104907238, b3Raw[19] = 0xf1794174c299aa7e, b3Raw[20] = 0x5cb66c4d99d6e076, b3Raw[21] = 0x93b90579086f4fcd, b3Raw[22] = 0x87631ce935cedc35, b3Raw[23] = 0xbf22455918f84367, b3Raw[24] = 0x50a49566809aad5a, b3Raw[25] = 0x4fa9a4a8c3d222e8, b3Raw[26] = 0x2e5f11a290c921db, b3Raw[27] = 0xdab395352346552b, b3Raw[28] = 0xad927a2fc4be5967, b3Raw[29] = 0x222a9a37ba603272, b3Raw[30] = 0xf72089e654ebda0e, b3Raw[31] = 0x99cac4626612673;
    x3Raw[0] = 0x5c40a6e49db99c07, x3Raw[1] = 0x49f376a86e9bc592, x3Raw[2] = 0x1a589188fb1e5a84, x3Raw[3] = 0x3e1b9a2a47e00a73, x3Raw[4] = 0x668ee07a81122655, x3Raw[5] = 0x8d2d42aa269bb168, x3Raw[6] = 0xc1908b8a76980e88, x3Raw[7] = 0xfd3efd4be4788f2d, x3Raw[8] = 0x6a0eec48668bd18d, x3Raw[9] = 0x3cac10242acb8c59, x3Raw[10] = 0x2b9819022e9b9dab, x3Raw[11] = 0x2e594bed48b839b2, x3Raw[12] = 0x429207056dba95dd, x3Raw[13] = 0x2fd02f19c72dbce3, x3Raw[14] = 0xab489e994f478218, x3Raw[15] = 0x6a0b88f473da8dd8, x3Raw[16] = 0x0639e3f0acc7274a, x3Raw[17] = 0x60e3e6f36dba2c25, x3Raw[18] = 0x2e7fcf44d20d67c9, x3Raw[19] = 0x15cd5f7185b70e1e, x3Raw[20] = 0x0e484f3c4ea78e33, x3Raw[21] = 0x4dfbf4f8badc5971, x3Raw[22] = 0x98191da8f9dbf15a, x3Raw[23] = 0x0a4e58d69562246b, x3Raw[24] = 0x3baec2e4a197f4b5, x3Raw[25] = 0x2113fbcb66070a48, x3Raw[26] = 0xcf7bd13529d1c3e5, x3Raw[27] = 0x3e04d9874d6278bf, x3Raw[28] = 0x4e201fdf905e273d, x3Raw[29] = 0x8962cb681bf207c6, x3Raw[30] = 0xf79e9f5b2e810673, x3Raw[31] = 0x14146705ccfd98f;
    y3Raw[0] = 0x46dcdbe9d8fc82d3, y3Raw[1] = 0x751437d9cb7d3819, y3Raw[2] = 0xa6a839ae537e6082, y3Raw[3] = 0x60e9b2c73df80ec8, y3Raw[4] = 0x9f7f5f0f79218fda, y3Raw[5] = 0x3ea7826560179f87, y3Raw[6] = 0xb07d1e7147be6a79, y3Raw[7] = 0x2ed66d310084a8a3, y3Raw[8] = 0xa334c14c6b22a35a, y3Raw[9] = 0xcca631d2f221898f, y3Raw[10] = 0x50419e89c65a17db, y3Raw[11] = 0xa15be0b1210e358e, y3Raw[12] = 0x39ac452d00fdc164, y3Raw[13] = 0xc4462be8b9f9f596, y3Raw[14] = 0xbfa970921c3fd4f2, y3Raw[15] = 0x0cde5ccef4138d8e, y3Raw[16] = 0x39a39414bf4a047c, y3Raw[17] = 0xee8751ac3ec2bc16, y3Raw[18] = 0x38f3bd83e4587d21, y3Raw[19] = 0x728b1f0f3b72faf4, y3Raw[20] = 0x87e750a94d81054e, y3Raw[21] = 0xfde5f8002dc512d0, y3Raw[22] = 0xfc40c59c9d813877, y3Raw[23] = 0xf4fa4362bf597977, y3Raw[24] = 0xd61ee4e4ae2a35b7, y3Raw[25] = 0x7dcd4171580a6f3b, y3Raw[26] = 0x6a01cfe69370b7f6, y3Raw[27] = 0x8a4c9a2a97c8330a, y3Raw[28] = 0x5795f0759e1f4c7b, y3Raw[29] = 0xc0e3efadd6abd55d, y3Raw[30] = 0xdb15e9aa4efd63b8, y3Raw[31] = 0xc0587caa957bffed, y3Raw[32] = 0xbedc945add60fe3d, y3Raw[33] = 0x2af122022f3ebbb2, y3Raw[34] = 0x96f871d89962b8dc, y3Raw[35] = 0xe98b8d8d52e41939, y3Raw[36] = 0xe2ad258f2ab23e15, y3Raw[37] = 0xb6aaecf9c95dc52c, y3Raw[38] = 0x5558efeb66461f2c, y3Raw[39] = 0xb08b0d14e018815b, y3Raw[40] = 0x594db966456bcfb9, y3Raw[41] = 0x7de4d4ae7ac1f53f, y3Raw[42] = 0x1ca6e972c8767e5b, y3Raw[43] = 0xcfb95bdc47f93e12, y3Raw[44] = 0x7d1edea6d2b8d756, y3Raw[45] = 0xb15dfe4cf1f0d341, y3Raw[46] = 0xea9eb68d5014c76a, y3Raw[47] = 0x122ea36b20a92cb4, y3Raw[48] = 0x731b4b38f8ad0813, y3Raw[49] = 0x9952dbbb476410e0, y3Raw[50] = 0x19cd06e483589334, y3Raw[51] = 0xfa194ab671f9884f, y3Raw[52] = 0xd05f6c1ba974dffb, y3Raw[53] = 0x37ff29dfccde81c7, y3Raw[54] = 0x17cbacf5c0dee216, y3Raw[55] = 0xce132fbc9043e591, y3Raw[56] = 0x14d0d6fa4100408a, y3Raw[57] = 0x18c7a37847c634d5, y3Raw[58] = 0x211bcea5e47be7d0, y3Raw[59] = 0xbf1545e352943b0d, y3Raw[60] = 0x62fb31f4bbab5e93, y3Raw[61] = 0x09176da18e8dcb7b, y3Raw[62] = 0x740eb3a2cb5775a0, y3Raw[63] = 0xfa25ccf35608d66a;

    // ACT
    uint2048 xc0;
    uint4096 yc0;
    extendedEuclidean(a0, b0, xc0, yc0);
    uint2048 xc1;
    uint4096 yc1;
    extendedEuclidean(a1, b1, xc1, yc1);
    uint2048 xc2;
    uint4096 yc2;
    extendedEuclidean(a2, b2, xc2, yc2);
    uint2048 xc3;
    uint4096 yc3;
    extendedEuclidean(a3, b3, xc3, yc3);

    // ASSERT
    ASSERT_EQ(xc0, x0);
    ASSERT_EQ(yc0, y0);
    ASSERT_EQ(xc1, x1);
    ASSERT_EQ(yc1, y1);
    ASSERT_EQ(xc2, x2);
    ASSERT_EQ(yc2, y2);
    ASSERT_EQ(xc3, x3);
    ASSERT_EQ(yc3, y3);
}

TEST(BigIntegerAlgorithmTests, ExtendedEuclidean4096By4096Bit) {
    // ARRANGE
    uint4096 a0, y0;
    uint4096 b0, x0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *x0Raw = (uint64 *) &x0, *y0Raw = (uint64 *) &y0;

    a0Raw[0] = 0x4755cae07dba04fa, a0Raw[1] = 0xb63247d8fd9a1914, a0Raw[2] = 0xa47e72aa4fb1531b, a0Raw[3] = 0xdb23b2609aace685, a0Raw[4] = 0xac569d5f609c8775, a0Raw[5] = 0xaaf7e711a4c6ba4b, a0Raw[6] = 0xdabe22f7de9e99b2, a0Raw[7] = 0x57306475fe6618ee, a0Raw[8] = 0xc23fb73ee53f67e6, a0Raw[9] = 0x83f9205fe0298495, a0Raw[10] = 0x6f76061199251457, a0Raw[11] = 0x5571e494a37d5c08, a0Raw[12] = 0x645c853f83f8a3b3, a0Raw[13] = 0x22bb0358bdda1c10, a0Raw[14] = 0x6c3bc95d2074a6ea, a0Raw[15] = 0xbcab6bb8845f7fb6, a0Raw[16] = 0xe76aa2c0fc6bab67, a0Raw[17] = 0x10ce0f6417a07bba, a0Raw[18] = 0x1cf4d2af4446859a, a0Raw[19] = 0x7dafea9cf09267e7, a0Raw[20] = 0x5cf7276a91a7dd79, a0Raw[21] = 0x057314d34ad58a29, a0Raw[22] = 0xe9a08021ac23202a, a0Raw[23] = 0xf32531945f3fb662, a0Raw[24] = 0x5455d62769874b72, a0Raw[25] = 0x51951ed61ec79993, a0Raw[26] = 0x8323597df1892167, a0Raw[27] = 0xfda4a8fc12dfe241, a0Raw[28] = 0xb857d947f8b68318, a0Raw[29] = 0x1d3c28232a69c7c3, a0Raw[30] = 0xab120617db35b1ab, a0Raw[31] = 0xeadb366e4a2c2dd2, a0Raw[32] = 0x7c5c3604a0163ae6, a0Raw[33] = 0x8b23c88d014b8000, a0Raw[34] = 0x2d1384982fe2d57c, a0Raw[35] = 0x47b8664d3b191d0f, a0Raw[36] = 0x2033ba6b34206e55, a0Raw[37] = 0x709c44157475b5ac, a0Raw[38] = 0x0574c69545d84ecf, a0Raw[39] = 0xdd62902a3852c0c5, a0Raw[40] = 0x2e8e2728e840f855, a0Raw[41] = 0x61422b3b800e4b3f, a0Raw[42] = 0x07f743d877cb1135, a0Raw[43] = 0x28fa4074b9b57fd8, a0Raw[44] = 0x2c1d9c1bc3fdeb60, a0Raw[45] = 0xdcb5eb6bf645342c, a0Raw[46] = 0xeb072fd441a7f629, a0Raw[47] = 0xbdb5dddaa3a12c0d, a0Raw[48] = 0x4c05d1f138a5f9a9, a0Raw[49] = 0xb7cbf00bc6ebc721, a0Raw[50] = 0x1f7e39bae04ef900, a0Raw[51] = 0xdef1d8d2d48acad8, a0Raw[52] = 0xf048da1ca0bf1a61, a0Raw[53] = 0x2a1ede6b3e11d36e, a0Raw[54] = 0x573faa092a68ab1e, a0Raw[55] = 0x9a3a521ccdcde075, a0Raw[56] = 0x5193e165bfba6939, a0Raw[57] = 0xf0a7afee8c7e5149, a0Raw[58] = 0x53ec04438b0c9642, a0Raw[59] = 0xc4da3ea6853b53b8, a0Raw[60] = 0x28ba63ad7aed6c57, a0Raw[61] = 0xb5112383c619d3bb, a0Raw[62] = 0xa0a48de59141fc90, a0Raw[63] = 0x60ed197219fd26b4;
    b0Raw[0] = 0x85f016602d726337, b0Raw[1] = 0x835f4ec03c67879c, b0Raw[2] = 0x8ca5be9501824890, b0Raw[3] = 0x434dc8d37163fd05, b0Raw[4] = 0x0e4138e78d3bf605, b0Raw[5] = 0xa05159914c1fc003, b0Raw[6] = 0x9fa6726ebcdb460f, b0Raw[7] = 0xa6e8344410f0834e, b0Raw[8] = 0xe29e286c1b594f5c, b0Raw[9] = 0xd2bd577306d717cb, b0Raw[10] = 0x3c8baa94977fc8e3, b0Raw[11] = 0xe227b485a0677d2c, b0Raw[12] = 0xc1860b560adb03b0, b0Raw[13] = 0xc237d0cee061ee1b, b0Raw[14] = 0x2a7fe02a49439183, b0Raw[15] = 0x1720fca4c0fd3657, b0Raw[16] = 0x42cc66221a2e9a9a, b0Raw[17] = 0xffeb5562d87a8d3c, b0Raw[18] = 0x887829766fa70981, b0Raw[19] = 0x46edafae9543d64d, b0Raw[20] = 0x744aa2b651ae5234, b0Raw[21] = 0x8d9a99edffb400d0, b0Raw[22] = 0x29538c7b0563c56d, b0Raw[23] = 0xa3b42ef3868a7006, b0Raw[24] = 0xa389cc617614bb0a, b0Raw[25] = 0x77a58bb863564ca0, b0Raw[26] = 0xc2c94b4183872653, b0Raw[27] = 0x0d7c08318df3aa65, b0Raw[28] = 0xcf24456d08c4a1a4, b0Raw[29] = 0x08b69cea1c557b56, b0Raw[30] = 0xf2ab11568d080544, b0Raw[31] = 0x0b02dd975a3d67f6, b0Raw[32] = 0xa0725dae69796aa7, b0Raw[33] = 0x623a6e2c65d329ec, b0Raw[34] = 0xedaf4a3f33896dab, b0Raw[35] = 0x47da4cfc4b740a1c, b0Raw[36] = 0xc1d8595ec8e9c6ed, b0Raw[37] = 0xc9713c5783e6d7b2, b0Raw[38] = 0xabfab0341de2ccac, b0Raw[39] = 0x7ac22fe0228dcb86, b0Raw[40] = 0x3e3714b996a27c89, b0Raw[41] = 0x66e39f57fc7f7db0, b0Raw[42] = 0x250279da04f10003, b0Raw[43] = 0xa7c74597599cfe9e, b0Raw[44] = 0x374962a2a77d29db, b0Raw[45] = 0xbc7f0bcef4921c97, b0Raw[46] = 0x798956b3c837efe5, b0Raw[47] = 0xeacf6c3dcf0fb5e0, b0Raw[48] = 0x950314d28ba17609, b0Raw[49] = 0x9f0b4a47e55c2b53, b0Raw[50] = 0xbbc36bad3a93bc04, b0Raw[51] = 0x82e4fa4d3f8ffcc0, b0Raw[52] = 0x49f5cb35c18431c3, b0Raw[53] = 0x4ba67ca4448a8d53, b0Raw[54] = 0xf826358d6747d470, b0Raw[55] = 0xeae78b604193d456, b0Raw[56] = 0xfe29c7b043c61ac5, b0Raw[57] = 0x2208f084408ef7e9, b0Raw[58] = 0x01dbfbb0aa69e4d6, b0Raw[59] = 0xced7dc26d5305aac, b0Raw[60] = 0x84b032ff7f49486b, b0Raw[61] = 0x26c96d23e3f0043f, b0Raw[62] = 0x839589cc80ee3ac7, b0Raw[63] = 0x83bba98f8f9241be;
    x0Raw[0] = 0x4a168d27d0cac20c, x0Raw[1] = 0x566786bc060dc9c8, x0Raw[2] = 0xd40becfc66209e4a, x0Raw[3] = 0x852a5944b3b74b22, x0Raw[4] = 0x6372509f41705fdc, x0Raw[5] = 0x19dad1053eb93fe6, x0Raw[6] = 0xd24e61d7d5acca74, x0Raw[7] = 0x9905b6044c01df20, x0Raw[8] = 0x377c43aeef848064, x0Raw[9] = 0x89658fc891052c12, x0Raw[10] = 0x953ad5c591d1fe92, x0Raw[11] = 0x3464b02f3caf1e66, x0Raw[12] = 0xfa49991edbaa4cd0, x0Raw[13] = 0x83274591746c36ac, x0Raw[14] = 0x64076769cfb032a9, x0Raw[15] = 0x00f1095721ac37a4, x0Raw[16] = 0xccf7fcccb7ec8292, x0Raw[17] = 0x8063d2087bb6b173, x0Raw[18] = 0x69940da68318f983, x0Raw[19] = 0x5f51ba5f221e25df, x0Raw[20] = 0xb267f19c8e92f905, x0Raw[21] = 0x2d7fb9306af31f67, x0Raw[22] = 0xd20e65623cff2a8b, x0Raw[23] = 0x1c9e2df74b987693, x0Raw[24] = 0xb838f8a9a9371350, x0Raw[25] = 0x73da59ecdfed244a, x0Raw[26] = 0xfe54247955ff5b69, x0Raw[27] = 0x43a09847e0500fa5, x0Raw[28] = 0x5262757805dca5d0, x0Raw[29] = 0x72e647255c088bfc, x0Raw[30] = 0xa9425bcaa15baeb2, x0Raw[31] = 0xac6fdd1b85b704e9, x0Raw[32] = 0x0dd222bdfe16dc7c, x0Raw[33] = 0x8f4c4969cdb79e0e, x0Raw[34] = 0xf456d1ad58dde246, x0Raw[35] = 0xec2e1c39e584d1b7, x0Raw[36] = 0x557fdde3617d971a, x0Raw[37] = 0x8c923abfebfee865, x0Raw[38] = 0x3517749b816bd26c, x0Raw[39] = 0x625bbc58ba597e06, x0Raw[40] = 0x1227bbd89864aa6b, x0Raw[41] = 0x473fab4409e93cf4, x0Raw[42] = 0x77536eb37d49af74, x0Raw[43] = 0x6188eb8610c8d31a, x0Raw[44] = 0xbe553f586727d306, x0Raw[45] = 0x0fa82be177c91a22, x0Raw[46] = 0xa5542168fd32c167, x0Raw[47] = 0xc2ffd4cedd9b2c5d, x0Raw[48] = 0x689fd3c877a5a108, x0Raw[49] = 0x3ec577cca2361fe3, x0Raw[50] = 0x1639f53b4bb5ec60, x0Raw[51] = 0x5b420fd50713ae85, x0Raw[52] = 0x1f09034dc5296771, x0Raw[53] = 0x7b9a0be5b9da4606, x0Raw[54] = 0x7b875dbb0fb5e5cc, x0Raw[55] = 0x921a560889fbc633, x0Raw[56] = 0x7acf7dbc99733a89, x0Raw[57] = 0x3371ff580d281ef7, x0Raw[58] = 0xfe11403138955228, x0Raw[59] = 0xdc54e8edeead3e31, x0Raw[60] = 0x1cfe1579da8ab722, x0Raw[61] = 0xd3a5d71b38d2f109, x0Raw[62] = 0xd48de10aca41d2db, x0Raw[63] = 0xe81e2057107ccab6;
    y0Raw[0] = 0xdfe925930935a87f, y0Raw[1] = 0x8bd7e4f133572bd1, y0Raw[2] = 0x848e166b1b333b5c, y0Raw[3] = 0x2a8bc97b1bb6fb86, y0Raw[4] = 0xd027305fe7da60ac, y0Raw[5] = 0xfa1e638fc606a666, y0Raw[6] = 0xd452e1273566a8ee, y0Raw[7] = 0x5a80fc1d07d8cd3c, y0Raw[8] = 0x6964854191e1762a, y0Raw[9] = 0xae19868e12a1ad88, y0Raw[10] = 0x18328502af82bdd9, y0Raw[11] = 0xd7f6065db8188040, y0Raw[12] = 0x9a8c0d5cc903f519, y0Raw[13] = 0x69c6540b6a01579c, y0Raw[14] = 0xb5c6d82018201149, y0Raw[15] = 0xff8af7c249bcae8d, y0Raw[16] = 0x523a4581cc8d218e, y0Raw[17] = 0x200e3ea0ef9f8fe8, y0Raw[18] = 0x229f5be288411ea4, y0Raw[19] = 0x4eb64eddbbfcf342, y0Raw[20] = 0x6edb252a111a2ba1, y0Raw[21] = 0x4bdfcd48897e02aa, y0Raw[22] = 0xfc21a96965fb1ffd, y0Raw[23] = 0x625e57758d31a00d, y0Raw[24] = 0x85b8107115a6d937, y0Raw[25] = 0x4c329b8a372287b7, y0Raw[26] = 0x509441639883767b, y0Raw[27] = 0xc1b3fac775989f8d, y0Raw[28] = 0x15b62dfbfb57504a, y0Raw[29] = 0xc689740374238a1f, y0Raw[30] = 0xe34da421472b492e, y0Raw[31] = 0x566f7a26e172aedc, y0Raw[32] = 0x494881120439cf97, y0Raw[33] = 0x43dd318aa053fe6d, y0Raw[34] = 0x106e0a517140d40c, y0Raw[35] = 0xce80b777369a37b3, y0Raw[36] = 0x1f6a675ab24fbd8d, y0Raw[37] = 0x00bf96db2fcb5d88, y0Raw[38] = 0x02fba9db47a621bb, y0Raw[39] = 0x37c4beadab6164c2, y0Raw[40] = 0x398ddd09cb5c120a, y0Raw[41] = 0xcbafc3d60515e8e8, y0Raw[42] = 0xe3a31161451f9fc1, y0Raw[43] = 0xebd1bfb5321a0a9a, y0Raw[44] = 0xb0702c3de12a81e2, y0Raw[45] = 0x437c93b57ce933ae, y0Raw[46] = 0x20327c71f489453c, y0Raw[47] = 0x801e84d73e0cda09, y0Raw[48] = 0x618732318a537f6c, y0Raw[49] = 0xc973a8013d7928e9, y0Raw[50] = 0xec8afc00ee0bbece, y0Raw[51] = 0x0c28928914479819, y0Raw[52] = 0xddc39c402dfa1ed4, y0Raw[53] = 0x26126c873a113b6f, y0Raw[54] = 0xa6241bb157bb152e, y0Raw[55] = 0x358f83e4f189fd30, y0Raw[56] = 0x9d08f0c51f78ed69, y0Raw[57] = 0x52f28ff4053dac86, y0Raw[58] = 0x1e67aa7fe5c0aa67, y0Raw[59] = 0xbc672daf73ddda5a, y0Raw[60] = 0xac7f4b94a06add59, y0Raw[61] = 0x3956d3959c7cf98c, y0Raw[62] = 0x277a044df6d89efe, y0Raw[63] = 0x119272cab4de669b;

    uint4096 a1, y1;
    uint4096 b1, x1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *x1Raw = (uint64 *) &x1, *y1Raw = (uint64 *) &y1;

    a1Raw[0] = 0x71de72af9f81c56b, a1Raw[1] = 0x4dd6f7a8483e4185, a1Raw[2] = 0x08c29f40fb77d6f4, a1Raw[3] = 0x917942d847ee89a5, a1Raw[4] = 0xdb4481dd75465197, a1Raw[5] = 0x6266f3012be400ef, a1Raw[6] = 0x15e98e910c6c7073, a1Raw[7] = 0x9d8682eb38d5dd3d, a1Raw[8] = 0x311b7faf82629ca4, a1Raw[9] = 0x3565e2d62c5a65bc, a1Raw[10] = 0x943bdafe4388b13c, a1Raw[11] = 0xb00df506fce593f0, a1Raw[12] = 0x16d4bad809e4ff00, a1Raw[13] = 0xaf9126828c2da40b, a1Raw[14] = 0x7bb0aa949e591fec, a1Raw[15] = 0xd6c2e1b94b470fb5, a1Raw[16] = 0xc53aab06740d0b47, a1Raw[17] = 0xf98016545ba3b830, a1Raw[18] = 0xca718aa6c8961b5b, a1Raw[19] = 0x45614f0734d73c20, a1Raw[20] = 0x5253720e0d1750b2, a1Raw[21] = 0xb9fc82c0a5b0eca0, a1Raw[22] = 0x8986fb1a7ddaf3a1, a1Raw[23] = 0xe95edb5c1bf15238, a1Raw[24] = 0x361fde31cba9298e, a1Raw[25] = 0x2dd1ddc953ea0e38, a1Raw[26] = 0x886f502e5b4e64cc, a1Raw[27] = 0xc0111bb059335d4f, a1Raw[28] = 0x250dd59561047aa4, a1Raw[29] = 0x8b7271cb50f99338, a1Raw[30] = 0xc996d5c4ed0503f4, a1Raw[31] = 0xac545ca4daa0572f, a1Raw[32] = 0x1006761a9178a330, a1Raw[33] = 0x1d447955ab975019, a1Raw[34] = 0xeb649c375d3104d9, a1Raw[35] = 0xbb1c11facc586a24, a1Raw[36] = 0x691e88a58508054a, a1Raw[37] = 0xf71528288f85a5b7, a1Raw[38] = 0x9d8381af2717fedf, a1Raw[39] = 0x884e131e20c8b852, a1Raw[40] = 0xb5a284b36e3991d7, a1Raw[41] = 0xecbee8ce2c7419cd, a1Raw[42] = 0x59f7f03f0eb0eb8b, a1Raw[43] = 0x08387d8c72c17b85, a1Raw[44] = 0x9345c8d21f48a452, a1Raw[45] = 0xce85a0931ab45dbb, a1Raw[46] = 0x79a2edef057d35f4, a1Raw[47] = 0x261f45a0477dbb5c, a1Raw[48] = 0xc75bb736ffde151c, a1Raw[49] = 0x15e8cf45b8017fbe, a1Raw[50] = 0x7d8561961558562f, a1Raw[51] = 0x10d30ef7cd346b4b, a1Raw[52] = 0x2e665206b4331030, a1Raw[53] = 0xcaa9d04af5f03e90, a1Raw[54] = 0xb0e31f5c5c9ec467, a1Raw[55] = 0xbcb06577aa0267e8, a1Raw[56] = 0x4015980d04fec668, a1Raw[57] = 0x034bc13a34f2838d, a1Raw[58] = 0x7884b7b016396783, a1Raw[59] = 0xd375f40bf17ff773, a1Raw[60] = 0xab8b6d147884eb15, a1Raw[61] = 0xc387ff1d6f3b095e, a1Raw[62] = 0xa68ac1814a189eff, a1Raw[63] = 0x655bee9d0a8e9eea;
    b1Raw[0] = 0xc46ec89414084e67, b1Raw[1] = 0x6356d1ae1aee9500, b1Raw[2] = 0x2c8668671016bb7e, b1Raw[3] = 0x862aab52ab0ed446, b1Raw[4] = 0xcd5b73805e9c4fbb, b1Raw[5] = 0x73255e39920bc7db, b1Raw[6] = 0x5554f701590051b9, b1Raw[7] = 0x4cd625ee676fdcd0, b1Raw[8] = 0x2f6829d038b14e22, b1Raw[9] = 0xb5197e36fbbc6a8f, b1Raw[10] = 0xd843d5f51ed404b5, b1Raw[11] = 0x167e86a695afb629, b1Raw[12] = 0x1d045c4caf19c508, b1Raw[13] = 0x22b9ac6772e1e4ac, b1Raw[14] = 0x181f1f161cc60a7a, b1Raw[15] = 0x205010399d6f5e1b, b1Raw[16] = 0xdc4424afd1ed38f7, b1Raw[17] = 0x270dcccefc490238, b1Raw[18] = 0x9c703d9443d30c61, b1Raw[19] = 0x985ef2ecc23e56e6, b1Raw[20] = 0x97df2a9ef3297247, b1Raw[21] = 0x9e1b672d2f31cb5b, b1Raw[22] = 0xb077efd6189bc25a, b1Raw[23] = 0xcdf8985efd33c3c1, b1Raw[24] = 0x1f511f37368d994c, b1Raw[25] = 0x0240469f4c026771, b1Raw[26] = 0x12544bf8c931ac60, b1Raw[27] = 0x1c641e0ccbbc8dae, b1Raw[28] = 0x7a075d3bc273c040, b1Raw[29] = 0x54e480987c062817, b1Raw[30] = 0x39397cfad641ca48, b1Raw[31] = 0x9c5b65b3f7c04b22, b1Raw[32] = 0xc1e112b6b1fff960, b1Raw[33] = 0x971ab94ecf023372, b1Raw[34] = 0xd3b6b0ad5a3bc4d2, b1Raw[35] = 0x3d8e0e28a30d1909, b1Raw[36] = 0x5427131a5a3528f4, b1Raw[37] = 0x813b93b9c63b83c3, b1Raw[38] = 0xa529c442e5f953c9, b1Raw[39] = 0xb814bfb41177b4ad, b1Raw[40] = 0xa9644c3591bf4f08, b1Raw[41] = 0x2c09988e1350a327, b1Raw[42] = 0x40741efbdfa68bae, b1Raw[43] = 0xa9b19428333f066c, b1Raw[44] = 0x80ec9aa4277fb525, b1Raw[45] = 0x63d9150e4450a38b, b1Raw[46] = 0xabc1a4174badf87c, b1Raw[47] = 0x5cc3d3ea7a2c3605, b1Raw[48] = 0xfe329d7d371637fb, b1Raw[49] = 0x444f2d3d2a055571, b1Raw[50] = 0xcf1bc72fa7d9d972, b1Raw[51] = 0x820ae1ef2ab83822, b1Raw[52] = 0xbaa788c5f99ea15e, b1Raw[53] = 0x7bd8c9a642995eda, b1Raw[54] = 0xd08fcceff43bce23, b1Raw[55] = 0x67516b9c0b10478e, b1Raw[56] = 0x2dcf6304b845992e, b1Raw[57] = 0xbbe29dac5f0c5825, b1Raw[58] = 0x20ad8e181c74f01c, b1Raw[59] = 0x38572a0a17f29105, b1Raw[60] = 0x41cad200ff6eb762, b1Raw[61] = 0x6d8fc7c85310ad27, b1Raw[62] = 0x45a6c2dfbb9d261e, b1Raw[63] = 0x4be750aa475872ce;
    x1Raw[0] = 0x67a7a5e0c9556917, x1Raw[1] = 0xee17db19df933415, x1Raw[2] = 0xd63b21fe43fb080c, x1Raw[3] = 0x0eb316ae33be4cd3, x1Raw[4] = 0xf3a8369caa2edbaf, x1Raw[5] = 0xd66bfdb0084d2b69, x1Raw[6] = 0x1910c9510fd2a5e1, x1Raw[7] = 0x9c2300d12a93141b, x1Raw[8] = 0x320fda1bc43c2996, x1Raw[9] = 0xd18ff55d469456c8, x1Raw[10] = 0x0a807da72926c29d, x1Raw[11] = 0x8f37f913809931ee, x1Raw[12] = 0x91517841d8ede29c, x1Raw[13] = 0xb85e10d4a81bab57, x1Raw[14] = 0x94994135eb6f42d6, x1Raw[15] = 0x4c394706f4e4a004, x1Raw[16] = 0xc66a06186dc976d2, x1Raw[17] = 0x53690aa6dee0c599, x1Raw[18] = 0xb47e28b1ca2c8f69, x1Raw[19] = 0xa9140e29e21582f4, x1Raw[20] = 0x321fe4d7c376fb83, x1Raw[21] = 0xf5796e953fc60c35, x1Raw[22] = 0x9d26f19def0e224b, x1Raw[23] = 0x5122f4cbba17122e, x1Raw[24] = 0x3431ef982f7556b5, x1Raw[25] = 0x0eae0c4990e42e23, x1Raw[26] = 0x4ba604c515170020, x1Raw[27] = 0x31cd9dc2eba2562a, x1Raw[28] = 0x712d6a42a0994886, x1Raw[29] = 0xf67ce00d4fe15579, x1Raw[30] = 0xcd19044da9d6bb14, x1Raw[31] = 0x5a64433b07d324ee, x1Raw[32] = 0xac65d51a43bc7f15, x1Raw[33] = 0xcb408a09aad5042f, x1Raw[34] = 0xa8845c4919f6fedc, x1Raw[35] = 0x41f2e43c250b9f60, x1Raw[36] = 0x8e55672dddeeb5bc, x1Raw[37] = 0xbbc46a9e9fa8b900, x1Raw[38] = 0xdf166240a194cbc2, x1Raw[39] = 0x982d79dad24cc763, x1Raw[40] = 0x79a328cc79ade2db, x1Raw[41] = 0xd3234d573f90bc77, x1Raw[42] = 0xe90191bb09663b4c, x1Raw[43] = 0x14c512e01ec72cc9, x1Raw[44] = 0x0a56802da3d85926, x1Raw[45] = 0xcbb9e967e223b91a, x1Raw[46] = 0xea4fef894b514d96, x1Raw[47] = 0xa22dc8691a7fbbca, x1Raw[48] = 0x98608a90177e68d8, x1Raw[49] = 0x090fc39ef914adea, x1Raw[50] = 0x539da2e179575915, x1Raw[51] = 0xfae89dc92311944d, x1Raw[52] = 0xe9e90a4d6254b6f1, x1Raw[53] = 0xd1e8f661edb6cc1c, x1Raw[54] = 0x5e5c50cf1bf31967, x1Raw[55] = 0xc772f68e5ba32722, x1Raw[56] = 0x23ea72f7312bb5bc, x1Raw[57] = 0x330de7ef368a3f43, x1Raw[58] = 0x81b84e55acea3523, x1Raw[59] = 0x36e2c795f1b8a009, x1Raw[60] = 0xf6626dd7f9bc4c4c, x1Raw[61] = 0xdede4f2492dcd3c6, x1Raw[62] = 0xaaf11a6f9d8ff6c5, x1Raw[63] = 0xf6992343769a81a9;
    y1Raw[0] = 0xb4f3862a320e55fc, y1Raw[1] = 0xc0a7fd0caec99019, y1Raw[2] = 0x0fa81684afef0e41, y1Raw[3] = 0x207553c25715051d, y1Raw[4] = 0x006e3bebeca271af, y1Raw[5] = 0xb14a270e03a56dcb, y1Raw[6] = 0x21ed4200f066dff7, y1Raw[7] = 0xae76dc78ca6d652a, y1Raw[8] = 0xd587da4bea5c1e33, y1Raw[9] = 0x7d13e3ed8ddec2af, y1Raw[10] = 0xbf8f98c168e54cf1, y1Raw[11] = 0x2e71bd2364a9aba1, y1Raw[12] = 0x98dc154ed438c81a, y1Raw[13] = 0x9f8efc4a8392acd3, y1Raw[14] = 0x589c368c6ed88b78, y1Raw[15] = 0xc958e7fc847f9774, y1Raw[16] = 0x94ead2722c8b6f9a, y1Raw[17] = 0x4fc9bef3a1079870, y1Raw[18] = 0xf2928fef9e0b7788, y1Raw[19] = 0xd438d61e6b87f346, y1Raw[20] = 0xfd6b9ca5218f6405, y1Raw[21] = 0x0bbe0127d4df50c9, y1Raw[22] = 0xb1bff89c2184cfb4, y1Raw[23] = 0x4609229a5ca94e8c, y1Raw[24] = 0xf17ba00373ca1849, y1Raw[25] = 0xc34368ed759a3ead, y1Raw[26] = 0x123df0c31d41f8b8, y1Raw[27] = 0x89c76a20f3d48455, y1Raw[28] = 0x0b97c25fd4384e7f, y1Raw[29] = 0x8095e3d4d599b8d7, y1Raw[30] = 0x74f69846368ffd93, y1Raw[31] = 0x478d99fd179cf77a, y1Raw[32] = 0x702a97e3ca56aaa7, y1Raw[33] = 0x538ddae0385a5c70, y1Raw[34] = 0x8afd9928f529b307, y1Raw[35] = 0xdcc04e07b741a91d, y1Raw[36] = 0xa861cf47936e1d5e, y1Raw[37] = 0x977993b3a6de56a1, y1Raw[38] = 0x06ed2efa9f928887, y1Raw[39] = 0xdabe06b75504c530, y1Raw[40] = 0xf4c09ffd7ebad06c, y1Raw[41] = 0xe4292a49ba076d48, y1Raw[42] = 0x75f49c0e9c80b219, y1Raw[43] = 0x30ba29d6d543ad62, y1Raw[44] = 0xa6b40ed6d678e087, y1Raw[45] = 0x1c195f565ecf739d, y1Raw[46] = 0xe47db9dcf9891aed, y1Raw[47] = 0x99877499b44beb81, y1Raw[48] = 0xf6002ffb162cc9bb, y1Raw[49] = 0x0d0e73c34884293c, y1Raw[50] = 0xe10346d4cc15c9d4, y1Raw[51] = 0x5d8dd984d13ccc30, y1Raw[52] = 0xdc915f72b5ed0efb, y1Raw[53] = 0xdf77d4a19b2b045d, y1Raw[54] = 0x118f60955aaa5fc7, y1Raw[55] = 0xb8bd16133195ebb8, y1Raw[56] = 0xb3431ef139ec2e41, y1Raw[57] = 0xe172e308cc324438, y1Raw[58] = 0x9dc6fe93def997b2, y1Raw[59] = 0x791e317376cfcf25, y1Raw[60] = 0x1645f9d06efd29bd, y1Raw[61] = 0xba74b03651af07fe, y1Raw[62] = 0x764c6c17915249fc, y1Raw[63] = 0xc8e0b37ebefbf3f;

    uint4096 a2, y2;
    uint4096 b2, x2;
    uint64 *a2Raw = (uint64 *) &a2, *b2Raw = (uint64 *) &b2, *x2Raw = (uint64 *) &x2, *y2Raw = (uint64 *) &y2;

    a2Raw[0] = 0x9e43ad5087723901, a2Raw[1] = 0x0930a9aa2986b2e0, a2Raw[2] = 0x0c21c900d7e352f4, a2Raw[3] = 0xad552c9e29a6e87b, a2Raw[4] = 0x5f1e4d2a3ff030d1, a2Raw[5] = 0x304ddd0b47dbb1a9, a2Raw[6] = 0xe3bc68e485750b8e, a2Raw[7] = 0xae673b5367779c32, a2Raw[8] = 0x6ef35cc93b2b59f2, a2Raw[9] = 0xb689a73416657060, a2Raw[10] = 0x80c01c502443ba5d, a2Raw[11] = 0xf0c816a40cc062e9, a2Raw[12] = 0xd612e8adef003689, a2Raw[13] = 0x04a01307875c105f, a2Raw[14] = 0x3a45748a70116ab2, a2Raw[15] = 0xe9dc4aaece34fc6b, a2Raw[16] = 0x5ae48939737609fa, a2Raw[17] = 0xf41be95fa6026077, a2Raw[18] = 0x7cceb1263041793c, a2Raw[19] = 0x2463055c05734d9d, a2Raw[20] = 0xffc99b9920c9a74e, a2Raw[21] = 0xbec0ac6cc53e7b0e, a2Raw[22] = 0x61747c949945f7b6, a2Raw[23] = 0xfad813215c47f671, a2Raw[24] = 0xc192a4513bb5cbc8, a2Raw[25] = 0x8547bc5b9fdfc1c7, a2Raw[26] = 0x377035c2fd693d60, a2Raw[27] = 0x170a3d346f1780fe, a2Raw[28] = 0xb076a6c950e33647, a2Raw[29] = 0x685478678703d738, a2Raw[30] = 0x8be6e7f6ce6cbd8c, a2Raw[31] = 0xee9f369ebcc54d55, a2Raw[32] = 0xc39257b5df93d7df, a2Raw[33] = 0xf26b7df6a575a44d, a2Raw[34] = 0x0e2a735fbb1b1dc6, a2Raw[35] = 0x5d20aa23cb1368ee, a2Raw[36] = 0xf676a8c408bf3145, a2Raw[37] = 0x1380fb8228b77bf5, a2Raw[38] = 0xd19e938914a6316f, a2Raw[39] = 0xdc49e607a862e950, a2Raw[40] = 0x295cba95216085a6, a2Raw[41] = 0xe828f8a51890b0e4, a2Raw[42] = 0xbeb54e27f6e8a85f, a2Raw[43] = 0xc38b65859a65da4b, a2Raw[44] = 0x9055b2b861a24114, a2Raw[45] = 0xf8ad38387ccfb847, a2Raw[46] = 0x96fd765ebbeaf97a, a2Raw[47] = 0x24d25cecff7f95ee, a2Raw[48] = 0x69203bdb303f8a72, a2Raw[49] = 0x2648ea66d0d327d3, a2Raw[50] = 0x89468292e7eb89cc, a2Raw[51] = 0xba33e06b72bd5e1c, a2Raw[52] = 0x198d1fb576bc4ac4, a2Raw[53] = 0x89069a67f9c32461, a2Raw[54] = 0xb78f7516ea9c39fa, a2Raw[55] = 0x56b786585d1c72e2, a2Raw[56] = 0x03ebfa0c930efaf3, a2Raw[57] = 0xef46321ad4444c75, a2Raw[58] = 0x5cb7e62ea2e6e1ba, a2Raw[59] = 0xca63d3f59d8f627a, a2Raw[60] = 0x106d6feb86fd7bee, a2Raw[61] = 0x6c0ffd174a0c0d3f, a2Raw[62] = 0xb2caaa7f4c49ba19, a2Raw[63] = 0xe104a4f6a118f22f;
    b2Raw[0] = 0xd8b78b6fd6a1a2ab, b2Raw[1] = 0x29fd2a3cb434f7ae, b2Raw[2] = 0x232f543da6706094, b2Raw[3] = 0x5d9808951c07a328, b2Raw[4] = 0xb3919e64b8e0d959, b2Raw[5] = 0x2f96af83a57ed083, b2Raw[6] = 0x554d5f6a6e773abe, b2Raw[7] = 0xbd6bffa4828d004b, b2Raw[8] = 0x10094849db7288e5, b2Raw[9] = 0xbd05d58ddc99867e, b2Raw[10] = 0x764b495b9c637d53, b2Raw[11] = 0x9f81b97ef28182df, b2Raw[12] = 0x0a0d7a2ee9f9b239, b2Raw[13] = 0x6ff009bc4b4aa3d9, b2Raw[14] = 0x787cb0d3d1826b1a, b2Raw[15] = 0x9ada8f9271129a45, b2Raw[16] = 0x0594e97b689e257f, b2Raw[17] = 0x39035cfa3c6108b3, b2Raw[18] = 0x25193cf2628039a8, b2Raw[19] = 0x6356354af6a5db9b, b2Raw[20] = 0xe880c0e564866e3c, b2Raw[21] = 0xbce6e508e864a4c7, b2Raw[22] = 0x7c550e04f841ecd2, b2Raw[23] = 0x9c6f3fb517c6703b, b2Raw[24] = 0xd815d2321fb2aaae, b2Raw[25] = 0xbf53eb284ee2cc9d, b2Raw[26] = 0x656d12b6d3d9687f, b2Raw[27] = 0x1cd3e100d5c5abf1, b2Raw[28] = 0x3069e7b5e46b346f, b2Raw[29] = 0xa3728c2a3e35cf12, b2Raw[30] = 0x31ba212c146fd49f, b2Raw[31] = 0xc23439482f8b3f9d, b2Raw[32] = 0x5fa11d81be4d12c5, b2Raw[33] = 0x1aa6b24011c510a3, b2Raw[34] = 0xa1c79c142c43797b, b2Raw[35] = 0x24f22914204cdafe, b2Raw[36] = 0x83b658ec41bb9bc1, b2Raw[37] = 0xdeef304ce48c1a84, b2Raw[38] = 0x8c2544c6b674da92, b2Raw[39] = 0xaa1e1f34a56011cb, b2Raw[40] = 0x80612cdc94d771b0, b2Raw[41] = 0x0fcfe074052aeb24, b2Raw[42] = 0x0631174cbe414610, b2Raw[43] = 0xd87b4d187b39c40f, b2Raw[44] = 0xd7fed0213d87f28b, b2Raw[45] = 0x035a5c318fbb0e94, b2Raw[46] = 0xe31f7e120a94f397, b2Raw[47] = 0xc262d3dd8f3e026b, b2Raw[48] = 0xdffad881bb9079bc, b2Raw[49] = 0xc3f706e2f2f34f04, b2Raw[50] = 0x192b7c70bf9b1b76, b2Raw[51] = 0x4e9f3280fb272d25, b2Raw[52] = 0x3dcbc6825afb06e4, b2Raw[53] = 0xe00e52808a6325b7, b2Raw[54] = 0x728d9c45c731cf54, b2Raw[55] = 0x11656385d945ae33, b2Raw[56] = 0xbc5662152cbb8933, b2Raw[57] = 0x48d22a8f03c14d18, b2Raw[58] = 0xe6bd6bede1b72639, b2Raw[59] = 0xf2c200860e0bab77, b2Raw[60] = 0x39d9dd44271d2e65, b2Raw[61] = 0x5c623d420569e247, b2Raw[62] = 0x1af7dda5f1037560, b2Raw[63] = 0xe97bbeaf2e7566a4;
    x2Raw[0] = 0xa474900d491651a6, x2Raw[1] = 0xedacd11671616475, x2Raw[2] = 0xbd2665fea1ebab29, x2Raw[3] = 0x50f4509f9834ba6c, x2Raw[4] = 0x2e0b6d528b566283, x2Raw[5] = 0x71a36c83474835e6, x2Raw[6] = 0xa5f22c7bbe687281, x2Raw[7] = 0xa9c951240c89aa26, x2Raw[8] = 0xf700b78806b6b51d, x2Raw[9] = 0x4da7ca9feb9cbd3b, x2Raw[10] = 0xbc17f766eaf5b94c, x2Raw[11] = 0xb7a9b9bf9a6bd667, x2Raw[12] = 0x8030d10b6d602c3b, x2Raw[13] = 0x57a12b9abfc81461, x2Raw[14] = 0xcf97e79f5d4c1d4f, x2Raw[15] = 0x5e9d1533ee890591, x2Raw[16] = 0x109187b1699290dd, x2Raw[17] = 0x1598a5791f5d2d6f, x2Raw[18] = 0x03482c28ea1767b9, x2Raw[19] = 0xb8cd8cf058e39ba8, x2Raw[20] = 0x816ddcd84a723cbd, x2Raw[21] = 0x7bf831047a9bcc6f, x2Raw[22] = 0x65d77e4fcaa6eae2, x2Raw[23] = 0xd6ee0a53ecce16bd, x2Raw[24] = 0x0dad118406929afa, x2Raw[25] = 0xd1208897eee31c6b, x2Raw[26] = 0xaa77842a10d35d29, x2Raw[27] = 0x61da1b6e7e75f011, x2Raw[28] = 0x37b8e328fe156b67, x2Raw[29] = 0x51199c0663ab99b1, x2Raw[30] = 0xa07343bcd8ab5219, x2Raw[31] = 0xb09ab0f50e527055, x2Raw[32] = 0x8e81c7c46875e011, x2Raw[33] = 0xe061ee1bcef61f3c, x2Raw[34] = 0xefe4796b80a16f52, x2Raw[35] = 0xe4576b96764c4681, x2Raw[36] = 0xc7c99c351917b297, x2Raw[37] = 0x07c52aede0cb01c5, x2Raw[38] = 0xf71d513b5566f41f, x2Raw[39] = 0x5af6ab45f5330ca6, x2Raw[40] = 0x9d470f7f7a76e87d, x2Raw[41] = 0xc570e920f8476747, x2Raw[42] = 0x7b46e65dab89d43e, x2Raw[43] = 0x2783337d25cd42b0, x2Raw[44] = 0x78e8a421bccef9ad, x2Raw[45] = 0x59845543f492f894, x2Raw[46] = 0x92a451625e2a8f77, x2Raw[47] = 0x514f3d70691ca9c0, x2Raw[48] = 0x83e2f61ec2c2982f, x2Raw[49] = 0xeb5911fa9076a6b2, x2Raw[50] = 0x7f02ba978cefbd7b, x2Raw[51] = 0x9ae718f499da4f7f, x2Raw[52] = 0xada1e947edee969d, x2Raw[53] = 0x64b127a7a56252e4, x2Raw[54] = 0x90653b8e9d185cc8, x2Raw[55] = 0x3c3404f0841ba094, x2Raw[56] = 0x2e0e991e7ff36478, x2Raw[57] = 0xb807ae88e543810b, x2Raw[58] = 0x12959abb62ad23da, x2Raw[59] = 0x799a4e2d4560fbbc, x2Raw[60] = 0xf582bf804f32c7fc, x2Raw[61] = 0xd5c2c8b425eaa04c, x2Raw[62] = 0x1737dba467d619a6, x2Raw[63] = 0xfe0a3049af324ce6;
    y2Raw[0] = 0x33926132fd53c111, y2Raw[1] = 0xefd26120fb4d9ce2, y2Raw[2] = 0xa87cea7137fb3c40, y2Raw[3] = 0xe83b38c976266d42, y2Raw[4] = 0x98433fd03cffb139, y2Raw[5] = 0xd9e18b97570d7f37, y2Raw[6] = 0xa4145f645d5cf1f7, y2Raw[7] = 0xccb640a6cecb7189, y2Raw[8] = 0x6a0338089a7332b4, y2Raw[9] = 0x87e9f51d99196a19, y2Raw[10] = 0x629aa848298d8cbc, y2Raw[11] = 0x1bed8e288b2b5e12, y2Raw[12] = 0xe040129ea8125b0d, y2Raw[13] = 0x291c9063c2094f08, y2Raw[14] = 0x594a782f63f1a419, y2Raw[15] = 0xd74c5f2290e235b1, y2Raw[16] = 0xe7cd604ff63ccd56, y2Raw[17] = 0x08034667245b7282, y2Raw[18] = 0xfc4fa331a6d8dbd9, y2Raw[19] = 0x24fc6919d444c543, y2Raw[20] = 0xef8fb2d8394a815f, y2Raw[21] = 0xde687758b1e3f117, y2Raw[22] = 0x3f65d4f397519dda, y2Raw[23] = 0x8ea23d51c8c7e990, y2Raw[24] = 0x08c829aa518ab88e, y2Raw[25] = 0xd24cb229462a8e52, y2Raw[26] = 0x657251eaadd98b59, y2Raw[27] = 0x51b25c49e78ad454, y2Raw[28] = 0x2aa2680d74adb2ca, y2Raw[29] = 0xb3fb6b3f6223208b, y2Raw[30] = 0x9b87309b9ae353d9, y2Raw[31] = 0xdd25f931cfdce021, y2Raw[32] = 0xf8e17f6c21253e60, y2Raw[33] = 0xd0a202d920050327, y2Raw[34] = 0x679c619107efbfb3, y2Raw[35] = 0xefb65b4b54f70301, y2Raw[36] = 0x21c428cbf468d023, y2Raw[37] = 0x6990478728684ea2, y2Raw[38] = 0x74f2e7c1ec8ca456, y2Raw[39] = 0x3b35d5f822fcf265, y2Raw[40] = 0x90f0b80a9eacaa13, y2Raw[41] = 0x6a3cbeeaba0d1d7e, y2Raw[42] = 0x80aee23dc2e03c48, y2Raw[43] = 0xcd93fdef2d5cb4d9, y2Raw[44] = 0xd7c7e31d95ac08ed, y2Raw[45] = 0xbbd88b685723a46a, y2Raw[46] = 0x12eee3ff9db5b16c, y2Raw[47] = 0xc558d3d0827e1b99, y2Raw[48] = 0x2e4620f9515e566e, y2Raw[49] = 0x9e65fb8fea6cddb8, y2Raw[50] = 0x019b733138c4828d, y2Raw[51] = 0x6871f6972046166b, y2Raw[52] = 0x60b79a830f2e8a5b, y2Raw[53] = 0xac62b3ceeab5ab7d, y2Raw[54] = 0x618609751bc9620d, y2Raw[55] = 0x706e2deec517b695, y2Raw[56] = 0x41cdc7dbcfa8ea8d, y2Raw[57] = 0xb868b5f1631ff77d, y2Raw[58] = 0x9232c4b54963b958, y2Raw[59] = 0x1a252a8a4f14b2e3, y2Raw[60] = 0xd3addd5866f1fd8a, y2Raw[61] = 0xc7c521502f3f8e53, y2Raw[62] = 0x75c41d0a6d6ca88a, y2Raw[63] = 0x1e39e18e4aebd39;

    uint4096 a3, y3;
    uint4096 b3, x3;
    uint64 *a3Raw = (uint64 *) &a3, *b3Raw = (uint64 *) &b3, *x3Raw = (uint64 *) &x3, *y3Raw = (uint64 *) &y3;

    a3Raw[0] = 0x43d8fd6baa7b4c05, a3Raw[1] = 0xf50b9e48de7d4cb4, a3Raw[2] = 0x57b4afa746faa5f7, a3Raw[3] = 0x2f790a61f2203553, a3Raw[4] = 0x53a6f30aff033648, a3Raw[5] = 0x4ad6f8002c372e00, a3Raw[6] = 0xb04c0205482f012b, a3Raw[7] = 0x447ed9ac4a6f81cc, a3Raw[8] = 0x2ad800678e5be608, a3Raw[9] = 0xf2d8cfc1e1e3b44b, a3Raw[10] = 0x1183612de7b1c8cc, a3Raw[11] = 0xe12cf2c42329bd94, a3Raw[12] = 0xdbe0e52a3cca671b, a3Raw[13] = 0x046a625d417f89d4, a3Raw[14] = 0xeec531969b5b7a94, a3Raw[15] = 0x552e07c32e52d621, a3Raw[16] = 0x06aab9c9dc4088e8, a3Raw[17] = 0xd339e94426532197, a3Raw[18] = 0x6516b2a326076c46, a3Raw[19] = 0x9dae5530552bc5ea, a3Raw[20] = 0xeb971e9faa6f426c, a3Raw[21] = 0x58c281e9a10250c8, a3Raw[22] = 0x8e843b1f5589e5c7, a3Raw[23] = 0x727dfd7d5dde04c0, a3Raw[24] = 0x082d79b47d9ca897, a3Raw[25] = 0x499dc35ca913e473, a3Raw[26] = 0xaf2366a52344b329, a3Raw[27] = 0x9dc5bfe1d0c5d559, a3Raw[28] = 0xdff9f8fd1303cc19, a3Raw[29] = 0x96ca61f037f695ee, a3Raw[30] = 0xdd22dee2e8448c74, a3Raw[31] = 0x008452cb0391dd5b, a3Raw[32] = 0x4e969b5d4d1b6b5d, a3Raw[33] = 0xe82a6fc738a31ed0, a3Raw[34] = 0x17b86cc01d7a97c9, a3Raw[35] = 0x17a6285a7e1d7672, a3Raw[36] = 0x325f221b3706d540, a3Raw[37] = 0x27bdcc3a317513d6, a3Raw[38] = 0x7c6fd5b4b9616c15, a3Raw[39] = 0xd2b84b854ba2a618, a3Raw[40] = 0x34dcc8e5ea25ad1b, a3Raw[41] = 0xf1bbe2c4ddd2949f, a3Raw[42] = 0x1b29ec4f544e9b30, a3Raw[43] = 0x0f7bd363b7c6357b, a3Raw[44] = 0xa45c05362beea62f, a3Raw[45] = 0x080f89d23a8c53a8, a3Raw[46] = 0x6e33fd5673da507f, a3Raw[47] = 0xd69ea0c4cb7065d9, a3Raw[48] = 0x3372944b3edd4fa0, a3Raw[49] = 0x2d8ca3b45611eda8, a3Raw[50] = 0x7e17e4642711527a, a3Raw[51] = 0x43107f21e9535ddd, a3Raw[52] = 0xce238a4a145798a6, a3Raw[53] = 0x1bdce7e75ce01102, a3Raw[54] = 0xb34eebbf4c893b54, a3Raw[55] = 0x9c217d549d71e537, a3Raw[56] = 0xa8e1e030b33c99cc, a3Raw[57] = 0x17bbd224eb291beb, a3Raw[58] = 0x62b9c1958413d7a1, a3Raw[59] = 0xde7d4ad1bc83ed25, a3Raw[60] = 0xe7b22ef40a27a679, a3Raw[61] = 0x774a39d850897f7a, a3Raw[62] = 0x9789f9c13e13df76, a3Raw[63] = 0x774e188043056213;
    b3Raw[0] = 0x501a980398215ff2, b3Raw[1] = 0xf103ea439fe24add, b3Raw[2] = 0xe4e0747cb2b314b3, b3Raw[3] = 0x24e0028d41f056ab, b3Raw[4] = 0x6cac2dfacd097d2a, b3Raw[5] = 0x9ae1e583cf98a68b, b3Raw[6] = 0x3b8055978cc36ab8, b3Raw[7] = 0x6bd76aa306984a5a, b3Raw[8] = 0x278f6638df5253e0, b3Raw[9] = 0xdd64ad25bf737141, b3Raw[10] = 0xc8beaf26b7ba64ea, b3Raw[11] = 0xd336cb434185d5e5, b3Raw[12] = 0x157af77e94a8504e, b3Raw[13] = 0xefa0de43bedffdaf, b3Raw[14] = 0xb4a49cc68e00d085, b3Raw[15] = 0xed3555532e6dfe59, b3Raw[16] = 0x6c6501e13239c24a, b3Raw[17] = 0xfc4eda082709aebd, b3Raw[18] = 0xc036f903a85dd428, b3Raw[19] = 0xe3cd85695af3523f, b3Raw[20] = 0xe8212c0260c76159, b3Raw[21] = 0x0b266b73c943c1ac, b3Raw[22] = 0x9a62bd802574229f, b3Raw[23] = 0xebeb2c31f798c71c, b3Raw[24] = 0xd5b6576a0683df0f, b3Raw[25] = 0x1b3fa77d5ebdd9f4, b3Raw[26] = 0x6dd8e8b9667a3fa1, b3Raw[27] = 0xa49a9fcd776f7de9, b3Raw[28] = 0x005253ee290bb4fa, b3Raw[29] = 0xa8c354816eeb15ae, b3Raw[30] = 0x7057edfca8c87fd8, b3Raw[31] = 0xb9e012369f92b390, b3Raw[32] = 0xf202ddf68fd1d8b6, b3Raw[33] = 0x58096efa6ca8661d, b3Raw[34] = 0x19fc3a42a47d284a, b3Raw[35] = 0x222bf6742799835c, b3Raw[36] = 0x50d93e2ca79f46a8, b3Raw[37] = 0xa3e58e785d5f2113, b3Raw[38] = 0xa7ecde6ae78e6178, b3Raw[39] = 0x510d297d5581f629, b3Raw[40] = 0x663d18dd6f4f0a0e, b3Raw[41] = 0x9d7a5cfa8dc7f167, b3Raw[42] = 0x50970b2d29383c4a, b3Raw[43] = 0x4c6d0ece4a602fe1, b3Raw[44] = 0x67accdfd6dbcafb2, b3Raw[45] = 0x37e2c77452c5560c, b3Raw[46] = 0xa29ffacab2d80d75, b3Raw[47] = 0x49fb620f0c1704f3, b3Raw[48] = 0xb750a87825dbb8e8, b3Raw[49] = 0xadc3f948653e8774, b3Raw[50] = 0xb086c82c28a8d393, b3Raw[51] = 0xb95dd16898da40f7, b3Raw[52] = 0x459ab888f5c4285c, b3Raw[53] = 0x67fa87cbae45f6b4, b3Raw[54] = 0x752e7c2f601c6a1c, b3Raw[55] = 0xd82a644b9d8841c3, b3Raw[56] = 0xa27f7d8ff7c0bec6, b3Raw[57] = 0x91e3271f3ae65c80, b3Raw[58] = 0xaeb379e2567991f4, b3Raw[59] = 0x383f57538ced55bb, b3Raw[60] = 0xd10260ae9aabf3d6, b3Raw[61] = 0x0b546b74ec651568, b3Raw[62] = 0xccc9628462e5b117, b3Raw[63] = 0x1874134f66665744;
    x3Raw[0] = 0xf01970119ae63e3f, x3Raw[1] = 0x23636ecce6ef2fb6, x3Raw[2] = 0xeb472b3e3d8801e7, x3Raw[3] = 0x7fe7d7abd519fc32, x3Raw[4] = 0xa22a07ac0d9db665, x3Raw[5] = 0x54fa3742b73f6844, x3Raw[6] = 0x83c2f7248111a3d8, x3Raw[7] = 0xd325a5f51d30f25d, x3Raw[8] = 0x0663b0f50fb3c0af, x3Raw[9] = 0xa2ce819a0a5e4ede, x3Raw[10] = 0x03bc764c190be996, x3Raw[11] = 0x02adf8fce1b1a54b, x3Raw[12] = 0x94ed3c427f38eecc, x3Raw[13] = 0xff9bb5fd48581c5d, x3Raw[14] = 0x85d21b69bacfc51c, x3Raw[15] = 0xdc270099c90692ec, x3Raw[16] = 0x7fff89aa47d4453d, x3Raw[17] = 0xb9461f07144a1a53, x3Raw[18] = 0x3e96c903990db1ea, x3Raw[19] = 0xf5c73f2fc0f1ffe1, x3Raw[20] = 0xda297cc6550aa5e2, x3Raw[21] = 0x4778568d9d356e41, x3Raw[22] = 0x148acd8cb4e00cd1, x3Raw[23] = 0xcbb51d85f3c6244a, x3Raw[24] = 0x22cd50c0c6a6bdb8, x3Raw[25] = 0x2007b426a1525fa1, x3Raw[26] = 0xbd1a1dbf79ce7356, x3Raw[27] = 0x684af95d601bb493, x3Raw[28] = 0x220735b8f25b9d6f, x3Raw[29] = 0xdc17ebeeb3b50245, x3Raw[30] = 0xae93e6d895f88b91, x3Raw[31] = 0xef8c5327d81eb974, x3Raw[32] = 0x73963b53d1dcc82d, x3Raw[33] = 0x24770ef1502d9a12, x3Raw[34] = 0x1b9562521814586d, x3Raw[35] = 0xbe4fd7b79736b0e2, x3Raw[36] = 0xfb78d788b26142fe, x3Raw[37] = 0xc2590d5472ed31f7, x3Raw[38] = 0x40c72fa8ae9cdbc6, x3Raw[39] = 0x381729755afe2844, x3Raw[40] = 0x3f2333e8b195a04f, x3Raw[41] = 0xa4444d9c75eea35c, x3Raw[42] = 0x26a7a2509a80f34e, x3Raw[43] = 0xe00028391884e21f, x3Raw[44] = 0x7fe68dceac655a23, x3Raw[45] = 0x464e74ea8420b6bd, x3Raw[46] = 0x7f8b673fe00d441f, x3Raw[47] = 0xa98108d8d14f4c39, x3Raw[48] = 0x1888fa7db2a9f909, x3Raw[49] = 0xaf9e4abf6c6eccad, x3Raw[50] = 0x33b28f731328ba7f, x3Raw[51] = 0x2ace4b4950edf0a6, x3Raw[52] = 0xb52da479b9e1ad50, x3Raw[53] = 0xc1400c1e8f8ff500, x3Raw[54] = 0xb44a8726119bf783, x3Raw[55] = 0x926cb67d5b124af3, x3Raw[56] = 0xb2b700803bd0ebe5, x3Raw[57] = 0x490dd00227fec976, x3Raw[58] = 0x0757b772d15bcc09, x3Raw[59] = 0xdadd9fb93d86f423, x3Raw[60] = 0x4568de4dfeca7611, x3Raw[61] = 0x605fbb72581309fc, x3Raw[62] = 0xbc95d74752f26bb0, x3Raw[63] = 0xfe5e302511a9117a;
    y3Raw[0] = 0x780ff82bcb3edc3b, y3Raw[1] = 0x584445e2a690a79c, y3Raw[2] = 0x0ce3f96338274388, y3Raw[3] = 0x180a80e4fe58f2be, y3Raw[4] = 0x4c374345323cf266, y3Raw[5] = 0xdc1a46df3796882b, y3Raw[6] = 0x6a3052180d0face3, y3Raw[7] = 0xa53061f8c2dc12b3, y3Raw[8] = 0xcadf1376e1d7e456, y3Raw[9] = 0x8b3831c10fdd591b, y3Raw[10] = 0x279980e79c65a389, y3Raw[11] = 0xb6a30c0a3e03d927, y3Raw[12] = 0x30cb896bebf58111, y3Raw[13] = 0x8990a369ab072ffa, y3Raw[14] = 0xbb8e358e579bf886, y3Raw[15] = 0x12c171e0fe0d3244, y3Raw[16] = 0x86974f3bee2cec48, y3Raw[17] = 0x893ec54f4b1b7daf, y3Raw[18] = 0x9e6ef48208ccc386, y3Raw[19] = 0x54e6b165c93bdfd4, y3Raw[20] = 0x7befe1fe1865f089, y3Raw[21] = 0xc70a8540fb5f59ff, y3Raw[22] = 0xa90817f0cf4e019a, y3Raw[23] = 0x85d8632038cc07cb, y3Raw[24] = 0x9e806a8b222608ba, y3Raw[25] = 0xf9ea28ceb03369c5, y3Raw[26] = 0xa59a19e8f1c929ea, y3Raw[27] = 0x54778ff7904ceff0, y3Raw[28] = 0xee071338d5a03546, y3Raw[29] = 0xb1ae60637500f548, y3Raw[30] = 0x6a0d279e494906f6, y3Raw[31] = 0xaebcba20d6b608f2, y3Raw[32] = 0x10931028eaf5abb9, y3Raw[33] = 0x5eec26034425b26e, y3Raw[34] = 0x1f8ca8e75d597eff, y3Raw[35] = 0x587c5c096427d9f7, y3Raw[36] = 0x95d3e55d6290a221, y3Raw[37] = 0xeaf06abf4d723c25, y3Raw[38] = 0xe7c10fb30b0c14fc, y3Raw[39] = 0x2b3fedf92c65658d, y3Raw[40] = 0x47d696ba07915a4e, y3Raw[41] = 0xdf1243039c0c3ac6, y3Raw[42] = 0x5f3d7ef7f2be3a03, y3Raw[43] = 0xb15fc61a6ff4ac42, y3Raw[44] = 0x6e097a780639195a, y3Raw[45] = 0x1b28ff44ea1d5b07, y3Raw[46] = 0x64eda78fd0f274a8, y3Raw[47] = 0x44d9ef7892838e89, y3Raw[48] = 0x83bfb050dc41661a, y3Raw[49] = 0x9c820bc4f254eca5, y3Raw[50] = 0x4d5acb411bf04954, y3Raw[51] = 0xc9ab94ee3039fd95, y3Raw[52] = 0x94aa94e0b3b8805a, y3Raw[53] = 0xbe19cfbd026608d5, y3Raw[54] = 0xf76529e3d424eb42, y3Raw[55] = 0x61b3ee87a3ed9b8f, y3Raw[56] = 0x596081188204a3f1, y3Raw[57] = 0x06c0ebab439b6aa9, y3Raw[58] = 0x60c45f661d025d02, y3Raw[59] = 0x5aec360d7c96b764, y3Raw[60] = 0xddb81021a35c3823, y3Raw[61] = 0x88eb99e74459da93, y3Raw[62] = 0x55b19e3ffba25f46, y3Raw[63] = 0x7f6734115ad8240;

    // ACT
    uint4096 xc0;
    uint4096 yc0;
    extendedEuclidean(a0, b0, xc0, yc0);
    uint4096 xc1;
    uint4096 yc1;
    extendedEuclidean(a1, b1, xc1, yc1);
    uint4096 xc2;
    uint4096 yc2;
    extendedEuclidean(a2, b2, xc2, yc2);
    uint4096 xc3;
    uint4096 yc3;
    extendedEuclidean(a3, b3, xc3, yc3);

    // ASSERT
    ASSERT_EQ(xc0, x0);
    ASSERT_EQ(yc0, y0);
    ASSERT_EQ(xc1, x1);
    ASSERT_EQ(yc1, y1);
    ASSERT_EQ(xc2, x2);
    ASSERT_EQ(yc2, y2);
    ASSERT_EQ(xc3, x3);
    ASSERT_EQ(yc3, y3);
}


/* BigInteger REDC Algorithm Tests */

TEST(BigIntegerAlgorithmTests, REDC128Bit) {
    // ARRANGE
    uint128 unused, t;

    uint128 aM0, bM0, n0;
    uint256 r0, nPrime0;
    uint32 rExp0 = 121;
    uint128 p0;
    uint64 *aM0Raw = (uint64 *) &aM0, *bM0Raw = (uint64 *) &bM0, *n0Raw = (uint64 *) &n0, *r0Raw = (uint64 *) &r0;
    uint64 *p0Raw = (uint64 *) &p0;
    REDCAuxiliaryModulus<2> auxMod0(rExp0);

    aM0Raw[0] = 0xfafc173d7f30c3af, aM0Raw[1] = 0xa87a92341594fd;
    bM0Raw[0] = 0x7ce1768988db54ce, bM0Raw[1] = 0xf1c9d2346d8b44;
    n0Raw[0] = 0x25dab242aea8d341, n0Raw[1] = 0x15a6a508a41ba90;
    r0Raw[0] = 0x0000000000000000, r0Raw[1] = 0x200000000000000;
    p0Raw[0] = 0x5f6261b6a57a30ed, p0Raw[1] = 0xac0fa2a02b4837;

    uint128 aM1, bM1, n1;
    uint256 r1, nPrime1;
    uint32 rExp1 = 127;
    uint128 p1;
    uint64 *aM1Raw = (uint64 *) &aM1, *bM1Raw = (uint64 *) &bM1, *n1Raw = (uint64 *) &n1, *r1Raw = (uint64 *) &r1;
    uint64 *p1Raw = (uint64 *) &p1;
    REDCAuxiliaryModulus<2> auxMod1(rExp1);

    aM1Raw[0] = 0x195c26c81e91370b, aM1Raw[1] = 0x2be9bbfe95fc6002;
    bM1Raw[0] = 0x33fcef1a98c61d52, bM1Raw[1] = 0x58791a9c30aaf626;
    n1Raw[0] = 0x344a7b9f10b2e8e3, n1Raw[1] = 0x7f7d854256770a22;
    r1Raw[0] = 0x0000000000000000, r1Raw[1] = 0x8000000000000000;
    p1Raw[0] = 0x363124cf81c20cac, p1Raw[1] = 0x46396c70497b4b2;

    uint128 aM2, bM2, n2;
    uint256 r2, nPrime2;
    uint32 rExp2 = 127;
    uint128 p2;
    uint64 *aM2Raw = (uint64 *) &aM2, *bM2Raw = (uint64 *) &bM2, *n2Raw = (uint64 *) &n2, *r2Raw = (uint64 *) &r2;
    uint64 *p2Raw = (uint64 *) &p2;
    REDCAuxiliaryModulus<2> auxMod2(rExp2);

    aM2Raw[0] = 0xe3731b8c4cf3cd99, aM2Raw[1] = 0x377a9f5d2a6ecda;
    bM2Raw[0] = 0x833fde902472736d, bM2Raw[1] = 0x2d4402870558b0b;
    n2Raw[0] = 0xc951357acbd51131, n2Raw[1] = 0x4c09e24e117bf446;
    r2Raw[0] = 0x0000000000000000, r2Raw[1] = 0x8000000000000000;
    p2Raw[0] = 0x2836d6c6cbfba0de, p2Raw[1] = 0x33aed124007c122f;

    uint128 aM3, bM3, n3;
    uint256 r3, nPrime3;
    uint32 rExp3 = 126;
    uint128 p3;
    uint64 *aM3Raw = (uint64 *) &aM3, *bM3Raw = (uint64 *) &bM3, *n3Raw = (uint64 *) &n3, *r3Raw = (uint64 *) &r3;
    uint64 *p3Raw = (uint64 *) &p3;
    REDCAuxiliaryModulus<2> auxMod3(rExp3);

    aM3Raw[0] = 0x9e7a40b561399e78, aM3Raw[1] = 0x1302015d45a69105;
    bM3Raw[0] = 0xf12009ad9b7b1794, bM3Raw[1] = 0x162b7e5a9b71e9cb;
    n3Raw[0] = 0x24c9c233a5cc1d61, n3Raw[1] = 0x282e4127df9985f0;
    r3Raw[0] = 0x0000000000000000, r3Raw[1] = 0x4000000000000000;
    p3Raw[0] = 0xe79b68080b04aed1, p3Raw[1] = 0x4876b4dc74887e7;

    // ACT
    extendedEuclidean(r0, n0, unused, nPrime0);

    t = redc(auxMod0, n0, -(uint128)nPrime0, aM0 * bM0);
    uint128 c0 = redc(auxMod0, n0, -(uint128)nPrime0, t);

    extendedEuclidean(r1, n1, unused, nPrime1);

    t = redc(auxMod1, n1, -(uint128)nPrime1, aM1 * bM1);
    uint128 c1 = redc(auxMod1, n1, -(uint128)nPrime1, t);

    extendedEuclidean(r2, n2, unused, nPrime2);

    t = redc(auxMod2, n2, -(uint128)nPrime2, aM2 * bM2);
    uint128 c2 = redc(auxMod2, n2, -(uint128)nPrime2, t);

    extendedEuclidean(r3, n3, unused, nPrime3);

    t = redc(auxMod3, n3, -(uint128)nPrime3, aM3 * bM3);
    uint128 c3 = redc(auxMod3, n3, -(uint128)nPrime3, t);


    // ASSERT
    ASSERT_EQ(c0, p0);
    ASSERT_EQ(c1, p1);
    ASSERT_EQ(c2, p2);
    ASSERT_EQ(c3, p3);
}

TEST(BigIntegerAlgorithmTests, REDC256Bit) {
    // ARRANGE
    uint256 unused, t;

    uint256 aM0, bM0, n0;
    uint512 r0, nPrime0;
    uint32 rExp0 = 252;
    uint256 p0;
    uint64 *aM0Raw = (uint64 *) &aM0, *bM0Raw = (uint64 *) &bM0, *n0Raw = (uint64 *) &n0, *r0Raw = (uint64 *) &r0;
    uint64 *p0Raw = (uint64 *) &p0;
    REDCAuxiliaryModulus<4> auxMod0(rExp0);

    aM0Raw[0] = 0x26c34a78936d2e1d, aM0Raw[1] = 0x3f92e1df736ff204, aM0Raw[2] = 0x7b75268ed6ff920a, aM0Raw[3] = 0x8ce1604c3691144;
    bM0Raw[0] = 0x0c242b0421964b29, bM0Raw[1] = 0x22bf09ca4f0aafdf, bM0Raw[2] = 0x4ef3b6af44fdcad2, bM0Raw[3] = 0x34d0f31b0a3565e;
    n0Raw[0] = 0xca87862d7cd3d4c7, n0Raw[1] = 0x783a27f6ac17b149, n0Raw[2] = 0xae614ca746878791, n0Raw[3] = 0xb0857b7a0fbb011;
    r0Raw[0] = 0x0000000000000000, r0Raw[1] = 0x0000000000000000, r0Raw[2] = 0x0000000000000000, r0Raw[3] = 0x1000000000000000;
    p0Raw[0] = 0xa7d4e3b8d79c193f, p0Raw[1] = 0xe4f68cdc6ce55ebd, p0Raw[2] = 0x9963d3738589698c, p0Raw[3] = 0x3e68257c42f963d;

    uint256 aM1, bM1, n1;
    uint512 r1, nPrime1;
    uint32 rExp1 = 253;
    uint256 p1;
    uint64 *aM1Raw = (uint64 *) &aM1, *bM1Raw = (uint64 *) &bM1, *n1Raw = (uint64 *) &n1, *r1Raw = (uint64 *) &r1;
    uint64 *p1Raw = (uint64 *) &p1;
    REDCAuxiliaryModulus<4> auxMod1(rExp1);

    aM1Raw[0] = 0x7d4dc136f70478cc, aM1Raw[1] = 0x05f1246109574aad, aM1Raw[2] = 0x7750ba61416d86ea, aM1Raw[3] = 0x144827997e31e441;
    bM1Raw[0] = 0xe118a9800525f512, bM1Raw[1] = 0x5c473e8ce55dd9b3, bM1Raw[2] = 0x57bb02ce704c9519, bM1Raw[3] = 0x127a343c433e3b9d;
    n1Raw[0] = 0x1550f85d9150cceb, n1Raw[1] = 0xc76532ed4eb40a28, n1Raw[2] = 0xf6fef2346ffd954a, n1Raw[3] = 0x1e668d3aa784779b;
    r1Raw[0] = 0x0000000000000000, r1Raw[1] = 0x0000000000000000, r1Raw[2] = 0x0000000000000000, r1Raw[3] = 0x2000000000000000;
    p1Raw[0] = 0x3516699ef1674ff7, p1Raw[1] = 0x4ebcc3798760eb57, p1Raw[2] = 0x0d7fb762c15ef624, p1Raw[3] = 0x2ebabe5f7e16ac6;

    uint256 aM2, bM2, n2;
    uint512 r2, nPrime2;
    uint32 rExp2 = 255;
    uint256 p2;
    uint64 *aM2Raw = (uint64 *) &aM2, *bM2Raw = (uint64 *) &bM2, *n2Raw = (uint64 *) &n2, *r2Raw = (uint64 *) &r2;
    uint64 *p2Raw = (uint64 *) &p2;
    REDCAuxiliaryModulus<4> auxMod2(rExp2);

    aM2Raw[0] = 0xde1f36ecbba96a50, aM2Raw[1] = 0xe4a8c249d489fdfc, aM2Raw[2] = 0x708b32b8a86bbc16, aM2Raw[3] = 0x442f18749156bd6c;
    bM2Raw[0] = 0xe698e52c1bb9e7b2, bM2Raw[1] = 0xeefbb5108ae57784, bM2Raw[2] = 0xe32914e8601c7bc1, bM2Raw[3] = 0x252e83becb108c20;
    n2Raw[0] = 0x8c2b6a2a8c891c7d, n2Raw[1] = 0x52cf93dd1fac81a1, n2Raw[2] = 0x82e2cd9709c79cbf, n2Raw[3] = 0x55f4f40899b8082f;
    r2Raw[0] = 0x0000000000000000, r2Raw[1] = 0x0000000000000000, r2Raw[2] = 0x0000000000000000, r2Raw[3] = 0x8000000000000000;
    p2Raw[0] = 0x636da969ad5092ae, p2Raw[1] = 0x05701142c7903403, p2Raw[2] = 0xfac03759683402ea, p2Raw[3] = 0x4ea859764f13503e;

    uint256 aM3, bM3, n3;
    uint512 r3, nPrime3;
    uint32 rExp3 = 253;
    uint256 p3;
    uint64 *aM3Raw = (uint64 *) &aM3, *bM3Raw = (uint64 *) &bM3, *n3Raw = (uint64 *) &n3, *r3Raw = (uint64 *) &r3;
    uint64 *p3Raw = (uint64 *) &p3;
    REDCAuxiliaryModulus<4> auxMod3(rExp3);

    aM3Raw[0] = 0xb55e7eef8d7a5c32, aM3Raw[1] = 0x5beafed2ef445628, aM3Raw[2] = 0x20a0170f38f024ae, aM3Raw[3] = 0x110803dc7f20738a;
    bM3Raw[0] = 0x64766461829c3f98, bM3Raw[1] = 0x3d48c1009307b1d7, bM3Raw[2] = 0x5f165b1c6e75ff6a, bM3Raw[3] = 0x14a2122e8f286a49;
    n3Raw[0] = 0x913f22537e95774b, n3Raw[1] = 0xca533146e24c4a6d, n3Raw[2] = 0x58f0d58d0add922e, n3Raw[3] = 0x14c88e96c2992945;
    r3Raw[0] = 0x0000000000000000, r3Raw[1] = 0x0000000000000000, r3Raw[2] = 0x0000000000000000, r3Raw[3] = 0x2000000000000000;
    p3Raw[0] = 0x5e0db7b65e485c8f, p3Raw[1] = 0xd4ac9dbfe587c016, p3Raw[2] = 0x4b72fa8c95f5cf93, p3Raw[3] = 0x78ccb3376607c86;

    // ACT
    extendedEuclidean(r0, n0, unused, nPrime0);

    t = redc(auxMod0, n0, -(uint256)nPrime0, aM0 * bM0);
    uint256 c0 = redc(auxMod0, n0, -(uint256)nPrime0, t);

    extendedEuclidean(r1, n1, unused, nPrime1);

    t = redc(auxMod1, n1, -(uint256)nPrime1, aM1 * bM1);
    uint256 c1 = redc(auxMod1, n1, -(uint256)nPrime1, t);

    extendedEuclidean(r2, n2, unused, nPrime2);

    t = redc(auxMod2, n2, -(uint256)nPrime2, aM2 * bM2);
    uint256 c2 = redc(auxMod2, n2, -(uint256)nPrime2, t);

    extendedEuclidean(r3, n3, unused, nPrime3);

    t = redc(auxMod3, n3, -(uint256)nPrime3, aM3 * bM3);
    uint256 c3 = redc(auxMod3, n3, -(uint256)nPrime3, t);


    // ASSERT
    ASSERT_EQ(c0, p0);
    ASSERT_EQ(c1, p1);
    ASSERT_EQ(c2, p2);
    ASSERT_EQ(c3, p3);
}

TEST(BigIntegerAlgorithmTests, REDC512Bit) {
    // ARRANGE
    uint512 unused, t;

    uint512 aM0, bM0, n0;
    uint1024 r0, nPrime0;
    uint32 rExp0 = 512;
    uint512 p0;
    uint64 *aM0Raw = (uint64 *) &aM0, *bM0Raw = (uint64 *) &bM0, *n0Raw = (uint64 *) &n0, *r0Raw = (uint64 *) &r0;
    uint64 *p0Raw = (uint64 *) &p0;
    REDCAuxiliaryModulus<8> auxMod0(rExp0);

    aM0Raw[0] = 0x32e06379774edafe, aM0Raw[1] = 0x7a34a5b527fc3ecd, aM0Raw[2] = 0x4c5a0612ad1faac2, aM0Raw[3] = 0x54353c3f749c72b0, aM0Raw[4] = 0x5d71c4419ecb98e0, aM0Raw[5] = 0x59d0b1be49649786, aM0Raw[6] = 0xf9c5fd0d17f32a95, aM0Raw[7] = 0x4ff2ba9420d1d7e7;
    bM0Raw[0] = 0x073aaadae228c63a, bM0Raw[1] = 0x43150114a788d0da, bM0Raw[2] = 0x616604560f8c7592, bM0Raw[3] = 0x411e848e927ebd12, bM0Raw[4] = 0x5ae084a986896f65, bM0Raw[5] = 0x904d117192ee7e8b, bM0Raw[6] = 0xce77734a7fd55c0e, bM0Raw[7] = 0x298dfcca36567062;
    n0Raw[0] = 0x269fe83409539f7b, n0Raw[1] = 0xb1f73210618b3648, n0Raw[2] = 0xbd0d29c5a0003fc8, n0Raw[3] = 0xdb0fbf1ce4eed997, n0Raw[4] = 0xf21f124f9269a885, n0Raw[5] = 0x320645825253cc4e, n0Raw[6] = 0x837883078b194928, n0Raw[7] = 0x8a5c5329eb1bebe6;
    r0Raw[0] = 0x0000000000000000, r0Raw[1] = 0x0000000000000000, r0Raw[2] = 0x0000000000000000, r0Raw[3] = 0x0000000000000000, r0Raw[4] = 0x0000000000000000, r0Raw[5] = 0x0000000000000000, r0Raw[6] = 0x0000000000000000, r0Raw[7] = 0x0000000000000000, r0Raw[8] = 0x1;
    p0Raw[0] = 0x4a3a43d11e08798b, p0Raw[1] = 0x4088dd6410411e2f, p0Raw[2] = 0x3da883778a4bf4d3, p0Raw[3] = 0xad97c57349e0e4c6, p0Raw[4] = 0xa313cfdfa87f8b79, p0Raw[5] = 0x204c4eb8614f3ceb, p0Raw[6] = 0x5b3c3ee173e078ec, p0Raw[7] = 0x3234efc2b5251a8b;

    uint512 aM1, bM1, n1;
    uint1024 r1, nPrime1;
    uint32 rExp1 = 512;
    uint512 p1;
    uint64 *aM1Raw = (uint64 *) &aM1, *bM1Raw = (uint64 *) &bM1, *n1Raw = (uint64 *) &n1, *r1Raw = (uint64 *) &r1;
    uint64 *p1Raw = (uint64 *) &p1;
    REDCAuxiliaryModulus<8> auxMod1(rExp1);

    aM1Raw[0] = 0xafce7b88d2558fa9, aM1Raw[1] = 0x194eccab2ccb8f59, aM1Raw[2] = 0x3bf43ef13049e37f, aM1Raw[3] = 0x2eeb490019a189ad, aM1Raw[4] = 0x3f7887c470740b74, aM1Raw[5] = 0x06281872b8629fbb, aM1Raw[6] = 0x0ee72b69c7834768, aM1Raw[7] = 0x373461202a3d0a5b;
    bM1Raw[0] = 0xfd19cf6dc4503e4e, bM1Raw[1] = 0x3c0432d6168a6a77, bM1Raw[2] = 0xeb57e809b0cfce84, bM1Raw[3] = 0x88e256b3d6c88950, bM1Raw[4] = 0xf71c14fb9f50345e, bM1Raw[5] = 0x9324e33a5fa7a1c2, bM1Raw[6] = 0xeebb787bdf3a8deb, bM1Raw[7] = 0x522ec6513bd0e772;
    n1Raw[0] = 0x8218b8b18f83c441, n1Raw[1] = 0x62302bba82e441e6, n1Raw[2] = 0xe2ce2f09dc0ce0a7, n1Raw[3] = 0x5acbc86cdd8876b2, n1Raw[4] = 0xd1b0729af8530ad7, n1Raw[5] = 0x7e1a141622ac35f0, n1Raw[6] = 0x8b9edd086a40dca3, n1Raw[7] = 0x9d71f09341eaab5d;
    r1Raw[0] = 0x0000000000000000, r1Raw[1] = 0x0000000000000000, r1Raw[2] = 0x0000000000000000, r1Raw[3] = 0x0000000000000000, r1Raw[4] = 0x0000000000000000, r1Raw[5] = 0x0000000000000000, r1Raw[6] = 0x0000000000000000, r1Raw[7] = 0x0000000000000000, r1Raw[8] = 0x1;
    p1Raw[0] = 0x6ae47a712f051fa2, p1Raw[1] = 0x995761be384f99ca, p1Raw[2] = 0xd50f79bb18e3c7f7, p1Raw[3] = 0x8f5c40d2b6124798, p1Raw[4] = 0x444a506c8a1e165f, p1Raw[5] = 0xe7b8ce87f4fcc0aa, p1Raw[6] = 0x6cf9c0475acf1e97, p1Raw[7] = 0x763e2ce71aeacd88;

    uint512 aM2, bM2, n2;
    uint1024 r2, nPrime2;
    uint32 rExp2 = 512;
    uint512 p2;
    uint64 *aM2Raw = (uint64 *) &aM2, *bM2Raw = (uint64 *) &bM2, *n2Raw = (uint64 *) &n2, *r2Raw = (uint64 *) &r2;
    uint64 *p2Raw = (uint64 *) &p2;
    REDCAuxiliaryModulus<8> auxMod2(rExp2);

    aM2Raw[0] = 0x523ae4957c23d16c, aM2Raw[1] = 0x7af712dc1e4b5afe, aM2Raw[2] = 0x8842b7e4bee903d8, aM2Raw[3] = 0x22f53dc59b94364a, aM2Raw[4] = 0x0ebb979678ac370a, aM2Raw[5] = 0x7e9126c95b909cb3, aM2Raw[6] = 0x9390b12e4e491bf6, aM2Raw[7] = 0x31724ca395b57b4d;
    bM2Raw[0] = 0xd153c9c398dfb16d, bM2Raw[1] = 0x2d6e37c5bfd3dc89, bM2Raw[2] = 0xafd63c0f004864d3, bM2Raw[3] = 0x43cf3aae5731da93, bM2Raw[4] = 0x641b6e1e0738aa7d, bM2Raw[5] = 0xdcb7c57a1e5b93a3, bM2Raw[6] = 0x18ff8bf7c1acac56, bM2Raw[7] = 0x97d5c4d5eb507c81;
    n2Raw[0] = 0xa22fc43d7311d44d, n2Raw[1] = 0x64aa54c42c1983fc, n2Raw[2] = 0x596177098e6f1106, n2Raw[3] = 0x97632785dfe8e92b, n2Raw[4] = 0x1fc1d9c1231362d4, n2Raw[5] = 0x5bdac0c172611a26, n2Raw[6] = 0x9666cef48919708e, n2Raw[7] = 0xd0f93011d25569cc;
    r2Raw[0] = 0x0000000000000000, r2Raw[1] = 0x0000000000000000, r2Raw[2] = 0x0000000000000000, r2Raw[3] = 0x0000000000000000, r2Raw[4] = 0x0000000000000000, r2Raw[5] = 0x0000000000000000, r2Raw[6] = 0x0000000000000000, r2Raw[7] = 0x0000000000000000, r2Raw[8] = 0x1;
    p2Raw[0] = 0x62edc2ee6e9a91df, p2Raw[1] = 0x3aafc861c9420936, p2Raw[2] = 0x9c785d235230ce31, p2Raw[3] = 0x542f314a368e3a6a, p2Raw[4] = 0x8acbc6376806502b, p2Raw[5] = 0x6aea3c5a96750b9c, p2Raw[6] = 0x26fd7948bc4a70c0, p2Raw[7] = 0x1e1fad61129ecd1;

    uint512 aM3, bM3, n3;
    uint1024 r3, nPrime3;
    uint32 rExp3 = 511;
    uint512 p3;
    uint64 *aM3Raw = (uint64 *) &aM3, *bM3Raw = (uint64 *) &bM3, *n3Raw = (uint64 *) &n3, *r3Raw = (uint64 *) &r3;
    uint64 *p3Raw = (uint64 *) &p3;
    REDCAuxiliaryModulus<8> auxMod3(rExp3);

    aM3Raw[0] = 0xdceb22785d2fd8d3, aM3Raw[1] = 0xce4f09a89e91a355, aM3Raw[2] = 0x473ff204b67b7ddc, aM3Raw[3] = 0xe8096c72a615607a, aM3Raw[4] = 0x227308458370853e, aM3Raw[5] = 0xdc702288dcff2319, aM3Raw[6] = 0x0a11237cc99e9357, aM3Raw[7] = 0xd867a9ad76481a6;
    bM3Raw[0] = 0x42d1ef9da3a155c1, bM3Raw[1] = 0x39c51c509c021b19, bM3Raw[2] = 0xff30d673b39da92a, bM3Raw[3] = 0x8f8e74ec3941a84a, bM3Raw[4] = 0x21106225e922eadd, bM3Raw[5] = 0x359fc4f390fedd26, bM3Raw[6] = 0xa3d9c847fe1f1085, bM3Raw[7] = 0x5e9e4bc4a2f3dfa8;
    n3Raw[0] = 0xca014779c69331d5, n3Raw[1] = 0x5d003182f9c690b4, n3Raw[2] = 0xc4e9f0a8e827bf8d, n3Raw[3] = 0xa69f269f603a79a5, n3Raw[4] = 0xb293b5e56b16c86b, n3Raw[5] = 0x680adefd292ce5eb, n3Raw[6] = 0x9fc84403f5da734a, n3Raw[7] = 0x751c971559293a7a;
    r3Raw[0] = 0x0000000000000000, r3Raw[1] = 0x0000000000000000, r3Raw[2] = 0x0000000000000000, r3Raw[3] = 0x0000000000000000, r3Raw[4] = 0x0000000000000000, r3Raw[5] = 0x0000000000000000, r3Raw[6] = 0x0000000000000000, r3Raw[7] = 0x8000000000000000;
    p3Raw[0] = 0xa2983545b7b01be9, p3Raw[1] = 0x83bb3376e2457ca8, p3Raw[2] = 0x44b3cf786d65839c, p3Raw[3] = 0xd9f35bf7cf8987c2, p3Raw[4] = 0xfa2fbd70e275dad9, p3Raw[5] = 0x4285235b6849a7e3, p3Raw[6] = 0xde90209b5d157069, p3Raw[7] = 0x873591032610580;

    // ACT
    extendedEuclidean(r0, n0, unused, nPrime0);

    t = redc(auxMod0, n0, -(uint512)nPrime0, aM0 * bM0);
    uint512 c0 = redc(auxMod0, n0, -(uint512)nPrime0, t);

    extendedEuclidean(r1, n1, unused, nPrime1);

    t = redc(auxMod1, n1, -(uint512)nPrime1, aM1 * bM1);
    uint512 c1 = redc(auxMod1, n1, -(uint512)nPrime1, t);

    extendedEuclidean(r2, n2, unused, nPrime2);

    t = redc(auxMod2, n2, -(uint512)nPrime2, aM2 * bM2);
    uint512 c2 = redc(auxMod2, n2, -(uint512)nPrime2, t);

    extendedEuclidean(r3, n3, unused, nPrime3);

    t = redc(auxMod3, n3, -(uint512)nPrime3, aM3 * bM3);
    uint512 c3 = redc(auxMod3, n3, -(uint512)nPrime3, t);


    // ASSERT
    ASSERT_EQ(c0, p0);
    ASSERT_EQ(c1, p1);
    ASSERT_EQ(c2, p2);
    ASSERT_EQ(c3, p3);
}

TEST(BigIntegerAlgorithmTests, REDC1024Bit) {
    // ARRANGE
    uint1024 unused, t;

    uint1024 aM0, bM0, n0;
    uint2048 r0, nPrime0;
    uint32 rExp0 = 1021;
    uint1024 p0;
    uint64 *aM0Raw = (uint64 *) &aM0, *bM0Raw = (uint64 *) &bM0, *n0Raw = (uint64 *) &n0, *r0Raw = (uint64 *) &r0;
    uint64 *p0Raw = (uint64 *) &p0;
    REDCAuxiliaryModulus<16> auxMod0(rExp0);

    aM0Raw[0] = 0x07f1c4da07a24599, aM0Raw[1] = 0xefd7cce6a4a55aa2, aM0Raw[2] = 0x2cf32bb502e122c3, aM0Raw[3] = 0x1bd4a608e63eaad9, aM0Raw[4] = 0x542d49e85df69482, aM0Raw[5] = 0xa31e4cc0ada4a90c, aM0Raw[6] = 0x02d548fc3d68cdf1, aM0Raw[7] = 0x1d3a7aae3f820718, aM0Raw[8] = 0xd9e377627729258f, aM0Raw[9] = 0xf6e0b3acd132b484, aM0Raw[10] = 0x83b83756025a1694, aM0Raw[11] = 0xf829991a2f66800b, aM0Raw[12] = 0x578a5a874947c1e3, aM0Raw[13] = 0x5c4805e4ee171f45, aM0Raw[14] = 0xde685c1c4d5758ab, aM0Raw[15] = 0x13896157664f4607;
    bM0Raw[0] = 0x081a9f9eff9c965f, bM0Raw[1] = 0x50cc2f5289149dd5, bM0Raw[2] = 0x92c048f3f7da1fdf, bM0Raw[3] = 0xec728810b4fa4d1b, bM0Raw[4] = 0xfcd8b317130c1ab3, bM0Raw[5] = 0x58da52de01b1adeb, bM0Raw[6] = 0x1a32dc47daaeb128, bM0Raw[7] = 0x70599a9ccd38d77d, bM0Raw[8] = 0x2d63f0dd3cf114f7, bM0Raw[9] = 0xe57b9abcf491950a, bM0Raw[10] = 0x9d9f3130a4c70dc1, bM0Raw[11] = 0xa5193ae7591161b0, bM0Raw[12] = 0xfa5cef5a02ca04fb, bM0Raw[13] = 0x191e1737d0719d15, bM0Raw[14] = 0x26043fd6d5a5e891, bM0Raw[15] = 0x10281f3cae7d9d74;
    n0Raw[0] = 0x7f1d140df26c22b1, n0Raw[1] = 0xf0c715513977325d, n0Raw[2] = 0xfbc8eba6d58be7d6, n0Raw[3] = 0x1c7a9babd1b87b4e, n0Raw[4] = 0x3e843025a23a3a5c, n0Raw[5] = 0xb10d883d7e0682ec, n0Raw[6] = 0x96e16b3f500c5739, n0Raw[7] = 0x195c1a1508e0a7df, n0Raw[8] = 0xa96dacaba9510db8, n0Raw[9] = 0x0bfe8707c000b5c8, n0Raw[10] = 0xf35125ea2602fab3, n0Raw[11] = 0x6b546cfbd6cc6ebf, n0Raw[12] = 0xd9d4d605bba2df7a, n0Raw[13] = 0x8249e29253341b78, n0Raw[14] = 0x98c834249c32c01f, n0Raw[15] = 0x1b4ef8b121592efb;
    r0Raw[0] = 0x0000000000000000, r0Raw[1] = 0x0000000000000000, r0Raw[2] = 0x0000000000000000, r0Raw[3] = 0x0000000000000000, r0Raw[4] = 0x0000000000000000, r0Raw[5] = 0x0000000000000000, r0Raw[6] = 0x0000000000000000, r0Raw[7] = 0x0000000000000000, r0Raw[8] = 0x0000000000000000, r0Raw[9] = 0x0000000000000000, r0Raw[10] = 0x0000000000000000, r0Raw[11] = 0x0000000000000000, r0Raw[12] = 0x0000000000000000, r0Raw[13] = 0x0000000000000000, r0Raw[14] = 0x0000000000000000, r0Raw[15] = 0x2000000000000000;
    p0Raw[0] = 0x9ef0cabc9ae7e3be, p0Raw[1] = 0x643ac270ee1e604b, p0Raw[2] = 0x03b7e3525b0be4ca, p0Raw[3] = 0x909c882bb99a04ce, p0Raw[4] = 0xfa7bf25d5f9f78d8, p0Raw[5] = 0x07b7a0fffcbe010e, p0Raw[6] = 0x49a8528fbfc4af4f, p0Raw[7] = 0x10e2c47274772947, p0Raw[8] = 0xc5e57430e8ab6baa, p0Raw[9] = 0x5c46268cdf8831cd, p0Raw[10] = 0x89e9e8281a24526b, p0Raw[11] = 0xd2822611e80e48a1, p0Raw[12] = 0xcff27fdbebc25b91, p0Raw[13] = 0xb745360f3f6d156a, p0Raw[14] = 0x8b91193cc02b5c77, p0Raw[15] = 0x6b2bc17e744a5dc;

    uint1024 aM1, bM1, n1;
    uint2048 r1, nPrime1;
    uint32 rExp1 = 1022;
    uint1024 p1;
    uint64 *aM1Raw = (uint64 *) &aM1, *bM1Raw = (uint64 *) &bM1, *n1Raw = (uint64 *) &n1, *r1Raw = (uint64 *) &r1;
    uint64 *p1Raw = (uint64 *) &p1;
    REDCAuxiliaryModulus<16> auxMod1(rExp1);

    aM1Raw[0] = 0x80bd871c1a413656, aM1Raw[1] = 0xfa0c24d3c2a35487, aM1Raw[2] = 0x0a1227babea9ac3c, aM1Raw[3] = 0x04867a6cf05b32e2, aM1Raw[4] = 0x791af438c147c986, aM1Raw[5] = 0x95af6015c87e9677, aM1Raw[6] = 0x8daf22764a02968d, aM1Raw[7] = 0xb07ed261820ff6a5, aM1Raw[8] = 0x13de95b9075db1c4, aM1Raw[9] = 0x8cf6c044e94bbea6, aM1Raw[10] = 0xf645ad978ff6f771, aM1Raw[11] = 0xf8b369a413565c1e, aM1Raw[12] = 0x2d990faf47710308, aM1Raw[13] = 0x77032f213a6d7ea3, aM1Raw[14] = 0x8c9b0394d2448247, aM1Raw[15] = 0x8b9f8ff43c20fd0;
    bM1Raw[0] = 0x8d6f2bd982d62722, bM1Raw[1] = 0xc61a19fbe14502a8, bM1Raw[2] = 0x808e064478100139, bM1Raw[3] = 0x3def5282d2b47f5f, bM1Raw[4] = 0x276720d72398561e, bM1Raw[5] = 0x72137a64d67d16af, bM1Raw[6] = 0xab0ea9716d118ae3, bM1Raw[7] = 0xe7beac99c72aff5d, bM1Raw[8] = 0x588b047e767c6858, bM1Raw[9] = 0x7c7248a412ef18f1, bM1Raw[10] = 0x6d2b952a88009797, bM1Raw[11] = 0xde7275b95b8efece, bM1Raw[12] = 0xcaa4309aca4effcf, bM1Raw[13] = 0x1c9982a051a63a6c, bM1Raw[14] = 0x98c7963e7ecc1680, bM1Raw[15] = 0x1d059c0c63a90682;
    n1Raw[0] = 0x46fc01f006d2bff7, n1Raw[1] = 0x01b87af4c7ada210, n1Raw[2] = 0xdf091493e8ebd2cb, n1Raw[3] = 0x1e3cff1781fe3618, n1Raw[4] = 0x9ca8a172440c4d5b, n1Raw[5] = 0xccea083eb5c1a1ef, n1Raw[6] = 0xed7dd660c420475f, n1Raw[7] = 0xd57c7b8d2abf1e3b, n1Raw[8] = 0x6d2e9a8fb831fb8f, n1Raw[9] = 0xa24b85f47a74e314, n1Raw[10] = 0x267adc58cc4d0d26, n1Raw[11] = 0x5ab7021ee1829fa3, n1Raw[12] = 0x32b9dae4253aff1c, n1Raw[13] = 0xb900749eaa76d100, n1Raw[14] = 0x9f0da134ea66e8e9, n1Raw[15] = 0x24f595c42db2b618;
    r1Raw[0] = 0x0000000000000000, r1Raw[1] = 0x0000000000000000, r1Raw[2] = 0x0000000000000000, r1Raw[3] = 0x0000000000000000, r1Raw[4] = 0x0000000000000000, r1Raw[5] = 0x0000000000000000, r1Raw[6] = 0x0000000000000000, r1Raw[7] = 0x0000000000000000, r1Raw[8] = 0x0000000000000000, r1Raw[9] = 0x0000000000000000, r1Raw[10] = 0x0000000000000000, r1Raw[11] = 0x0000000000000000, r1Raw[12] = 0x0000000000000000, r1Raw[13] = 0x0000000000000000, r1Raw[14] = 0x0000000000000000, r1Raw[15] = 0x4000000000000000;
    p1Raw[0] = 0xcef76986416699fc, p1Raw[1] = 0xfd96a998d056f4ff, p1Raw[2] = 0xd4460aa19202025b, p1Raw[3] = 0xad34a38cb862fc73, p1Raw[4] = 0x6b311233bc6b3399, p1Raw[5] = 0x3bc70687c161bd2d, p1Raw[6] = 0x39969041bf4b8f6e, p1Raw[7] = 0x0e6f2d3b752749d3, p1Raw[8] = 0xbf95ebd86f8a8ef1, p1Raw[9] = 0x22fbd96de533ffdc, p1Raw[10] = 0x88d5918e62640a64, p1Raw[11] = 0x219dabc2c62320e1, p1Raw[12] = 0xd26ad19cabf8c920, p1Raw[13] = 0x9ab491ef9fb4acb7, p1Raw[14] = 0x538669f7de7f7159, p1Raw[15] = 0x1efb625e94d4d365;

    uint1024 aM2, bM2, n2;
    uint2048 r2, nPrime2;
    uint32 rExp2 = 1024;
    uint1024 p2;
    uint64 *aM2Raw = (uint64 *) &aM2, *bM2Raw = (uint64 *) &bM2, *n2Raw = (uint64 *) &n2, *r2Raw = (uint64 *) &r2;
    uint64 *p2Raw = (uint64 *) &p2;
    REDCAuxiliaryModulus<16> auxMod2(rExp2);

    aM2Raw[0] = 0x7dc59abd04c31d84, aM2Raw[1] = 0x17442539fc961be4, aM2Raw[2] = 0x90c0188b84a19724, aM2Raw[3] = 0x12b9f4a6b7c23987, aM2Raw[4] = 0x63cc14a394341c9e, aM2Raw[5] = 0xb1767fda5178488e, aM2Raw[6] = 0xf3d4d9a7e0d15985, aM2Raw[7] = 0x1a762ca9254101aa, aM2Raw[8] = 0xb00bee19f18ae556, aM2Raw[9] = 0xe6b3ba14e788a5f9, aM2Raw[10] = 0x027634e1aef6469a, aM2Raw[11] = 0x991e30c885cdab0d, aM2Raw[12] = 0x471d05e201a08807, aM2Raw[13] = 0x34e64d8f2c51f3cc, aM2Raw[14] = 0x9420abeacddbfbb6, aM2Raw[15] = 0xf0881820945b0f44;
    bM2Raw[0] = 0x0bb73e34f451149b, bM2Raw[1] = 0x191b07e4c3081720, bM2Raw[2] = 0xb144c14e648c6d9f, bM2Raw[3] = 0x2ec080e305e4e9a5, bM2Raw[4] = 0x55003758cb7ababf, bM2Raw[5] = 0xe203974a4ba3c322, bM2Raw[6] = 0xec0bc1f7daafb023, bM2Raw[7] = 0x9cdb34eebfd07921, bM2Raw[8] = 0x09b21bdb462521d8, bM2Raw[9] = 0xcb1cb21d7c172f96, bM2Raw[10] = 0x309c48dc0656a892, bM2Raw[11] = 0x3e22e85c36290939, bM2Raw[12] = 0x46b42ef90e346e97, bM2Raw[13] = 0x5e056124c2961880, bM2Raw[14] = 0x7ccfde052e8de3de, bM2Raw[15] = 0x7eb4552c9fd449f0;
    n2Raw[0] = 0x043db5a08cee43a3, n2Raw[1] = 0x280aa7304a38336a, n2Raw[2] = 0x51623fe658c4b8d5, n2Raw[3] = 0xfa23ed463a34d54d, n2Raw[4] = 0x05873fd1e2de2849, n2Raw[5] = 0x11c19af4cfa69bb3, n2Raw[6] = 0x62e65471ef125958, n2Raw[7] = 0x241eb21f24cd4735, n2Raw[8] = 0xe53da08f7d6c95f7, n2Raw[9] = 0xbe3032c98d3c71a7, n2Raw[10] = 0x62ebce4b22e0f4d1, n2Raw[11] = 0xd06c03ba4351b0cf, n2Raw[12] = 0x6e692ef3505e958b, n2Raw[13] = 0x5e230c19d319747c, n2Raw[14] = 0x02d21a5df9dbcbbd, n2Raw[15] = 0xf7606c27bcb4e26e;
    r2Raw[0] = 0x0000000000000000, r2Raw[1] = 0x0000000000000000, r2Raw[2] = 0x0000000000000000, r2Raw[3] = 0x0000000000000000, r2Raw[4] = 0x0000000000000000, r2Raw[5] = 0x0000000000000000, r2Raw[6] = 0x0000000000000000, r2Raw[7] = 0x0000000000000000, r2Raw[8] = 0x0000000000000000, r2Raw[9] = 0x0000000000000000, r2Raw[10] = 0x0000000000000000, r2Raw[11] = 0x0000000000000000, r2Raw[12] = 0x0000000000000000, r2Raw[13] = 0x0000000000000000, r2Raw[14] = 0x0000000000000000, r2Raw[15] = 0x0000000000000000, r2Raw[16] = 0x1;
    p2Raw[0] = 0xfb9936e63ea5b452, p2Raw[1] = 0xe604e8d95d52135e, p2Raw[2] = 0xb118ee1402105f8b, p2Raw[3] = 0xa4a8a80dfd9ea51f, p2Raw[4] = 0x6fa9cc72bb399df7, p2Raw[5] = 0x571e1bc0303a9563, p2Raw[6] = 0xd786b028d67a6018, p2Raw[7] = 0xde5a81ee783b2e56, p2Raw[8] = 0x2abb20fd4689bcd5, p2Raw[9] = 0x4a854e304664d3a5, p2Raw[10] = 0xff3a6fddc06fb5fe, p2Raw[11] = 0x8a41437be2cc303a, p2Raw[12] = 0xd118e3b9eba0439d, p2Raw[13] = 0x1b06f61dc2f45377, p2Raw[14] = 0x3892d5a1cd73a848, p2Raw[15] = 0x2f884fb52962616e;

    uint1024 aM3, bM3, n3;
    uint2048 r3, nPrime3;
    uint32 rExp3 = 1023;
    uint1024 p3;
    uint64 *aM3Raw = (uint64 *) &aM3, *bM3Raw = (uint64 *) &bM3, *n3Raw = (uint64 *) &n3, *r3Raw = (uint64 *) &r3;
    uint64 *p3Raw = (uint64 *) &p3;
    REDCAuxiliaryModulus<16> auxMod3(rExp3);

    aM3Raw[0] = 0x25b0713005528c70, aM3Raw[1] = 0xe45a0136d0b7f9da, aM3Raw[2] = 0x2cec2d82fca9938b, aM3Raw[3] = 0x03050ca057f6c2b8, aM3Raw[4] = 0x1d65c72fb2d025bc, aM3Raw[5] = 0x05f69c3655876c3b, aM3Raw[6] = 0xff5adbadb0742fe1, aM3Raw[7] = 0x82cb104f0284cace, aM3Raw[8] = 0x4b6bbc131c35328b, aM3Raw[9] = 0x3bb49d7664f25750, aM3Raw[10] = 0x89afda0d5848e41e, aM3Raw[11] = 0xfe95d5c10acc32ce, aM3Raw[12] = 0x60bafde8a5c2e2bf, aM3Raw[13] = 0x9946b2b0c7ae2717, aM3Raw[14] = 0x8fa247f2f374db68, aM3Raw[15] = 0x42b72c1710eee855;
    bM3Raw[0] = 0x341c8bb131f4a148, bM3Raw[1] = 0x7e82638bf78c7297, bM3Raw[2] = 0x9acaab5961b0496b, bM3Raw[3] = 0x546a1a101ec26ecb, bM3Raw[4] = 0x46805a3e8d753dbb, bM3Raw[5] = 0x5de40ce399b1e4a4, bM3Raw[6] = 0x698b6753f034921b, bM3Raw[7] = 0x22f040589bfd2712, bM3Raw[8] = 0x3d3c9e836a7f7962, bM3Raw[9] = 0xe668d6c101618b08, bM3Raw[10] = 0x07e4000467831918, bM3Raw[11] = 0x39e1e2c0578f9567, bM3Raw[12] = 0x97ca2606a09e804f, bM3Raw[13] = 0x8660842f71f94dc1, bM3Raw[14] = 0x00a8edd3fa2230a9, bM3Raw[15] = 0x1545d41b128efbaa;
    n3Raw[0] = 0xe914c812aea7eeff, n3Raw[1] = 0xaa200eaa2014e6bf, n3Raw[2] = 0x8baf0a7d70493172, n3Raw[3] = 0x8d48c11b4bc869ab, n3Raw[4] = 0x1d50dd5f1b435bcd, n3Raw[5] = 0x55ca6a1f010d9dcc, n3Raw[6] = 0x6fc2afb657e52fa4, n3Raw[7] = 0xea6c1819b2bf2043, n3Raw[8] = 0x67d9b2fe81eb03fe, n3Raw[9] = 0xd2f81c95789f3c65, n3Raw[10] = 0xf9ac27e75ad50c3e, n3Raw[11] = 0xa63b3309b0bad6be, n3Raw[12] = 0xe5c3b062601ae5d0, n3Raw[13] = 0x6321250411c853ad, n3Raw[14] = 0xa7bd62acb071b0da, n3Raw[15] = 0x6b5d4807a7a22d4a;
    r3Raw[0] = 0x0000000000000000, r3Raw[1] = 0x0000000000000000, r3Raw[2] = 0x0000000000000000, r3Raw[3] = 0x0000000000000000, r3Raw[4] = 0x0000000000000000, r3Raw[5] = 0x0000000000000000, r3Raw[6] = 0x0000000000000000, r3Raw[7] = 0x0000000000000000, r3Raw[8] = 0x0000000000000000, r3Raw[9] = 0x0000000000000000, r3Raw[10] = 0x0000000000000000, r3Raw[11] = 0x0000000000000000, r3Raw[12] = 0x0000000000000000, r3Raw[13] = 0x0000000000000000, r3Raw[14] = 0x0000000000000000, r3Raw[15] = 0x8000000000000000;
    p3Raw[0] = 0x6e595703b6390320, p3Raw[1] = 0x4194b3dcc22f83fb, p3Raw[2] = 0x5175d9efd3d7829b, p3Raw[3] = 0x118f0b45862e0c6e, p3Raw[4] = 0xb1e4131bf2262ecb, p3Raw[5] = 0x6555532169ccee5a, p3Raw[6] = 0x3c5b2e3ce4db3c8b, p3Raw[7] = 0x5fe02ad7992af295, p3Raw[8] = 0x18dc1e1830969b27, p3Raw[9] = 0x6f48e7ba17214742, p3Raw[10] = 0x6dab696d11fa96a6, p3Raw[11] = 0x53238155a332a2d8, p3Raw[12] = 0x8967ca0894135c35, p3Raw[13] = 0xbdd426fbb249f344, p3Raw[14] = 0x86a12f306e685350, p3Raw[15] = 0x2658ab2a94061e5c;

    // ACT
    extendedEuclidean(r0, n0, unused, nPrime0);

    t = redc(auxMod0, n0, -(uint1024)nPrime0, aM0 * bM0);
    uint1024 c0 = redc(auxMod0, n0, -(uint1024)nPrime0, t);

    extendedEuclidean(r1, n1, unused, nPrime1);

    t = redc(auxMod1, n1, -(uint1024)nPrime1, aM1 * bM1);
    uint1024 c1 = redc(auxMod1, n1, -(uint1024)nPrime1, t);

    extendedEuclidean(r2, n2, unused, nPrime2);

    t = redc(auxMod2, n2, -(uint1024)nPrime2, aM2 * bM2);
    uint1024 c2 = redc(auxMod2, n2, -(uint1024)nPrime2, t);

    extendedEuclidean(r3, n3, unused, nPrime3);

    t = redc(auxMod3, n3, -(uint1024)nPrime3, aM3 * bM3);
    uint1024 c3 = redc(auxMod3, n3, -(uint1024)nPrime3, t);


    // ASSERT
    ASSERT_EQ(c0, p0);
    ASSERT_EQ(c1, p1);
    ASSERT_EQ(c2, p2);
    ASSERT_EQ(c3, p3);
}

TEST(BigIntegerAlgorithmTests, REDC2048Bit) {
    // ARRANGE
    uint2048 unused, t;

    uint2048 aM0, bM0, n0;
    uint4096 r0, nPrime0;
    uint32 rExp0 = 2047;
    uint2048 p0;
    uint64 *aM0Raw = (uint64 *) &aM0, *bM0Raw = (uint64 *) &bM0, *n0Raw = (uint64 *) &n0, *r0Raw = (uint64 *) &r0;
    uint64 *p0Raw = (uint64 *) &p0;
    REDCAuxiliaryModulus<32> auxMod0(rExp0);

    aM0Raw[0] = 0x8d7a9c95aa7bf521, aM0Raw[1] = 0x17581ef8145fedfb, aM0Raw[2] = 0x111955bc5d83e6aa, aM0Raw[3] = 0x999887dab7b0abe9, aM0Raw[4] = 0xd0e43ff19c72c06f, aM0Raw[5] = 0x46ea1bc794f04fc3, aM0Raw[6] = 0xf0faf20e6f45766e, aM0Raw[7] = 0x5c2aff5dc45b499e, aM0Raw[8] = 0x9c8ee7523a69473c, aM0Raw[9] = 0x3e02b8770ec88279, aM0Raw[10] = 0xf865b90a411d046a, aM0Raw[11] = 0x20d558eeb0aa6ba1, aM0Raw[12] = 0x0b796c42f52b7b36, aM0Raw[13] = 0x12174ba1993456c9, aM0Raw[14] = 0x7ab051a8e14b2bcf, aM0Raw[15] = 0x5a21723a5a607c26, aM0Raw[16] = 0x69ee844f78290d2c, aM0Raw[17] = 0x67696fc03eff017a, aM0Raw[18] = 0x4008efb47ade52ea, aM0Raw[19] = 0xcf83714cf21f5538, aM0Raw[20] = 0x7875297f8bbfe708, aM0Raw[21] = 0xe1e90a4f0300d78c, aM0Raw[22] = 0xe6471043eac4a285, aM0Raw[23] = 0xb254c0515e169c7a, aM0Raw[24] = 0x7ba6c71145b85380, aM0Raw[25] = 0x54f8e6fc43649748, aM0Raw[26] = 0xce1dc33284be364e, aM0Raw[27] = 0xbe227caff2cdc6fc, aM0Raw[28] = 0x339e05d635c331a0, aM0Raw[29] = 0x81671b6fdf65973d, aM0Raw[30] = 0x2df04c3c44530b3b, aM0Raw[31] = 0x36d2f008224f8c14;
    bM0Raw[0] = 0x5297d291f53255d0, bM0Raw[1] = 0xb61fa6af26f54902, bM0Raw[2] = 0x88b78541e5f29c64, bM0Raw[3] = 0xa992a0be8160b46a, bM0Raw[4] = 0x99963011bb707345, bM0Raw[5] = 0xc2932290b6e203f1, bM0Raw[6] = 0xde8dcbe737a1db58, bM0Raw[7] = 0x7e1484546734acee, bM0Raw[8] = 0xa7b34d15caaf0d8b, bM0Raw[9] = 0xea2a8b3d829168f3, bM0Raw[10] = 0x2a797209c97048f5, bM0Raw[11] = 0xc81f2792f3faecca, bM0Raw[12] = 0x9f9434f349333a04, bM0Raw[13] = 0xf2d101b2b84ace04, bM0Raw[14] = 0xb72f0cf810096d17, bM0Raw[15] = 0x55718aa71b8440db, bM0Raw[16] = 0xec4e6978a1c814df, bM0Raw[17] = 0x7d6d897e51f9c240, bM0Raw[18] = 0x5f8d20e08b265499, bM0Raw[19] = 0xb24a5f055aa5e8eb, bM0Raw[20] = 0x668a5ffffe0a1230, bM0Raw[21] = 0x9255984fe6007a47, bM0Raw[22] = 0x2decf2b5bb59019d, bM0Raw[23] = 0x7de2154f7887338b, bM0Raw[24] = 0x188ce14295809511, bM0Raw[25] = 0x009d68238fa0913a, bM0Raw[26] = 0x29d5185f7c208988, bM0Raw[27] = 0x90700883d03f7a6a, bM0Raw[28] = 0x3a45ec16f5d2521f, bM0Raw[29] = 0xe6525a39b245eb02, bM0Raw[30] = 0x310499216ba7995d, bM0Raw[31] = 0x26e24a732b1910ad;
    n0Raw[0] = 0x25263a748c42478f, n0Raw[1] = 0x4dd21fe2bc01c7c4, n0Raw[2] = 0x14c419fc68a95db6, n0Raw[3] = 0xc8c97228b87a6e92, n0Raw[4] = 0xa719ee811e852593, n0Raw[5] = 0xcdac6dcdfe5493b3, n0Raw[6] = 0xe6a1213463a76fae, n0Raw[7] = 0x1cd7199f8c6ff6be, n0Raw[8] = 0xa4e5d426622ea3db, n0Raw[9] = 0xad4b49229834a00e, n0Raw[10] = 0xc1be595f4eb43fd9, n0Raw[11] = 0xa03def53f75512f5, n0Raw[12] = 0xd7746bdccb4a8d39, n0Raw[13] = 0x14710ca83d174a75, n0Raw[14] = 0x27248054cedb72ea, n0Raw[15] = 0x0f9c8079aa5887d3, n0Raw[16] = 0xe6f3b9a61f59d42e, n0Raw[17] = 0x233480dffa2da35b, n0Raw[18] = 0x4004c1d0cc779163, n0Raw[19] = 0x34fa8801213623a2, n0Raw[20] = 0xb391db251cc000c8, n0Raw[21] = 0x27e22df1542206ea, n0Raw[22] = 0x417af8a6c023270f, n0Raw[23] = 0xee43123757a44f65, n0Raw[24] = 0x4dd25f8d1a420623, n0Raw[25] = 0x004fa4773e60814e, n0Raw[26] = 0xb8b9c385eb21a0b8, n0Raw[27] = 0x55b46e1be06dab54, n0Raw[28] = 0xa80888b376c02ce5, n0Raw[29] = 0xa42621c5fba87e7b, n0Raw[30] = 0x68e8a7964ee3cb28, n0Raw[31] = 0x4f3dabc9071f3506;
    r0Raw[0] = 0x0000000000000000, r0Raw[1] = 0x0000000000000000, r0Raw[2] = 0x0000000000000000, r0Raw[3] = 0x0000000000000000, r0Raw[4] = 0x0000000000000000, r0Raw[5] = 0x0000000000000000, r0Raw[6] = 0x0000000000000000, r0Raw[7] = 0x0000000000000000, r0Raw[8] = 0x0000000000000000, r0Raw[9] = 0x0000000000000000, r0Raw[10] = 0x0000000000000000, r0Raw[11] = 0x0000000000000000, r0Raw[12] = 0x0000000000000000, r0Raw[13] = 0x0000000000000000, r0Raw[14] = 0x0000000000000000, r0Raw[15] = 0x0000000000000000, r0Raw[16] = 0x0000000000000000, r0Raw[17] = 0x0000000000000000, r0Raw[18] = 0x0000000000000000, r0Raw[19] = 0x0000000000000000, r0Raw[20] = 0x0000000000000000, r0Raw[21] = 0x0000000000000000, r0Raw[22] = 0x0000000000000000, r0Raw[23] = 0x0000000000000000, r0Raw[24] = 0x0000000000000000, r0Raw[25] = 0x0000000000000000, r0Raw[26] = 0x0000000000000000, r0Raw[27] = 0x0000000000000000, r0Raw[28] = 0x0000000000000000, r0Raw[29] = 0x0000000000000000, r0Raw[30] = 0x0000000000000000, r0Raw[31] = 0x8000000000000000;
    p0Raw[0] = 0x8a7894a5f7c6d56f, p0Raw[1] = 0x62170a6f878030e7, p0Raw[2] = 0xef35acd6b2b29655, p0Raw[3] = 0x3b1049ae955d173d, p0Raw[4] = 0x0988e272f612648f, p0Raw[5] = 0xe803bce3ac0d5048, p0Raw[6] = 0x17098d3cf2bd052b, p0Raw[7] = 0xc1b87097ecc0921a, p0Raw[8] = 0x81bea84c452a37b1, p0Raw[9] = 0x3268f981062cc36d, p0Raw[10] = 0x6bcc722c62d403cc, p0Raw[11] = 0x759b8e2f155835f6, p0Raw[12] = 0x437a6fba1c18581d, p0Raw[13] = 0x62bd9f397b3bf19d, p0Raw[14] = 0x064db7d065b9cf0d, p0Raw[15] = 0x7d20b48886968963, p0Raw[16] = 0xb015ca5c06727c73, p0Raw[17] = 0xa1e46d28c00d05f9, p0Raw[18] = 0x9202d764b9914ca9, p0Raw[19] = 0x97b243a54acadab8, p0Raw[20] = 0xefe883431fba0537, p0Raw[21] = 0x334675b09117893f, p0Raw[22] = 0xdcd10cf5a11f3fdd, p0Raw[23] = 0x38fb23d14ec19636, p0Raw[24] = 0x8f50563b7ab987b8, p0Raw[25] = 0x1d23811d162ea757, p0Raw[26] = 0x6a2cd91085c6b0a6, p0Raw[27] = 0x6b76014e45bddb21, p0Raw[28] = 0x677ade80636e4d4c, p0Raw[29] = 0x5890ede31a6f4b0d, p0Raw[30] = 0xaeb27eb62d5d8c91, p0Raw[31] = 0x4815f723bf1e1b64;

    uint2048 aM1, bM1, n1;
    uint4096 r1, nPrime1;
    uint32 rExp1 = 2048;
    uint2048 p1;
    uint64 *aM1Raw = (uint64 *) &aM1, *bM1Raw = (uint64 *) &bM1, *n1Raw = (uint64 *) &n1, *r1Raw = (uint64 *) &r1;
    uint64 *p1Raw = (uint64 *) &p1;
    REDCAuxiliaryModulus<32> auxMod1(rExp1);

    aM1Raw[0] = 0x92b5b9865b1f0b51, aM1Raw[1] = 0xdbfb3f1dfe909a63, aM1Raw[2] = 0x93f19b391067e119, aM1Raw[3] = 0x9bf9b66ea8630685, aM1Raw[4] = 0x2355de5bb86eb322, aM1Raw[5] = 0x6d4f0b29a7f64f0d, aM1Raw[6] = 0x5179108913c30d3d, aM1Raw[7] = 0xf3237460518e3e76, aM1Raw[8] = 0xae0a266011767af8, aM1Raw[9] = 0x48c097f8e80d7542, aM1Raw[10] = 0xa67692b27408a0f4, aM1Raw[11] = 0x4fa810475eec218f, aM1Raw[12] = 0x83d5049c7806c8d6, aM1Raw[13] = 0x809f62fe91fb2b84, aM1Raw[14] = 0xd176f9a43d35c1cf, aM1Raw[15] = 0x8c56bef97719b721, aM1Raw[16] = 0x62feab4195327d7b, aM1Raw[17] = 0xe9d10a23492154d9, aM1Raw[18] = 0xbbf0cddd92850b39, aM1Raw[19] = 0x3e43f764482eb10b, aM1Raw[20] = 0xa2d31b4fcad0fc82, aM1Raw[21] = 0xcfed1b69ac0cfa62, aM1Raw[22] = 0x87c9a32c9c568d48, aM1Raw[23] = 0x6fc4a552399a236b, aM1Raw[24] = 0x398c55908a086ff9, aM1Raw[25] = 0x24a102d5f3173fc5, aM1Raw[26] = 0x0aeded45fa8ebe56, aM1Raw[27] = 0x10ef2c90204f06b8, aM1Raw[28] = 0x2d64b19d6f9c1e0b, aM1Raw[29] = 0x96fc9891afafdb5e, aM1Raw[30] = 0x472bf39b80d963a2, aM1Raw[31] = 0x9536f9b0a8d619c4;
    bM1Raw[0] = 0x093cf84e37e2f722, bM1Raw[1] = 0x0fe24be773304d70, bM1Raw[2] = 0x0eb2030e910fcc1f, bM1Raw[3] = 0xe6cbe899169b0875, bM1Raw[4] = 0x9891ce11bc83be5b, bM1Raw[5] = 0x8451d9e8b2f9d53f, bM1Raw[6] = 0x3b7d021055e97f70, bM1Raw[7] = 0x391f2e157de3ddb8, bM1Raw[8] = 0x50c234a3cc96f434, bM1Raw[9] = 0xbc1a11f563be9526, bM1Raw[10] = 0xbb08f7811c214272, bM1Raw[11] = 0x47789b619d4e7606, bM1Raw[12] = 0xba4a57f473db5fff, bM1Raw[13] = 0xa1720258cce0486e, bM1Raw[14] = 0xac8d18371cabd524, bM1Raw[15] = 0x6298f22f0e6ecf41, bM1Raw[16] = 0x927b8ce90325d8aa, bM1Raw[17] = 0x45963d4b47e91978, bM1Raw[18] = 0x433b7083ca0eb3bd, bM1Raw[19] = 0x1772a4207aa4a005, bM1Raw[20] = 0xc2ca539731f9bc70, bM1Raw[21] = 0xbd6c9696e9cc491e, bM1Raw[22] = 0x255ba3932cf6c0f2, bM1Raw[23] = 0x89b7ee008cfda5f6, bM1Raw[24] = 0x4aa0a9d3d10cfac8, bM1Raw[25] = 0xc76dbe11c80a9c1f, bM1Raw[26] = 0xf8f527fc38124aa4, bM1Raw[27] = 0x8d10acc77b54f574, bM1Raw[28] = 0xf2fb49d313155c0c, bM1Raw[29] = 0xe7cf5d692bbbc3bf, bM1Raw[30] = 0xfd5e580f268a14da, bM1Raw[31] = 0xbbdd7d7ef6353788;
    n1Raw[0] = 0x6702f40ea8e8a51d, n1Raw[1] = 0x678d6f17d247d50c, n1Raw[2] = 0x430d4246db5116b5, n1Raw[3] = 0x5544ed978621a2e5, n1Raw[4] = 0x6bb82d44b4549e73, n1Raw[5] = 0x481a5716f4784615, n1Raw[6] = 0x7d5655a0b8624d39, n1Raw[7] = 0x38c0a25728440e45, n1Raw[8] = 0x42de664ac7130755, n1Raw[9] = 0x832923bf0fac166d, n1Raw[10] = 0x26e8a316de54d021, n1Raw[11] = 0xea408d675d8a99d9, n1Raw[12] = 0xd791d1d2bdee5b10, n1Raw[13] = 0x89b1f9c5aee3876c, n1Raw[14] = 0xaee436bf19c692ce, n1Raw[15] = 0x59e61b5e21337249, n1Raw[16] = 0xf839e7cbf198c676, n1Raw[17] = 0x122b8bf7ff60810e, n1Raw[18] = 0x06b3ccbc97bf468d, n1Raw[19] = 0xc8af8e27fd48eaf1, n1Raw[20] = 0x85aef68336885aae, n1Raw[21] = 0x35b99398233cec30, n1Raw[22] = 0xaed6ce490819c97a, n1Raw[23] = 0xe65d2fa082925a26, n1Raw[24] = 0x2be22a48d0b057b5, n1Raw[25] = 0x8da2071d77d41c78, n1Raw[26] = 0x5537d4761884161a, n1Raw[27] = 0x6fad4123d813e962, n1Raw[28] = 0xe49d6859d29102f3, n1Raw[29] = 0x89b9a9c8bba862f9, n1Raw[30] = 0xad6731134f31b245, n1Raw[31] = 0xce3366b5e20c8ab7;
    r1Raw[0] = 0x0000000000000000, r1Raw[1] = 0x0000000000000000, r1Raw[2] = 0x0000000000000000, r1Raw[3] = 0x0000000000000000, r1Raw[4] = 0x0000000000000000, r1Raw[5] = 0x0000000000000000, r1Raw[6] = 0x0000000000000000, r1Raw[7] = 0x0000000000000000, r1Raw[8] = 0x0000000000000000, r1Raw[9] = 0x0000000000000000, r1Raw[10] = 0x0000000000000000, r1Raw[11] = 0x0000000000000000, r1Raw[12] = 0x0000000000000000, r1Raw[13] = 0x0000000000000000, r1Raw[14] = 0x0000000000000000, r1Raw[15] = 0x0000000000000000, r1Raw[16] = 0x0000000000000000, r1Raw[17] = 0x0000000000000000, r1Raw[18] = 0x0000000000000000, r1Raw[19] = 0x0000000000000000, r1Raw[20] = 0x0000000000000000, r1Raw[21] = 0x0000000000000000, r1Raw[22] = 0x0000000000000000, r1Raw[23] = 0x0000000000000000, r1Raw[24] = 0x0000000000000000, r1Raw[25] = 0x0000000000000000, r1Raw[26] = 0x0000000000000000, r1Raw[27] = 0x0000000000000000, r1Raw[28] = 0x0000000000000000, r1Raw[29] = 0x0000000000000000, r1Raw[30] = 0x0000000000000000, r1Raw[31] = 0x0000000000000000, r1Raw[32] = 0x1;
    p1Raw[0] = 0xa8e4e3561fb61e18, p1Raw[1] = 0xc3fb365050cb4daa, p1Raw[2] = 0xc785056d8521a4ba, p1Raw[3] = 0xb67879764b1bfe5b, p1Raw[4] = 0xa077adcfcff6d580, p1Raw[5] = 0x6fe0d7b89377095e, p1Raw[6] = 0x58471903d15f3a67, p1Raw[7] = 0xe30de142b63726b6, p1Raw[8] = 0xf430f1318467ddb9, p1Raw[9] = 0xdcb8d1f6d4121b52, p1Raw[10] = 0x09696caabe0079d3, p1Raw[11] = 0x208c1d5eb2014923, p1Raw[12] = 0xcd852fa658883d5a, p1Raw[13] = 0xa3e2fc87590c0d32, p1Raw[14] = 0x9d900ab2cbad9707, p1Raw[15] = 0xd6b8952ec61ebf38, p1Raw[16] = 0xf6a3fe9a92b55780, p1Raw[17] = 0xec91d2f608ecac4f, p1Raw[18] = 0x6b1bec30f1ded381, p1Raw[19] = 0x425ac9a1b652530e, p1Raw[20] = 0xc96edb2fc02d9213, p1Raw[21] = 0x691edff9d62ba1a3, p1Raw[22] = 0xe3b9ff476145c3a5, p1Raw[23] = 0xfe5f3ea1d4a3488d, p1Raw[24] = 0x9f7586ed3e855d54, p1Raw[25] = 0xf068ee4f3bad3f11, p1Raw[26] = 0x8b3cb24fb9cbb3cf, p1Raw[27] = 0xb27972c13ae0a850, p1Raw[28] = 0xf28c2d15fa1d1f34, p1Raw[29] = 0xafa2e95911294d71, p1Raw[30] = 0x6bb48eba00b1df88, p1Raw[31] = 0x1d2b3184eb3e6dce;

    uint2048 aM2, bM2, n2;
    uint4096 r2, nPrime2;
    uint32 rExp2 = 2048;
    uint2048 p2;
    uint64 *aM2Raw = (uint64 *) &aM2, *bM2Raw = (uint64 *) &bM2, *n2Raw = (uint64 *) &n2, *r2Raw = (uint64 *) &r2;
    uint64 *p2Raw = (uint64 *) &p2;
    REDCAuxiliaryModulus<32> auxMod2(rExp2);

    aM2Raw[0] = 0xd79b9255b7d3f091, aM2Raw[1] = 0x0623883b0228c6c4, aM2Raw[2] = 0xc2cb57405c8cc0be, aM2Raw[3] = 0x94ad3819f33f1a8d, aM2Raw[4] = 0xcb682afb67f08f0e, aM2Raw[5] = 0xdbba05db4780c83b, aM2Raw[6] = 0x92bea16916554d25, aM2Raw[7] = 0x41bb61b83dc2a11a, aM2Raw[8] = 0x6dfe99753db06a67, aM2Raw[9] = 0x61f330c2c8018674, aM2Raw[10] = 0xae730bbd6a48b8d4, aM2Raw[11] = 0x1e7bf0ba6251d654, aM2Raw[12] = 0x960e7acb16c2a0c5, aM2Raw[13] = 0x0ad0577b51ccf1e6, aM2Raw[14] = 0x4f7df2fea1388f2f, aM2Raw[15] = 0x28fb915683ae1061, aM2Raw[16] = 0x3d81a4acbb9594ed, aM2Raw[17] = 0x94232bfeb3d35613, aM2Raw[18] = 0xfe64beb0513f01a7, aM2Raw[19] = 0x91e3e11b1381e92a, aM2Raw[20] = 0xdb99d5eb28149853, aM2Raw[21] = 0x5a3d3445a5252b8a, aM2Raw[22] = 0x3428d41b5ae40f97, aM2Raw[23] = 0xdf2dbdaa42749732, aM2Raw[24] = 0x5e5f01ac57b0d85f, aM2Raw[25] = 0x2fa699e4d0a7c0c3, aM2Raw[26] = 0xb11a8d6894d16911, aM2Raw[27] = 0x39c4c8326897d149, aM2Raw[28] = 0xde169e56b53cfbca, aM2Raw[29] = 0xfdcab8b10ce2ac2b, aM2Raw[30] = 0xd825f02a7bbddc0d, aM2Raw[31] = 0x5cfabb0b38c1e9a8;
    bM2Raw[0] = 0x751338f8f15c2b53, bM2Raw[1] = 0x0ffbb377a5f2b1d3, bM2Raw[2] = 0x2ae00e21eddd349f, bM2Raw[3] = 0x6fccc624a98346ce, bM2Raw[4] = 0x6a1171317e42d6de, bM2Raw[5] = 0x768c15848c7f7e96, bM2Raw[6] = 0x5cc42077e0772c1c, bM2Raw[7] = 0xbfeb09cdfe5e1722, bM2Raw[8] = 0xea273b62867520e5, bM2Raw[9] = 0xa634d07becc874e9, bM2Raw[10] = 0x5f4ad62212fe2e9a, bM2Raw[11] = 0x3ea0fa5f5ab89d28, bM2Raw[12] = 0x8bf9b0f522b62927, bM2Raw[13] = 0x1b6ef284489ad36b, bM2Raw[14] = 0x563b620ab7bc5c75, bM2Raw[15] = 0xf5ab5c745a841d9a, bM2Raw[16] = 0x2f359d52eb521f09, bM2Raw[17] = 0xb9b702cbeb0f0de7, bM2Raw[18] = 0x1136e4485975e703, bM2Raw[19] = 0x3806b750ad9d1a4d, bM2Raw[20] = 0xd5e79c221affb1cd, bM2Raw[21] = 0x9170ed74b72ae843, bM2Raw[22] = 0xbb3b109fafe7c150, bM2Raw[23] = 0xde3036c0a5992f9b, bM2Raw[24] = 0xaac46cdccbfadea4, bM2Raw[25] = 0xa9dd5d2618f36b41, bM2Raw[26] = 0xd8375b0d4c62f2e5, bM2Raw[27] = 0x418259c2468b07e3, bM2Raw[28] = 0xabc7dc108889dcff, bM2Raw[29] = 0x5322ec92cc6ff115, bM2Raw[30] = 0x4dcbc93cf458dfd7, bM2Raw[31] = 0x78b412095d3ce88f;
    n2Raw[0] = 0x012ac42704e5c49f, n2Raw[1] = 0x1407e6c2e539241a, n2Raw[2] = 0xb3462be2cbf74a59, n2Raw[3] = 0xec1f8a2ffa976269, n2Raw[4] = 0x46729bb3b57a7787, n2Raw[5] = 0x86d54dbdd411c163, n2Raw[6] = 0x9d59d375a890bf49, n2Raw[7] = 0x83b257784464fc20, n2Raw[8] = 0x5ba69c7a97d4124c, n2Raw[9] = 0x18ca6f17f9754806, n2Raw[10] = 0xbc64d24da511894b, n2Raw[11] = 0xe84b318a233b734c, n2Raw[12] = 0x77982ac9ec0048ac, n2Raw[13] = 0x670c558bc557030d, n2Raw[14] = 0x4fc2f3d6ef69b779, n2Raw[15] = 0x0bfa14481e7bb9e0, n2Raw[16] = 0x361336671ab91bfe, n2Raw[17] = 0xede7fb5f6dc07beb, n2Raw[18] = 0x6c817dc3390bb043, n2Raw[19] = 0xfea3d1284ba65a80, n2Raw[20] = 0x66ded822cc9c9196, n2Raw[21] = 0x0fcf709545f67ab1, n2Raw[22] = 0x2fdc16a9b579726c, n2Raw[23] = 0x0cda04fc447cb2fb, n2Raw[24] = 0x3e12f339727af505, n2Raw[25] = 0xbb8e58a10e8220b3, n2Raw[26] = 0xb6c8e8233be831ad, n2Raw[27] = 0xf6e8659edc7ca072, n2Raw[28] = 0xef5682b25970250e, n2Raw[29] = 0x3855db68bda1b479, n2Raw[30] = 0x8263fa00cd661205, n2Raw[31] = 0xed20c1601d8a1c63;
    r2Raw[0] = 0x0000000000000000, r2Raw[1] = 0x0000000000000000, r2Raw[2] = 0x0000000000000000, r2Raw[3] = 0x0000000000000000, r2Raw[4] = 0x0000000000000000, r2Raw[5] = 0x0000000000000000, r2Raw[6] = 0x0000000000000000, r2Raw[7] = 0x0000000000000000, r2Raw[8] = 0x0000000000000000, r2Raw[9] = 0x0000000000000000, r2Raw[10] = 0x0000000000000000, r2Raw[11] = 0x0000000000000000, r2Raw[12] = 0x0000000000000000, r2Raw[13] = 0x0000000000000000, r2Raw[14] = 0x0000000000000000, r2Raw[15] = 0x0000000000000000, r2Raw[16] = 0x0000000000000000, r2Raw[17] = 0x0000000000000000, r2Raw[18] = 0x0000000000000000, r2Raw[19] = 0x0000000000000000, r2Raw[20] = 0x0000000000000000, r2Raw[21] = 0x0000000000000000, r2Raw[22] = 0x0000000000000000, r2Raw[23] = 0x0000000000000000, r2Raw[24] = 0x0000000000000000, r2Raw[25] = 0x0000000000000000, r2Raw[26] = 0x0000000000000000, r2Raw[27] = 0x0000000000000000, r2Raw[28] = 0x0000000000000000, r2Raw[29] = 0x0000000000000000, r2Raw[30] = 0x0000000000000000, r2Raw[31] = 0x0000000000000000, r2Raw[32] = 0x1;
    p2Raw[0] = 0x15d320804379c9f6, p2Raw[1] = 0x180beaea0167d31b, p2Raw[2] = 0xac7cc4eb3ebdfed8, p2Raw[3] = 0xd44db8c445ddffc7, p2Raw[4] = 0x20746f5c38139965, p2Raw[5] = 0xd9ae801b16554e3c, p2Raw[6] = 0xa7d1fbab74987ba3, p2Raw[7] = 0x3b4cc6d00479ad1f, p2Raw[8] = 0xf81eb45e0be7c177, p2Raw[9] = 0x2d2bb11e809ffe2c, p2Raw[10] = 0x57ff4d2b248cb405, p2Raw[11] = 0x545a19b1ab16ac57, p2Raw[12] = 0xda6ef55a00765552, p2Raw[13] = 0x168301cc44a2fe10, p2Raw[14] = 0x86ad8b3927a47674, p2Raw[15] = 0x00219bfea1ceab64, p2Raw[16] = 0xe5fe84e98f5b242d, p2Raw[17] = 0x5e9b99a25724d6f7, p2Raw[18] = 0x4060c9f7a8d3a5a2, p2Raw[19] = 0xe89f415515681880, p2Raw[20] = 0x0d516a0e2ef77f21, p2Raw[21] = 0x34ff88711a05f2dd, p2Raw[22] = 0xb41a9945570e5de0, p2Raw[23] = 0xa82202c9c1b9c37c, p2Raw[24] = 0xe479a5fe9d937256, p2Raw[25] = 0x6779a5640e4cf66c, p2Raw[26] = 0xb5e62daa2222a2bf, p2Raw[27] = 0x1d7b5367a45ac983, p2Raw[28] = 0xc85e237dcc1df513, p2Raw[29] = 0x8cac3634a6e635c1, p2Raw[30] = 0x950780a60edcd6ca, p2Raw[31] = 0x80817e84b0e72dfb;

    uint2048 aM3, bM3, n3;
    uint4096 r3, nPrime3;
    uint32 rExp3 = 2047;
    uint2048 p3;
    uint64 *aM3Raw = (uint64 *) &aM3, *bM3Raw = (uint64 *) &bM3, *n3Raw = (uint64 *) &n3, *r3Raw = (uint64 *) &r3;
    uint64 *p3Raw = (uint64 *) &p3;
    REDCAuxiliaryModulus<32> auxMod3(rExp3);

    aM3Raw[0] = 0x31dc944cf814f8ba, aM3Raw[1] = 0xc09fd6e5588b48e9, aM3Raw[2] = 0xf7b7521e0d279ce3, aM3Raw[3] = 0x8e2c9673da234f1d, aM3Raw[4] = 0xd8c733c861432224, aM3Raw[5] = 0xda8edacc62ec8bdf, aM3Raw[6] = 0x51576f616384b74c, aM3Raw[7] = 0x1eb48a71a50985b3, aM3Raw[8] = 0xdcaabf159b3a0d1f, aM3Raw[9] = 0xe6f723050198eab3, aM3Raw[10] = 0x452ee7a13a7ccd54, aM3Raw[11] = 0xb3499a196ff709c0, aM3Raw[12] = 0x8542b0c73825a3a3, aM3Raw[13] = 0xa7aca4a80086693b, aM3Raw[14] = 0xa0cc1b4cb61ebd5c, aM3Raw[15] = 0x8f1f6819aedc427d, aM3Raw[16] = 0xa56b8e1b019f7d39, aM3Raw[17] = 0xda98cf1518380bf8, aM3Raw[18] = 0xe5188fb37bec1341, aM3Raw[19] = 0x02fe06b3c3f40bc1, aM3Raw[20] = 0xd4b34693aafe5354, aM3Raw[21] = 0x25a13ed42c74a909, aM3Raw[22] = 0x57b3076306226b42, aM3Raw[23] = 0xecec1c4bd5010e77, aM3Raw[24] = 0xc84ca93fc117c685, aM3Raw[25] = 0xfe5134b6d9dc0d6a, aM3Raw[26] = 0x72902a8d031de868, aM3Raw[27] = 0x0024966248c30873, aM3Raw[28] = 0x5910514565faad88, aM3Raw[29] = 0x44550da3454050c6, aM3Raw[30] = 0xcad4155394af4d36, aM3Raw[31] = 0xbc54ab90dcf0c40;
    bM3Raw[0] = 0xf51c987da8e3e593, bM3Raw[1] = 0x4702a9580d24773a, bM3Raw[2] = 0x0b505b5097f1b437, bM3Raw[3] = 0xf571dd07cc8a21ed, bM3Raw[4] = 0xfe7f3547728fdf80, bM3Raw[5] = 0x536ef81ed1b47ca5, bM3Raw[6] = 0x6dea1e2c1b6e5fd6, bM3Raw[7] = 0x8aed62e05c51b291, bM3Raw[8] = 0x5105b4e94416c6db, bM3Raw[9] = 0x33591ac990859f7a, bM3Raw[10] = 0x8a7dd4889a590e90, bM3Raw[11] = 0xdf960a0be9cb0960, bM3Raw[12] = 0xeb239d406df933ec, bM3Raw[13] = 0x67a4004e5126a76c, bM3Raw[14] = 0x13aef8150e7e2809, bM3Raw[15] = 0x276bbadd3e39746b, bM3Raw[16] = 0x6a5a946363005119, bM3Raw[17] = 0xfc5562bdd8291902, bM3Raw[18] = 0x9ec8007f7504ff06, bM3Raw[19] = 0x426313595cb2a5bc, bM3Raw[20] = 0xa3971728e99a5904, bM3Raw[21] = 0x83fbbeccc93e9d85, bM3Raw[22] = 0xf38214855aa80496, bM3Raw[23] = 0xb371e97c6c5950cc, bM3Raw[24] = 0xdc2dca4bb6af065e, bM3Raw[25] = 0xb434ddfd5b60eee7, bM3Raw[26] = 0x674a31f17b44a326, bM3Raw[27] = 0x49d2d0a7a512198c, bM3Raw[28] = 0xb118171a188f7558, bM3Raw[29] = 0x9d17388228eec9e1, bM3Raw[30] = 0xc3648e6fa1a0c36a, bM3Raw[31] = 0x4eef55e88c101ae;
    n3Raw[0] = 0x99c9ea419091f9a7, n3Raw[1] = 0xfa35f74aa77b181d, n3Raw[2] = 0x344d7fbe0d4fb9ee, n3Raw[3] = 0x13d853619b4a9f83, n3Raw[4] = 0x0068c671110050d0, n3Raw[5] = 0xd865c620b9ef727f, n3Raw[6] = 0xca6feae6905b4fd1, n3Raw[7] = 0x2b69aad0caa60f76, n3Raw[8] = 0xbea0280a803ec110, n3Raw[9] = 0x534201dc72686b30, n3Raw[10] = 0x6fd810bed9c9a291, n3Raw[11] = 0x8beaa48a86468059, n3Raw[12] = 0xace7230c58e2598d, n3Raw[13] = 0x4b1d4ecd85a9b30a, n3Raw[14] = 0x1e743aa26f015ade, n3Raw[15] = 0xad6d6619ddaae785, n3Raw[16] = 0x2c54c6cae689a1c8, n3Raw[17] = 0xb06389afabaa9f6f, n3Raw[18] = 0x37242c26e06dae36, n3Raw[19] = 0xbc28b962461e0c2b, n3Raw[20] = 0xc5505bee0c5c5b8e, n3Raw[21] = 0xaf6ecdd8185d51ce, n3Raw[22] = 0xa2ec0e78a9ddb324, n3Raw[23] = 0x4358e50e2da39cf6, n3Raw[24] = 0xbf497f496fb86d6a, n3Raw[25] = 0x9612f1f74871f3b7, n3Raw[26] = 0xbf9999a656a1d876, n3Raw[27] = 0x4f84b236b935d489, n3Raw[28] = 0xa94fd2750016a06c, n3Raw[29] = 0x5fcc3e10bf05eb19, n3Raw[30] = 0xe2b81a49de62be93, n3Raw[31] = 0x549cfe59482becfb;
    r3Raw[0] = 0x0000000000000000, r3Raw[1] = 0x0000000000000000, r3Raw[2] = 0x0000000000000000, r3Raw[3] = 0x0000000000000000, r3Raw[4] = 0x0000000000000000, r3Raw[5] = 0x0000000000000000, r3Raw[6] = 0x0000000000000000, r3Raw[7] = 0x0000000000000000, r3Raw[8] = 0x0000000000000000, r3Raw[9] = 0x0000000000000000, r3Raw[10] = 0x0000000000000000, r3Raw[11] = 0x0000000000000000, r3Raw[12] = 0x0000000000000000, r3Raw[13] = 0x0000000000000000, r3Raw[14] = 0x0000000000000000, r3Raw[15] = 0x0000000000000000, r3Raw[16] = 0x0000000000000000, r3Raw[17] = 0x0000000000000000, r3Raw[18] = 0x0000000000000000, r3Raw[19] = 0x0000000000000000, r3Raw[20] = 0x0000000000000000, r3Raw[21] = 0x0000000000000000, r3Raw[22] = 0x0000000000000000, r3Raw[23] = 0x0000000000000000, r3Raw[24] = 0x0000000000000000, r3Raw[25] = 0x0000000000000000, r3Raw[26] = 0x0000000000000000, r3Raw[27] = 0x0000000000000000, r3Raw[28] = 0x0000000000000000, r3Raw[29] = 0x0000000000000000, r3Raw[30] = 0x0000000000000000, r3Raw[31] = 0x8000000000000000;
    p3Raw[0] = 0x830bb783741e93cb, p3Raw[1] = 0x2d24218a1399c9ce, p3Raw[2] = 0xc2a3168985835105, p3Raw[3] = 0x6c65e545d8e326e2, p3Raw[4] = 0x86fc8c46b9e308cc, p3Raw[5] = 0x4d8b8142d3f8f4ea, p3Raw[6] = 0xa8eccac8df794278, p3Raw[7] = 0x2eecad3932064c3a, p3Raw[8] = 0x117e075e38bbaa13, p3Raw[9] = 0xafb3fa37840ec3c2, p3Raw[10] = 0x9df303906cc3abff, p3Raw[11] = 0x531bda8fd9307c48, p3Raw[12] = 0x6f7e06337b44a3fe, p3Raw[13] = 0x8fe042a16717329f, p3Raw[14] = 0x4c680736de232305, p3Raw[15] = 0xe91a52fad93f5fa0, p3Raw[16] = 0xc6ad324a5ae9498b, p3Raw[17] = 0x5d967875cdd52a1f, p3Raw[18] = 0xa7a9e84c9d3f3d4d, p3Raw[19] = 0xf1e7c6070463ad9d, p3Raw[20] = 0x298303195f578d3c, p3Raw[21] = 0x24a6d8b3c85501a1, p3Raw[22] = 0xdf874f1fcc302e85, p3Raw[23] = 0x5ae3b5533f41f953, p3Raw[24] = 0x23d0259150da3c75, p3Raw[25] = 0x5db3b441a2da6578, p3Raw[26] = 0xeba68c0bc7669423, p3Raw[27] = 0xf829edf76b5bdabc, p3Raw[28] = 0xdcbd1ebe56a54f49, p3Raw[29] = 0x22740524bc558144, p3Raw[30] = 0xde58e4fc0d547124, p3Raw[31] = 0x413b39b6366cb22;

    // ACT
    extendedEuclidean(r0, n0, unused, nPrime0);

    t = redc(auxMod0, n0, -(uint2048)nPrime0, aM0 * bM0);
    uint2048 c0 = redc(auxMod0, n0, -(uint2048)nPrime0, t);

    extendedEuclidean(r1, n1, unused, nPrime1);

    t = redc(auxMod1, n1, -(uint2048)nPrime1, aM1 * bM1);
    uint2048 c1 = redc(auxMod1, n1, -(uint2048)nPrime1, t);

    extendedEuclidean(r2, n2, unused, nPrime2);

    t = redc(auxMod2, n2, -(uint2048)nPrime2, aM2 * bM2);
    uint2048 c2 = redc(auxMod2, n2, -(uint2048)nPrime2, t);

    extendedEuclidean(r3, n3, unused, nPrime3);

    t = redc(auxMod3, n3, -(uint2048)nPrime3, aM3 * bM3);
    uint2048 c3 = redc(auxMod3, n3, -(uint2048)nPrime3, t);


    // ASSERT
    ASSERT_EQ(c0, p0);
    ASSERT_EQ(c1, p1);
    ASSERT_EQ(c2, p2);
    ASSERT_EQ(c3, p3);
}

/* BigInteger Modular Exponentiation Tests */
TEST(BigIntegerAlgorithmTests, ModularExponentiation128By128Bit) {
    // ARRANGE
    uint128 a0, m0, r0;
    uint128 b0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *m0Raw = (uint64 *) &m0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0xc147a325b7b64d42, a0Raw[1] = 0xec07fcc4ced13316;
    b0Raw[0] = 0xbda038a62f90186d, b0Raw[1] = 0x53f4f7f69a33bb87;
    m0Raw[0] = 0x1ea7490de48c0bc5, m0Raw[1] = 0xed454eca9e5aae9c;
    r0Raw[0] = 0x34717d5644faa2d9, r0Raw[1] = 0xcd6005f6225153bf;

    uint128 a1, m1, r1;
    uint128 b1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *m1Raw = (uint64 *) &m1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0xcc9735d5b993c243, a1Raw[1] = 0xb51bcdeaaca5a9fa;
    b1Raw[0] = 0xd465600e97e67601, b1Raw[1] = 0x1467bf026cb7a8eb;
    m1Raw[0] = 0xae982d9e7ba318b5, m1Raw[1] = 0x3c576da1d9efeb9b;
    r1Raw[0] = 0x584817bd72f7e03d, r1Raw[1] = 0x39eee5fb0a4a03ce;

    uint128 a2, m2, r2;
    uint128 b2;
    uint64 *a2Raw = (uint64 *) &a2, *b2Raw = (uint64 *) &b2, *m2Raw = (uint64 *) &m2, *r2Raw = (uint64 *) &r2;

    a2Raw[0] = 0xb356180a542213a8, a2Raw[1] = 0xdc3bb54aebf2c7d1;
    b2Raw[0] = 0x41504256978f46aa, b2Raw[1] = 0x7b92a9850a054230;
    m2Raw[0] = 0x2c7e8282d2da23ad, m2Raw[1] = 0xaef571b102b8e2b8;
    r2Raw[0] = 0x389bd56ba9a92f5f, r2Raw[1] = 0x499f9b81bea7e7f3;

    uint128 a3, m3, r3;
    uint128 b3;
    uint64 *a3Raw = (uint64 *) &a3, *b3Raw = (uint64 *) &b3, *m3Raw = (uint64 *) &m3, *r3Raw = (uint64 *) &r3;

    a3Raw[0] = 0x0c50260256c3dd74, a3Raw[1] = 0xfa244cb968820bf;
    b3Raw[0] = 0x6f0dbb5dcd3520cf, b3Raw[1] = 0x8ac262afb0ec2153;
    m3Raw[0] = 0xe92e9a15118d9f99, m3Raw[1] = 0xf24f1e4a67e40289;
    r3Raw[0] = 0x4bc56bcc40ffe6d5, r3Raw[1] = 0x3aaf93a4415d0f99;

    // ACT
    uint128 c0 = a0.exp(b0, m0);
    uint128 c1 = a1.exp(b1, m1);
    uint128 c2 = a2.exp(b2, m2);
    uint128 c3 = a3.exp(b3, m3);

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
    ASSERT_EQ(c2, r2);
    ASSERT_EQ(c3, r3);
}

TEST(BigIntegerAlgorithmTests, ModularExponentiation256By256Bit) {
    // ARRANGE
    uint256 a0, m0, r0;
    uint256 b0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *m0Raw = (uint64 *) &m0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0xc315c0e8711d751e, a0Raw[1] = 0xcc332cc482453a44, a0Raw[2] = 0x8017b331498c5de6, a0Raw[3] = 0x69cc4d7fd1c9d79f;
    b0Raw[0] = 0x35206f9707ced350, b0Raw[1] = 0x9abe6fe9702ec2aa, b0Raw[2] = 0x235b63857a58df0e, b0Raw[3] = 0x31d3979f4a6f318f;
    m0Raw[0] = 0xf688716f74b828c7, m0Raw[1] = 0xc6df54df4dd9e31b, m0Raw[2] = 0x6fb631055667b0ad, m0Raw[3] = 0xadd1ca8cdc2b2fd6;
    r0Raw[0] = 0xdac79bc4ee6ee543, r0Raw[1] = 0xe3ffa9047273960e, r0Raw[2] = 0xb85640de1339d9f1, r0Raw[3] = 0x38a9a99d680b847e;

    uint256 a1, m1, r1;
    uint256 b1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *m1Raw = (uint64 *) &m1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0xe7dbfd7be1c56f2d, a1Raw[1] = 0x4fe8382323704ce3, a1Raw[2] = 0x4550e8a3296beb6c, a1Raw[3] = 0x2857d59adbbda157;
    b1Raw[0] = 0x26028b753f840eed, b1Raw[1] = 0x2b0a34942e744c6e, b1Raw[2] = 0xa050b5732882a813, b1Raw[3] = 0x8526864b9d9b20a3;
    m1Raw[0] = 0xda17895ee859e0ef, m1Raw[1] = 0x534a147c27388e84, m1Raw[2] = 0x60bc763b2fdfbce6, m1Raw[3] = 0x99f7a7be8d0ff3bf;
    r1Raw[0] = 0xda932e5e0e8f0fda, r1Raw[1] = 0x84e03875425ebf67, r1Raw[2] = 0x5c319dfc47ce08d0, r1Raw[3] = 0x8e2b3f39cf0abee2;

    uint256 a2, m2, r2;
    uint256 b2;
    uint64 *a2Raw = (uint64 *) &a2, *b2Raw = (uint64 *) &b2, *m2Raw = (uint64 *) &m2, *r2Raw = (uint64 *) &r2;

    a2Raw[0] = 0x2f6076f1dede4e64, a2Raw[1] = 0x6f17e2f80a68caec, a2Raw[2] = 0x986b6a09864151d4, a2Raw[3] = 0x6ea985246bcbeb29;
    b2Raw[0] = 0x4c2b3d4fb4ddc01f, b2Raw[1] = 0x1780183b791ba20c, b2Raw[2] = 0x14186a243e5e1c4c, b2Raw[3] = 0x61713259c13c1f53;
    m2Raw[0] = 0x0562c1f8f9aaf563, m2Raw[1] = 0x406bbc81685b0895, m2Raw[2] = 0xc4100d7c3d0876a6, m2Raw[3] = 0x42d0c939c38d695a;
    r2Raw[0] = 0xef41f3258a5faaef, r2Raw[1] = 0xb9e83c11c83e1f83, r2Raw[2] = 0x8996c00e8ee6f7d2, r2Raw[3] = 0x2531ec19e7eb35e0;

    uint256 a3, m3, r3;
    uint256 b3;
    uint64 *a3Raw = (uint64 *) &a3, *b3Raw = (uint64 *) &b3, *m3Raw = (uint64 *) &m3, *r3Raw = (uint64 *) &r3;

    a3Raw[0] = 0x0f54e1a462229f25, a3Raw[1] = 0xd41c7b28ac33d476, a3Raw[2] = 0x703a1c23e270e237, a3Raw[3] = 0x8affcadd0f640a45;
    b3Raw[0] = 0x4fec1d8dc79cb7d8, b3Raw[1] = 0x2f182820f84f4275, b3Raw[2] = 0x66bae409f2569d83, b3Raw[3] = 0xdf7cacd58e4462cb;
    m3Raw[0] = 0x34061853a9b79c19, m3Raw[1] = 0x44c6ee9007936c63, m3Raw[2] = 0xea1f5699caabe7f7, m3Raw[3] = 0xdacf7a246ec7bba1;
    r3Raw[0] = 0x0a2b7393390a1942, r3Raw[1] = 0x3b52fe07868ee922, r3Raw[2] = 0x43887da236b12695, r3Raw[3] = 0x3c7f4d2c9f517bca;

    // ACT
    uint256 c0 = a0.exp(b0, m0);
    uint256 c1 = a1.exp(b1, m1);
    uint256 c2 = a2.exp(b2, m2);
    uint256 c3 = a3.exp(b3, m3);

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
    ASSERT_EQ(c2, r2);
    ASSERT_EQ(c3, r3);
}

TEST(BigIntegerAlgorithmTests, ModularExponentiation512By512Bit) {
    // ARRANGE
    uint512 a0, m0, r0;
    uint512 b0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *m0Raw = (uint64 *) &m0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x13f6d66771f8f99f, a0Raw[1] = 0xb71ac2723636213c, a0Raw[2] = 0x152941b9ca0c4718, a0Raw[3] = 0x40b6db5e7ca943b5, a0Raw[4] = 0x6dcb4643faa5deb0, a0Raw[5] = 0xc94dadbba29bad27, a0Raw[6] = 0xdffeb9743ca3c218, a0Raw[7] = 0xcc7ad7df41d8b609;
    b0Raw[0] = 0x75423e60d157882c, b0Raw[1] = 0xaca2b0870307b2fe, b0Raw[2] = 0x67f63f964813fe71, b0Raw[3] = 0x8457db68e1dbc3f2, b0Raw[4] = 0xdfc1f50e7482708e, b0Raw[5] = 0x94324bf652c664ef, b0Raw[6] = 0x8b3eb8f5308ee14d, b0Raw[7] = 0xb48ac5d1d33fe7e5;
    m0Raw[0] = 0x51e3e71b8a35957b, m0Raw[1] = 0x8829eb191336790d, m0Raw[2] = 0x4334d6705cf2ca90, m0Raw[3] = 0xef592e9ceda7c5dc, m0Raw[4] = 0x315795e40368c3ea, m0Raw[5] = 0x0af98a9ccef1125b, m0Raw[6] = 0xde3df3b61345e0bf, m0Raw[7] = 0xae382d54c6b82445;
    r0Raw[0] = 0x81c72ab06df59ef6, r0Raw[1] = 0xbd8e0bf4f7e8a84b, r0Raw[2] = 0x818dbaa0cfd33a99, r0Raw[3] = 0x27c0f58d6b5a6714, r0Raw[4] = 0x42b0ad6afbb4690e, r0Raw[5] = 0xfe96f2d42ff5f739, r0Raw[6] = 0x3e9120d5209b0bfc, r0Raw[7] = 0x627f138ad8523e41;

    uint512 a1, m1, r1;
    uint512 b1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *m1Raw = (uint64 *) &m1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0xb827908a283de600, a1Raw[1] = 0x7e2849708cb040e9, a1Raw[2] = 0x23abac4c31ec50b6, a1Raw[3] = 0xe7221cd4c5a1c6d2, a1Raw[4] = 0x6a06b0435edffe94, a1Raw[5] = 0xb51b5d3e7c72736e, a1Raw[6] = 0xd04903fbfb35a92b, a1Raw[7] = 0xdbd49efd63738;
    b1Raw[0] = 0x26c9992ba7b2511c, b1Raw[1] = 0x9246d68d4698325e, b1Raw[2] = 0xe4e60b4fbe781482, b1Raw[3] = 0x00613f84a1e31933, b1Raw[4] = 0xaab9d946c699aa8e, b1Raw[5] = 0x27090929e9c70626, b1Raw[6] = 0x3304d577eb2f2129, b1Raw[7] = 0x8d5d9af3b900b172;
    m1Raw[0] = 0x794d800f2e4e1791, m1Raw[1] = 0x1dd39a017c7e1e2d, m1Raw[2] = 0xe622d2cf562543b9, m1Raw[3] = 0x165fddd7d6ebf56f, m1Raw[4] = 0xbbe817e818675f8d, m1Raw[5] = 0x11464c91e1136925, m1Raw[6] = 0x7e76f988dd821dba, m1Raw[7] = 0x1b944c933713397d;
    r1Raw[0] = 0xd9f338679cd16f15, r1Raw[1] = 0xbe69d5e130792e96, r1Raw[2] = 0x859c45fbf1235fdb, r1Raw[3] = 0xb7d8622bf319126e, r1Raw[4] = 0x41cdb932a3a58a2f, r1Raw[5] = 0xf844af1181ae857f, r1Raw[6] = 0x4c2033c5fc38f877, r1Raw[7] = 0x133fbfa878168d46;

    uint512 a2, m2, r2;
    uint512 b2;
    uint64 *a2Raw = (uint64 *) &a2, *b2Raw = (uint64 *) &b2, *m2Raw = (uint64 *) &m2, *r2Raw = (uint64 *) &r2;

    a2Raw[0] = 0x5f09817e3703f994, a2Raw[1] = 0x328b7943a8178f79, a2Raw[2] = 0x06297258028c4950, a2Raw[3] = 0xa858e641581f0537, a2Raw[4] = 0x9852087918e7cc34, a2Raw[5] = 0x83e1e44eaecf622c, a2Raw[6] = 0x106658af60cf7775, a2Raw[7] = 0xb20dd12859446048;
    b2Raw[0] = 0x86e7c3445f68732c, b2Raw[1] = 0x20ca330b44cf867a, b2Raw[2] = 0xb9f21f4deb8ad8fb, b2Raw[3] = 0x46ca7189f73de2f8, b2Raw[4] = 0x8eb7e6c3393eacb7, b2Raw[5] = 0x5c3786570b6c1d71, b2Raw[6] = 0x3d9ee480953a75ce, b2Raw[7] = 0xce12b453435dfa59;
    m2Raw[0] = 0xf99bfcfa89bbb9d1, m2Raw[1] = 0x2df6f7c9a4d5c6c6, m2Raw[2] = 0x5042e10a38154f99, m2Raw[3] = 0x92baa999760ad369, m2Raw[4] = 0x5a04018ad33c1326, m2Raw[5] = 0x9ad53a0f0a9f5635, m2Raw[6] = 0x3bccfae8e51cb225, m2Raw[7] = 0x234d6c55a858a50;
    r2Raw[0] = 0xba72cddfc4b141aa, r2Raw[1] = 0xfe667195d9f6e13a, r2Raw[2] = 0xaa3657431e335dca, r2Raw[3] = 0xb3690f95b4d2546a, r2Raw[4] = 0xcfe052bf0c0b3ba5, r2Raw[5] = 0x0faa545cfd7a7405, r2Raw[6] = 0xa20ec40414c681d3, r2Raw[7] = 0x34332c1f6206ba;

    uint512 a3, m3, r3;
    uint512 b3;
    uint64 *a3Raw = (uint64 *) &a3, *b3Raw = (uint64 *) &b3, *m3Raw = (uint64 *) &m3, *r3Raw = (uint64 *) &r3;

    a3Raw[0] = 0x4a40f628178aea19, a3Raw[1] = 0xc25b4d71e855e54d, a3Raw[2] = 0xb13b486996a7c217, a3Raw[3] = 0x385015df61bcd650, a3Raw[4] = 0x8c07d5267f66b372, a3Raw[5] = 0xe510e6cb05328f6e, a3Raw[6] = 0xcaf7cec76aa13065, a3Raw[7] = 0xb0532b3e796cf398;
    b3Raw[0] = 0x8f515df2a9f965b5, b3Raw[1] = 0x728c7f0dc5dbb149, b3Raw[2] = 0x89f4fcdf2e21c0d3, b3Raw[3] = 0x100395420a9829f4, b3Raw[4] = 0x77f52aa0e3435519, b3Raw[5] = 0x9c23aee740b2d732, b3Raw[6] = 0x2cef3550c3e0893f, b3Raw[7] = 0x855e14a3962071fa;
    m3Raw[0] = 0xb0315bc0eb488ebb, m3Raw[1] = 0xfe2e97037c5a4c70, m3Raw[2] = 0x7a9ee62ba81ab03a, m3Raw[3] = 0x75b8c6bbd3bf717f, m3Raw[4] = 0x7f2c79c8c29ac1f2, m3Raw[5] = 0x6873ed3ed6402824, m3Raw[6] = 0xa0390c603aaff560, m3Raw[7] = 0xbe226fce93313c59;
    r3Raw[0] = 0x52b90fa15c51c317, r3Raw[1] = 0x31675afb804a1a74, r3Raw[2] = 0x203c011713ac8982, r3Raw[3] = 0x6c9da71f222da751, r3Raw[4] = 0x35a7d43f54f1eb96, r3Raw[5] = 0x9d631a4fb4ca191f, r3Raw[6] = 0xd6dcad6d412358fe, r3Raw[7] = 0xb947b389afebf2d5;

    // ACT
    uint512 c0 = a0.exp(b0, m0);
    uint512 c1 = a1.exp(b1, m1);
    uint512 c2 = a2.exp(b2, m2);
    uint512 c3 = a3.exp(b3, m3);

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
    ASSERT_EQ(c2, r2);
    ASSERT_EQ(c3, r3);
}

TEST(BigIntegerAlgorithmTests, ModularExponentiation1024By1024Bit) {
    // ARRANGE
    uint1024 a0, m0, r0;
    uint1024 b0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *m0Raw = (uint64 *) &m0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0xef0521bbcf032d17, a0Raw[1] = 0xbed22df6f3288d3b, a0Raw[2] = 0x3cbb43e82f18e2fd, a0Raw[3] = 0xd5adf2721c140399, a0Raw[4] = 0x3541118bbe367511, a0Raw[5] = 0xf7c890e9a5d193e0, a0Raw[6] = 0xdfd1dad8273603e3, a0Raw[7] = 0x20a4bcb9a6d54e72, a0Raw[8] = 0x20169b2d867c2c39, a0Raw[9] = 0x3966528e1b2f6d1d, a0Raw[10] = 0x4bd3e628451f71ea, a0Raw[11] = 0x52dd6f3cc69e66d9, a0Raw[12] = 0x56f00cc87129c455, a0Raw[13] = 0x78cced8433ec6249, a0Raw[14] = 0xa7643723dd900d7c, a0Raw[15] = 0xe410a65cda04ebee;
    b0Raw[0] = 0xba2fadca61285b07, b0Raw[1] = 0xcdcb5b98512d04fa, b0Raw[2] = 0x0cfdaacc6ecd7707, b0Raw[3] = 0x748a256da79d67cd, b0Raw[4] = 0x574cca7874be5423, b0Raw[5] = 0xf481599777d10755, b0Raw[6] = 0xdd547740287d89f4, b0Raw[7] = 0x342e57a2082a1417, b0Raw[8] = 0xcdee17109945b44d, b0Raw[9] = 0x47417ad4cbd9000c, b0Raw[10] = 0xaa47ffccd8f38519, b0Raw[11] = 0xf122b05747cbcfc1, b0Raw[12] = 0x3b4f037ab199d70f, b0Raw[13] = 0x77ef3feca91720c1, b0Raw[14] = 0x49290bc92d6b991e, b0Raw[15] = 0x47bd5d3154a68514;
    m0Raw[0] = 0xa47ed7158d41f12b, m0Raw[1] = 0xeb344e98026cf5c1, m0Raw[2] = 0x7f165646298ba05d, m0Raw[3] = 0xbad98c14099713b8, m0Raw[4] = 0x007563aa964c0cb2, m0Raw[5] = 0x1a77f6d70ebebce0, m0Raw[6] = 0x5631d5744ec3c5b6, m0Raw[7] = 0x931e1ef0c4485d32, m0Raw[8] = 0x28284bf327721ea2, m0Raw[9] = 0x9cd0cdeb74820e9a, m0Raw[10] = 0xc8b0ef1a94a873ce, m0Raw[11] = 0x86ff6117b42820be, m0Raw[12] = 0x7988965ed45d7659, m0Raw[13] = 0xbee7ec3dec20ef48, m0Raw[14] = 0x24832cee9f7fa8d7, m0Raw[15] = 0x3b2b423e3cddb74e;
    r0Raw[0] = 0x409c89ec413439c4, r0Raw[1] = 0xc65c0c2c3c3b3c0d, r0Raw[2] = 0x2d6557fc19d726b4, r0Raw[3] = 0x2d64547517f340b9, r0Raw[4] = 0x45c7caffe62df9f3, r0Raw[5] = 0x15191944bf2b6bac, r0Raw[6] = 0x7855e58fa82c747f, r0Raw[7] = 0x20489a67bb01e62a, r0Raw[8] = 0x8bf0691d47a7693e, r0Raw[9] = 0x3a6cd49f428b6fdb, r0Raw[10] = 0x555c448e8beca71d, r0Raw[11] = 0x9027a5f5ceef1e8d, r0Raw[12] = 0x3f426edacc8af21d, r0Raw[13] = 0xa664f3a61744331d, r0Raw[14] = 0xfef665d575485219, r0Raw[15] = 0x37ca2d20da7ce1fe;

    uint1024 a1, m1, r1;
    uint1024 b1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *m1Raw = (uint64 *) &m1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0x47340aeee4e66fe5, a1Raw[1] = 0xcc446fc2e66089a5, a1Raw[2] = 0x0c395934e9befb86, a1Raw[3] = 0x68e452e40cc4a28f, a1Raw[4] = 0x1950606cf8131576, a1Raw[5] = 0x304608f267b2e11d, a1Raw[6] = 0x96bf86c0e736f240, a1Raw[7] = 0x99d35d337328939d, a1Raw[8] = 0xec0b29fc69b7159c, a1Raw[9] = 0x898cdc710e44add7, a1Raw[10] = 0x4058154535988614, a1Raw[11] = 0xace6e37b1911b898, a1Raw[12] = 0x333965783ee3f558, a1Raw[13] = 0x7c32d27f74587bbc, a1Raw[14] = 0x25280423e48185fe, a1Raw[15] = 0xc18c3a110a07a16c;
    b1Raw[0] = 0x2fc5bb51671fd346, b1Raw[1] = 0x5f5648a3bfd027ca, b1Raw[2] = 0xd2573f6b66f59244, b1Raw[3] = 0x3bdafa7d6ee29c10, b1Raw[4] = 0x9e1909d6be1c07d1, b1Raw[5] = 0x903295ecb3ab124d, b1Raw[6] = 0xa70db4810ec435b9, b1Raw[7] = 0xf971afeb24f2d411, b1Raw[8] = 0x98d23aa6005ad42b, b1Raw[9] = 0x1afe45056643fa79, b1Raw[10] = 0x91502d4086add183, b1Raw[11] = 0x39fffc2af8bf9a31, b1Raw[12] = 0x16234af5571a8782, b1Raw[13] = 0x7c9e5c4d121bf0e5, b1Raw[14] = 0x54d65c80513c98cb, b1Raw[15] = 0xeb5243d0068da1d9;
    m1Raw[0] = 0xc5ad209b5ce30735, m1Raw[1] = 0xb77510725f9785cf, m1Raw[2] = 0xa2d342d959f46056, m1Raw[3] = 0xf0d5981c482a4cff, m1Raw[4] = 0x77b561ad38ecec34, m1Raw[5] = 0x90de1d20d2029642, m1Raw[6] = 0xf0dc4db10826f140, m1Raw[7] = 0x4f488513a97df4f5, m1Raw[8] = 0xb9ba0472199467c3, m1Raw[9] = 0x83e95edf750f220d, m1Raw[10] = 0x7d20154edc98b092, m1Raw[11] = 0x138b5fece48483b8, m1Raw[12] = 0x47718153cfbbcdf5, m1Raw[13] = 0xd785688ccd7deac4, m1Raw[14] = 0xe717e9cd9a4604b6, m1Raw[15] = 0xe0d57bfa9b54a74e;
    r1Raw[0] = 0x01e5520652a89ec6, r1Raw[1] = 0x7b4d541feb1b82e1, r1Raw[2] = 0x031c41bdb8f088ff, r1Raw[3] = 0x0ed1cd715e29df1f, r1Raw[4] = 0x99f8ffeec63e818a, r1Raw[5] = 0x1bb9e86c432996eb, r1Raw[6] = 0x4d0f36bc0fff6d86, r1Raw[7] = 0x70410d10365c7e09, r1Raw[8] = 0x115737b6244405be, r1Raw[9] = 0x7116e433e82c6d22, r1Raw[10] = 0x389237a0a252ce31, r1Raw[11] = 0xfd93ad1542a74b2e, r1Raw[12] = 0x6ec64541f8e27675, r1Raw[13] = 0xd2ea60695693bb12, r1Raw[14] = 0x05851e842c42e5c4, r1Raw[15] = 0x618ce1ad3b235de4;

    uint1024 a2, m2, r2;
    uint1024 b2;
    uint64 *a2Raw = (uint64 *) &a2, *b2Raw = (uint64 *) &b2, *m2Raw = (uint64 *) &m2, *r2Raw = (uint64 *) &r2;

    a2Raw[0] = 0x8d9427236b3979c3, a2Raw[1] = 0x1a6ede7fd1062a7f, a2Raw[2] = 0xf053515d70575daa, a2Raw[3] = 0xf0835da7d926d095, a2Raw[4] = 0x383d234f3214e907, a2Raw[5] = 0xcdcffb48e84c28a2, a2Raw[6] = 0xaa6da3ee831677d5, a2Raw[7] = 0x8e9c5e49c4ff3d30, a2Raw[8] = 0x131f7c8272d27d44, a2Raw[9] = 0x22d726e9b903f3e5, a2Raw[10] = 0x10befa061a8a025f, a2Raw[11] = 0xd2b7a03d3039ba26, a2Raw[12] = 0x52db2c6bf2b6f4ae, a2Raw[13] = 0xdf32fd4cf5d3f5ec, a2Raw[14] = 0x1d227cb1f3c642b1, a2Raw[15] = 0x88825e975065e55f;
    b2Raw[0] = 0x576cf0e92c92ab8b, b2Raw[1] = 0x4d9443729d67e08e, b2Raw[2] = 0x35f7d7a14661ca11, b2Raw[3] = 0x61bfa1230989ad2f, b2Raw[4] = 0x62c3f72bb90a146d, b2Raw[5] = 0x7b8d886aa124b762, b2Raw[6] = 0xbd5396e008308915, b2Raw[7] = 0x95a8c19faedb3388, b2Raw[8] = 0x62bd37ec09031e2c, b2Raw[9] = 0xd1f928dbad716a47, b2Raw[10] = 0xa867e02622ef35bd, b2Raw[11] = 0xbd9443e66697b386, b2Raw[12] = 0x603ff4f3c5369b86, b2Raw[13] = 0xe8bf403228fc9162, b2Raw[14] = 0x0a1e46095b371a4b, b2Raw[15] = 0x3b79d3fa890a75e1;
    m2Raw[0] = 0x77967d0ef46290ed, m2Raw[1] = 0x6695fbda00ca39ba, m2Raw[2] = 0xa55b1562170d3727, m2Raw[3] = 0x4640a048329bcb9e, m2Raw[4] = 0x4d63959209e21fb5, m2Raw[5] = 0xa44b6f55b93f7970, m2Raw[6] = 0xa7be471c800cd070, m2Raw[7] = 0x9df8ea220b419acc, m2Raw[8] = 0x97f35f7e7a658fa4, m2Raw[9] = 0xe3310d914969662b, m2Raw[10] = 0x0b60c78c6eb76eb4, m2Raw[11] = 0xab523639d8e3e37b, m2Raw[12] = 0x0039bbc5d9f4528d, m2Raw[13] = 0x30a78e221e35d77f, m2Raw[14] = 0x3b01fb332bb5f9a1, m2Raw[15] = 0xcb64e6d77ffab6a2;
    r2Raw[0] = 0x6c6c53132c258765, r2Raw[1] = 0x93ee23f0e3d770ee, r2Raw[2] = 0x1eed645c55c7b17c, r2Raw[3] = 0x56541ba0a615fcef, r2Raw[4] = 0x1a676c805c95076b, r2Raw[5] = 0x1b3d0e78743e0412, r2Raw[6] = 0x4b7eed0d393fc608, r2Raw[7] = 0x7c74566cc97c371e, r2Raw[8] = 0x000cd65ab1b02a0c, r2Raw[9] = 0x7af1d63d08f9aff6, r2Raw[10] = 0xb80300f71a811f3b, r2Raw[11] = 0xe66ab7e4f3c704dd, r2Raw[12] = 0xad93304b255e00ad, r2Raw[13] = 0xec8b43ede510c1b6, r2Raw[14] = 0x04568cb9614d6a13, r2Raw[15] = 0x3cd2e970bd92b582;

    uint1024 a3, m3, r3;
    uint1024 b3;
    uint64 *a3Raw = (uint64 *) &a3, *b3Raw = (uint64 *) &b3, *m3Raw = (uint64 *) &m3, *r3Raw = (uint64 *) &r3;

    a3Raw[0] = 0xef141a1d96017d73, a3Raw[1] = 0x61c27d5d99e08be6, a3Raw[2] = 0xbc5dc6ea7608e636, a3Raw[3] = 0xfa6cb0a10ba79b11, a3Raw[4] = 0x7c32eda494fc5b6c, a3Raw[5] = 0x7f04933d4ae95d7a, a3Raw[6] = 0x640ed78aee73aceb, a3Raw[7] = 0x45fc5002eb68d5b0, a3Raw[8] = 0xb3f5effa398ffc6a, a3Raw[9] = 0xec1c20db6ef3c765, a3Raw[10] = 0x87748de3c086bdc7, a3Raw[11] = 0xea4bfdf4d06facea, a3Raw[12] = 0x050d4cfd179746cd, a3Raw[13] = 0xfdb44c0c85df43be, a3Raw[14] = 0x1579c98a3aa37bc3, a3Raw[15] = 0x7b194fbde38f8609;
    b3Raw[0] = 0x3ebd0ccaf4a2c25a, b3Raw[1] = 0xe9be3b400505d7cd, b3Raw[2] = 0x3375cc94c81876d1, b3Raw[3] = 0x8acdb3b166870d87, b3Raw[4] = 0x9f785e80a8459a85, b3Raw[5] = 0x8e9de2a62369b922, b3Raw[6] = 0xeb9b66bddc3b39ff, b3Raw[7] = 0x30e8a9e1290f47d2, b3Raw[8] = 0xf5c3cbef2e87a97b, b3Raw[9] = 0xe39e99850fd32131, b3Raw[10] = 0x761f2dc470b96c22, b3Raw[11] = 0x4e77aa431372988c, b3Raw[12] = 0x043aeaa7338de423, b3Raw[13] = 0xfd9da61bc8347ed6, b3Raw[14] = 0xb91325b3beddc771, b3Raw[15] = 0xf2157353adebe813;
    m3Raw[0] = 0x0d36ee321664d8f3, m3Raw[1] = 0xf06f02d5b26e1369, m3Raw[2] = 0x2be525c649937612, m3Raw[3] = 0xcc8b079adfc8c5d0, m3Raw[4] = 0x2ee81c893bcece4f, m3Raw[5] = 0x1482f0a9254a965c, m3Raw[6] = 0x06cb08adab0fcf47, m3Raw[7] = 0x9c0dcb3cb1f57245, m3Raw[8] = 0xc9b843a7add7ab6d, m3Raw[9] = 0x152d70ffa3c8632d, m3Raw[10] = 0x73ac2dbcd4a985c8, m3Raw[11] = 0x7f02ff89e9466132, m3Raw[12] = 0xa7cf4b9e8450ae90, m3Raw[13] = 0x282f385f6cc914e6, m3Raw[14] = 0x08fe7f48a0b6b0c7, m3Raw[15] = 0xe5d54017a72830db;
    r3Raw[0] = 0xe7d687ade7fce6af, r3Raw[1] = 0xcbc88a3052fcdc1e, r3Raw[2] = 0xaff0b616c11f0de6, r3Raw[3] = 0xe5fade6f835741aa, r3Raw[4] = 0x5cb0e18821abf835, r3Raw[5] = 0xb7e3984bcd61d234, r3Raw[6] = 0xe2b9a754014b2e5b, r3Raw[7] = 0x31469cf3e8704412, r3Raw[8] = 0xe23cae4f5dd82a23, r3Raw[9] = 0x6bdd20e4c97abde3, r3Raw[10] = 0x9b380048842ffe99, r3Raw[11] = 0x6f505cc8ca02fcec, r3Raw[12] = 0x7be24fab132a7dd3, r3Raw[13] = 0x390b2652117874df, r3Raw[14] = 0xb2aad9cb7d9d2fae, r3Raw[15] = 0xc7609bfcb63d4f1f;

    // ACT
    uint1024 c0 = a0.exp(b0, m0);
    uint1024 c1 = a1.exp(b1, m1);
    uint1024 c2 = a2.exp(b2, m2);
    uint1024 c3 = a3.exp(b3, m3);

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
    ASSERT_EQ(c2, r2);
    ASSERT_EQ(c3, r3);
}

TEST(BigIntegerAlgorithmTests, ModularExponentiation2048By2048Bit) {
    // ARRANGE
    uint2048 a0, m0, r0;
    uint2048 b0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *m0Raw = (uint64 *) &m0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x139008f0674649ef, a0Raw[1] = 0xf50eaf2c0cf45656, a0Raw[2] = 0x53673dc62f90a366, a0Raw[3] = 0xec982fd7885d44ff, a0Raw[4] = 0x60f9166fa4ac0bc6, a0Raw[5] = 0x875cf36a41cc37ef, a0Raw[6] = 0xf8b0015ce71c967c, a0Raw[7] = 0x97dc7bf4deeb2f98, a0Raw[8] = 0x9237d997fac59c0d, a0Raw[9] = 0x4816cab52f54393b, a0Raw[10] = 0x324db44ad9c605ee, a0Raw[11] = 0xdf74795a622ee324, a0Raw[12] = 0x6d983e0e7caf337b, a0Raw[13] = 0xd800fa96f742f002, a0Raw[14] = 0x6a0dd59d77fc583f, a0Raw[15] = 0xfab52d9c29df39d6, a0Raw[16] = 0x33495ca7b3e80824, a0Raw[17] = 0x797a76d436470c86, a0Raw[18] = 0x72607daef4c3fd3e, a0Raw[19] = 0x06f0e9adadafb3e2, a0Raw[20] = 0x59d1433aba1cd8f5, a0Raw[21] = 0x2aed82187a89082a, a0Raw[22] = 0xa4b7268fb020ee00, a0Raw[23] = 0xebd0eed27e389213, a0Raw[24] = 0x6994fa68d39e3f96, a0Raw[25] = 0x7bf55eac3328a114, a0Raw[26] = 0x17fc63754a4acc92, a0Raw[27] = 0x9ea60d9f9a87ed0c, a0Raw[28] = 0x0cfb12670fa2439c, a0Raw[29] = 0xe937cbe99d6d3028, a0Raw[30] = 0xa204f126a931e469, a0Raw[31] = 0x46a3e73623d1a3c4;
    b0Raw[0] = 0xcb4146c7e997321f, b0Raw[1] = 0x5d51fb663135c9d5, b0Raw[2] = 0xf3159ac75bb7e96d, b0Raw[3] = 0xdc48ddba3d202287, b0Raw[4] = 0x67172099843ee9ad, b0Raw[5] = 0x22ee7823cfa0c372, b0Raw[6] = 0x138ab81770f7fe94, b0Raw[7] = 0x47b90b0cc624ac42, b0Raw[8] = 0x57ae7ea7cd985279, b0Raw[9] = 0x46fe8930678549f4, b0Raw[10] = 0xa8e62ff88aeb6d29, b0Raw[11] = 0x2058355a1916ba30, b0Raw[12] = 0x01bc4ecc919ff7b3, b0Raw[13] = 0xd8409f3a22d20824, b0Raw[14] = 0x35356bbca6e40a9e, b0Raw[15] = 0x5c0d8ed8fde4d5eb, b0Raw[16] = 0x05533bff85a641b6, b0Raw[17] = 0x129b3cced43508c6, b0Raw[18] = 0x8d41f1b5a66143df, b0Raw[19] = 0x8f726cb71a35b46c, b0Raw[20] = 0xbac07b19dda2f000, b0Raw[21] = 0xbee2187a8c829b48, b0Raw[22] = 0x50de4f951e6f9f20, b0Raw[23] = 0x8ce495dc954f98e3, b0Raw[24] = 0x127ade152d01098f, b0Raw[25] = 0xe6ec732e995b8f33, b0Raw[26] = 0xfa9e32cec2d06b24, b0Raw[27] = 0xd164225c9325aad9, b0Raw[28] = 0x7e52a57816ea635a, b0Raw[29] = 0xed6383c8404fbd86, b0Raw[30] = 0xda8965a7f4c422f3, b0Raw[31] = 0xe5c239c77261a881;
    m0Raw[0] = 0xd4aa41496b6d49e9, m0Raw[1] = 0xf8c8aa4becba3da8, m0Raw[2] = 0xe7af880e9bca908d, m0Raw[3] = 0x6c712e420c519d60, m0Raw[4] = 0x13fd9a22eb1d5986, m0Raw[5] = 0x333ce83a615a6608, m0Raw[6] = 0xcfa5ab2b25f6c4ba, m0Raw[7] = 0x2866106ae2780991, m0Raw[8] = 0x945fcf35f1035f12, m0Raw[9] = 0xd37b6035c82d9549, m0Raw[10] = 0xabe1dd2dfb7f3a61, m0Raw[11] = 0x2cb13ce39c3aaaf0, m0Raw[12] = 0x12fdd65a1c96ade5, m0Raw[13] = 0x4c29ad2e72cd1dc1, m0Raw[14] = 0x98e6bcf671a0f904, m0Raw[15] = 0x3febc05c89e30c30, m0Raw[16] = 0x4845a52855db9bba, m0Raw[17] = 0x14db9aed0542d3ca, m0Raw[18] = 0xf313ea969dff2fa3, m0Raw[19] = 0x4afae20448a08cb6, m0Raw[20] = 0x7b5f583d7ea4a8f7, m0Raw[21] = 0xe609e4e8523b87fe, m0Raw[22] = 0xcf8b53bf6583fe24, m0Raw[23] = 0xdb16c9ebbf8f4b18, m0Raw[24] = 0x4bfdfbb314be9a61, m0Raw[25] = 0x25dae05917ed619d, m0Raw[26] = 0xb8f349f644e7f235, m0Raw[27] = 0xcbb98dead6eaedfe, m0Raw[28] = 0x97f89b357359ef48, m0Raw[29] = 0xf02a9a5f5857f38f, m0Raw[30] = 0xb6c5f601661445dd, m0Raw[31] = 0x8ff6cc0755b5d4b7;
    r0Raw[0] = 0x9b5f4673e4c06dc7, r0Raw[1] = 0x97a24435ae84e156, r0Raw[2] = 0xcf4089d324684d01, r0Raw[3] = 0xfa5e41b90e9485d1, r0Raw[4] = 0xce92c71c63178095, r0Raw[5] = 0xf631e77bdfbad4cb, r0Raw[6] = 0xe03636725fd94f9c, r0Raw[7] = 0x71785633cfae96fe, r0Raw[8] = 0xe8bf416cedc8ac38, r0Raw[9] = 0xedfc97a865b311e1, r0Raw[10] = 0x5e40249a8672051d, r0Raw[11] = 0xe0351bbb778510c9, r0Raw[12] = 0x776c311b2ce03514, r0Raw[13] = 0xe950da0cb3c549c7, r0Raw[14] = 0x716c8707b21e2831, r0Raw[15] = 0x17569cc6fdd6dff7, r0Raw[16] = 0xf18b9656eeef4fb4, r0Raw[17] = 0x039fa96d67508fb4, r0Raw[18] = 0x325c766741652bbf, r0Raw[19] = 0xe4754d45698cf5d7, r0Raw[20] = 0x7149e5affbe182a6, r0Raw[21] = 0x0f67e06def267696, r0Raw[22] = 0x3a180c724aad8796, r0Raw[23] = 0xe61961997e371b03, r0Raw[24] = 0xad858317e6a38ffc, r0Raw[25] = 0xaeff4526acaa49a4, r0Raw[26] = 0x858a47f9d17b500d, r0Raw[27] = 0xa4340a1e780fbd93, r0Raw[28] = 0x78d067fe03a0f775, r0Raw[29] = 0x17cb57cc4e0ec80e, r0Raw[30] = 0x5337dd647f537ca2, r0Raw[31] = 0x192623b1ad988d6b;

    uint2048 a1, m1, r1;
    uint2048 b1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *m1Raw = (uint64 *) &m1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0x4c4b60d5694aff52, a1Raw[1] = 0x7f24293c9d46ef76, a1Raw[2] = 0x2d9a7327ae97970a, a1Raw[3] = 0xd1a5c980138891f6, a1Raw[4] = 0xe3083db516285c78, a1Raw[5] = 0x0ee8c05f63ef0692, a1Raw[6] = 0x1f57b8c3afe28af6, a1Raw[7] = 0x8117f166c04ccd9e, a1Raw[8] = 0xb7fa9b2d0c2b0a02, a1Raw[9] = 0x2821160f2523d92d, a1Raw[10] = 0xabdb085de52ace08, a1Raw[11] = 0xf809a36fb6a6361e, a1Raw[12] = 0x64709690f557f543, a1Raw[13] = 0x6d3c322b6731a669, a1Raw[14] = 0x55cdb448abee28ca, a1Raw[15] = 0x9dc69897658fd76e, a1Raw[16] = 0x15e304d32dac0af4, a1Raw[17] = 0x759f09da3a28c461, a1Raw[18] = 0x7a8e220bd2860212, a1Raw[19] = 0x27dcb340b2713b6b, a1Raw[20] = 0xb3df4e28a6609706, a1Raw[21] = 0xa5c5231e834274c5, a1Raw[22] = 0x8dd0db0ea27f2b02, a1Raw[23] = 0x38d37fb7c14c8c72, a1Raw[24] = 0x0319c016af4d8892, a1Raw[25] = 0xb7a47017f5a2b07b, a1Raw[26] = 0xc96d3139607218a9, a1Raw[27] = 0x569889980f9139ac, a1Raw[28] = 0x2fed5d08bcf63231, a1Raw[29] = 0xd0b5989ad440e95e, a1Raw[30] = 0xb1df83d73eceee6e, a1Raw[31] = 0x6641edcfe01b7577;
    b1Raw[0] = 0x80638fd65b57acde, b1Raw[1] = 0xa43481e4ae72a408, b1Raw[2] = 0xe736584e016c6dc7, b1Raw[3] = 0x67fc75aeb7430b22, b1Raw[4] = 0x0ec44f29eaca1923, b1Raw[5] = 0x4441b03a75319890, b1Raw[6] = 0x8402dfa2d0c0bdba, b1Raw[7] = 0x64cb29fc0d3c2fd8, b1Raw[8] = 0x5abab0e4918c7b50, b1Raw[9] = 0x431111f13ca70cee, b1Raw[10] = 0x6d3ba8baaa9ddbe2, b1Raw[11] = 0x4cdbf12779ad960a, b1Raw[12] = 0x3e6641e4c52fc072, b1Raw[13] = 0x98eb43d7d9304fd7, b1Raw[14] = 0x0b912fc8ec054be0, b1Raw[15] = 0x773da207d5510fb6, b1Raw[16] = 0xea905a0d91147baf, b1Raw[17] = 0x7dc93e8c26745eef, b1Raw[18] = 0xc1343250b1e30f85, b1Raw[19] = 0x33d6d560c8807597, b1Raw[20] = 0x98972e5f658bf466, b1Raw[21] = 0x895c2c9e62fccf88, b1Raw[22] = 0xde78a06b3f7a52b7, b1Raw[23] = 0xe03bf45b65ab5f15, b1Raw[24] = 0x9dd62beae0f4b033, b1Raw[25] = 0x7a9bf45ed718251a, b1Raw[26] = 0x229588cac6f0065b, b1Raw[27] = 0x1f3c83d5d90d9118, b1Raw[28] = 0x651a0d04511d0999, b1Raw[29] = 0xe0928d8210cc04ac, b1Raw[30] = 0xb528c67a39ac3ab5, b1Raw[31] = 0x9780334a5a12323e;
    m1Raw[0] = 0x1fe3683504b90043, m1Raw[1] = 0x92e43eaebb9df6ef, m1Raw[2] = 0x323ddda70360f3cc, m1Raw[3] = 0x17c0cceffa989683, m1Raw[4] = 0xd238b883c55378ef, m1Raw[5] = 0x0bcd0532f54d39f3, m1Raw[6] = 0x045a3997acfe8937, m1Raw[7] = 0x471626dca4aa43d4, m1Raw[8] = 0xa819397c984439f8, m1Raw[9] = 0x5af3e431ae2a58eb, m1Raw[10] = 0xc7e465f9d0ad3580, m1Raw[11] = 0xe304368c15d34b2b, m1Raw[12] = 0x4537fbb52d0dd2fa, m1Raw[13] = 0xb57518f194c594eb, m1Raw[14] = 0xafb3096b62280caf, m1Raw[15] = 0x4e0c540718f09bdf, m1Raw[16] = 0xfa2f835724050047, m1Raw[17] = 0x44c2a4b657999417, m1Raw[18] = 0x5d3170b0cba7385d, m1Raw[19] = 0x9a84809209c4b70f, m1Raw[20] = 0x563e6b73158d94b7, m1Raw[21] = 0x61f7271908f0c288, m1Raw[22] = 0xa5ebd759ae960d13, m1Raw[23] = 0x90bf2622df9d1dd8, m1Raw[24] = 0xa5711d30ac76b522, m1Raw[25] = 0xe43da04fa70460ab, m1Raw[26] = 0x25e3f4ad15039be1, m1Raw[27] = 0xad8e5acdeb54b20f, m1Raw[28] = 0xbecddb10c0b911e8, m1Raw[29] = 0x7eb05c9a241b7110, m1Raw[30] = 0x2072ebe4fa7cd77c, m1Raw[31] = 0x2ef0733bccd4394c;
    r1Raw[0] = 0xee84d9e4ce1ad292, r1Raw[1] = 0x7e692e81360a104f, r1Raw[2] = 0x3c7cd3c0d56a7398, r1Raw[3] = 0xa47b7f2ae9804ae6, r1Raw[4] = 0xf82b0b10c9f78dac, r1Raw[5] = 0x0e49b22582527e97, r1Raw[6] = 0xdd0f8e59e7de4f67, r1Raw[7] = 0x48ca7c3145f826b8, r1Raw[8] = 0xaf92ab1e5e484f5a, r1Raw[9] = 0x793e64a68f03a56d, r1Raw[10] = 0xb090ac8439b6c5c6, r1Raw[11] = 0x08932a27714216c7, r1Raw[12] = 0x9a0eabfce57ce703, r1Raw[13] = 0x22bc286bd1436239, r1Raw[14] = 0x1ffb102c0eeb3a95, r1Raw[15] = 0x50b602f589b6dbf9, r1Raw[16] = 0xae239889a0db0853, r1Raw[17] = 0x25421a89986cb279, r1Raw[18] = 0xeec9a0f61904a136, r1Raw[19] = 0x0944d7db94c98634, r1Raw[20] = 0x567125737a495b87, r1Raw[21] = 0xc4a37c7e3694ca46, r1Raw[22] = 0x135407109c014ff0, r1Raw[23] = 0x1f0a38d444383be7, r1Raw[24] = 0xdc424af5ff95bc8f, r1Raw[25] = 0x87d101fd8d5935af, r1Raw[26] = 0xeae92fb55d1f3cbf, r1Raw[27] = 0x382378cdec084886, r1Raw[28] = 0xf733b8bd966e172e, r1Raw[29] = 0x8cdd18f2f647a34d, r1Raw[30] = 0x986925a747b478b2, r1Raw[31] = 0x19190830a8bb8e6d;

    uint2048 a2, m2, r2;
    uint2048 b2;
    uint64 *a2Raw = (uint64 *) &a2, *b2Raw = (uint64 *) &b2, *m2Raw = (uint64 *) &m2, *r2Raw = (uint64 *) &r2;

    a2Raw[0] = 0xd235e286bd606681, a2Raw[1] = 0xbe198b12c3ffbf9d, a2Raw[2] = 0xabd4fc3c0253b745, a2Raw[3] = 0x60a50c103d418c71, a2Raw[4] = 0xdba812ca1934fa46, a2Raw[5] = 0x8d8ef1dd6a52203f, a2Raw[6] = 0x7e505a97ef3ff496, a2Raw[7] = 0xd4039bba34234b03, a2Raw[8] = 0x46ebbcef04990c04, a2Raw[9] = 0x818b7fe304ed7f11, a2Raw[10] = 0xc9f1966dc37c2cc0, a2Raw[11] = 0xff270f5ddc1d7f68, a2Raw[12] = 0x4b7b9239808fd6a2, a2Raw[13] = 0x5203113949970a2a, a2Raw[14] = 0x02db1f10fbc5a1d0, a2Raw[15] = 0xdadb3a8b452da70c, a2Raw[16] = 0xedc5dc359041d8b1, a2Raw[17] = 0xbc1665e8430d26ca, a2Raw[18] = 0xea841e99feb23aaa, a2Raw[19] = 0x437b5cc0aaaaeaa4, a2Raw[20] = 0xeb46878db2fa3a84, a2Raw[21] = 0xaa9a331fb42c2dc2, a2Raw[22] = 0x371156278132ae3b, a2Raw[23] = 0x9f1d16fe59498fef, a2Raw[24] = 0xc1332a378858c2d5, a2Raw[25] = 0x63c147525ea0e10b, a2Raw[26] = 0xdd0e920cb472c180, a2Raw[27] = 0xf35b91995f9f1199, a2Raw[28] = 0x9e00c9963169b0e6, a2Raw[29] = 0xb3d8782ee29418d0, a2Raw[30] = 0x93743d4d4e9cf1a4, a2Raw[31] = 0x432b5af0baa525a;
    b2Raw[0] = 0x913301a73635a3b9, b2Raw[1] = 0x2c9b1771e5c02b94, b2Raw[2] = 0x1dbab6c944596d1c, b2Raw[3] = 0xb282afa99e9289da, b2Raw[4] = 0x796c8a6f33b0ede9, b2Raw[5] = 0xf9de0299f0122cd1, b2Raw[6] = 0x138d9048fb1a0abc, b2Raw[7] = 0xe4caa118a03feff4, b2Raw[8] = 0x5e7e7db806a298e2, b2Raw[9] = 0x4e53a5ed32f6c63d, b2Raw[10] = 0x71ee0ec87f90be1e, b2Raw[11] = 0x321562cab17319bb, b2Raw[12] = 0x2eed8d239f0f2199, b2Raw[13] = 0x5caebd4ad6737614, b2Raw[14] = 0xb02e2ea640e98924, b2Raw[15] = 0xf89f7dd9bd689e32, b2Raw[16] = 0x1c4c6297ad883bb4, b2Raw[17] = 0x5d1854eeae04ec94, b2Raw[18] = 0x79fa5745beff5ae3, b2Raw[19] = 0xa17439f0c98fe611, b2Raw[20] = 0x31ccfe8ddc4a14bd, b2Raw[21] = 0x271376c084bff25e, b2Raw[22] = 0x1b6724408007483c, b2Raw[23] = 0x7fc68386255a854a, b2Raw[24] = 0x3c1fa066bd89d49f, b2Raw[25] = 0xe70cd74fd65c3d61, b2Raw[26] = 0xff3131d4a0dcbb94, b2Raw[27] = 0xc47f2cc9093ce2a5, b2Raw[28] = 0x7f89e0006aa4ebca, b2Raw[29] = 0x524ba56b6df79a23, b2Raw[30] = 0x2ff189da9379dd24, b2Raw[31] = 0xeddc0361e349c9d8;
    m2Raw[0] = 0x76786f344f1e9a01, m2Raw[1] = 0x48b26a4805879465, m2Raw[2] = 0xad48e2b9bd9f56d1, m2Raw[3] = 0xfc5d2a39b08ae48c, m2Raw[4] = 0x95f8aff9e2c69324, m2Raw[5] = 0x61be9130ba1102e9, m2Raw[6] = 0xcc6e352b26f7406a, m2Raw[7] = 0xc4ada83ee0048adb, m2Raw[8] = 0x1c4de0c8c079ce76, m2Raw[9] = 0x1760ad625c7c3dc3, m2Raw[10] = 0x77f3803f1541b1f0, m2Raw[11] = 0xb97f35e646b5ad26, m2Raw[12] = 0x61d16a94ac3b5cb9, m2Raw[13] = 0x54793b62158e8f88, m2Raw[14] = 0x464c2b26bd37b270, m2Raw[15] = 0x596de2ebf1b3c937, m2Raw[16] = 0xabd7bf9e36beead9, m2Raw[17] = 0x9c86d6a264a82df3, m2Raw[18] = 0xae95762ba3472d59, m2Raw[19] = 0xe81c97d713d15245, m2Raw[20] = 0x3d5c130f9377f52c, m2Raw[21] = 0xe575d33013ff42f9, m2Raw[22] = 0xee5f4ba0296711d3, m2Raw[23] = 0xc6a205a0b8720504, m2Raw[24] = 0x0a7f3a1bc63046f9, m2Raw[25] = 0x98c92b2e1321e57c, m2Raw[26] = 0xb955f6633c2b9cdd, m2Raw[27] = 0xd086030fb0910fd7, m2Raw[28] = 0xe0d5c58b66f4eee1, m2Raw[29] = 0x3251f4370de32a79, m2Raw[30] = 0xfdb216f9ee6b1d72, m2Raw[31] = 0x6a4ada563b9e3aa8;
    r2Raw[0] = 0xeef1dba19618e1ff, r2Raw[1] = 0x76fb53c82fba735a, r2Raw[2] = 0x18095bb5518642e2, r2Raw[3] = 0xbbdaa80c16ad452e, r2Raw[4] = 0x444e79bd10cabb55, r2Raw[5] = 0x5924aa4e5d5f9e08, r2Raw[6] = 0x98b619c2c389ebb2, r2Raw[7] = 0x1e78a71fd73e0774, r2Raw[8] = 0xa0c8a17a46404c27, r2Raw[9] = 0x388eddfb8f22e7ae, r2Raw[10] = 0x3df0bfcc954990e6, r2Raw[11] = 0x898a490bb6e26c33, r2Raw[12] = 0x1ab4ab08d03fe8b9, r2Raw[13] = 0x3685e4b72bdb9ab6, r2Raw[14] = 0x1a590edef2b45c4b, r2Raw[15] = 0x76c9e8b9e642dfd8, r2Raw[16] = 0x7beb1ae98a650fc2, r2Raw[17] = 0x9bebbc232e4d5465, r2Raw[18] = 0xc0a235251454aafd, r2Raw[19] = 0xb196050d62bccb1a, r2Raw[20] = 0xd3c5fdd604c42afe, r2Raw[21] = 0x60819de6ada8a6ff, r2Raw[22] = 0x5d45c0e578e8ebc4, r2Raw[23] = 0x6c8ee046ac175720, r2Raw[24] = 0x72003c6fa5414e2b, r2Raw[25] = 0xc162543eecf9fe3b, r2Raw[26] = 0x71a735ad4c390764, r2Raw[27] = 0x88bc61fcc0e55abe, r2Raw[28] = 0x8942b585d82c2d19, r2Raw[29] = 0x9a488d7b4eee4d13, r2Raw[30] = 0x974a075f836fddce, r2Raw[31] = 0x1e65042d7493226c;

    uint2048 a3, m3, r3;
    uint2048 b3;
    uint64 *a3Raw = (uint64 *) &a3, *b3Raw = (uint64 *) &b3, *m3Raw = (uint64 *) &m3, *r3Raw = (uint64 *) &r3;

    a3Raw[0] = 0x8b73306bf19132c0, a3Raw[1] = 0xd15c72c91f5e3537, a3Raw[2] = 0x9caf7ad95097bc91, a3Raw[3] = 0x1b8bf131087628b2, a3Raw[4] = 0x292a9e6ff3d01e2d, a3Raw[5] = 0x57e44bb5071c521f, a3Raw[6] = 0x3c263dbde4bc6957, a3Raw[7] = 0xd34e5d7ab204791f, a3Raw[8] = 0xa84b88e54135ad08, a3Raw[9] = 0x3bf30e3a21ef91bb, a3Raw[10] = 0xec92e537a868d845, a3Raw[11] = 0xf93baa9572011886, a3Raw[12] = 0xa520374e9ad93f34, a3Raw[13] = 0x92836d3e2f178027, a3Raw[14] = 0xa58955bb86639895, a3Raw[15] = 0x38073c598be749c0, a3Raw[16] = 0x924b8ad0ab18b7ee, a3Raw[17] = 0x2861714e401b65bf, a3Raw[18] = 0x8d103a2747cc703b, a3Raw[19] = 0xd9b3ded648cce30d, a3Raw[20] = 0xb6f2c3f80c1def93, a3Raw[21] = 0x21784d634ee7e9f7, a3Raw[22] = 0x4f00fda31e79b746, a3Raw[23] = 0x0049e7d5984ee09c, a3Raw[24] = 0x8d24665420a1ac46, a3Raw[25] = 0x6805b9d7e80b6749, a3Raw[26] = 0x16a9af5b4d6df3bc, a3Raw[27] = 0x3a77b6a0bf5fb155, a3Raw[28] = 0xcd1deb4bfaec8215, a3Raw[29] = 0xe0f4208607465868, a3Raw[30] = 0x5e983bfed158f1b9, a3Raw[31] = 0x2c12f495ce93dbe5;
    b3Raw[0] = 0xdbbe7d8b9d9c3b1e, b3Raw[1] = 0x25ac4f3bd885aede, b3Raw[2] = 0x978d58180fc1fac0, b3Raw[3] = 0x785b0a374314db56, b3Raw[4] = 0xa62061bd748b1cf1, b3Raw[5] = 0x8e71f47f9eda0490, b3Raw[6] = 0x6b4ee68cc01bea55, b3Raw[7] = 0x81999e3ceb71899e, b3Raw[8] = 0x5ac9c184277144ad, b3Raw[9] = 0xeff6f87017105ed6, b3Raw[10] = 0xb2730026ea3fd6af, b3Raw[11] = 0x7f2186301fe6ee0d, b3Raw[12] = 0xe1b158e1956e0f70, b3Raw[13] = 0x3cada181f74cf4cc, b3Raw[14] = 0x2c7b68a379a525fe, b3Raw[15] = 0xd692050e244cda44, b3Raw[16] = 0x059b28b8aaff9934, b3Raw[17] = 0x00c3b0ed0c6e7324, b3Raw[18] = 0x85e9b54287012128, b3Raw[19] = 0x15896f0b47758821, b3Raw[20] = 0x9c0eb974faec0773, b3Raw[21] = 0x9fb55db5c8f522c5, b3Raw[22] = 0xe227bf41ba07fbaf, b3Raw[23] = 0xabf1df5b32aa1282, b3Raw[24] = 0xf49d3c5f44078fb2, b3Raw[25] = 0xda02f76df1a10bce, b3Raw[26] = 0x9a3b97b73cb0b80d, b3Raw[27] = 0xaa2b6002e3e4a178, b3Raw[28] = 0xe358ad6ab1cf12dd, b3Raw[29] = 0xb55a5c61760fb981, b3Raw[30] = 0x7b60be86e22a7120, b3Raw[31] = 0x1ab582f90e3fb8e;
    m3Raw[0] = 0xc19d7cd68c6ba227, m3Raw[1] = 0xee7adf174b192c7e, m3Raw[2] = 0xbec8d53b226ce091, m3Raw[3] = 0x924a1c8142b6dcbe, m3Raw[4] = 0x7199fd4a5372d526, m3Raw[5] = 0x162d66b82d860a91, m3Raw[6] = 0x2f5b85100da93900, m3Raw[7] = 0xbd140392970e1404, m3Raw[8] = 0x9c054e1fc3e079fe, m3Raw[9] = 0x928edcfff87fcc65, m3Raw[10] = 0x7a16eb2f1a3273af, m3Raw[11] = 0x27d8d07a2906b984, m3Raw[12] = 0xa3ad1fb7f3fae4ff, m3Raw[13] = 0x0f8461d0e1d82d19, m3Raw[14] = 0xc65c9954433a0603, m3Raw[15] = 0xa944b14358f1a1b7, m3Raw[16] = 0xad1fc55118793cae, m3Raw[17] = 0x5fe0f25ce49efac8, m3Raw[18] = 0x3503e1913fe2a3c7, m3Raw[19] = 0x4d5be83203d9ef6b, m3Raw[20] = 0x0fa5b4fb34fcf826, m3Raw[21] = 0x4204d3a16d16d400, m3Raw[22] = 0xdfca15ed38f80711, m3Raw[23] = 0xadf07a4337ba2b0f, m3Raw[24] = 0x911b9b90e8796005, m3Raw[25] = 0xff886bc950aa794a, m3Raw[26] = 0xf0ab27c77a03bb83, m3Raw[27] = 0xaf28cc471a5b1541, m3Raw[28] = 0x4529d5cd8ba28a4a, m3Raw[29] = 0xdf6283cb2644eb4b, m3Raw[30] = 0xe6739207ffe0a23f, m3Raw[31] = 0x2b59aa2c3b2357bb;
    r3Raw[0] = 0xf1e5bee86cc27ec9, r3Raw[1] = 0x2ee95e1b7857232d, r3Raw[2] = 0x0b3da60b02b4786b, r3Raw[3] = 0x718696ed11c7df70, r3Raw[4] = 0x4c97c56383e3f9c9, r3Raw[5] = 0x6f9c685584ae4048, r3Raw[6] = 0x2b63e28904072405, r3Raw[7] = 0xac017f9aeafcf9bb, r3Raw[8] = 0xf88128e2cead5725, r3Raw[9] = 0x55aaced977f39ac2, r3Raw[10] = 0x8f67ba3941e89c87, r3Raw[11] = 0xf98239e9ee16a5f7, r3Raw[12] = 0x42a9eb58a8cf5889, r3Raw[13] = 0xfe010f2865970780, r3Raw[14] = 0x8529fab92a8f1673, r3Raw[15] = 0xeb3758a701404cee, r3Raw[16] = 0x655dd9f3476ea644, r3Raw[17] = 0xb0b5b7734caa5fea, r3Raw[18] = 0x1cf96e45892398f8, r3Raw[19] = 0x55100d042a461598, r3Raw[20] = 0x0fbb9d19cf2e0358, r3Raw[21] = 0x8d204202455161f0, r3Raw[22] = 0x3a91a5c15e5e85b5, r3Raw[23] = 0xb29d4005d789d348, r3Raw[24] = 0x86f5c2b66ca36de3, r3Raw[25] = 0xcb402f59a2dfe3f8, r3Raw[26] = 0x37dd804758ca4ff5, r3Raw[27] = 0x9af7c8c46ad00f88, r3Raw[28] = 0xce8b2f0479f55f4d, r3Raw[29] = 0xacfe46cfd062aaea, r3Raw[30] = 0xc9acb9c53eb8485c, r3Raw[31] = 0x15d02b799c4a53b2;

    // ACT
    uint2048 c0 = a0.exp(b0, m0);
    uint2048 c1 = a1.exp(b1, m1);
    uint2048 c2 = a2.exp(b2, m2);
    uint2048 c3 = a3.exp(b3, m3);

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
    ASSERT_EQ(c2, r2);
    ASSERT_EQ(c3, r3);
}

