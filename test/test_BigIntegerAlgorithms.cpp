//
// Created by matthew on 15/05/2020.
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "../include/BigInteger.h"

/* BigInteger Extended Euclidean Algorithm Tests */

TEST(BigIntegerAlgorithmTests, ExtendedEuclidean128By128Bit) {
    // ARRANGE
    uint128 a0, y0;
    uint128 b0, x0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *x0Raw = (uint64 *) &x0, *y0Raw = (uint64 *) &y0;

    a0Raw[0] = 0x5821e949538c7064, a0Raw[1] = 0xb06614c8783473fa;
    b0Raw[0] = 0xae131b33870f9164, b0Raw[1] = 0xe1b63970df596bc7;
    x0Raw[0] = 0x5233b9a044cd0b2c, x0Raw[1] = 0xfc63b8cba8f862f5;
    y0Raw[0] = 0x425e95e2cfc53bbd, y0Raw[1] = 0x2d257fe95029ad1;

    uint128 a1, y1;
    uint128 b1, x1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *x1Raw = (uint64 *) &x1, *y1Raw = (uint64 *) &y1;

    a1Raw[0] = 0x06e19e50e36edfef, a1Raw[1] = 0xb210223e9968f3ef;
    b1Raw[0] = 0x07009dc649f88fd1, b1Raw[1] = 0xfdcef163083405db;
    x1Raw[0] = 0x00328bdaf0fceec4, x1Raw[1] = 0xf21435c2f06a3f62;
    y1Raw[0] = 0x303da063598138f5, y1Raw[1] = 0x9c43acb60e43546;

    uint128 a2, y2;
    uint128 b2, x2;
    uint64 *a2Raw = (uint64 *) &a2, *b2Raw = (uint64 *) &b2, *x2Raw = (uint64 *) &x2, *y2Raw = (uint64 *) &y2;

    a2Raw[0] = 0x68d037727992c578, a2Raw[1] = 0x818c8f8def368da2;
    b2Raw[0] = 0x8dbf9b3d2cbc0b4b, b2Raw[1] = 0x709dd97baf611568;
    x2Raw[0] = 0x478f372d7e1db73b, x2Raw[1] = 0xf7d87b2dd60f8d04;
    y2Raw[0] = 0x488ae6303a252431, y2Raw[1] = 0x961633e25028066;

    uint128 a3, y3;
    uint128 b3, x3;
    uint64 *a3Raw = (uint64 *) &a3, *b3Raw = (uint64 *) &b3, *x3Raw = (uint64 *) &x3, *y3Raw = (uint64 *) &y3;

    a3Raw[0] = 0x928b46e68f0f3688, a3Raw[1] = 0xaba0419137f05a5f;
    b3Raw[0] = 0xc8484c25761c90dc, b3Raw[1] = 0xdafd83ad3ff2dd4e;
    x3Raw[0] = 0xc5bccec44dcc9991, x3Raw[1] = 0x107b916ac13a2fb3;
    y3Raw[0] = 0x40624d8a1ea10339, y3Raw[1] = 0xf3150f8db5a4e06b;

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

    a0Raw[0] = 0xf3b7c426c984af0d, a0Raw[1] = 0xfec7ab4f1cc86966, a0Raw[2] = 0x7dd4779d27fb93df, a0Raw[3] = 0xe0d71b8568963b48;
    b0Raw[0] = 0x1a6e90d824e70417, b0Raw[1] = 0xe857e561788b6bc5;
    x0Raw[0] = 0x93c9e519beed9e22, x0Raw[1] = 0x73d532d21e58eade;
    y0Raw[0] = 0x36b2f1f303b86951, y0Raw[1] = 0x56708d887f6805d8, y0Raw[2] = 0x448c87e1f0feda9b, y0Raw[3] = 0x8fe864f2df5bde8f;

    uint256 a1, y1;
    uint128 b1, x1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *x1Raw = (uint64 *) &x1, *y1Raw = (uint64 *) &y1;

    a1Raw[0] = 0x87cc66c2414c4e25, a1Raw[1] = 0x1e36df14ea50ad98, a1Raw[2] = 0xc05764f6eb21431c, a1Raw[3] = 0xe42a5b07a7842faf;
    b1Raw[0] = 0x0ef3036921998ee7, b1Raw[1] = 0xaddfbb11663ca71d;
    x1Raw[0] = 0xc6ef504c8e7b33a6, x1Raw[1] = 0xdcfd45e0bb0a31bb;
    y1Raw[0] = 0x8500d4cdcda8b185, y1Raw[1] = 0xbffa2c81d52eb598, y1Raw[2] = 0xd8305ee31250fb01, y1Raw[3] = 0x2df14e43d3b4b0c8;

    uint256 a2, y2;
    uint128 b2, x2;
    uint64 *a2Raw = (uint64 *) &a2, *b2Raw = (uint64 *) &b2, *x2Raw = (uint64 *) &x2, *y2Raw = (uint64 *) &y2;

    a2Raw[0] = 0xf2731a5ce266171c, a2Raw[1] = 0x72173f310ddf1196, a2Raw[2] = 0xd21dbb58144e566d, a2Raw[3] = 0x7e5674818ff5d549;
    b2Raw[0] = 0x51e0e41b4fd78584, b2Raw[1] = 0x48fbbb300f3b474;
    x2Raw[0] = 0x296464d5af98878e, x2Raw[1] = 0xffd933debddf6c27;
    y2Raw[0] = 0x50b7745a3ba73bff, y2Raw[1] = 0xcce1ee5a09d0bffa, y2Raw[2] = 0x48592a34ed0ed98d, y2Raw[3] = 0x432901081b1228a;

    uint256 a3, y3;
    uint128 b3, x3;
    uint64 *a3Raw = (uint64 *) &a3, *b3Raw = (uint64 *) &b3, *x3Raw = (uint64 *) &x3, *y3Raw = (uint64 *) &y3;

    a3Raw[0] = 0x3ebc76731f57f8a3, a3Raw[1] = 0x8e78133ad8f8e376, a3Raw[2] = 0x56fe57044316593c, a3Raw[3] = 0x1d322d2ac0394701;
    b3Raw[0] = 0xba7fb9f4eb3abcc9, b3Raw[1] = 0xfe43287e79ca8670;
    x3Raw[0] = 0x2c17f6d998829900, x3Raw[1] = 0x6e734ab815364757;
    y3Raw[0] = 0xf43afba5a1d18a79, y3Raw[1] = 0x154adb86403897cd, y3Raw[2] = 0x1b4aad907bae824f, y3Raw[3] = 0xf35140c70385aed9;

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

    a0Raw[0] = 0x842818835842ea40, a0Raw[1] = 0x2ba9cbd0869c3201, a0Raw[2] = 0x43edae669e7a8e62, a0Raw[3] = 0xd0dbf5b6e9c97d94;
    b0Raw[0] = 0x5c32f95d4b3964ad, b0Raw[1] = 0x21da5f51e5a99af0, b0Raw[2] = 0x6a1a5aed42211afb, b0Raw[3] = 0xbe54c823709b0558;
    x0Raw[0] = 0x5fc9b48796ce996e, x0Raw[1] = 0x58d915f4f9e23d9d, x0Raw[2] = 0xc2f8b8f633a2a695, x0Raw[3] = 0x29c074e55fe72490;
    y0Raw[0] = 0x95de6154edd7a9a5, y0Raw[1] = 0x5eb0a50ed53eb62f, y0Raw[2] = 0xd502e3763ec30a0a, y0Raw[3] = 0xd22f0fbe02d50f14;

    uint256 a1, y1;
    uint256 b1, x1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *x1Raw = (uint64 *) &x1, *y1Raw = (uint64 *) &y1;

    a1Raw[0] = 0x16b3777694b1e37d, a1Raw[1] = 0xc59d39261a987b21, a1Raw[2] = 0x1ab7fedd307e7157, a1Raw[3] = 0x6e8b4b11af3494ea;
    b1Raw[0] = 0xd312ab8a0439f169, b1Raw[1] = 0xf918c605daf37056, b1Raw[2] = 0xd90da6d09713b1fa, b1Raw[3] = 0x74fd7cfe99df364d;
    x1Raw[0] = 0x07dc92e53a6f041c, x1Raw[1] = 0x786683aa10b589b1, x1Raw[2] = 0x7549b334d7324c12, x1Raw[3] = 0xf3f9b72fa811954f;
    y1Raw[0] = 0x9cda71fd358ca80d, y1Raw[1] = 0x8abdf2079ecdb912, y1Raw[2] = 0xd72356159af0000c, y1Raw[3] = 0xb5cac568fa290f4;

    uint256 a2, y2;
    uint256 b2, x2;
    uint64 *a2Raw = (uint64 *) &a2, *b2Raw = (uint64 *) &b2, *x2Raw = (uint64 *) &x2, *y2Raw = (uint64 *) &y2;

    a2Raw[0] = 0xe00fde768a71f25b, a2Raw[1] = 0x7903527e34d5e218, a2Raw[2] = 0x3d90c899bf1a0825, a2Raw[3] = 0x7a5153e2ea54bbc7;
    b2Raw[0] = 0x2202536cda599504, b2Raw[1] = 0x9b503b9c89c0e931, b2Raw[2] = 0x44fb750b66d73e1b, b2Raw[3] = 0x66cb6ddba9ad90e1;
    x2Raw[0] = 0x17ce7e9f9c392a37, x2Raw[1] = 0x0b56d6128a434897, x2Raw[2] = 0x737bdaeea79a8479, x2Raw[3] = 0x236e3de73e46df78;
    y2Raw[0] = 0x35992436da9197dd, y2Raw[1] = 0x09598079aa7d1640, y2Raw[2] = 0xc421489e6cdcb198, y2Raw[3] = 0xd5d71ceb35c4e746;

    uint256 a3, y3;
    uint256 b3, x3;
    uint64 *a3Raw = (uint64 *) &a3, *b3Raw = (uint64 *) &b3, *x3Raw = (uint64 *) &x3, *y3Raw = (uint64 *) &y3;

    a3Raw[0] = 0x32d92251430956c1, a3Raw[1] = 0x13be24fccfb04658, a3Raw[2] = 0xe73a7e1abcb489ab, a3Raw[3] = 0x3b610d5c8514935a;
    b3Raw[0] = 0x1baaf05282a449a7, b3Raw[1] = 0xc9d77fc5e7f4d8ed, b3Raw[2] = 0xda81166f88e1e273, b3Raw[3] = 0x537c45fffcd9e099;
    x3Raw[0] = 0xbf6ea630b01901c3, x3Raw[1] = 0x7cf1bf4c9e93cf31, x3Raw[2] = 0xad34aaa58fe59a9d, x3Raw[3] = 0x9b69fd17963397a;
    y3Raw[0] = 0x9a7d8ffdcce4c600, y3Raw[1] = 0x425eabc01c025492, y3Raw[2] = 0xf1d06b573edab9b9, y3Raw[3] = 0xf91762c5d7b31e6b;

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

    a0Raw[0] = 0xe2f9c987b82d0fcb, a0Raw[1] = 0x3642ffb3d1cc1d9b, a0Raw[2] = 0x5fc2b66f259d3c64, a0Raw[3] = 0xb48989e9480b6c65, a0Raw[4] = 0xa94cc2c7d0374232, a0Raw[5] = 0xd02a523d82d29666, a0Raw[6] = 0xe71bdd4500ae2735, a0Raw[7] = 0x42efd2c6c80d0420;
    b0Raw[0] = 0x0c318686f4b756e9, b0Raw[1] = 0xbd000bd9521bbbff, b0Raw[2] = 0x73ed5906ff9ae679, b0Raw[3] = 0x84b1b01a7274879f;
    x0Raw[0] = 0x77bd45a915f18b32, x0Raw[1] = 0x000092d57e7a35c0, x0Raw[2] = 0x4ec3f84acff2c2da, x0Raw[3] = 0x2ec787cf4311de41;
    y0Raw[0] = 0x23a6d590cea2a3a3, y0Raw[1] = 0x7d29da6dd7e230ce, y0Raw[2] = 0xae252bb498ed1d3b, y0Raw[3] = 0xc7e23175f508a9c4, y0Raw[4] = 0x68553fc87757ed65, y0Raw[5] = 0x8be83eb2ad1813be, y0Raw[6] = 0x72d4a7952e577593, y0Raw[7] = 0xe8670254e8272ee2;

    uint512 a1, y1;
    uint256 b1, x1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *x1Raw = (uint64 *) &x1, *y1Raw = (uint64 *) &y1;

    a1Raw[0] = 0xd059133ccd6045a6, a1Raw[1] = 0x539ba11e6d57a69f, a1Raw[2] = 0x742f92658c239e8a, a1Raw[3] = 0x097c32df69528069, a1Raw[4] = 0x1c7b40e5f184cc81, a1Raw[5] = 0x139b07a0128d3813, a1Raw[6] = 0xef544e08d4731775, a1Raw[7] = 0xa6c7d1aaf7fbdb29;
    b1Raw[0] = 0x3ded0f47029d2287, b1Raw[1] = 0x23473eb787a41b0d, b1Raw[2] = 0x569c3b47811c1ec8, b1Raw[3] = 0xfbb4c564535540cd;
    x1Raw[0] = 0x51074d9d78ab55c8, x1Raw[1] = 0xebf2e3a947f2456b, x1Raw[2] = 0x49a75fa3620e62c5, x1Raw[3] = 0x15c06cfac3ac0a45;
    y1Raw[0] = 0x2747b6e1105dcc67, y1Raw[1] = 0x6a1aba86fac5d136, y1Raw[2] = 0xf53859543880eb53, y1Raw[3] = 0x0e955c8cd40f689e, y1Raw[4] = 0xf0b31c4e3a5b4f03, y1Raw[5] = 0x637ae828d6219bcf, y1Raw[6] = 0x7ef0a075936333e1, y1Raw[7] = 0xf1965c20dca0f8cf;

    uint512 a2, y2;
    uint256 b2, x2;
    uint64 *a2Raw = (uint64 *) &a2, *b2Raw = (uint64 *) &b2, *x2Raw = (uint64 *) &x2, *y2Raw = (uint64 *) &y2;

    a2Raw[0] = 0x47005cd3f48b0dd1, a2Raw[1] = 0x862134e9f7d131f1, a2Raw[2] = 0x9e1c089a64f08174, a2Raw[3] = 0x24c00fa1a6a8f42f, a2Raw[4] = 0xd1014984fcb917ea, a2Raw[5] = 0x71d9c2176a12a1d6, a2Raw[6] = 0xc582dc28f1d215b5, a2Raw[7] = 0x71d6fb9c58618aaf;
    b2Raw[0] = 0x0bac53364c6a1c91, b2Raw[1] = 0xdbe0101a71aa2236, b2Raw[2] = 0xaa47167dafbdae8f, b2Raw[3] = 0xb09d7ed217f2b21c;
    x2Raw[0] = 0x16c70c28cd174495, x2Raw[1] = 0xc0f21b374c5a0621, x2Raw[2] = 0x3ad5063796023431, x2Raw[3] = 0xfca94ddcf778dc67;
    y2Raw[0] = 0xd5da822efd6cf99c, y2Raw[1] = 0x524477fe7688a0a0, y2Raw[2] = 0x7dde8b43ffd9bea6, y2Raw[3] = 0xe89f341ea5b164d8, y2Raw[4] = 0x20a3cb54498f88db, y2Raw[5] = 0x13cb7bc7585cb504, y2Raw[6] = 0x62e5ae2360727ecb, y2Raw[7] = 0x226e7f05fffab8c;

    uint512 a3, y3;
    uint256 b3, x3;
    uint64 *a3Raw = (uint64 *) &a3, *b3Raw = (uint64 *) &b3, *x3Raw = (uint64 *) &x3, *y3Raw = (uint64 *) &y3;

    a3Raw[0] = 0xb36877320f8f2c24, a3Raw[1] = 0xe2f33808ae0b880f, a3Raw[2] = 0xbfc2678d854c275b, a3Raw[3] = 0x0c20f35940f79e76, a3Raw[4] = 0xa0c68bc4bb8c700a, a3Raw[5] = 0xae6ea1eb3c649123, a3Raw[6] = 0x4b2df2a81b607deb, a3Raw[7] = 0x3c7ccdf7e1abb41e;
    b3Raw[0] = 0x7d9a254ce46fd385, b3Raw[1] = 0xa56a5dbaaa300dd7, b3Raw[2] = 0x70e9c97f5894a109, b3Raw[3] = 0xb5d6958a149ded7b;
    x3Raw[0] = 0xbef9b9a597712a1a, x3Raw[1] = 0xe5ad9bb2ad503ea4, x3Raw[2] = 0x33b665ba9ce462f6, x3Raw[3] = 0xeae968b6c027d617;
    y3Raw[0] = 0xc4a5e1ff3cccabc5, y3Raw[1] = 0x4173091232a3b00e, y3Raw[2] = 0x87d5be9a51e26e34, y3Raw[3] = 0x8ecfcd4641428bd4, y3Raw[4] = 0x9079c9ac0b20e349, y3Raw[5] = 0x7fb8160ce7b2b509, y3Raw[6] = 0xb0b0c16c7a5a4a8f, y3Raw[7] = 0x703d007269d00c6;

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

    a0Raw[0] = 0xaa3944085da640f5, a0Raw[1] = 0x8d4dae55eaf2d135, a0Raw[2] = 0x01efeb557dd780b3, a0Raw[3] = 0xb6463790d18491c8, a0Raw[4] = 0xd44efd4d69f83ed5, a0Raw[5] = 0x08518ce0e1fc3b69, a0Raw[6] = 0xae1394d8577a2391, a0Raw[7] = 0xf4354721b58c889;
    b0Raw[0] = 0x3e367105672cf99e, b0Raw[1] = 0xa542bca80983a284, b0Raw[2] = 0x5db88a3be14094c4, b0Raw[3] = 0x171137a6cfe24109, b0Raw[4] = 0xb5c7bf6496d514a9, b0Raw[5] = 0x4ae33988aa427a49, b0Raw[6] = 0x2d7eb0e6ef5554ab, b0Raw[7] = 0x9c6ac2ea5dbfca57;
    x0Raw[0] = 0x9bf4903917aeb76d, x0Raw[1] = 0xb9d64a07629a070b, x0Raw[2] = 0xae708d1e567a2d21, x0Raw[3] = 0x9fc1b4785c5529f9, x0Raw[4] = 0x7751f01a08b84902, x0Raw[5] = 0xb43fa39ecf9e058f, x0Raw[6] = 0x30ad2e83e652cdc4, x0Raw[7] = 0x3d7451c3f45fa61a;
    y0Raw[0] = 0x2818aa0dcadbc628, y0Raw[1] = 0x4a173df9f4b50fbc, y0Raw[2] = 0x8d5eb5ad02e4b265, y0Raw[3] = 0xb7ec2771a5abc3f8, y0Raw[4] = 0xd413312c1beef024, y0Raw[5] = 0x1f7c36f16ad21698, y0Raw[6] = 0xce016df8f91a1fad, y0Raw[7] = 0xfa00db69ed192697;

    uint512 a1, y1;
    uint512 b1, x1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *x1Raw = (uint64 *) &x1, *y1Raw = (uint64 *) &y1;

    a1Raw[0] = 0xc7e4ac47689a3191, a1Raw[1] = 0xc1cbbb4ae427dc51, a1Raw[2] = 0x5c9ce7675b94904a, a1Raw[3] = 0xc5912d524d59fdce, a1Raw[4] = 0xbcc7d89b4789c591, a1Raw[5] = 0xb238d868c864c482, a1Raw[6] = 0x9e062d1edc485941, a1Raw[7] = 0x6336bc4689004e7d;
    b1Raw[0] = 0xe1f0fe89973b54e7, b1Raw[1] = 0xe6abbc0228bf9a7b, b1Raw[2] = 0x27e1912da9dcd8a4, b1Raw[3] = 0x5393eb42fd6ca8e0, b1Raw[4] = 0xa591bfce94ee2b60, b1Raw[5] = 0xa854fd9ba7b88fdf, b1Raw[6] = 0xb0a0fdbc008a9826, b1Raw[7] = 0xa1d472da32c99230;
    x1Raw[0] = 0x42f8ebe51171dd78, x1Raw[1] = 0x4a82ab2931c219c3, x1Raw[2] = 0x0b3918f4f83a0c43, x1Raw[3] = 0x917e1512f9c3c0e8, x1Raw[4] = 0x3eff3da6e8c803d9, x1Raw[5] = 0xe46ae604b37a948d, x1Raw[6] = 0x1e1aba084f96d9af, x1Raw[7] = 0xe06942c909a1e84c;
    y1Raw[0] = 0xea6f6c70e99e468f, y1Raw[1] = 0x8c7a453a46f03357, y1Raw[2] = 0xb92d6c829ebe039f, y1Raw[3] = 0xdf3dfcced76c0ee3, y1Raw[4] = 0xe6a7456f9dfa33a0, y1Raw[5] = 0xca129536720518f1, y1Raw[6] = 0xd098512b45906d2f, y1Raw[7] = 0x135dc686fe7d1a57;

    uint512 a2, y2;
    uint512 b2, x2;
    uint64 *a2Raw = (uint64 *) &a2, *b2Raw = (uint64 *) &b2, *x2Raw = (uint64 *) &x2, *y2Raw = (uint64 *) &y2;

    a2Raw[0] = 0xfab001fe9685eba0, a2Raw[1] = 0xf2a9bd3cd72489a7, a2Raw[2] = 0x18d588b599f518eb, a2Raw[3] = 0x52274f93cedc66fb, a2Raw[4] = 0x81526aa51add789c, a2Raw[5] = 0xce677f7bdc6c4d4f, a2Raw[6] = 0xb4138c275f7b74f8, a2Raw[7] = 0xa9c83582f19db85c;
    b2Raw[0] = 0x866d788e8924e01c, b2Raw[1] = 0x29cd24ae82f348c5, b2Raw[2] = 0xe4c06a856d33293b, b2Raw[3] = 0x7a8f5466991d1123, b2Raw[4] = 0xeb3af61400eee367, b2Raw[5] = 0x6f1b02a8c45c28fc, b2Raw[6] = 0x4a0a7a5c4ea5a721, b2Raw[7] = 0x3a167b01a6c9546e;
    x2Raw[0] = 0xd51e272408dfd131, x2Raw[1] = 0x26c0529d56a25559, x2Raw[2] = 0xa7877f9729dc957c, x2Raw[3] = 0x106364e7683c1be7, x2Raw[4] = 0xf8d20178cfcebcc9, x2Raw[5] = 0xf0d35f9aa87d1d50, x2Raw[6] = 0x61f389bcda076786, x2Raw[7] = 0xfe3df230203e6769;
    y2Raw[0] = 0xce38a6dbae09c15f, y2Raw[1] = 0x00b8f57556f6e640, y2Raw[2] = 0xba90fb61f4738f17, y2Raw[3] = 0xaf6a2890e233466d, y2Raw[4] = 0x17affc46aaa49ee0, y2Raw[5] = 0x1f6c4b0cb414d886, y2Raw[6] = 0xcdbb7d7b80e68252, y2Raw[7] = 0x52370e291944a5c;

    uint512 a3, y3;
    uint512 b3, x3;
    uint64 *a3Raw = (uint64 *) &a3, *b3Raw = (uint64 *) &b3, *x3Raw = (uint64 *) &x3, *y3Raw = (uint64 *) &y3;

    a3Raw[0] = 0x42b396dd9bb96bfa, a3Raw[1] = 0xc088c5435c3b9955, a3Raw[2] = 0x5a92927afd2be786, a3Raw[3] = 0x1cc5a125014fb4fd, a3Raw[4] = 0xd1cc20304f46117e, a3Raw[5] = 0x2cb0f39eaaa51390, a3Raw[6] = 0x50c4c1a2af3e43e9, a3Raw[7] = 0xbdf9aff545712606;
    b3Raw[0] = 0xd46dc8080d435b4e, b3Raw[1] = 0x1bdeaf9bc4ca17aa, b3Raw[2] = 0x757e373788e516e8, b3Raw[3] = 0x956a6dfeb8328beb, b3Raw[4] = 0xd13a2e68ba7a111d, b3Raw[5] = 0x4ef98452ebd51714, b3Raw[6] = 0xf6191c949b14fd2a, b3Raw[7] = 0xff5b251a159743e3;
    x3Raw[0] = 0xc7668d02f5416307, x3Raw[1] = 0xdec295c7cc0c20f0, x3Raw[2] = 0x2d259d9709e4da02, x3Raw[3] = 0x8702f7ca3a2cdd93, x3Raw[4] = 0x6ec02488aee3b7d5, x3Raw[5] = 0xf87afc8170c2e13e, x3Raw[6] = 0x1437e1df5013bd5c, x3Raw[7] = 0xe99295bee2a0ddc9;
    y3Raw[0] = 0x3c7d94f4a9d4d6fa, y3Raw[1] = 0x232e6974b08b2656, y3Raw[2] = 0x21445c568f67e0ba, y3Raw[3] = 0x8161807242e49e77, y3Raw[4] = 0x94b26a6024488b39, y3Raw[5] = 0x18633ed6ae415909, y3Raw[6] = 0x20a2937aec07662b, y3Raw[7] = 0x10af65ea578a5cf0;

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

    a0Raw[0] = 0xa08af92418686faa, a0Raw[1] = 0x169939fe83978891, a0Raw[2] = 0xdfe88262df0f7c12, a0Raw[3] = 0xa06d22edbe4781bd, a0Raw[4] = 0x7c3b6cd324f8a190, a0Raw[5] = 0xd76cbbd7a7be22f5, a0Raw[6] = 0x597c6d34bfe65f26, a0Raw[7] = 0xaec5c8a65eb7cd2b, a0Raw[8] = 0x78bd9717027d9b7b, a0Raw[9] = 0xa6973b52ac8c7cf7, a0Raw[10] = 0x8d484462707fbb9b, a0Raw[11] = 0xbe221d3d94227fc5, a0Raw[12] = 0x7c9e9ac6089f7a32, a0Raw[13] = 0x0bd31426806e11a0, a0Raw[14] = 0xa7c72cbfed4a615f, a0Raw[15] = 0xce3297ba0acc66e1;
    b0Raw[0] = 0x378c6c2ce688fdd5, b0Raw[1] = 0x39c0b01151a63933, b0Raw[2] = 0x7ecd02bdcab4a860, b0Raw[3] = 0x90b20cb4378b85fe, b0Raw[4] = 0x6fd2eaf44ddac543, b0Raw[5] = 0xdbee7e6dbd706e7b, b0Raw[6] = 0x8dc57f300f0497f5, b0Raw[7] = 0x5229621fd740f690;
    x0Raw[0] = 0x684088e043a0f17f, x0Raw[1] = 0x60f07511562c0017, x0Raw[2] = 0x684a76a3c4041a6d, x0Raw[3] = 0x4f5307f040c99d5b, x0Raw[4] = 0x40677a7fe265efef, x0Raw[5] = 0x22693ddea31fd84c, x0Raw[6] = 0x7b3066cd4669afcf, x0Raw[7] = 0xf69a8cb5289c7a07;
    y0Raw[0] = 0xa0a4514a1d6b147f, y0Raw[1] = 0x2dc6e61395d5a0c9, y0Raw[2] = 0x2287ee6bf8692ad7, y0Raw[3] = 0x80c52abf4a1de6f6, y0Raw[4] = 0x1f1306bca4ce59ec, y0Raw[5] = 0xba952261dc8dd61f, y0Raw[6] = 0x819253a3e1fbf906, y0Raw[7] = 0x27c69ec037a6a391, y0Raw[8] = 0x0441ffa10e4d6814, y0Raw[9] = 0xe39011051cb4daf6, y0Raw[10] = 0xe87227f7facde24f, y0Raw[11] = 0x4f23a1c7fe938e41, y0Raw[12] = 0x39df2a8b471c79d7, y0Raw[13] = 0x1da6d218209920cc, y0Raw[14] = 0xdef35b34a46f4152, y0Raw[15] = 0x1794db6820dd256b;

    uint1024 a1, y1;
    uint512 b1, x1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *x1Raw = (uint64 *) &x1, *y1Raw = (uint64 *) &y1;

    a1Raw[0] = 0x9afa7efe082b0e87, a1Raw[1] = 0x2ee3e0b9f23b08b6, a1Raw[2] = 0x164dc890db4deccb, a1Raw[3] = 0x678767ef84570bd6, a1Raw[4] = 0x80248ce67654d265, a1Raw[5] = 0xa863c55451b24f30, a1Raw[6] = 0x30b2f837857807f5, a1Raw[7] = 0xe16fdf14115ecddc, a1Raw[8] = 0x28497a212ebf545d, a1Raw[9] = 0xf7b32916e9c1787a, a1Raw[10] = 0x3d8d81ff16fee16b, a1Raw[11] = 0x1107fe371357dda8, a1Raw[12] = 0x7efb0b670c4b5547, a1Raw[13] = 0x265a69a3e4c717f6, a1Raw[14] = 0x9630f786b9963260, a1Raw[15] = 0x7decb2e01ee12144;
    b1Raw[0] = 0x44dfd1f3b31a3250, b1Raw[1] = 0xedf1bdd7e703d8fa, b1Raw[2] = 0xa80d5d04bfb31e59, b1Raw[3] = 0xc0848133f61156d5, b1Raw[4] = 0xa62d99bcbb0a7425, b1Raw[5] = 0x7c6f83b1aca4facd, b1Raw[6] = 0x29b45ebb2b4b475d, b1Raw[7] = 0x46a95d857b13baad;
    x1Raw[0] = 0xf409d38b018ee7d7, x1Raw[1] = 0x85d2523d2fa966b2, x1Raw[2] = 0xf29fbadef81aa106, x1Raw[3] = 0x828ae8823836c764, x1Raw[4] = 0xe2e1cf6765b6aa4d, x1Raw[5] = 0xbf4db42677613510, x1Raw[6] = 0x7a251cc9ef874590, x1Raw[7] = 0x10e2a25d108d9258;
    y1Raw[0] = 0x85cc9b978fc7a0b2, y1Raw[1] = 0xffc388dafc7a89a3, y1Raw[2] = 0x92cb4a033947558f, y1Raw[3] = 0xab198768a8eb1a13, y1Raw[4] = 0xb80aeb8bfa1622df, y1Raw[5] = 0x2d6875227f019aae, y1Raw[6] = 0x476f2e76317a4118, y1Raw[7] = 0x2a7b4d259b848361, y1Raw[8] = 0x9db0d11f414d02a1, y1Raw[9] = 0x13c26b9e6b0e2ab3, y1Raw[10] = 0x88ad7acfe5732801, y1Raw[11] = 0xd845e969f999f40c, y1Raw[12] = 0x05e0cdde3b7fd217, y1Raw[13] = 0xf630f914413c0a13, y1Raw[14] = 0xe51b296dc80def79, y1Raw[15] = 0xe1e8b8288dd01cdc;

    uint1024 a2, y2;
    uint512 b2, x2;
    uint64 *a2Raw = (uint64 *) &a2, *b2Raw = (uint64 *) &b2, *x2Raw = (uint64 *) &x2, *y2Raw = (uint64 *) &y2;

    a2Raw[0] = 0xdfc3c28fb970667d, a2Raw[1] = 0x7f40d9a27d6fb517, a2Raw[2] = 0xbe6e20eb64e267b3, a2Raw[3] = 0xbb5660c86f182e73, a2Raw[4] = 0xc16be0e5eaf4bd6d, a2Raw[5] = 0x00032c639a29abb6, a2Raw[6] = 0xbf17ae4b5ae9d0f8, a2Raw[7] = 0x381f8c98391982f0, a2Raw[8] = 0x26e0e5a83947d82b, a2Raw[9] = 0xab21c884a61b8514, a2Raw[10] = 0xef24a0f4fbf69c06, a2Raw[11] = 0x777ce11c2152f78e, a2Raw[12] = 0xf77d46eacff2526a, a2Raw[13] = 0x2628333d95590636, a2Raw[14] = 0x497f8e8cf32537be, a2Raw[15] = 0x7d049de626b5c7c4;
    b2Raw[0] = 0x014a1bccc43b9b26, b2Raw[1] = 0x9bff0311cc4b0372, b2Raw[2] = 0x9c01846100e3e649, b2Raw[3] = 0x8a8be4cf9151d6cb, b2Raw[4] = 0x5fd19e77ca165d20, b2Raw[5] = 0x6fdba726c8e4e592, b2Raw[6] = 0x888b4be77d606d36, b2Raw[7] = 0x28ecda04fb4754a4;
    x2Raw[0] = 0xb16b6aebf6d3a367, x2Raw[1] = 0x6700f302d53234b0, x2Raw[2] = 0x70530a94ce16a7f3, x2Raw[3] = 0x3255765ec0ddd75e, x2Raw[4] = 0x42919f860f2dc674, x2Raw[5] = 0xccb4e1b4f3f04968, x2Raw[6] = 0x316724914654cd82, x2Raw[7] = 0x8dee3156c1d75;
    y2Raw[0] = 0x6037b11ed49bd119, y2Raw[1] = 0xa4fa65f51c889f10, y2Raw[2] = 0x2b1941c528ac971f, y2Raw[3] = 0x5f02c02cc2f99546, y2Raw[4] = 0x916659c5f4da44ed, y2Raw[5] = 0x64215c1dfb6bd4e3, y2Raw[6] = 0x5caa1a1d5ecadf83, y2Raw[7] = 0x3e251d0946c45a6e, y2Raw[8] = 0x91f054f7ec763eb0, y2Raw[9] = 0xa4d803757a9f4a4a, y2Raw[10] = 0x12839e027cee640b, y2Raw[11] = 0xd8053d194dea9303, y2Raw[12] = 0x824b3a7a581a19af, y2Raw[13] = 0xcd6ea41dbbf0aa6a, y2Raw[14] = 0x9151d5950c08b176, y2Raw[15] = 0xffe4e6e8ca54c935;

    uint1024 a3, y3;
    uint512 b3, x3;
    uint64 *a3Raw = (uint64 *) &a3, *b3Raw = (uint64 *) &b3, *x3Raw = (uint64 *) &x3, *y3Raw = (uint64 *) &y3;

    a3Raw[0] = 0x2655192c260670e8, a3Raw[1] = 0xea29c1cab406e47f, a3Raw[2] = 0xb98ae49cc3a6183e, a3Raw[3] = 0x6bf3e00099a0e87a, a3Raw[4] = 0xc0eb63191d0a297d, a3Raw[5] = 0x5f5b4545933116c5, a3Raw[6] = 0xbf1d01cd12c80fd8, a3Raw[7] = 0x454ad6b99d1933de, a3Raw[8] = 0xc5e8fcd1b1b9b211, a3Raw[9] = 0xe6cfb3191b364ed6, a3Raw[10] = 0x3d161839d00e9ff3, a3Raw[11] = 0xd0d82b73ae822a61, a3Raw[12] = 0xb134e0c5ec73a07f, a3Raw[13] = 0x8316756b8c741bdd, a3Raw[14] = 0x5ec36d2ce02a53c7, a3Raw[15] = 0xb78d421e43dc2d4f;
    b3Raw[0] = 0xcb5831c4762ca5d9, b3Raw[1] = 0x079a54a24962e146, b3Raw[2] = 0x6672733bdf74e9d3, b3Raw[3] = 0x62a0ea91068bae62, b3Raw[4] = 0x19ea6c6eeb019b2b, b3Raw[5] = 0xca46703831208876, b3Raw[6] = 0x322526d82aae9f03, b3Raw[7] = 0xe29072158c8c1193;
    x3Raw[0] = 0x691091e963d0bc65, x3Raw[1] = 0xe24b928eb2154b44, x3Raw[2] = 0x2564cce907ec16b7, x3Raw[3] = 0xd119f5359bb9103b, x3Raw[4] = 0x1f93f44b83116e31, x3Raw[5] = 0xec4cade3e65d79b3, x3Raw[6] = 0x66e1a85713f32e72, x3Raw[7] = 0xa6568384e28afacc;
    y3Raw[0] = 0x81ab0023087d9fa1, y3Raw[1] = 0xfdc2fd40a0ad7427, y3Raw[2] = 0x6e05ae457101a382, y3Raw[3] = 0xf4eb74276326a241, y3Raw[4] = 0xfa81be4000aaacf1, y3Raw[5] = 0xff35b3b6a8142acf, y3Raw[6] = 0x9d8ea15148f83fed, y3Raw[7] = 0x8dc70236bb6469c9, y3Raw[8] = 0x632e5bd557b886da, y3Raw[9] = 0x5aa52676ea86c341, y3Raw[10] = 0xc9793e7af2752be3, y3Raw[11] = 0x8badc388df2b80da, y3Raw[12] = 0x415684e62729cc48, y3Raw[13] = 0x5acba42749369ba9, y3Raw[14] = 0x90b30885bd8aa077, y3Raw[15] = 0x48a3d84e4aa756c9;

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

    a0Raw[0] = 0x8e36b928b92fcaf6, a0Raw[1] = 0xe920d56d16dd85fa, a0Raw[2] = 0x477248b75e41b63c, a0Raw[3] = 0x73bf501ca7fee532, a0Raw[4] = 0x7ac8736a1618e973, a0Raw[5] = 0x2c806d568568529a, a0Raw[6] = 0xab8cb52b5551eb8f, a0Raw[7] = 0x140792f23b6da6b6, a0Raw[8] = 0xd166d886f1aaca8b, a0Raw[9] = 0x78f27f2b99ea5c3c, a0Raw[10] = 0x8d1817a4f9f44743, a0Raw[11] = 0x8454ee08499620ac, a0Raw[12] = 0xcdba805f3b60a3f5, a0Raw[13] = 0x864471f1b293e4c3, a0Raw[14] = 0xb99075ef538dcc22, a0Raw[15] = 0xc966be02e9a48127;
    b0Raw[0] = 0xfc0bfe22382aa5e2, b0Raw[1] = 0xd51e433ce13c2c01, b0Raw[2] = 0x4a4f48dc9381ec82, b0Raw[3] = 0xf326463c9e8621c8, b0Raw[4] = 0xba4d3375ae318862, b0Raw[5] = 0x2ec52d91b1b6f5b2, b0Raw[6] = 0x9c0daab7da2d02d8, b0Raw[7] = 0x85a9129043bf9b4e, b0Raw[8] = 0xeec90f2eb4b80025, b0Raw[9] = 0x65b6d79fce432e54, b0Raw[10] = 0x41872ddb20b4bba7, b0Raw[11] = 0x7fabb7db911af85c, b0Raw[12] = 0xa89a360b6ccfd7d0, b0Raw[13] = 0x4e2ae48338ea20ca, b0Raw[14] = 0x60dd3094cac46ae8, b0Raw[15] = 0x5674cc8accd0fa3b;
    x0Raw[0] = 0x25d5fde830d20e28, x0Raw[1] = 0xeb7e0a139d4d01f9, x0Raw[2] = 0x4e89d877433a7b1a, x0Raw[3] = 0x274f692e65c0adda, x0Raw[4] = 0x74f37cbce63b6a4b, x0Raw[5] = 0xdd5404b8b935c05f, x0Raw[6] = 0xf67299e8fd2fb023, x0Raw[7] = 0x9e6c06bcc586ff2f, x0Raw[8] = 0x7bc30bee4dc60f5a, x0Raw[9] = 0xf96980a0464158fa, x0Raw[10] = 0x7a0da0e2116947ea, x0Raw[11] = 0x24f6a2e2ca241a1a, x0Raw[12] = 0x4d8b4ce169c55df3, x0Raw[13] = 0xd0bed07967bb3ab6, x0Raw[14] = 0x6dc3391b8811fa97, x0Raw[15] = 0xfcc96900e449f663;
    y0Raw[0] = 0xbe30dc7fc7f9a17b, y0Raw[1] = 0xe586451a1d3eff21, y0Raw[2] = 0x8b2168dc492ab494, y0Raw[3] = 0x84e2c09db1c4c12e, y0Raw[4] = 0x74c0cb8065a26c5a, y0Raw[5] = 0xed5a8610dd60433b, y0Raw[6] = 0x74552c7e85b176b9, y0Raw[7] = 0xa012a23cb2bca032, y0Raw[8] = 0xe8da321545f5c0cb, y0Raw[9] = 0x9aafaf946fe67b3c, y0Raw[10] = 0xeda8029685a2229e, y0Raw[11] = 0xd5c0f0a9519d3cc5, y0Raw[12] = 0x15d5e5db3402b4a1, y0Raw[13] = 0x8ff78873999cb8ec, y0Raw[14] = 0xd43656b7e0436675, y0Raw[15] = 0x77c3cc5b525e7ca;

    uint1024 a1, y1;
    uint1024 b1, x1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *x1Raw = (uint64 *) &x1, *y1Raw = (uint64 *) &y1;

    a1Raw[0] = 0xe8b1352b8c9d2aa2, a1Raw[1] = 0x5783bdb831284c8d, a1Raw[2] = 0x127a8ff67813c72f, a1Raw[3] = 0xaf3a304592baffd4, a1Raw[4] = 0x1cab8e21bce8b37c, a1Raw[5] = 0xc9b07b5db7da9600, a1Raw[6] = 0x27b7d22a24e25c35, a1Raw[7] = 0x8dd1bc8c1ff7e1dc, a1Raw[8] = 0x00f061ee40ff1bda, a1Raw[9] = 0xaaefb322e64dd71e, a1Raw[10] = 0xf260df25633c51ae, a1Raw[11] = 0x38fcb831abb7f528, a1Raw[12] = 0x00a20cfc8412ad86, a1Raw[13] = 0xd25dd121a453173f, a1Raw[14] = 0x518baccb432f8df8, a1Raw[15] = 0xbc988dd8912022f7;
    b1Raw[0] = 0x89bcb4d7d677a2d9, b1Raw[1] = 0x286f5fb07829abc9, b1Raw[2] = 0xaa27ca3208ca5a8f, b1Raw[3] = 0x17bfa72180710851, b1Raw[4] = 0x3f23d704f825f698, b1Raw[5] = 0xb880bd79f5219211, b1Raw[6] = 0x3760dca46b3848e5, b1Raw[7] = 0x0bbb6320e7703e70, b1Raw[8] = 0x11dd5470ae6c1984, b1Raw[9] = 0xfeaf5d475dc629aa, b1Raw[10] = 0xbf4903f94661155b, b1Raw[11] = 0xbf0b4c10a9cba2f8, b1Raw[12] = 0x1ec3ec9c0871fac1, b1Raw[13] = 0xca66beb6e94ce90a, b1Raw[14] = 0x501f9a33a50bccf9, b1Raw[15] = 0x56c9f7ef521f3578;
    x1Raw[0] = 0x8e3e776a0a96f328, x1Raw[1] = 0x4c3f064917ceef35, x1Raw[2] = 0x38a7f1c38270e025, x1Raw[3] = 0x1347cd9e4929f159, x1Raw[4] = 0x903193fb08499f15, x1Raw[5] = 0xb7188d1191d9c5de, x1Raw[6] = 0xf5fa410e28810511, x1Raw[7] = 0xc135bd1fb05058ef, x1Raw[8] = 0x31cb24680297a5a5, x1Raw[9] = 0x3f5d715c49894905, x1Raw[10] = 0x5d31d93f5387a333, x1Raw[11] = 0x0de1d3f413311756, x1Raw[12] = 0x6fc8c1f715d714e4, x1Raw[13] = 0xef3d637db16c4c87, x1Raw[14] = 0x36fa97ecf54cd9bf, x1Raw[15] = 0xf6afccb525d1cb80;
    y1Raw[0] = 0xfd04737956f70599, y1Raw[1] = 0x2104c6a6b79bea7b, y1Raw[2] = 0xa728c0ddba8b4ca8, y1Raw[3] = 0xcd0db917b7654f70, y1Raw[4] = 0x81c9e90b798a11ec, y1Raw[5] = 0xf5abe4c9d50461b2, y1Raw[6] = 0x72d2f2d2970c45b0, y1Raw[7] = 0xb9e529924efc42ef, y1Raw[8] = 0x6f2daeb494b6e19c, y1Raw[9] = 0xc8503f2bac58321d, y1Raw[10] = 0x17596d84da03962f, y1Raw[11] = 0xd97139a526d6ea8d, y1Raw[12] = 0x5d5f27466ed0ee22, y1Raw[13] = 0xd48d81a01116fc16, y1Raw[14] = 0x994237b4a2e481b1, y1Raw[15] = 0x143cf7025d1c8a5c;

    uint1024 a2, y2;
    uint1024 b2, x2;
    uint64 *a2Raw = (uint64 *) &a2, *b2Raw = (uint64 *) &b2, *x2Raw = (uint64 *) &x2, *y2Raw = (uint64 *) &y2;

    a2Raw[0] = 0x9db49c95e08e5009, a2Raw[1] = 0xd61ac728122b8498, a2Raw[2] = 0x047a6811ea3ff123, a2Raw[3] = 0x82efec57500bd2e0, a2Raw[4] = 0x693b75c4e316db2c, a2Raw[5] = 0x322bdd96f6284a49, a2Raw[6] = 0x01ec97b7049c95b1, a2Raw[7] = 0x40c48ededaf0aea9, a2Raw[8] = 0x9c5dfb5f14f90c74, a2Raw[9] = 0xae3292590da00ff7, a2Raw[10] = 0x8014a1d81eb36ab2, a2Raw[11] = 0x76c2cdaa4e06e3ea, a2Raw[12] = 0x6c09e320dc27d2b4, a2Raw[13] = 0xf28a365f987ef91f, a2Raw[14] = 0x2d899857cc47144a, a2Raw[15] = 0xb195bc39cdf0c926;
    b2Raw[0] = 0xabfea2aad62f460b, b2Raw[1] = 0xcc97df86d28d9565, b2Raw[2] = 0x0bde728896a05e0b, b2Raw[3] = 0x364099c331622e9d, b2Raw[4] = 0x080bdb0cfe6a0d3f, b2Raw[5] = 0x74f66563782cb68b, b2Raw[6] = 0x8f87799d4459fce2, b2Raw[7] = 0x05bc2d2d42bc65aa, b2Raw[8] = 0xc1432c699f22b9d0, b2Raw[9] = 0xbd63d95a89b039ed, b2Raw[10] = 0xfdad38cfcb407aa6, b2Raw[11] = 0xb3bbd561ebefcf66, b2Raw[12] = 0x2c19c5f410a5816a, b2Raw[13] = 0xc4b7def23a4ce6aa, b2Raw[14] = 0x06c5776376dc0b07, b2Raw[15] = 0xdaf64764b46f62c6;
    x2Raw[0] = 0x0e3e93458fc068b4, x2Raw[1] = 0xb68fd8db7b22ffa1, x2Raw[2] = 0xa6cee697f0b7170a, x2Raw[3] = 0xe0220da5326d192e, x2Raw[4] = 0x10ceccd7801d8ee2, x2Raw[5] = 0x9b22314b0067733f, x2Raw[6] = 0x02bbb7dd748e8099, x2Raw[7] = 0x3bc01488bcf12f4d, x2Raw[8] = 0x8d6462d2ab6eb83d, x2Raw[9] = 0x3fa512e0c2dc7ffa, x2Raw[10] = 0x0f921a4390bf6467, x2Raw[11] = 0x3076b99f11ee23dc, x2Raw[12] = 0x32f0d6d02a71fee6, x2Raw[13] = 0x2f81593432c48440, x2Raw[14] = 0x13eba8463b9d35b2, x2Raw[15] = 0xe9268ae88ea33c29;
    y2Raw[0] = 0xf26366b6d806f227, y2Raw[1] = 0xbb593c17e69c3aef, y2Raw[2] = 0xcf41e4b426843e4d, y2Raw[3] = 0xf92562e68d69de68, y2Raw[4] = 0x92b914e6c20ddc4c, y2Raw[5] = 0xdb9b32c094429865, y2Raw[6] = 0xb08905f6ba91c5f6, y2Raw[7] = 0x9d2a2180c7fe6bf5, y2Raw[8] = 0xef312c9b48b82808, y2Raw[9] = 0xd83bfcf30b84bd4c, y2Raw[10] = 0xb08b0f930a47ac2b, y2Raw[11] = 0xe8dc4bb5916353e8, y2Raw[12] = 0x924858aba19ffebd, y2Raw[13] = 0xe2d7dd137da5a63d, y2Raw[14] = 0xfa197a27922357fe, y2Raw[15] = 0x128816c34bdf7de1;

    uint1024 a3, y3;
    uint1024 b3, x3;
    uint64 *a3Raw = (uint64 *) &a3, *b3Raw = (uint64 *) &b3, *x3Raw = (uint64 *) &x3, *y3Raw = (uint64 *) &y3;

    a3Raw[0] = 0xd6a5f4e833f60aec, a3Raw[1] = 0x953689f4ac911028, a3Raw[2] = 0xbda1ef5deb491d59, a3Raw[3] = 0xcc9a57c2113498c8, a3Raw[4] = 0x975e0314e0d91969, a3Raw[5] = 0xbc1b56b4b952b7ef, a3Raw[6] = 0xde6060f8fa485737, a3Raw[7] = 0xddd6866537107a5e, a3Raw[8] = 0x8f9331a562344829, a3Raw[9] = 0x3b1e04aaf0a8b912, a3Raw[10] = 0x06564c3394f73490, a3Raw[11] = 0x0f070f7a3e713995, a3Raw[12] = 0x054f154d81d7a0a5, a3Raw[13] = 0xe1935aafd7e75518, a3Raw[14] = 0xbd2d5da69471a3f9, a3Raw[15] = 0x6bdaac27230074c1;
    b3Raw[0] = 0xcbf62157af28a414, b3Raw[1] = 0x56aeb1e2a3747057, b3Raw[2] = 0x450c506ce708217c, b3Raw[3] = 0x49b3eab65c91f195, b3Raw[4] = 0xd5c84643d2f62b9c, b3Raw[5] = 0x50e94890af430889, b3Raw[6] = 0x2c4e50782e862902, b3Raw[7] = 0xb36d98daf7552c50, b3Raw[8] = 0x5c257610b65650bf, b3Raw[9] = 0x9a7165f3e2911b85, b3Raw[10] = 0x10bd1f9214369446, b3Raw[11] = 0x9595dccf3ddac9a4, b3Raw[12] = 0xa332fb688e6d4547, b3Raw[13] = 0x50adec829a671ebd, b3Raw[14] = 0x4c65704c45615c8f, b3Raw[15] = 0xc7710751b7ac9e54;
    x3Raw[0] = 0xf3c4d338dc911759, x3Raw[1] = 0x709dbbe0c543ee3f, x3Raw[2] = 0xd3581e34da84192e, x3Raw[3] = 0x161bed699527889f, x3Raw[4] = 0xe008d20bfaddb46b, x3Raw[5] = 0xc9336f35450bd2dc, x3Raw[6] = 0x39360bbd97f0ff7f, x3Raw[7] = 0xca76ed5ac8468543, x3Raw[8] = 0x5968fdcc43394b97, x3Raw[9] = 0x6dc6c4e8321907c5, x3Raw[10] = 0x306ed4a9a1defedf, x3Raw[11] = 0x12bbf0d7f48608c6, x3Raw[12] = 0x308c8e32a21a0425, x3Raw[13] = 0x02c6dd5599ab8087, x3Raw[14] = 0x0de6bbb3a7c9dbe9, x3Raw[15] = 0xa6d41bdc9e392f2;
    y3Raw[0] = 0xdf91a3f33d064866, y3Raw[1] = 0x5c3197b4f30eebfe, y3Raw[2] = 0x37e607a656636247, y3Raw[3] = 0x44d17da40fa80308, y3Raw[4] = 0x5a1f2eee0d64e7a8, y3Raw[5] = 0x07ca650906535046, y3Raw[6] = 0x522d1bb1b151bb2d, y3Raw[7] = 0xf5bc3a9b5b030f94, y3Raw[8] = 0xdfeaa47646c2e959, y3Raw[9] = 0x7417162f50ad6397, y3Raw[10] = 0x242486d26a3831ef, y3Raw[11] = 0xe5a77f9f2b950890, y3Raw[12] = 0x5b97710110a069e6, y3Raw[13] = 0xc9758f206e7d9456, y3Raw[14] = 0xc55e56ccc1df81e2, y3Raw[15] = 0xfa5c843d38774142;

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

    a0Raw[0] = 0xdf681a0bf6388449, a0Raw[1] = 0x3dec03df966a6316, a0Raw[2] = 0x1d219fc2cfae49d9, a0Raw[3] = 0x11bbe118f9d8705e, a0Raw[4] = 0x4e095ba02257d0ae, a0Raw[5] = 0x4475efc72f98221b, a0Raw[6] = 0x3cb1284d212f63eb, a0Raw[7] = 0x0e0139a99c5e6d67, a0Raw[8] = 0x485fbedb8484205e, a0Raw[9] = 0x1c417386e2698a6c, a0Raw[10] = 0x2a4a270c5398ae8c, a0Raw[11] = 0x8125d1bc08ff4d5d, a0Raw[12] = 0x5504e02a3b46ac73, a0Raw[13] = 0x9ba27858736efd85, a0Raw[14] = 0x3a55dc61acdbcc2b, a0Raw[15] = 0x8da0aea4c0afa995, a0Raw[16] = 0x2f1b1692c8d78bbb, a0Raw[17] = 0x2d23fbc07b141fa1, a0Raw[18] = 0x51f768174f540ff1, a0Raw[19] = 0x9e75c52379057a4e, a0Raw[20] = 0xeee3a0e21df990b0, a0Raw[21] = 0x294d7d040cce7a46, a0Raw[22] = 0xf8a5477555f49cf1, a0Raw[23] = 0xdf49e24a7b955a1a, a0Raw[24] = 0xe5a348fdd0fe95f9, a0Raw[25] = 0xc0eeff1b9fce2c11, a0Raw[26] = 0x6dee2a4490f2be99, a0Raw[27] = 0x21a8cf1e0c165a1c, a0Raw[28] = 0x8bae7308a3fd75c3, a0Raw[29] = 0xb7ef20278a8256f2, a0Raw[30] = 0xe909b39f64240716, a0Raw[31] = 0x25a6860e57e51bbc;
    b0Raw[0] = 0x2912b7deaf110f65, b0Raw[1] = 0x5aa0dbd8d49c059d, b0Raw[2] = 0x997be674bb4d81aa, b0Raw[3] = 0xfad53ab576217568, b0Raw[4] = 0x7684c476b81e1485, b0Raw[5] = 0xf91a02f80fd8f27e, b0Raw[6] = 0x97fa7f8da8e23ac9, b0Raw[7] = 0xa6814d071a10cba8, b0Raw[8] = 0xaac94f819a2ea5f4, b0Raw[9] = 0x87f008530c758ede, b0Raw[10] = 0x5f95d0bfa93228a4, b0Raw[11] = 0xb246db8aa8ecd1f3, b0Raw[12] = 0x704d18293aac108e, b0Raw[13] = 0x14a197ef0d9e3746, b0Raw[14] = 0xa98bcad3ea465a86, b0Raw[15] = 0x567bc84f9c3e5c72;
    x0Raw[0] = 0xb9cb7310c6274cd1, x0Raw[1] = 0x8eb0c4f97b510204, x0Raw[2] = 0xc895e54dcc88b8c3, x0Raw[3] = 0x975f1b617a1dee15, x0Raw[4] = 0xeba9030dd41a2f82, x0Raw[5] = 0x8c782fec2ed452c1, x0Raw[6] = 0x6059d529c90e5382, x0Raw[7] = 0x14ca21d52c928320, x0Raw[8] = 0xaabdf3d7424f7408, x0Raw[9] = 0x34efe922b055ba77, x0Raw[10] = 0x22eccfb126a2f13d, x0Raw[11] = 0x63cd45af04e34157, x0Raw[12] = 0x16ef6f9ab06b1cd8, x0Raw[13] = 0xea1c43f4829edb17, x0Raw[14] = 0x970cd571e15b55aa, x0Raw[15] = 0x1084a10612915215;
    y0Raw[0] = 0xae525cb7c8cf0048, y0Raw[1] = 0xe29cf3752c239c84, y0Raw[2] = 0x36969fb6b2b08b08, y0Raw[3] = 0xbfd6235b2e4784a0, y0Raw[4] = 0x4450564c1769aa70, y0Raw[5] = 0x5ce581c4f2f1f636, y0Raw[6] = 0xddfe699abca37c1c, y0Raw[7] = 0x042ae2ad7d48614c, y0Raw[8] = 0x5473684262324f04, y0Raw[9] = 0xc7de9fb465351972, y0Raw[10] = 0xb5537dcb88a5d4d6, y0Raw[11] = 0xbe96aed3cadae0b9, y0Raw[12] = 0x1b0d0794e7a66d01, y0Raw[13] = 0x4ab3cecaea1362c5, y0Raw[14] = 0x6bb40b3bf96a41c0, y0Raw[15] = 0xd98a58d7f2813d51, y0Raw[16] = 0x91cec6c56957008f, y0Raw[17] = 0x4e6024593b0d48c0, y0Raw[18] = 0x3dee24c07607b9fb, y0Raw[19] = 0xf16c089bdef6c647, y0Raw[20] = 0x333e50a59f57b821, y0Raw[21] = 0xc49ea85152fadf63, y0Raw[22] = 0x42658ebbbd14f40d, y0Raw[23] = 0xeb22f62db734f5b0, y0Raw[24] = 0x65d9118294306675, y0Raw[25] = 0x272f1d1be96ce263, y0Raw[26] = 0x7547be404e7c5e51, y0Raw[27] = 0xc72c7e4d124dcd52, y0Raw[28] = 0xee0585b7e3ec726b, y0Raw[29] = 0xfed41f3ee87e7358, y0Raw[30] = 0xe8510359e4dd7ce5, y0Raw[31] = 0xf8cf127cd7036474;

    uint2048 a1, y1;
    uint1024 b1, x1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *x1Raw = (uint64 *) &x1, *y1Raw = (uint64 *) &y1;

    a1Raw[0] = 0xdb8b88f21d6b1703, a1Raw[1] = 0xf9ca9778407729d4, a1Raw[2] = 0x529e8c168e9561b3, a1Raw[3] = 0xfc69057518be182c, a1Raw[4] = 0x4525f7a4ddb747ca, a1Raw[5] = 0xc3465b31960a4605, a1Raw[6] = 0x6868f9546601c958, a1Raw[7] = 0xb6cf307719ea2ef2, a1Raw[8] = 0x2ca74440ae711859, a1Raw[9] = 0xa77ebe2299f5c5ca, a1Raw[10] = 0x3cc8fd6aa4ef2008, a1Raw[11] = 0xe8b79b43416185af, a1Raw[12] = 0x3b2fccfe44911bbc, a1Raw[13] = 0x5c6718f54e840be8, a1Raw[14] = 0x2d7a2615c3baccc9, a1Raw[15] = 0xb0dc4afd2fb5100b, a1Raw[16] = 0x4813e9033c86ccf2, a1Raw[17] = 0x393e2fa8e446274c, a1Raw[18] = 0xd7f454bd4bfd7755, a1Raw[19] = 0xd36f17d5e249feeb, a1Raw[20] = 0x2a96b1a01e370b95, a1Raw[21] = 0x6121343733c92512, a1Raw[22] = 0x22bdfb8fc3456b39, a1Raw[23] = 0xa32760ef18629059, a1Raw[24] = 0x81fa4e2129484fd0, a1Raw[25] = 0x47b61795d51112fd, a1Raw[26] = 0x48d08de31e431af2, a1Raw[27] = 0x1f2f926c3d66ff69, a1Raw[28] = 0xdd47cff98f1ddf81, a1Raw[29] = 0x613aaa6aa7aeb992, a1Raw[30] = 0xcfb21b11e98f6c97, a1Raw[31] = 0xb75037f6121b2f85;
    b1Raw[0] = 0x9b9dd211cbb493af, b1Raw[1] = 0xe82f401dd3835984, b1Raw[2] = 0x6b61a0f81031653d, b1Raw[3] = 0x0bb159935ce9597f, b1Raw[4] = 0x132062b0599050d1, b1Raw[5] = 0x6555b76461c1a6fb, b1Raw[6] = 0x9783752627632fcd, b1Raw[7] = 0x95d53f1fd4cb5cb6, b1Raw[8] = 0xbf36a90d8713301e, b1Raw[9] = 0x9aecfc60c5b6281b, b1Raw[10] = 0xc9c1d09209606e45, b1Raw[11] = 0xae4f0fc325d230d3, b1Raw[12] = 0xbbf4092f53d8ef78, b1Raw[13] = 0x8c2bb763ad9a4e4d, b1Raw[14] = 0xb2f7eca272cf56d0, b1Raw[15] = 0x79db552dc43dccf;
    x1Raw[0] = 0x5e1af81d4ec760de, x1Raw[1] = 0x78f607cbe7edc72e, x1Raw[2] = 0x971819f70e7ce6a6, x1Raw[3] = 0x24febc09a90c9a25, x1Raw[4] = 0x61fa425a4b3eab52, x1Raw[5] = 0x3e45a261f680680f, x1Raw[6] = 0x226715eb01e7fbd0, x1Raw[7] = 0x4d5dc74ac78afc34, x1Raw[8] = 0xd93eb91ecbbe0b8c, x1Raw[9] = 0xc83dfbef1deff318, x1Raw[10] = 0x331256214d469217, x1Raw[11] = 0x3b54cb7f0abd3f1b, x1Raw[12] = 0xa622f1860884334f, x1Raw[13] = 0xd52a44119a5ffde4, x1Raw[14] = 0x8e22cfdc780250ec, x1Raw[15] = 0xff6c58d63ce46310;
    y1Raw[0] = 0x44c794f2dd1e39c9, y1Raw[1] = 0x7375a8239a0385c3, y1Raw[2] = 0xe4c29657c05479ef, y1Raw[3] = 0x7392a8811ec81ca1, y1Raw[4] = 0x22bd511ff258147f, y1Raw[5] = 0xb689fbb868a60cae, y1Raw[6] = 0xfee3d2152578de96, y1Raw[7] = 0x56789cfc3a8fea28, y1Raw[8] = 0x0bccb2ef29753d47, y1Raw[9] = 0x82db1e3cc41e09f9, y1Raw[10] = 0x94de95c9d4e58358, y1Raw[11] = 0x3ab73e400adfb41c, y1Raw[12] = 0x677bb6e6545842e5, y1Raw[13] = 0x65dea0cba3026647, y1Raw[14] = 0x4a9a22fb2874ef49, y1Raw[15] = 0x753ffd7e76e01b4c, y1Raw[16] = 0xcef38f5724b0e8c4, y1Raw[17] = 0x94b5fdb19860912a, y1Raw[18] = 0xf14219bef74de2e6, y1Raw[19] = 0x4bc65498cb87e643, y1Raw[20] = 0xb5c67238c2caf6f5, y1Raw[21] = 0xf34653c39c4856ca, y1Raw[22] = 0x9ea75ce10b7c06b9, y1Raw[23] = 0x25cfd28bf7ed7955, y1Raw[24] = 0xb6b6c671203db331, y1Raw[25] = 0xea2a0059b5a5d502, y1Raw[26] = 0xbdab775f25e76fcb, y1Raw[27] = 0xe45d50b9a90d0d72, y1Raw[28] = 0xfbf754b2fc3736b4, y1Raw[29] = 0x1d8043460ce1c5ba, y1Raw[30] = 0xb367f894470023f4, y1Raw[31] = 0xde1e96d6a7fb44c;

    uint2048 a2, y2;
    uint1024 b2, x2;
    uint64 *a2Raw = (uint64 *) &a2, *b2Raw = (uint64 *) &b2, *x2Raw = (uint64 *) &x2, *y2Raw = (uint64 *) &y2;

    a2Raw[0] = 0x73693329a5b8ef76, a2Raw[1] = 0xd6c548a89d58c796, a2Raw[2] = 0x1332c2bda9e975f4, a2Raw[3] = 0xcafee9c85bcc4e3d, a2Raw[4] = 0x14e545e61ccadb4d, a2Raw[5] = 0xae6cc8a390ba9e9b, a2Raw[6] = 0x451a32263e033432, a2Raw[7] = 0x98dd3fdb5c4dd80c, a2Raw[8] = 0x51f97ee92d7d5902, a2Raw[9] = 0x330079e8c777bb86, a2Raw[10] = 0x4382e33e71c61126, a2Raw[11] = 0x532b9e14a8b40041, a2Raw[12] = 0x9ac4bc91d6f43195, a2Raw[13] = 0x9ba2b240edaa5f0f, a2Raw[14] = 0xf48bb599162867cd, a2Raw[15] = 0xe716f83aac88d680, a2Raw[16] = 0x8c5f36f3fd18fc95, a2Raw[17] = 0xf5b03076d291acc1, a2Raw[18] = 0x57a7676a3b71371a, a2Raw[19] = 0xdb16eb2fbf00f9b5, a2Raw[20] = 0x308f249183da7c9b, a2Raw[21] = 0xdcba66bae1cf034d, a2Raw[22] = 0x89c103c95e3dea6c, a2Raw[23] = 0x8f2987319424d570, a2Raw[24] = 0x22cc4d37f7b64957, a2Raw[25] = 0x7154d09b10d34aa9, a2Raw[26] = 0x8fe0ddadaa3f3ca4, a2Raw[27] = 0x280bd7a2ee4879db, a2Raw[28] = 0xf3f30cdb2097fc71, a2Raw[29] = 0x886249dab4f129a5, a2Raw[30] = 0xbf247806ccfb2ae5, a2Raw[31] = 0x15d2e4a0ebf0a864;
    b2Raw[0] = 0xdeb6e4e4f240ad25, b2Raw[1] = 0x35b5efc5eca5e766, b2Raw[2] = 0x966c67c0734c1c4f, b2Raw[3] = 0x79e612516278cd0a, b2Raw[4] = 0x4d79a33f543a1d31, b2Raw[5] = 0xc2a20b652111acb4, b2Raw[6] = 0xe5cf248d3b1c2a1f, b2Raw[7] = 0xc17b0d9d0d75a333, b2Raw[8] = 0x00c4867599b21844, b2Raw[9] = 0x0c566682b85f2fbe, b2Raw[10] = 0xb1aeb849cf9fb5c2, b2Raw[11] = 0xfb361e12eedaeb69, b2Raw[12] = 0x22d4af46fdda4223, b2Raw[13] = 0xe83286a4afa62af4, b2Raw[14] = 0xf8d7f18c81088d2f, b2Raw[15] = 0x386be95ca6b605c1;
    x2Raw[0] = 0x744ff287a146f116, x2Raw[1] = 0xa5dbbe4a9f49f8f8, x2Raw[2] = 0x6a6045e626cdc20c, x2Raw[3] = 0x818d938e28eb6988, x2Raw[4] = 0x3dee8deaf3263b0f, x2Raw[5] = 0x3f480e8ba61afe13, x2Raw[6] = 0xcafee68bf2e69b3b, x2Raw[7] = 0x4958d5b9b32bb125, x2Raw[8] = 0x9216dc79278deafb, x2Raw[9] = 0x01db82f39a8a9c97, x2Raw[10] = 0xb04da91148bd2d79, x2Raw[11] = 0xd5f96c4fbf1197f4, x2Raw[12] = 0xb2225d828fd9e1b1, x2Raw[13] = 0x04b8d2c899bf6436, x2Raw[14] = 0x2d491e6ede01cd91, x2Raw[15] = 0xfe05d7eb1803ecac;
    y2Raw[0] = 0xbd2cd48d90e33c67, y2Raw[1] = 0x2c27b9133527d32f, y2Raw[2] = 0x480bc51025e4ab97, y2Raw[3] = 0x01a448aaacae6b97, y2Raw[4] = 0x4bebb2de77149c75, y2Raw[5] = 0x201f6514880e4482, y2Raw[6] = 0x3ed77e5adb6271ed, y2Raw[7] = 0x643a1b28f09f8bec, y2Raw[8] = 0x717a012611a0fd92, y2Raw[9] = 0x2e2d0bcecd6284c3, y2Raw[10] = 0x7bbd60ce51bc5d48, y2Raw[11] = 0xe71d1413aa03e73d, y2Raw[12] = 0x888a5fe54e9b1e89, y2Raw[13] = 0xe3e21c8d0e43b552, y2Raw[14] = 0x2e09d98ea31114c4, y2Raw[15] = 0x844df5a8aeda2245, y2Raw[16] = 0x793d639df60885d0, y2Raw[17] = 0x386c5f15648741e3, y2Raw[18] = 0xc93adf08c3f99bf9, y2Raw[19] = 0x32e47adfb8777fa4, y2Raw[20] = 0xec2b77d9e64d91e0, y2Raw[21] = 0x6138516a892309db, y2Raw[22] = 0x04db90f98b3de469, y2Raw[23] = 0xc4eb6e0cb421833f, y2Raw[24] = 0xe0f3e114852ea9f2, y2Raw[25] = 0x7b4e68983e44d629, y2Raw[26] = 0x7fefe999249fb20c, y2Raw[27] = 0xc51bb066ae7e50d8, y2Raw[28] = 0x192cb534f54bb3d0, y2Raw[29] = 0x32be12228bb42c90, y2Raw[30] = 0x4eb83cb30d46d441, y2Raw[31] = 0xc3c7ebe773e44f;

    uint2048 a3, y3;
    uint1024 b3, x3;
    uint64 *a3Raw = (uint64 *) &a3, *b3Raw = (uint64 *) &b3, *x3Raw = (uint64 *) &x3, *y3Raw = (uint64 *) &y3;

    a3Raw[0] = 0xcec31e3bbce58df4, a3Raw[1] = 0x9dd73cede87a12bb, a3Raw[2] = 0x896b00f32270b9ba, a3Raw[3] = 0x3cfe408f98d17e06, a3Raw[4] = 0x624096b0afa7bdc0, a3Raw[5] = 0x050ffc7003db25e4, a3Raw[6] = 0xe1d7a65c59af2cd4, a3Raw[7] = 0x6e1c02688d3bc007, a3Raw[8] = 0x048dc7af8f2a4773, a3Raw[9] = 0x703ba13ec7c22019, a3Raw[10] = 0x4c997fcbbc784a76, a3Raw[11] = 0xb6c7898024aa74a1, a3Raw[12] = 0x112887233ecfe814, a3Raw[13] = 0xd92d068edf647448, a3Raw[14] = 0x4cddadd668a657c7, a3Raw[15] = 0xe5bf41362850eef1, a3Raw[16] = 0x56832289e32a5c4c, a3Raw[17] = 0xdb8881814e040ea8, a3Raw[18] = 0x910e232c13fad205, a3Raw[19] = 0xc61c4c73d40a7a17, a3Raw[20] = 0xb34e0a20dbd57b66, a3Raw[21] = 0x7cac17e9456003b7, a3Raw[22] = 0xd8844a3d0d3d76bc, a3Raw[23] = 0xda7b4a82f72787f4, a3Raw[24] = 0x4ed5019db3a01f13, a3Raw[25] = 0x0f08711ddf85f199, a3Raw[26] = 0x57ce93e5055d6f9b, a3Raw[27] = 0x7b8fb8afd916f6d4, a3Raw[28] = 0xfe7b17f284d984d9, a3Raw[29] = 0x94103a6b40e61944, a3Raw[30] = 0x07f6a5923a757f98, a3Raw[31] = 0x9b4abe3f0078218;
    b3Raw[0] = 0xb556445318672234, b3Raw[1] = 0x5ac8b958bbe73e38, b3Raw[2] = 0xc464a8c6518b61cf, b3Raw[3] = 0xf0b786e9045edf2e, b3Raw[4] = 0xf2ae335655244b2c, b3Raw[5] = 0xff32b39782f5341b, b3Raw[6] = 0x90144431f417e78e, b3Raw[7] = 0x5c1a6335b601e32a, b3Raw[8] = 0x35d746e43b4a5959, b3Raw[9] = 0xcc9075aef5770932, b3Raw[10] = 0x4e00ab71f834bc57, b3Raw[11] = 0xcc8936c9e795d936, b3Raw[12] = 0x58ef2495bc9bdbbf, b3Raw[13] = 0x570c38c27a8d83d5, b3Raw[14] = 0xc76b2719bafbaacd, b3Raw[15] = 0x42200634dac50504;
    x3Raw[0] = 0xc8bc826cdcb0e3ed, x3Raw[1] = 0x4140a759e4b5e327, x3Raw[2] = 0x50a2feb489123471, x3Raw[3] = 0x067dff58bb78992b, x3Raw[4] = 0x845f58aa5ab4b33d, x3Raw[5] = 0xf7cce3b1300ba8ba, x3Raw[6] = 0x828b86a056dbd7b2, x3Raw[7] = 0x5abdade852e72bb1, x3Raw[8] = 0x9de778ff6730f8df, x3Raw[9] = 0xbd3baba5dd272487, x3Raw[10] = 0x0888a74f341bc2da, x3Raw[11] = 0xc2c5fb52d80f91cd, x3Raw[12] = 0xf501c7ddf9e34701, x3Raw[13] = 0xe1c60769104d7447, x3Raw[14] = 0x76b3499d3c858ef6, x3Raw[15] = 0xfc67fbf9a0ee08a0;
    y3Raw[0] = 0xb70ea054e15b2968, y3Raw[1] = 0x1fb3ac62abf1601b, y3Raw[2] = 0x5e005f111430f855, y3Raw[3] = 0xcdc0ad187a546e8f, y3Raw[4] = 0x29651a3341be2f18, y3Raw[5] = 0xdbace67534f739d2, y3Raw[6] = 0xd4d70f55e2c41e49, y3Raw[7] = 0x1839a2a3a057f7af, y3Raw[8] = 0x3d64ad3c4a5aaaba, y3Raw[9] = 0xa5ca03cf7cc7ffa4, y3Raw[10] = 0x57dc6505acd964e4, y3Raw[11] = 0x38235b201903d768, y3Raw[12] = 0x33c69c2a143457c5, y3Raw[13] = 0x3b42cc898471e932, y3Raw[14] = 0x99bd8c5674cf694a, y3Raw[15] = 0x0f3235a84d324683, y3Raw[16] = 0xa3206833b8ed9fa7, y3Raw[17] = 0x4eb2e776119ae13e, y3Raw[18] = 0xb6feb769382de69b, y3Raw[19] = 0x1990c9be6e4610a8, y3Raw[20] = 0xa87b36ffe3a0ff33, y3Raw[21] = 0x3db3bb8561d9e5f8, y3Raw[22] = 0xe9aa328d1d04a964, y3Raw[23] = 0xf7f50b38d992b29a, y3Raw[24] = 0x274e8303e45a8d3f, y3Raw[25] = 0xb53a9d1910ee42d9, y3Raw[26] = 0xb2dc010ca9ee2e6a, y3Raw[27] = 0x91dc8558c194fd66, y3Raw[28] = 0x5b6a49220b211c93, y3Raw[29] = 0x526f4c32796edb58, y3Raw[30] = 0x7c775613c23f2685, y3Raw[31] = 0x8709e2149204ce;

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

    a0Raw[0] = 0x2af99227f79fe488, a0Raw[1] = 0x4a2facf06d6c5e3e, a0Raw[2] = 0x9151218b598bc56b, a0Raw[3] = 0x166e39b71709207d, a0Raw[4] = 0x84619a75b593da45, a0Raw[5] = 0xf38976fc9ebedac9, a0Raw[6] = 0x2bc9eafbc0be0df9, a0Raw[7] = 0x65ada77955279ea6, a0Raw[8] = 0x1b80af744686e188, a0Raw[9] = 0xa5ee4a5193405449, a0Raw[10] = 0xb91d722b32672cb3, a0Raw[11] = 0xfd037fcbf33e2378, a0Raw[12] = 0x3b765fca86403f0d, a0Raw[13] = 0x5b1167c2d1c55d04, a0Raw[14] = 0x97c7183e3bfd9f1a, a0Raw[15] = 0xb98e2927343a8963, a0Raw[16] = 0x90a15c9bda6e5ad9, a0Raw[17] = 0x7dd3984f9e50a8c1, a0Raw[18] = 0x0b36f7e290a865b0, a0Raw[19] = 0xd4f0b5add7a2f0ea, a0Raw[20] = 0x7a8a8b3e0d6a57b2, a0Raw[21] = 0x866a75cf86a4ce4e, a0Raw[22] = 0xd5e468cbe5056b30, a0Raw[23] = 0x74ce8f7c914ecd64, a0Raw[24] = 0x63af26c2de9104cb, a0Raw[25] = 0x09e9c27fa3261ad1, a0Raw[26] = 0x4337049f531c8956, a0Raw[27] = 0x31b51664c715c6db, a0Raw[28] = 0xcf08e23e20aeb6c2, a0Raw[29] = 0x69ab4227c8ffbf8a, a0Raw[30] = 0x5025abb95061d444, a0Raw[31] = 0x5cc59c4e611fc67e;
    b0Raw[0] = 0x002d90676aa36af9, b0Raw[1] = 0xbb07d3485e35709c, b0Raw[2] = 0x58bdd6aad5c619d3, b0Raw[3] = 0x076619cfab8a6069, b0Raw[4] = 0xbffe76fad76c4a33, b0Raw[5] = 0x2a7c50b452dae0df, b0Raw[6] = 0xcba1079f2cf4dbc1, b0Raw[7] = 0x4fff6bc08bbdfcfc, b0Raw[8] = 0xf7667d47506205e7, b0Raw[9] = 0x9c85f2af52e4016a, b0Raw[10] = 0x3515a88aea549a8d, b0Raw[11] = 0x2fb7aa6873c78017, b0Raw[12] = 0xbab0f899a4a33dc0, b0Raw[13] = 0xbbb09f07bb4a1647, b0Raw[14] = 0x61e1749509ff6725, b0Raw[15] = 0xb75eec4f7c90f769, b0Raw[16] = 0x7cefc97622b48b43, b0Raw[17] = 0x08398d1a6c6a4c22, b0Raw[18] = 0x8eec0afc30e80d54, b0Raw[19] = 0xae62840bad6fe0e6, b0Raw[20] = 0xe552438bb59f7c3c, b0Raw[21] = 0x7cc16ec293b9fb2a, b0Raw[22] = 0xa7b5343d5510824a, b0Raw[23] = 0x5aa48696e054dba5, b0Raw[24] = 0x74ca101bc1002be7, b0Raw[25] = 0x0a3f286e18c85257, b0Raw[26] = 0xaaee7d8362f730d2, b0Raw[27] = 0x35c876035b08545a, b0Raw[28] = 0x3eafe1f9ef0368eb, b0Raw[29] = 0x26cb38fea5b80dc5, b0Raw[30] = 0x69e449ddd06fd789, b0Raw[31] = 0x8501f7eb4f4562a;
    x0Raw[0] = 0x5701cc14a051c04a, x0Raw[1] = 0x79cd0830d56ccdc3, x0Raw[2] = 0x21d85f7d1a6bbbdf, x0Raw[3] = 0x165b2b441077cd96, x0Raw[4] = 0x8e239dbc7c44fe2b, x0Raw[5] = 0x0a220b86046032f9, x0Raw[6] = 0x49d0954c38f008d8, x0Raw[7] = 0xc3767e092aa2c4ae, x0Raw[8] = 0xe70e725afe0323c9, x0Raw[9] = 0x47c23a02beafa4af, x0Raw[10] = 0x91d47bce9a508ee5, x0Raw[11] = 0xfb3831f3b09c189d, x0Raw[12] = 0x9547b4d55c0204c8, x0Raw[13] = 0x3d19a19673f13dee, x0Raw[14] = 0x254d273bede93a84, x0Raw[15] = 0x670c796d1b9dd3ec, x0Raw[16] = 0x8c5ff4e9356b252f, x0Raw[17] = 0x1af26f2607398542, x0Raw[18] = 0x02e1138fe3b29dee, x0Raw[19] = 0xcd27a470edfdd95a, x0Raw[20] = 0x2f612ae65c32116d, x0Raw[21] = 0xabaf440be6137afa, x0Raw[22] = 0xc74b48e37ce9458c, x0Raw[23] = 0x52028edbdb3e4217, x0Raw[24] = 0x83f0667086149b8b, x0Raw[25] = 0xf93cf95be4534b58, x0Raw[26] = 0x0a8871781288d6dd, x0Raw[27] = 0xe5dca35901616546, x0Raw[28] = 0x64623bb478585096, x0Raw[29] = 0x7b8d277cfe702c92, x0Raw[30] = 0x5bdb96482b6e0786, x0Raw[31] = 0xff2dc1bfdf631252;
    y0Raw[0] = 0x2038bac55deea979, y0Raw[1] = 0xe058a9bee88155f5, y0Raw[2] = 0x27ca833323e9b19c, y0Raw[3] = 0xce12bb419314bab3, y0Raw[4] = 0x37e8a6bc9d24d68f, y0Raw[5] = 0xf44670869a05f266, y0Raw[6] = 0x966e469ec248ba22, y0Raw[7] = 0x16be250387b7d9b1, y0Raw[8] = 0x93c29cb640ff1bfe, y0Raw[9] = 0x44de562f1c4bfbb0, y0Raw[10] = 0x9629e8ab09b5f8f6, y0Raw[11] = 0x235096abb51f532a, y0Raw[12] = 0xb34d3ab9325cdbfb, y0Raw[13] = 0x88e9f317b114d16b, y0Raw[14] = 0xe8b634279e716224, y0Raw[15] = 0x742e09666f83dcb6, y0Raw[16] = 0x8aee63dd9fc286bf, y0Raw[17] = 0x25ce4daa921df4df, y0Raw[18] = 0x2bfccea062dbfe0a, y0Raw[19] = 0x366c28ac5b2638a0, y0Raw[20] = 0x47ccd216531a660f, y0Raw[21] = 0x3033dd30116ba10f, y0Raw[22] = 0x4db55efd390164be, y0Raw[23] = 0xe428945b1d368ca5, y0Raw[24] = 0xdd0e0cbca334a67c, y0Raw[25] = 0xedd0c67fe258d906, y0Raw[26] = 0x89621c74355584fe, y0Raw[27] = 0x80bb81ea3d39d9d1, y0Raw[28] = 0x80279f1183cb64d4, y0Raw[29] = 0xe1840610cab6b1ae, y0Raw[30] = 0x65cd4db6e3e9f829, y0Raw[31] = 0x92a4a2f4a2cceb0;

    uint2048 a1, y1;
    uint2048 b1, x1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *x1Raw = (uint64 *) &x1, *y1Raw = (uint64 *) &y1;

    a1Raw[0] = 0xf27198058359f1e9, a1Raw[1] = 0x52214ccc4b82cbad, a1Raw[2] = 0x27ac3aa025b3c14a, a1Raw[3] = 0xe7a03f7d322ed0c7, a1Raw[4] = 0xc6a25fe9ec0a91ab, a1Raw[5] = 0xf6aeaf3e5ce4db09, a1Raw[6] = 0x589449b1000ef0e3, a1Raw[7] = 0xff2430199665e526, a1Raw[8] = 0xf256ab0dca0ee4b9, a1Raw[9] = 0xd7e5ad67504aca7e, a1Raw[10] = 0x5dce9df352a510e4, a1Raw[11] = 0x510f16835634613b, a1Raw[12] = 0x9f723eb12190ac78, a1Raw[13] = 0x6a5bccbc81b6b135, a1Raw[14] = 0x0f278b74cd51b791, a1Raw[15] = 0x09e41490c131208c, a1Raw[16] = 0x93305e4746ece414, a1Raw[17] = 0x2cdd30b9d515d8b1, a1Raw[18] = 0xd5bb2af083f36fe5, a1Raw[19] = 0x9ab8f5fd6cdd5d74, a1Raw[20] = 0x6d3b531897f0926a, a1Raw[21] = 0xea624f5a62e292ac, a1Raw[22] = 0x3039695c654e3b12, a1Raw[23] = 0xa2bbd03b5a1fedcf, a1Raw[24] = 0xe6aa9498f5739b14, a1Raw[25] = 0x95a2b7b9feaa1764, a1Raw[26] = 0x3b0759ded451ad9e, a1Raw[27] = 0x8b0146bf281ebc76, a1Raw[28] = 0xc0fe590605761b2f, a1Raw[29] = 0x4a5373cf86c45a8f, a1Raw[30] = 0x38324a580b60ebc6, a1Raw[31] = 0x5c766c900eed381b;
    b1Raw[0] = 0xd584ea8417b894a1, b1Raw[1] = 0x8af2897910f2a325, b1Raw[2] = 0x77906478f84a9924, b1Raw[3] = 0x154c89443b783663, b1Raw[4] = 0x72683f308d0f3be1, b1Raw[5] = 0x91825ca91dd5dc0a, b1Raw[6] = 0x64cd1e1c535a592a, b1Raw[7] = 0x41d9e8fa8a0a423f, b1Raw[8] = 0xd51d17554f7d5865, b1Raw[9] = 0xc2b4e8f4fcfbe649, b1Raw[10] = 0x4cf9a86bfe7e4d12, b1Raw[11] = 0x82d5978b3ad8e5b2, b1Raw[12] = 0xa6fc2ec56e5daece, b1Raw[13] = 0x585733138da8cd3a, b1Raw[14] = 0x2505e6a192273a9f, b1Raw[15] = 0xce0e3881c777e312, b1Raw[16] = 0xa7526f9bb6f497fe, b1Raw[17] = 0x4b141f943a196fe1, b1Raw[18] = 0x024515be9227fa11, b1Raw[19] = 0xfc7b4156069b1aff, b1Raw[20] = 0x0aa0b20601035ebb, b1Raw[21] = 0xb83f3b0e33b0fac4, b1Raw[22] = 0x4138bfbfd55cd65c, b1Raw[23] = 0x0f0ea44ee732c040, b1Raw[24] = 0x9aaeadb751befdaf, b1Raw[25] = 0x16e6091022270769, b1Raw[26] = 0x776439a1f0d93205, b1Raw[27] = 0xcb65ad549f6a04c6, b1Raw[28] = 0x8b2db35f76777492, b1Raw[29] = 0x0ca9a7e3fb017eb4, b1Raw[30] = 0x2bba34e8fd7b3609, b1Raw[31] = 0x5dc3a6e4dab0fb35;
    x1Raw[0] = 0x7ce44a6b152dd4c9, x1Raw[1] = 0x9597393651b47d4f, x1Raw[2] = 0xa1e42e4931af70e9, x1Raw[3] = 0x4d6ca445de053947, x1Raw[4] = 0xe5fa9b2b8adcb196, x1Raw[5] = 0xc589a893b1385520, x1Raw[6] = 0xb6110f99f85bdf60, x1Raw[7] = 0x8b630962238d282c, x1Raw[8] = 0xa1e619f225978a0c, x1Raw[9] = 0x8ef7bc789bf9b463, x1Raw[10] = 0x49b4ba674ef2d745, x1Raw[11] = 0x81b24752d88f3df2, x1Raw[12] = 0x2fd2bbbc19baec15, x1Raw[13] = 0xa1cd1b4ba8677bd2, x1Raw[14] = 0xe7d7700fda3feef0, x1Raw[15] = 0xf0578d60e521b227, x1Raw[16] = 0x58e02fd605ccec65, x1Raw[17] = 0x503c9c6bad3b4db4, x1Raw[18] = 0x3f587894b5d566d0, x1Raw[19] = 0xa84beb27955486a3, x1Raw[20] = 0x63ce0622c261380a, x1Raw[21] = 0xd2ab9660936180cc, x1Raw[22] = 0x0c00ddc647c2ef4a, x1Raw[23] = 0xaf72ed3381b9e721, x1Raw[24] = 0xb1229222b6b46179, x1Raw[25] = 0x69f25043837190de, x1Raw[26] = 0xd01e18d7f417f6c3, x1Raw[27] = 0xd0c75e00745f299b, x1Raw[28] = 0x50fa71133ac22e25, x1Raw[29] = 0x9be5904c18095427, x1Raw[30] = 0xb6a0b8655a376a24, x1Raw[31] = 0x283d559b7b7f2d45;
    y1Raw[0] = 0x80293865e08a9210, y1Raw[1] = 0x1c1dfe3e348bafd6, y1Raw[2] = 0xf9e8a891a051f015, y1Raw[3] = 0xf893203027640a66, y1Raw[4] = 0xb8f2b9c1360e8f74, y1Raw[5] = 0x5d7bb2efbc340f1a, y1Raw[6] = 0x595241ca5be59562, y1Raw[7] = 0xf7e007871aa01694, y1Raw[8] = 0xf08d3b6422a49d2f, y1Raw[9] = 0xdfc66dc76c055fd5, y1Raw[10] = 0xadd7423cb1316585, y1Raw[11] = 0xb30a06204af23a5d, y1Raw[12] = 0x635c442b95cafeda, y1Raw[13] = 0x8d7f3cccac6275a7, y1Raw[14] = 0xb0a2af0c16afef73, y1Raw[15] = 0xf42950d79f51d594, y1Raw[16] = 0x56cdf56e863d139c, y1Raw[17] = 0xb0ec045b215e7e28, y1Raw[18] = 0x6f154d65214a1875, y1Raw[19] = 0xeb35068fbfa35f59, y1Raw[20] = 0xde875fe0a8af7d64, y1Raw[21] = 0x575e61bc9f6bb1a3, y1Raw[22] = 0xfdeebdd9eab6a4fc, y1Raw[23] = 0x164e1c08ca976b8f, y1Raw[24] = 0x06eb34361f154735, y1Raw[25] = 0xf9812b26b839e39f, y1Raw[26] = 0xc64aaf38d258dbcd, y1Raw[27] = 0x2ab9483cab751d7c, y1Raw[28] = 0x98134e5f049f178e, y1Raw[29] = 0xaf02d4007ca6e898, y1Raw[30] = 0x4304a1176e8c9995, y1Raw[31] = 0xd851ac32e670c2cc;

    uint2048 a2, y2;
    uint2048 b2, x2;
    uint64 *a2Raw = (uint64 *) &a2, *b2Raw = (uint64 *) &b2, *x2Raw = (uint64 *) &x2, *y2Raw = (uint64 *) &y2;

    a2Raw[0] = 0x2c1bf0a3852c4615, a2Raw[1] = 0x91235e78f78b3b53, a2Raw[2] = 0x0caeb01a782df267, a2Raw[3] = 0x13ac8b57b8b96a39, a2Raw[4] = 0x1dd00e534918e391, a2Raw[5] = 0xd0bfd4516e23783f, a2Raw[6] = 0x17372e9af680e02b, a2Raw[7] = 0x02a0d59854dc7521, a2Raw[8] = 0x5c03aefb31f1a89b, a2Raw[9] = 0xdff16ce2857a7d32, a2Raw[10] = 0xb6c839cdd940228d, a2Raw[11] = 0x282e66e5547ff3ce, a2Raw[12] = 0x3ae064e2b8b6d837, a2Raw[13] = 0xce9e359339d4e9fe, a2Raw[14] = 0x6d2e73ae9d12d2c3, a2Raw[15] = 0xafe146781332ef69, a2Raw[16] = 0x397a870d2fa1f55b, a2Raw[17] = 0x763db5b9cc45e786, a2Raw[18] = 0x668867a29634763b, a2Raw[19] = 0x12332bd7b358caf2, a2Raw[20] = 0xd879e6ab49e6edcc, a2Raw[21] = 0xd53f07386c51d315, a2Raw[22] = 0xba1f6f3af15d447d, a2Raw[23] = 0x7bfa3a6a96bc02ac, a2Raw[24] = 0x19d208e11069875f, a2Raw[25] = 0x30e78efa207f08b0, a2Raw[26] = 0xcccaebcd445a088a, a2Raw[27] = 0x8d8a08d0c59ba197, a2Raw[28] = 0x667ecc3536a8b123, a2Raw[29] = 0x1315a2f91faf0e1f, a2Raw[30] = 0x1237cc93204707f5, a2Raw[31] = 0x8c8e0bd9dca3c9b8;
    b2Raw[0] = 0x869f7421eeec0bd6, b2Raw[1] = 0xb04c2000961144f6, b2Raw[2] = 0x855ea60a09774f5c, b2Raw[3] = 0x2f5fe4d3b4136a68, b2Raw[4] = 0x28e115aabd0552dd, b2Raw[5] = 0xe59a55872ddb0805, b2Raw[6] = 0x6acc52c3203f2128, b2Raw[7] = 0x3f8f7eff3f97dd7f, b2Raw[8] = 0x03e22127e614839e, b2Raw[9] = 0x8a7a96fad473ce07, b2Raw[10] = 0xc19bd9114971a13f, b2Raw[11] = 0x00ae3483eafe85f0, b2Raw[12] = 0x3867581fe771afd7, b2Raw[13] = 0x67b4376abd832edf, b2Raw[14] = 0xe9968b932a39a86c, b2Raw[15] = 0x9b972518af7a3189, b2Raw[16] = 0x4b2c8439c2805a06, b2Raw[17] = 0xa8efadf090b9917b, b2Raw[18] = 0x79dce85666f0dd09, b2Raw[19] = 0x512908818391959d, b2Raw[20] = 0x9476c3cc7fa59578, b2Raw[21] = 0x539d66e79cfc877f, b2Raw[22] = 0x5d1c03172ada7fbc, b2Raw[23] = 0x1dcc017deba69796, b2Raw[24] = 0xd7862fd04a056b29, b2Raw[25] = 0xe933a42f9ac7bb71, b2Raw[26] = 0xd802291891088610, b2Raw[27] = 0xdf7428b1458c71bd, b2Raw[28] = 0x02257f34f617e6d6, b2Raw[29] = 0xce691d0f2de8f733, b2Raw[30] = 0x8d2412996b6e6920, b2Raw[31] = 0xb48af80b2b187771;
    x2Raw[0] = 0x712a276922205a83, x2Raw[1] = 0x48eb78a0484975cf, x2Raw[2] = 0xe7643acad4b83d98, x2Raw[3] = 0xf8ec39a6b7a20701, x2Raw[4] = 0xe07f239fd5693ba1, x2Raw[5] = 0x623d4bda0746dbf2, x2Raw[6] = 0x0c7295e341f5f5ce, x2Raw[7] = 0x19043b21ee957605, x2Raw[8] = 0x30c6597d5702f0a9, x2Raw[9] = 0x9754eed233f99ce3, x2Raw[10] = 0xea63f3c136927a88, x2Raw[11] = 0x28c4a5ce5e1c837d, x2Raw[12] = 0xbdf46e51bb83e0d6, x2Raw[13] = 0x098f91760927e2b0, x2Raw[14] = 0xc83bcf2490476fb3, x2Raw[15] = 0x754e1c0db48bf379, x2Raw[16] = 0xb4f330508f00a915, x2Raw[17] = 0x50e83a7dba21fb11, x2Raw[18] = 0xae19b25f13c83a77, x2Raw[19] = 0x82e2a21b895685a3, x2Raw[20] = 0x390f858ff8a9de88, x2Raw[21] = 0xbe315648fe65a794, x2Raw[22] = 0xdf75175d5c4ad4fa, x2Raw[23] = 0x34cad2e103344625, x2Raw[24] = 0xc8e2bec697fb8d8d, x2Raw[25] = 0x43d9c85b509de329, x2Raw[26] = 0xef81435462f05aec, x2Raw[27] = 0xa39985bc8ef67aa6, x2Raw[28] = 0x39546035d307c8f9, x2Raw[29] = 0xb45acded0424d912, x2Raw[30] = 0x1fbd53155d25a39f, x2Raw[31] = 0xe77ca2e45b6a4e67;
    y2Raw[0] = 0x7928e2d75efad4a3, y2Raw[1] = 0x494dafb3c8208ada, y2Raw[2] = 0xdb4a903ceda18448, y2Raw[3] = 0xc614c9a408d9d258, y2Raw[4] = 0x1bcf087c062f0d33, y2Raw[5] = 0x4b349c48e58301cf, y2Raw[6] = 0x2e733c229c000b1a, y2Raw[7] = 0x046a8c89f1bfefbc, y2Raw[8] = 0xd2db873e0edf71fc, y2Raw[9] = 0x35a02e4537b5237c, y2Raw[10] = 0xcf3f3892bc3b4aab, y2Raw[11] = 0x008fbcd72772f278, y2Raw[12] = 0x1189a5c7e0eb78e9, y2Raw[13] = 0xb3b18dc843b4c54e, y2Raw[14] = 0x172e66c732f09676, y2Raw[15] = 0x552228795c4a0322, y2Raw[16] = 0x52e5a9a3871b7fdf, y2Raw[17] = 0xcb93fc3f24b98de4, y2Raw[18] = 0xfbe9626c55fbf105, y2Raw[19] = 0x18d3adb11d1b15c8, y2Raw[20] = 0x00c3a9d1b0373496, y2Raw[21] = 0x17ad86752a72b5f3, y2Raw[22] = 0x64b232dd4d7fcdd4, y2Raw[23] = 0x69212e0cb48f0f29, y2Raw[24] = 0xe8d86bb558f5ea87, y2Raw[25] = 0x22a25343103dbb25, y2Raw[26] = 0x91adf84bf95d8560, y2Raw[27] = 0x377eb343b05b0751, y2Raw[28] = 0xf1ff0100994e4777, y2Raw[29] = 0xfe18cf132fed1c38, y2Raw[30] = 0xe76c153960237de6, y2Raw[31] = 0x131573025c70dc4f;

    uint2048 a3, y3;
    uint2048 b3, x3;
    uint64 *a3Raw = (uint64 *) &a3, *b3Raw = (uint64 *) &b3, *x3Raw = (uint64 *) &x3, *y3Raw = (uint64 *) &y3;

    a3Raw[0] = 0x889d5567b4195329, a3Raw[1] = 0x5ccf3afbbc957968, a3Raw[2] = 0x82e6f34983af82f5, a3Raw[3] = 0xdac6ca7f692b6659, a3Raw[4] = 0x518ae36a1ea919e6, a3Raw[5] = 0x8505c1020ad44c3d, a3Raw[6] = 0x0bb1517218ccd523, a3Raw[7] = 0x6efa9f0e04d669c7, a3Raw[8] = 0xe2da8910c13c9c8a, a3Raw[9] = 0x935c73211f3882f5, a3Raw[10] = 0xc624dfd7201bf19d, a3Raw[11] = 0xf7599c1f99c2b7ac, a3Raw[12] = 0xde062a0bb85638d2, a3Raw[13] = 0xba2291b9958096d4, a3Raw[14] = 0xcc2303ff4d4304c8, a3Raw[15] = 0xca9854d14dbc024c, a3Raw[16] = 0xaf922eb880b831b1, a3Raw[17] = 0x69f3619fa24960cb, a3Raw[18] = 0xd8680abe309f135c, a3Raw[19] = 0xc0de7787475b3438, a3Raw[20] = 0xf931d49616a7af8c, a3Raw[21] = 0x4de5f16109d93d4c, a3Raw[22] = 0x47832da10661030c, a3Raw[23] = 0x4e34b702c8221487, a3Raw[24] = 0x8b07eefcf2ca6a2f, a3Raw[25] = 0x45359a1757da22f1, a3Raw[26] = 0xf0e72686768f4000, a3Raw[27] = 0x5af94b9ad503568c, a3Raw[28] = 0x7a58d890d6bd2af0, a3Raw[29] = 0x739478ae80b88a79, a3Raw[30] = 0xd657fdf56af57868, a3Raw[31] = 0x539f342c943dc4a4;
    b3Raw[0] = 0xf522cefb8976241b, b3Raw[1] = 0xbb9c02f46cb919c6, b3Raw[2] = 0x6d6b8b6d45097548, b3Raw[3] = 0x2ea0346293562d12, b3Raw[4] = 0x0c86b0761dfadc69, b3Raw[5] = 0x58d8410581a0b6eb, b3Raw[6] = 0x2bee672710a54c41, b3Raw[7] = 0x838cf31a53ad81de, b3Raw[8] = 0xeb2db4d6e446dbed, b3Raw[9] = 0x894955a739212c97, b3Raw[10] = 0x1426f0e2b6b48d60, b3Raw[11] = 0x993649f0c417edee, b3Raw[12] = 0x173be06b0969413d, b3Raw[13] = 0x4019af4a5cde9947, b3Raw[14] = 0xbece95aa7602bb88, b3Raw[15] = 0x1fdeea86f20618b1, b3Raw[16] = 0x41fbe224d6f6d403, b3Raw[17] = 0x7a8c775b64dd6f34, b3Raw[18] = 0x77713a0c67d8d53a, b3Raw[19] = 0x3e32ec510918aa35, b3Raw[20] = 0xa62de25a741d5618, b3Raw[21] = 0x8dad60cc4a2f70b5, b3Raw[22] = 0xb12a22f16cd4941c, b3Raw[23] = 0xa441cf678a1a600a, b3Raw[24] = 0x70a3ae3939edd877, b3Raw[25] = 0x379106640b6799f2, b3Raw[26] = 0x5f3400313f651d43, b3Raw[27] = 0x4d977dc7b7912c52, b3Raw[28] = 0x2bf35a0effe3ae81, b3Raw[29] = 0xaabf4425ec81ba70, b3Raw[30] = 0xb2eecc137b3f07ef, b3Raw[31] = 0xc2d7e94ac11e1e2a;
    x3Raw[0] = 0xb0be122999bd5cb1, x3Raw[1] = 0x3efe1bc1550c5950, x3Raw[2] = 0x8aa5a28270e783d6, x3Raw[3] = 0x47000f5e1e401e8d, x3Raw[4] = 0x88e600416590c1b4, x3Raw[5] = 0x59af24954ccc4f9f, x3Raw[6] = 0x0e76ce773706adee, x3Raw[7] = 0x87ac03ca3f074085, x3Raw[8] = 0x3be8d6ea67883031, x3Raw[9] = 0xbbc9a823b6f7ff04, x3Raw[10] = 0xe794cb72329e7efc, x3Raw[11] = 0xb1dbcea159b39379, x3Raw[12] = 0x062be302ec46a7dd, x3Raw[13] = 0x3bbbecb81addaeb7, x3Raw[14] = 0xfc9543f77491aaf6, x3Raw[15] = 0xb2ebdd1f72c16234, x3Raw[16] = 0x739f94b767a7526c, x3Raw[17] = 0x8aabd26037ca5cc2, x3Raw[18] = 0xcc87f7635b3c8637, x3Raw[19] = 0x0e760e6c410b0f62, x3Raw[20] = 0x05f545d685384897, x3Raw[21] = 0xab7cb7eacbaa1b61, x3Raw[22] = 0x9b339337a1f871b5, x3Raw[23] = 0xda55df4e35c485a3, x3Raw[24] = 0xe7327d1621af401d, x3Raw[25] = 0x125ea899e6bf34d2, x3Raw[26] = 0x493902fb13911796, x3Raw[27] = 0x91a87ff24c46abea, x3Raw[28] = 0x6218762ea637e71d, x3Raw[29] = 0x839b53ecfb3f18f2, x3Raw[30] = 0xdde1a0becc911451, x3Raw[31] = 0x167e3724e353dacb;
    y3Raw[0] = 0xf077ba6b11a2349e, y3Raw[1] = 0x6952e152c601389a, y3Raw[2] = 0x92ca7759c1201dca, y3Raw[3] = 0x488dd8b9312962b8, y3Raw[4] = 0x77d68e35a7c5647b, y3Raw[5] = 0xa547684af5365559, y3Raw[6] = 0x12843baa5a84f894, y3Raw[7] = 0x6f8238186851f0ad, y3Raw[8] = 0x99f7272a9ed3e7e7, y3Raw[9] = 0xa92591d89ab2d314, y3Raw[10] = 0xd732a2b616027ef8, y3Raw[11] = 0xa6a12832d84b281b, y3Raw[12] = 0x81938a5955e5b618, y3Raw[13] = 0x560f9bc398c3d067, y3Raw[14] = 0xb148b2707ab9e70a, y3Raw[15] = 0xa92f54f98adbacc1, y3Raw[16] = 0x56d07f9d007ded0e, y3Raw[17] = 0xbdc76266f810f077, y3Raw[18] = 0xbfc4a8c71decfe1a, y3Raw[19] = 0x2dcc8ea8f41a1475, y3Raw[20] = 0x146ca9a28f456b83, y3Raw[21] = 0x06c0ea70bd00fb2b, y3Raw[22] = 0x8f240bce8e1095df, y3Raw[23] = 0x309dac1cb2c9581f, y3Raw[24] = 0xbce70932f0794167, y3Raw[25] = 0x19538cc80d67a624, y3Raw[26] = 0xb228ee8053a22aab, y3Raw[27] = 0x6345c722caaca823, y3Raw[28] = 0xe19a2e35270d5688, y3Raw[29] = 0xd93dde451e61e440, y3Raw[30] = 0x27745b873fdba044, y3Raw[31] = 0xf658b7fe6446afa0;

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

    a0Raw[0] = 0x48bc65b50e72ce17, a0Raw[1] = 0xc37916ccd5928c27, a0Raw[2] = 0x286256fcc62a9bd3, a0Raw[3] = 0x101065fd7a67e960, a0Raw[4] = 0x867618e95562549a, a0Raw[5] = 0xf5571e51d2c71314, a0Raw[6] = 0xe9c3a4bf19309633, a0Raw[7] = 0xc83af496f39285a4, a0Raw[8] = 0xb214b7ffdb42a85e, a0Raw[9] = 0x672177bef6b8e6dd, a0Raw[10] = 0xda520a3d658a5151, a0Raw[11] = 0x2a723008e94aba4c, a0Raw[12] = 0x75fd870abbb987e0, a0Raw[13] = 0xd80adc855d8396ee, a0Raw[14] = 0xa6ef8e1d28f70c37, a0Raw[15] = 0x89a3046ffdec8c68, a0Raw[16] = 0x2700f422fdde598f, a0Raw[17] = 0x02ff8208ec173edd, a0Raw[18] = 0x592d0ed4402006aa, a0Raw[19] = 0xe9746fc2c46f75ca, a0Raw[20] = 0x139d8b6c5ba58f04, a0Raw[21] = 0x19efc51d8cb6d758, a0Raw[22] = 0xb2b9b0c367f97e60, a0Raw[23] = 0xb2d4a94b0406f199, a0Raw[24] = 0xfa727ae0a3f11dd3, a0Raw[25] = 0xc70b88ae63794c0d, a0Raw[26] = 0x48bbbedd9d2d80f3, a0Raw[27] = 0xf53e0d9b3c9ffef7, a0Raw[28] = 0x74f0a6a21332d932, a0Raw[29] = 0x1d3d6b917e613ca9, a0Raw[30] = 0xde45ba8cde8e7a2c, a0Raw[31] = 0xd8babcce2940d198, a0Raw[32] = 0xcdc6e5895f17e697, a0Raw[33] = 0x151aea8c190a422f, a0Raw[34] = 0xb2171bb8f7e1170b, a0Raw[35] = 0x0dde1f73f1f31ef2, a0Raw[36] = 0x160743d9bd1ffbd3, a0Raw[37] = 0xd14c8c1b0a7e4569, a0Raw[38] = 0x9f9697ad66f14f37, a0Raw[39] = 0xd0447962d19f3bed, a0Raw[40] = 0x39eb7e68a6a5eb41, a0Raw[41] = 0xfa944d537143af90, a0Raw[42] = 0x2fd25cdc94f69953, a0Raw[43] = 0x5ac1eac54c02b313, a0Raw[44] = 0x2d3ac70e33a53666, a0Raw[45] = 0x1fc02eb31df648e9, a0Raw[46] = 0x6c2298b4eb45cabc, a0Raw[47] = 0x27bc2fe75702270b, a0Raw[48] = 0x0c5b0707cff1a27b, a0Raw[49] = 0x3eb44bdb91f341ec, a0Raw[50] = 0x2b5172b287ab3aa5, a0Raw[51] = 0x4c7fe4e87032d478, a0Raw[52] = 0xd08345c421829bd6, a0Raw[53] = 0x9021843c6ce90a58, a0Raw[54] = 0x4a89589e3b7e1acb, a0Raw[55] = 0x6dfb3ae2222f5e49, a0Raw[56] = 0x34ad7b94b0acde79, a0Raw[57] = 0x7e2ab942cf47e8c2, a0Raw[58] = 0x91aa874aa48210f2, a0Raw[59] = 0x74af5b27b2916370, a0Raw[60] = 0xa9bb4a45487db99c, a0Raw[61] = 0x85473a4b7e13d413, a0Raw[62] = 0x1b8e935726bf0092, a0Raw[63] = 0x6c42701c9dd6de8e;
    b0Raw[0] = 0x8da569a608423b00, b0Raw[1] = 0xa96f86817e3813b1, b0Raw[2] = 0x5e4be371c1b3706a, b0Raw[3] = 0x65d7dc79a02fdb9f, b0Raw[4] = 0x0f19b563402c9496, b0Raw[5] = 0x997366f12b9c7340, b0Raw[6] = 0x2ec2a04bafc52683, b0Raw[7] = 0xb24e5fa9cd411daf, b0Raw[8] = 0xf1b830760ec6eedc, b0Raw[9] = 0xd436711ff5cec2e5, b0Raw[10] = 0xdc59d0d3627dd751, b0Raw[11] = 0xac43d70d71082496, b0Raw[12] = 0x476063f4434725a5, b0Raw[13] = 0x5c4b966c0035c461, b0Raw[14] = 0xca0c7baafac46c97, b0Raw[15] = 0xaff702d40587ebf9, b0Raw[16] = 0x10c4fc72f7331b2f, b0Raw[17] = 0x4fb879d6ea899129, b0Raw[18] = 0x1507e8fd24f865aa, b0Raw[19] = 0xd09d20fcfa492f2b, b0Raw[20] = 0xdc95875648401224, b0Raw[21] = 0x78c432c295e3ac3f, b0Raw[22] = 0xdb3ec0133f3192ca, b0Raw[23] = 0x4a0211d5151362fa, b0Raw[24] = 0x4fdfca246c7cf3c0, b0Raw[25] = 0x689462871c45beb7, b0Raw[26] = 0x1b23a1894f1d5111, b0Raw[27] = 0x80b1cfc7674b13cd, b0Raw[28] = 0x0734f6692435b2d7, b0Raw[29] = 0xae8dd4bf63dc0072, b0Raw[30] = 0x3419c40575cde5d8, b0Raw[31] = 0xb652ed7ce6338793;
    x0Raw[0] = 0xdac53582b747b843, x0Raw[1] = 0x5943ebd5cfbbf539, x0Raw[2] = 0xc0d10bb5cdfb1d59, x0Raw[3] = 0x60e558a0987c60b1, x0Raw[4] = 0xd571da744179c54b, x0Raw[5] = 0xa7e4c26202d9138f, x0Raw[6] = 0x7ae3fcd2415eed28, x0Raw[7] = 0x0895300932612b09, x0Raw[8] = 0x356708c3615fab79, x0Raw[9] = 0x3610265bd0f30d21, x0Raw[10] = 0xdba7291b9764a758, x0Raw[11] = 0x776cd9a57a9dde0c, x0Raw[12] = 0x97b88aa9894bf733, x0Raw[13] = 0xda1363e1dc0ce77b, x0Raw[14] = 0x8c12b9f2f792f646, x0Raw[15] = 0x97c8b7f54256868c, x0Raw[16] = 0x268530a95aa7098a, x0Raw[17] = 0xaaa7b272c03a44b9, x0Raw[18] = 0xed81faca4043cb19, x0Raw[19] = 0x76a61c84d7a4568f, x0Raw[20] = 0xf6b5430e332e491c, x0Raw[21] = 0xfb5fc0a62c2af1c2, x0Raw[22] = 0x8bb607ac40e06626, x0Raw[23] = 0x44d76386a8ec4223, x0Raw[24] = 0x21826bea5ef87191, x0Raw[25] = 0x256444f0490e937a, x0Raw[26] = 0xb808fe5cc773e10a, x0Raw[27] = 0x158b3bfa35da5369, x0Raw[28] = 0x650def5e0b7280fb, x0Raw[29] = 0x05050a70903117df, x0Raw[30] = 0x09fb4d9e44228936, x0Raw[31] = 0x6dd1391b0d71cd0;
    y0Raw[0] = 0x80c78c1469a3e718, y0Raw[1] = 0x60bfa58e3cc28dac, y0Raw[2] = 0xdc09f644f8f7c177, y0Raw[3] = 0xc842dca01516cfd2, y0Raw[4] = 0xcc66f352f7cd941b, y0Raw[5] = 0x42bbe5dac662235c, y0Raw[6] = 0x950c15355b1aa1fb, y0Raw[7] = 0x7a4cc9410877524f, y0Raw[8] = 0x393c3185e7479349, y0Raw[9] = 0x075fe6a6e1c933c2, y0Raw[10] = 0xe1d590084cf06607, y0Raw[11] = 0xe73cb203a5fbed96, y0Raw[12] = 0x95905a5e0c34b720, y0Raw[13] = 0x475d7c62f6c96b71, y0Raw[14] = 0x780bbdefdea86e9a, y0Raw[15] = 0x0ddf23c8590519db, y0Raw[16] = 0x284a23db7b5ebe60, y0Raw[17] = 0xb7e759e7969c14a2, y0Raw[18] = 0x3ca4cd28559b264b, y0Raw[19] = 0x213eeb2ccac0acb2, y0Raw[20] = 0x26d20d97e475fe09, y0Raw[21] = 0x20ff4dfabbeaef45, y0Raw[22] = 0x53bb4d0e0ad77cb3, y0Raw[23] = 0xde5e0912a558825c, y0Raw[24] = 0xc4430ccd7d6fe07d, y0Raw[25] = 0x700769fc2038424e, y0Raw[26] = 0x3c8b4a3679e6c0ec, y0Raw[27] = 0x1c471054b659f0fb, y0Raw[28] = 0xbd533b2542fe2a4a, y0Raw[29] = 0x40641d7e1936eb86, y0Raw[30] = 0x61f5f34ea4a4d100, y0Raw[31] = 0x993d95428fc03f9a, y0Raw[32] = 0x3aec24ecfac08fe2, y0Raw[33] = 0xae5bfe16b0176ebc, y0Raw[34] = 0x309303bffab1f74b, y0Raw[35] = 0x8b30f6dc2cd4724c, y0Raw[36] = 0xcf3b28af2b130eec, y0Raw[37] = 0x67d575bacf873dff, y0Raw[38] = 0x2725e3b9f7d094a6, y0Raw[39] = 0x504c74b3e2d3193c, y0Raw[40] = 0xd0a41d545b1ff880, y0Raw[41] = 0xe810b014d3635bbd, y0Raw[42] = 0x6aeccaa43e0e9ca0, y0Raw[43] = 0x29ef50a32ca91f65, y0Raw[44] = 0x0b28396964a1ed46, y0Raw[45] = 0x2c75011ef016d783, y0Raw[46] = 0xd008699f2b40db30, y0Raw[47] = 0xe41b72bd9da4fba0, y0Raw[48] = 0xbf800718b191f03f, y0Raw[49] = 0xcc3caf432dc7a93a, y0Raw[50] = 0x15868407e1e23c4d, y0Raw[51] = 0x798d27f6a78b7a96, y0Raw[52] = 0x381643d20c892cbd, y0Raw[53] = 0xa2932a51db0aef35, y0Raw[54] = 0x122e10e87c21601d, y0Raw[55] = 0xcc23b8093a72d8e4, y0Raw[56] = 0xbaee9ddd61bf1235, y0Raw[57] = 0x6931302011ebae19, y0Raw[58] = 0x6a82388b22bd6161, y0Raw[59] = 0xe29fa1be1c92698b, y0Raw[60] = 0x0e6360313dd3209e, y0Raw[61] = 0x5f5a3d36b9c8c2d1, y0Raw[62] = 0xfc0f6bf754923e78, y0Raw[63] = 0xfbecb0d1e803409f;

    uint4096 a1, y1;
    uint2048 b1, x1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *x1Raw = (uint64 *) &x1, *y1Raw = (uint64 *) &y1;

    a1Raw[0] = 0xa65fdb68475d204b, a1Raw[1] = 0x0b43e593a75b8c27, a1Raw[2] = 0x7ac4f42cea256f4a, a1Raw[3] = 0x0005e695f9977840, a1Raw[4] = 0x43d3c26bae0191e2, a1Raw[5] = 0xbff63d80daf39476, a1Raw[6] = 0xa388dceb5d6e6d18, a1Raw[7] = 0xc933838889cf405a, a1Raw[8] = 0x683b7eb278239f73, a1Raw[9] = 0x1e7381ed79e6f191, a1Raw[10] = 0x1a2a8642cbaba4b8, a1Raw[11] = 0x0eb90d1784ceef79, a1Raw[12] = 0xb54fd57fb4a9043e, a1Raw[13] = 0x71900b0b5e38bc9f, a1Raw[14] = 0xe2ac0173e1f2aa1a, a1Raw[15] = 0x07d156d93a9e0922, a1Raw[16] = 0x2df2379850ea895f, a1Raw[17] = 0x46993aa1108d9bda, a1Raw[18] = 0xacf4a46ba63e2095, a1Raw[19] = 0xbe4c3653e92fac48, a1Raw[20] = 0x42dca5b8866216d8, a1Raw[21] = 0xedde37806fcfa50e, a1Raw[22] = 0x5111b916f270284c, a1Raw[23] = 0xae2ae9174757ad85, a1Raw[24] = 0x9dc04732afb32e8f, a1Raw[25] = 0x7d3074a5e5be81b5, a1Raw[26] = 0x575a8fdf612bac03, a1Raw[27] = 0x39c8d91a1194dc9e, a1Raw[28] = 0x71602c46f96023a9, a1Raw[29] = 0xd798971b1a8818be, a1Raw[30] = 0x6df9453623825cd3, a1Raw[31] = 0xc92be51c5d2e72ae, a1Raw[32] = 0x8bf6719e694aceae, a1Raw[33] = 0x2e08758af949c928, a1Raw[34] = 0xb550553928de6ce7, a1Raw[35] = 0x9eef54e276ad3d31, a1Raw[36] = 0xddd024ca3edb5fe9, a1Raw[37] = 0xe34093ec9e80a299, a1Raw[38] = 0x906d45867c5eb236, a1Raw[39] = 0x4c809f95458672a2, a1Raw[40] = 0x4a2ea815a5af1edf, a1Raw[41] = 0x14a3725b3bbb5405, a1Raw[42] = 0x89019a74fa2f3be7, a1Raw[43] = 0xb8e6a23f5aff13e8, a1Raw[44] = 0xceb6fac0a9147591, a1Raw[45] = 0x305264ad5f900bde, a1Raw[46] = 0x37cdef6d4354934e, a1Raw[47] = 0x2d93eb608e7ba46c, a1Raw[48] = 0xa1f64e990ccc5bcc, a1Raw[49] = 0x50cf7f46c5cee66c, a1Raw[50] = 0x46a2776840613c12, a1Raw[51] = 0xd4003fd1ca8815f9, a1Raw[52] = 0xb6361688c460c070, a1Raw[53] = 0xdc61b5e7973d642e, a1Raw[54] = 0x15e06a81b6fcc1bd, a1Raw[55] = 0xb820fba2fd295ab0, a1Raw[56] = 0x1f84ca37f3c83aab, a1Raw[57] = 0x82dfeea4409d29b9, a1Raw[58] = 0xbfde2ee78b0582a5, a1Raw[59] = 0xc8aa4e3980de3735, a1Raw[60] = 0x314681ba89f77344, a1Raw[61] = 0xe5f8f3bc7adc1cab, a1Raw[62] = 0xcdc55537d2006ea7, a1Raw[63] = 0x8db035a29fcdd9dc;
    b1Raw[0] = 0x339aa45897c8103e, b1Raw[1] = 0x21985b3410c372e0, b1Raw[2] = 0xeb9f4b495c55d42c, b1Raw[3] = 0x0a586ea3b9cc07da, b1Raw[4] = 0x9a9a15e1afa78a0f, b1Raw[5] = 0x0453811c2127fe99, b1Raw[6] = 0xf3ffe28dca704c26, b1Raw[7] = 0x5a63eec072ae6160, b1Raw[8] = 0x78f78732179b4d0b, b1Raw[9] = 0xd2a6aec6c80f8bf0, b1Raw[10] = 0xce9d8f39ab2e7e22, b1Raw[11] = 0x4b359f573d14afc2, b1Raw[12] = 0xa573a894c5bc2c6e, b1Raw[13] = 0x2bd0c9463b9c8503, b1Raw[14] = 0x225fb3a8c3779d23, b1Raw[15] = 0x05f9cd2e4151975f, b1Raw[16] = 0x0aea706c7cb2fe75, b1Raw[17] = 0x543bc4213473d180, b1Raw[18] = 0x847e1b3d0cc41fbb, b1Raw[19] = 0xa1f9bc4f1334873b, b1Raw[20] = 0x860dd2d14200d169, b1Raw[21] = 0xc26444f60806250e, b1Raw[22] = 0x8b3b857009e8819e, b1Raw[23] = 0x15638fb1fe8f54a4, b1Raw[24] = 0xbde208c1dc350b9c, b1Raw[25] = 0x42524082e4e783d0, b1Raw[26] = 0x520e281de0acafd5, b1Raw[27] = 0xdf83691a74e2e28f, b1Raw[28] = 0xa44692bc96b3a6a2, b1Raw[29] = 0xeb4981b7fb8b5c12, b1Raw[30] = 0xc2c5634c54158379, b1Raw[31] = 0x19031a1904eda71a;
    x1Raw[0] = 0x693891ceadef0da9, x1Raw[1] = 0x47c127cb0006edd1, x1Raw[2] = 0xe6cdaf855b3824e3, x1Raw[3] = 0xcacdca013bd07cd9, x1Raw[4] = 0x81464e5734d657da, x1Raw[5] = 0xb6eb7ba336aced96, x1Raw[6] = 0xf0f6b4807cc38370, x1Raw[7] = 0x33481ab0390d9bad, x1Raw[8] = 0x348e4c021ca63f58, x1Raw[9] = 0xa13b6b687332c884, x1Raw[10] = 0xd6a93f618425df92, x1Raw[11] = 0x41394ef1f33a522f, x1Raw[12] = 0xfdb80eccb8bc3c6b, x1Raw[13] = 0x3f305e7425447056, x1Raw[14] = 0x22b4121555586bd1, x1Raw[15] = 0x74172254a130f137, x1Raw[16] = 0x647ef720bd1cc6b8, x1Raw[17] = 0x01d5de79db107592, x1Raw[18] = 0xfcdea5d682c6d5c6, x1Raw[19] = 0x9bc64bf24ed261c3, x1Raw[20] = 0x722eee5629d8762b, x1Raw[21] = 0xa2dfb8299900d8d0, x1Raw[22] = 0x079f8446ee3b7882, x1Raw[23] = 0xbf4582b7e32a1582, x1Raw[24] = 0x29e29ece0b79a3da, x1Raw[25] = 0xfc55237fa240f73b, x1Raw[26] = 0x6250f445e0d9a081, x1Raw[27] = 0x7d53d8648dc021cc, x1Raw[28] = 0xf3889f3f3b5342f3, x1Raw[29] = 0x407b26f68281caaf, x1Raw[30] = 0x9bcc5e35012e4c75, x1Raw[31] = 0xfbd475de7840d108;
    y1Raw[0] = 0xd6649358183d2461, y1Raw[1] = 0x95a5cc8557ba480f, y1Raw[2] = 0x3e57512f27e1d555, y1Raw[3] = 0x2f74c54453c581ed, y1Raw[4] = 0xa8065fd796921de0, y1Raw[5] = 0x3c4a7230c946c451, y1Raw[6] = 0x8a2e7148e1192e2e, y1Raw[7] = 0xfd7717764d3866d4, y1Raw[8] = 0x854ec3bde01ff623, y1Raw[9] = 0x76cc8d0ed63d14e6, y1Raw[10] = 0xee12b8f4b9b9a56f, y1Raw[11] = 0xc6faa20f550c10ed, y1Raw[12] = 0x80e37ac960b94cec, y1Raw[13] = 0x10f9aa5fe74e092c, y1Raw[14] = 0x92cbab6a0712e12f, y1Raw[15] = 0xa3662db272ffb06e, y1Raw[16] = 0x55a901cd8d82bb64, y1Raw[17] = 0x105088c0fc1e79c5, y1Raw[18] = 0x928ef2195e682208, y1Raw[19] = 0x2c6b24a52ddc812f, y1Raw[20] = 0x5c1ce97b64052664, y1Raw[21] = 0xb41614c431cc9726, y1Raw[22] = 0x81ed374cef2b5793, y1Raw[23] = 0x656b541154a7c2eb, y1Raw[24] = 0x7bdf9326ad55769e, y1Raw[25] = 0xceecbae7b0ef0721, y1Raw[26] = 0x0a9b92f9a4d28f4c, y1Raw[27] = 0x1ea9476e7965a030, y1Raw[28] = 0x7d07d2125bf7c273, y1Raw[29] = 0x80eedbd1f259ffa8, y1Raw[30] = 0x4b4e944ef40684f0, y1Raw[31] = 0x3316b73f00b8ccab, y1Raw[32] = 0x2b1adfeec530068b, y1Raw[33] = 0xc2c7efc159ca0e9a, y1Raw[34] = 0xf09abe6f3e8fed4e, y1Raw[35] = 0xfe3a9e8944b51ac2, y1Raw[36] = 0xc0a331b926c4a065, y1Raw[37] = 0x89400f31baf93c28, y1Raw[38] = 0xde15bbdd35406f9a, y1Raw[39] = 0x043eb71972231f6a, y1Raw[40] = 0xb97daffee5816ce1, y1Raw[41] = 0xefeec250a1f1b57c, y1Raw[42] = 0xe13241f30a246105, y1Raw[43] = 0xff09c2c4447f95e1, y1Raw[44] = 0xdb0f96ccf94a89cb, y1Raw[45] = 0xa933bd33aafff5ff, y1Raw[46] = 0x06b7434dc2c1e27b, y1Raw[47] = 0x6141c564797640d4, y1Raw[48] = 0xf28edc7238ae7529, y1Raw[49] = 0xe961d7f50e93e10f, y1Raw[50] = 0x3614ca332a9ce6cb, y1Raw[51] = 0xccb41bf1a7ffed62, y1Raw[52] = 0xc5bcdfcd903281ef, y1Raw[53] = 0xca84e98f9da70d72, y1Raw[54] = 0xb66fd96406d24f00, y1Raw[55] = 0x0c047db4a33ebe4d, y1Raw[56] = 0x42f31ce3a42dffe7, y1Raw[57] = 0x7db52232704f64ee, y1Raw[58] = 0x67e9b6d5c8eb22bd, y1Raw[59] = 0xfe010e15df001401, y1Raw[60] = 0xe0cb1674c266aa41, y1Raw[61] = 0x827bab0783303b6f, y1Raw[62] = 0xd1ee43b690185db5, y1Raw[63] = 0x179f626af8dcccf1;

    uint4096 a2, y2;
    uint2048 b2, x2;
    uint64 *a2Raw = (uint64 *) &a2, *b2Raw = (uint64 *) &b2, *x2Raw = (uint64 *) &x2, *y2Raw = (uint64 *) &y2;

    a2Raw[0] = 0x742a6baae3a188d9, a2Raw[1] = 0x7fa14d0e0c87400f, a2Raw[2] = 0xdde502db53bffc22, a2Raw[3] = 0x9fda5c5751756b39, a2Raw[4] = 0xac4100830b2ac7b4, a2Raw[5] = 0xff31fb92c081279f, a2Raw[6] = 0xaf82856329f640e6, a2Raw[7] = 0xdb3cf92aa6dfd7b5, a2Raw[8] = 0xb8f83f1ce443b061, a2Raw[9] = 0x467f3c2c3af0dc9f, a2Raw[10] = 0x630903c7cde6e190, a2Raw[11] = 0x45b0e2e8b2d0a895, a2Raw[12] = 0x7148d577dff0375a, a2Raw[13] = 0x07e6744c183d1749, a2Raw[14] = 0x6b6a0b40eef36eb0, a2Raw[15] = 0x451aa405dfe9f777, a2Raw[16] = 0x2aa7473c5b929704, a2Raw[17] = 0xd10058179f445365, a2Raw[18] = 0xd30ae266841bcd04, a2Raw[19] = 0x30c98afa3861cfd4, a2Raw[20] = 0xc90fa5e04d9db7a3, a2Raw[21] = 0x4ec5a39100ba2173, a2Raw[22] = 0x69ce859b76bbdaaf, a2Raw[23] = 0x27c68fe969b1c974, a2Raw[24] = 0x848d79f2edc8e2e4, a2Raw[25] = 0xe69a9a6fddab50f6, a2Raw[26] = 0x32074eb4c6330d7e, a2Raw[27] = 0xc030a3fc60d6c97c, a2Raw[28] = 0x44c67b59ca92cc31, a2Raw[29] = 0xaf39d5baac10ae17, a2Raw[30] = 0xc952823cbba7c2ff, a2Raw[31] = 0xa4b88ce97896bd9d, a2Raw[32] = 0x137ff3f7fcddfccf, a2Raw[33] = 0xa2ca443f0d0bbdd5, a2Raw[34] = 0xfad949536006284c, a2Raw[35] = 0x34ce866db00319c4, a2Raw[36] = 0x93b60a3424871de8, a2Raw[37] = 0xcea34aad25882f38, a2Raw[38] = 0x2c94afdb274710ef, a2Raw[39] = 0xa0a5aa3b4298fd70, a2Raw[40] = 0x0f4c2124fbd283a7, a2Raw[41] = 0x050a5c3d94cd28aa, a2Raw[42] = 0x6caa535d3d1d7dcb, a2Raw[43] = 0x3432c4da8011db89, a2Raw[44] = 0xdfbaa82cb0918538, a2Raw[45] = 0x70ae363693169661, a2Raw[46] = 0x3cf2b0db2f26b117, a2Raw[47] = 0xb0f571a55203df0b, a2Raw[48] = 0x318b0f63589238f8, a2Raw[49] = 0xeba401b08d808c36, a2Raw[50] = 0x6bc82f678596d04b, a2Raw[51] = 0x1dbecbc659341c4e, a2Raw[52] = 0xb437c7e21df290e5, a2Raw[53] = 0xeb26acac7d25c0a6, a2Raw[54] = 0x81cc77ef29c238b9, a2Raw[55] = 0x2d7fd41699baad22, a2Raw[56] = 0x293bf74423b396f3, a2Raw[57] = 0x669d58cd47b1fac1, a2Raw[58] = 0x6cf426bbe6402b44, a2Raw[59] = 0xca23803dbccc6ab0, a2Raw[60] = 0x4c4a0c97580fd6b9, a2Raw[61] = 0xa599f41852166676, a2Raw[62] = 0x69b33b2cecd6df3e, a2Raw[63] = 0x5d98eca5a1fadb76;
    b2Raw[0] = 0x45bbfdbc6467ced5, b2Raw[1] = 0xb37e3666967f9c5f, b2Raw[2] = 0x40f78c4e733a56a0, b2Raw[3] = 0x02caf5d21b07b09e, b2Raw[4] = 0x98c268d35d35337d, b2Raw[5] = 0x68b6130ab85e6b6f, b2Raw[6] = 0x0b55d28fa7f3ab83, b2Raw[7] = 0x3f620ab7c081600c, b2Raw[8] = 0x265a144454bc51e8, b2Raw[9] = 0x9667fca96b8c9698, b2Raw[10] = 0xb16099428eefdeca, b2Raw[11] = 0x4443f9528aa5969c, b2Raw[12] = 0x309d96e2bdbd0814, b2Raw[13] = 0xf68301d6905ca318, b2Raw[14] = 0xbf715de7d144d0e4, b2Raw[15] = 0xb9b6a580495f179a, b2Raw[16] = 0x6f42a424e2c45ca9, b2Raw[17] = 0x61fd7b4e6ac97f1f, b2Raw[18] = 0xe5e34d0363284a4c, b2Raw[19] = 0x06db17dbded33ce2, b2Raw[20] = 0x2cbcca72679f7249, b2Raw[21] = 0x7263719c5e3ea098, b2Raw[22] = 0x2dc5cff7b5bae345, b2Raw[23] = 0x090b38aebe32ee55, b2Raw[24] = 0x5b823e86ec7608f3, b2Raw[25] = 0x21c09d3e55371e1b, b2Raw[26] = 0x2a883e91ac6bf848, b2Raw[27] = 0xc608397a3cc8833a, b2Raw[28] = 0x209d7d36efce3d48, b2Raw[29] = 0x14ade472e195fe72, b2Raw[30] = 0x4f64ba1f716d92a1, b2Raw[31] = 0x1653720dfa2f052c;
    x2Raw[0] = 0x23343943f5fdc2b5, x2Raw[1] = 0x760614011102da51, x2Raw[2] = 0xa031837e09022245, x2Raw[3] = 0x22edc71f5df6d840, x2Raw[4] = 0xc761eb80908240d2, x2Raw[5] = 0x1354fc9164634516, x2Raw[6] = 0xfe5032de81da62ca, x2Raw[7] = 0x6fbcb75b16b21366, x2Raw[8] = 0x9e79ff7c3416fc6c, x2Raw[9] = 0x46db9df779fd8fac, x2Raw[10] = 0x396ca7b7461dd14a, x2Raw[11] = 0xc36c1c39a7a07019, x2Raw[12] = 0xbdef0571d6246709, x2Raw[13] = 0x4db656a9f3502099, x2Raw[14] = 0x50543802f0a350a4, x2Raw[15] = 0x258e0a01ef70ae35, x2Raw[16] = 0x285791b9299bbc35, x2Raw[17] = 0x58f4df29066953e0, x2Raw[18] = 0x8e191e49440bf53c, x2Raw[19] = 0x8b06fdd7900e35d4, x2Raw[20] = 0x214001f9b5eec52a, x2Raw[21] = 0xf3c2bede4e6422a2, x2Raw[22] = 0x7f792c2f70b7eed9, x2Raw[23] = 0x94e3b8bb0e736cc0, x2Raw[24] = 0x3db4b46cb8cf2871, x2Raw[25] = 0x66904417b0949471, x2Raw[26] = 0x3594d2989ed8172c, x2Raw[27] = 0xc21de43c4339edc1, x2Raw[28] = 0x8fa4288152086ce0, x2Raw[29] = 0x9f0b7cf80dddeeb0, x2Raw[30] = 0x057923744a582831, x2Raw[31] = 0xf59e93d946b0f21a;
    y2Raw[0] = 0x8aa25d6ed59c6c44, y2Raw[1] = 0x923c18fe00c35192, y2Raw[2] = 0x1edc770705618bfe, y2Raw[3] = 0x94a2442ff07f5efa, y2Raw[4] = 0x6217d5cd862dc790, y2Raw[5] = 0x9902ccc2891e22d6, y2Raw[6] = 0xa43740cc4ad0e497, y2Raw[7] = 0x0836cdde8e6458db, y2Raw[8] = 0x27228391a8749d88, y2Raw[9] = 0x61d1ff00684f25ad, y2Raw[10] = 0x882137b8ddb2f9d0, y2Raw[11] = 0xd3baf0484292c3b5, y2Raw[12] = 0x794bcc28db92f1bc, y2Raw[13] = 0xc24585cec41605ad, y2Raw[14] = 0x4ef8eabd6313b048, y2Raw[15] = 0x52e6ce64ae7b59bd, y2Raw[16] = 0x8b219d0055526314, y2Raw[17] = 0x450af2310b581824, y2Raw[18] = 0xbbc27b3ad2cd58b6, y2Raw[19] = 0x8963c78ebac62559, y2Raw[20] = 0x920623c4eda86f4c, y2Raw[21] = 0x5e27a472f2834c07, y2Raw[22] = 0xbc2acd1181572c6f, y2Raw[23] = 0xdec593393712f02f, y2Raw[24] = 0x3a3f1dfc24a3d6e5, y2Raw[25] = 0x5e06365c4b332004, y2Raw[26] = 0x82d329a6c295ba08, y2Raw[27] = 0xd324c765c32e4e0b, y2Raw[28] = 0xfbd147f2aae094f8, y2Raw[29] = 0xef9668ebd1c5977c, y2Raw[30] = 0x8b3eff6c5e77596a, y2Raw[31] = 0x894d40aa2b240c07, y2Raw[32] = 0x52e237f8961e6f84, y2Raw[33] = 0x45010650ab9e48d0, y2Raw[34] = 0x705700c8cbabd744, y2Raw[35] = 0x9aed9742542baaef, y2Raw[36] = 0x61e26d7240021e12, y2Raw[37] = 0x8456bc77cdca70d4, y2Raw[38] = 0xbe94847c0966dce9, y2Raw[39] = 0xcfa8b6586e1d552a, y2Raw[40] = 0x980429d30f39d362, y2Raw[41] = 0x526267b515bcf641, y2Raw[42] = 0x135e0df3fa5f788c, y2Raw[43] = 0x1d7e6adb11b3f0c8, y2Raw[44] = 0x0e21b16e15eefe0e, y2Raw[45] = 0x546b11e52a2ea695, y2Raw[46] = 0xa577d096c8296b7c, y2Raw[47] = 0xc19a900f608019d9, y2Raw[48] = 0x1d4423a4ddfea018, y2Raw[49] = 0xf9b8504bd3ccca1f, y2Raw[50] = 0x457ed5d67de077b4, y2Raw[51] = 0x1b7fab1cb528fa98, y2Raw[52] = 0xad2f2a76f50357a7, y2Raw[53] = 0x8b7f6dd10e1088aa, y2Raw[54] = 0x89c0707a2e70c629, y2Raw[55] = 0xbd21c359b8149889, y2Raw[56] = 0x4c5002cfdd6c01df, y2Raw[57] = 0x40d8ed9cb932f193, y2Raw[58] = 0x01c37a8f9cae388b, y2Raw[59] = 0x7e14ccd87abfb32e, y2Raw[60] = 0x05afb1a05d928bf2, y2Raw[61] = 0xe348debc6f998ac9, y2Raw[62] = 0x7fae7bf43a185399, y2Raw[63] = 0x2b84bdb7ff91e708;

    uint4096 a3, y3;
    uint2048 b3, x3;
    uint64 *a3Raw = (uint64 *) &a3, *b3Raw = (uint64 *) &b3, *x3Raw = (uint64 *) &x3, *y3Raw = (uint64 *) &y3;

    a3Raw[0] = 0xdd0bd1555eb07aef, a3Raw[1] = 0xd395917c6df10406, a3Raw[2] = 0x7c8cfc09a1cf2c11, a3Raw[3] = 0x16fa710c29a83e8c, a3Raw[4] = 0x62f7993df02a6fb6, a3Raw[5] = 0x708fdad401a11d6d, a3Raw[6] = 0x4b718f433e777a20, a3Raw[7] = 0x79a1a9ac6c7f6844, a3Raw[8] = 0x70b8b570fe4fe543, a3Raw[9] = 0x67b4bade263f48eb, a3Raw[10] = 0x77a1cf5f9e45b4ae, a3Raw[11] = 0xe852189a32c26c56, a3Raw[12] = 0x08a67398efa3b0e7, a3Raw[13] = 0xc023121eafa29ee3, a3Raw[14] = 0x490273f6a7941f9e, a3Raw[15] = 0x19a0b2981e406255, a3Raw[16] = 0x0616857e5ceb160c, a3Raw[17] = 0xf063edce2023cf94, a3Raw[18] = 0xaecda9fa07913887, a3Raw[19] = 0x69c4382c7ab2f1da, a3Raw[20] = 0xdf4199b16749fa69, a3Raw[21] = 0x94285763f8a54fb9, a3Raw[22] = 0x669e796ebb0c97a9, a3Raw[23] = 0x9e1c7976eaf95bce, a3Raw[24] = 0xf3bef2aaff881b01, a3Raw[25] = 0x253b985109b50897, a3Raw[26] = 0x88f394d9eac438e2, a3Raw[27] = 0x06ec2a6d53f90e41, a3Raw[28] = 0x8eb79c0115df776e, a3Raw[29] = 0xbe399bfcb234ba83, a3Raw[30] = 0xb0512441767f5c4b, a3Raw[31] = 0x08fd09e744d7cb0c, a3Raw[32] = 0xa7b6962daf1be785, a3Raw[33] = 0xd068eaba6849d8ab, a3Raw[34] = 0x51f3c492df81cfd5, a3Raw[35] = 0x04369c22afc0ffe6, a3Raw[36] = 0xe6f1cbf3448c9a11, a3Raw[37] = 0xa3b2ad48d06807ba, a3Raw[38] = 0x48331b2544a1cfe3, a3Raw[39] = 0x7d0a397681a78fb0, a3Raw[40] = 0x31dde751e0d25110, a3Raw[41] = 0xb873c316ca222522, a3Raw[42] = 0xd67442634e8f2aa0, a3Raw[43] = 0xda934d4bd7363897, a3Raw[44] = 0x81754ddb8669eefd, a3Raw[45] = 0x4747034c8befb494, a3Raw[46] = 0x3ade439e0f7bf291, a3Raw[47] = 0xbeb1913cd1c82108, a3Raw[48] = 0xef6d54fe710043e2, a3Raw[49] = 0x87da80f2af6a9e92, a3Raw[50] = 0x65240a34e50f520d, a3Raw[51] = 0x502582d9a8348f6c, a3Raw[52] = 0x30be9c7644288c3d, a3Raw[53] = 0xe125c0d65dc82e47, a3Raw[54] = 0x3602e5bff024a1b2, a3Raw[55] = 0x8821ede7ea9932fd, a3Raw[56] = 0xea0c879395d2194d, a3Raw[57] = 0x2aa94be98d7fc692, a3Raw[58] = 0xbe220de08b4cb14a, a3Raw[59] = 0x1e73bc2f345bda34, a3Raw[60] = 0xa54c033e4cf249ba, a3Raw[61] = 0xe0ad4a8044fe839c, a3Raw[62] = 0x81dc44bb14ced001, a3Raw[63] = 0xce692ad9f6ab1754;
    b3Raw[0] = 0xafa6cff9169562a3, b3Raw[1] = 0xe44c7519857f462b, b3Raw[2] = 0x14fbca1d12a900b3, b3Raw[3] = 0x7ca8a2254f467deb, b3Raw[4] = 0x80bb6fd90d22d456, b3Raw[5] = 0x33f189bdae36bae9, b3Raw[6] = 0x9e1fb35d4929b08c, b3Raw[7] = 0x792c3700630e95e0, b3Raw[8] = 0x1df4fd97848721fe, b3Raw[9] = 0xe8c2dcfd9bc5b47a, b3Raw[10] = 0x193721d406e16420, b3Raw[11] = 0xf010e1075d7affe5, b3Raw[12] = 0x0ce0ab4b5db3bf6e, b3Raw[13] = 0x15847cdc3b594f82, b3Raw[14] = 0x5c6b77411fdadfcb, b3Raw[15] = 0x90dceb8e6e89024e, b3Raw[16] = 0x6a0e5447cfd1ae41, b3Raw[17] = 0xdb527564bfb16684, b3Raw[18] = 0x1ee850cf1c658c26, b3Raw[19] = 0x21b8b5ffda5145b0, b3Raw[20] = 0xb3b5d6bcf1e0035f, b3Raw[21] = 0x54bbbf7514758e16, b3Raw[22] = 0x11972bc8485492b2, b3Raw[23] = 0xd547b15e64a6c9c9, b3Raw[24] = 0x9565f02aadcf15f5, b3Raw[25] = 0x2d24cbbb4063215c, b3Raw[26] = 0xde56b2bcd3706ac6, b3Raw[27] = 0xc74cff95b953c49e, b3Raw[28] = 0x4ef4486efe98ac3d, b3Raw[29] = 0xdd46d1c4106a0719, b3Raw[30] = 0x3ab48145611b7dec, b3Raw[31] = 0x1a119d3ce93a04ad;
    x3Raw[0] = 0x31729fa95a6cab9e, x3Raw[1] = 0x4d628cb8d0f178d8, x3Raw[2] = 0x88b33fd8ba20affb, x3Raw[3] = 0x251519a3514d1ae2, x3Raw[4] = 0x5715ffacd0e02cdf, x3Raw[5] = 0xdbf3409a3fc4b815, x3Raw[6] = 0xe8fdc8ff6591d1e9, x3Raw[7] = 0x83344abac9ba1914, x3Raw[8] = 0x05ccaf0b5fa096c4, x3Raw[9] = 0xd1bb5387efa40f0e, x3Raw[10] = 0x0fb4e2f2e815069e, x3Raw[11] = 0xa54050f32fa1f703, x3Raw[12] = 0x2348370c319d132d, x3Raw[13] = 0x820989de6a154c72, x3Raw[14] = 0x2950a189e45c95fd, x3Raw[15] = 0xc29d90c269dcc246, x3Raw[16] = 0x7fd8b8726c31ba0d, x3Raw[17] = 0x0cce8a3eab5ae53d, x3Raw[18] = 0x2697175328b74c72, x3Raw[19] = 0x611ed9170cb10c7e, x3Raw[20] = 0xe9ef5e55358b958a, x3Raw[21] = 0x05ce15cca3ca7f6c, x3Raw[22] = 0x8392d2baf8e4517a, x3Raw[23] = 0x2ea24c9d976cdb58, x3Raw[24] = 0xc16bb0fb443053ad, x3Raw[25] = 0xf42ec191bf1d8b34, x3Raw[26] = 0xa9b35646741211ef, x3Raw[27] = 0xf0283c82046f7997, x3Raw[28] = 0xfd4c0bc4459f9b71, x3Raw[29] = 0x69b15608bad310aa, x3Raw[30] = 0xd2c33e1f1353bf12, x3Raw[31] = 0xfe4559cc89b490ca;
    y3Raw[0] = 0x72d632b13a7f6d75, y3Raw[1] = 0x6f5f6092cc54d9cd, y3Raw[2] = 0x40e2160ef0d6b587, y3Raw[3] = 0x0c0a4180d2d5bfde, y3Raw[4] = 0x9786c81041db96d2, y3Raw[5] = 0xfba2499e713c221e, y3Raw[6] = 0x1ac47ff6fdabcd3c, y3Raw[7] = 0xad3d001bea66b83c, y3Raw[8] = 0xcd35109174277cb4, y3Raw[9] = 0x4674265e77aed31a, y3Raw[10] = 0xe766d9d864bcea51, y3Raw[11] = 0x63c63b0643a68370, y3Raw[12] = 0x539824592c4956b9, y3Raw[13] = 0x4e29044c1bb09dc6, y3Raw[14] = 0x3e09bc9ec37012fd, y3Raw[15] = 0x4d986f52c47601ce, y3Raw[16] = 0x78c876007659856b, y3Raw[17] = 0x54eb18a72cc80aac, y3Raw[18] = 0x182b880df083731d, y3Raw[19] = 0xafdf5dac1de298e7, y3Raw[20] = 0x8c4e49b4e7b95e61, y3Raw[21] = 0x3d9a2e9b87607fa5, y3Raw[22] = 0xefaf248c7128f090, y3Raw[23] = 0xa40d1bfc9020a62f, y3Raw[24] = 0x47da11e7ee4c339f, y3Raw[25] = 0x1ec77946da20afae, y3Raw[26] = 0x6cde79672e3e23b9, y3Raw[27] = 0x2bfcae31b30bbb7f, y3Raw[28] = 0x66f0f40b818a3cfc, y3Raw[29] = 0x9c2a7b7216b64cab, y3Raw[30] = 0xdfa80e41c5f2fc75, y3Raw[31] = 0xc792656f76f1bd68, y3Raw[32] = 0x46ecedd610af0467, y3Raw[33] = 0x77530bcc065a360d, y3Raw[34] = 0x09805f39b5f73765, y3Raw[35] = 0x0bd9f46819438c1f, y3Raw[36] = 0x96cad721ac93d215, y3Raw[37] = 0x61effd082f082efe, y3Raw[38] = 0x9a6f7811bc18299e, y3Raw[39] = 0x973b9fc0345aa785, y3Raw[40] = 0x2e6b35e52cfcfe03, y3Raw[41] = 0xa047106b42f595be, y3Raw[42] = 0x2d5dc33cdf210aa7, y3Raw[43] = 0x7bfce792e734d169, y3Raw[44] = 0xb0281bd5e7dbe7d3, y3Raw[45] = 0xbc94faf21da4ebf5, y3Raw[46] = 0x54095af29286a681, y3Raw[47] = 0x3f97ba2506e2249c, y3Raw[48] = 0x3be6be2a99cdc8a5, y3Raw[49] = 0x4d81df82630737ac, y3Raw[50] = 0x76a25f7770774ef6, y3Raw[51] = 0x72f23806f905dfe4, y3Raw[52] = 0xc4c5f11d24c19085, y3Raw[53] = 0x481364d012db9e55, y3Raw[54] = 0x40497734e045c0bd, y3Raw[55] = 0x0400ef97e249ccf4, y3Raw[56] = 0xa161ee54789fab3c, y3Raw[57] = 0x7f5dcc09dcc8d726, y3Raw[58] = 0xdcb1f969cba9cdad, y3Raw[59] = 0x6bf3fa7a6571e0e4, y3Raw[60] = 0xf443f6091588be67, y3Raw[61] = 0xfda6ab13f12db93a, y3Raw[62] = 0x6106d45f5a842acd, y3Raw[63] = 0xdb0dcdb676a4c68;

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

    a0Raw[0] = 0xe6d7a6fd318ebc7a, a0Raw[1] = 0xef48a371cd265e00, a0Raw[2] = 0x843fb15594d770cc, a0Raw[3] = 0x26d6232d538f5c7b, a0Raw[4] = 0x5e214d5a3be940f2, a0Raw[5] = 0xee75b96230c9dca3, a0Raw[6] = 0xc92e84f962c3354d, a0Raw[7] = 0xe1072ea749c7aebd, a0Raw[8] = 0xb6440d67c6849cc2, a0Raw[9] = 0x68db92be3058f147, a0Raw[10] = 0x17fd50b41db76656, a0Raw[11] = 0xb8ee23722f44ce15, a0Raw[12] = 0x8236da7f4c0113e4, a0Raw[13] = 0x52fc3fb3ca703d2e, a0Raw[14] = 0x4102c1ae4b835843, a0Raw[15] = 0x94f1b289ba92b43c, a0Raw[16] = 0x437830d2691e9e31, a0Raw[17] = 0xa09d0a1c35aaad38, a0Raw[18] = 0x8562c4605ad950ad, a0Raw[19] = 0xd68296f82d2a0434, a0Raw[20] = 0xcfa82f62b61cb911, a0Raw[21] = 0xbedcbb540ee74fee, a0Raw[22] = 0xbc3a3901225cc9f9, a0Raw[23] = 0xe01d9ac322e821ee, a0Raw[24] = 0x82426c1d4dd3bf03, a0Raw[25] = 0x016cd9af69ad5466, a0Raw[26] = 0x9d6dc06c938d67c8, a0Raw[27] = 0x47fe0c68b2bdaad8, a0Raw[28] = 0x0ab3542ac1c19693, a0Raw[29] = 0x6c78c7152f339c74, a0Raw[30] = 0x542977514bf28bcd, a0Raw[31] = 0x26dcf3e9532478f0, a0Raw[32] = 0xc764519caf624735, a0Raw[33] = 0x3135eaa07055727c, a0Raw[34] = 0x132b069c8df78507, a0Raw[35] = 0xbde8979e4c545e2c, a0Raw[36] = 0x4f22c2c544d1c4ad, a0Raw[37] = 0xb279e1e867b7e5d1, a0Raw[38] = 0x8847c6e01480b33d, a0Raw[39] = 0x6216026503344559, a0Raw[40] = 0x54c2afc8398d6d93, a0Raw[41] = 0x5d1c77daaf2d58e7, a0Raw[42] = 0x347c658a7d749661, a0Raw[43] = 0x7245d60af3d1d5d0, a0Raw[44] = 0x051912183028bcca, a0Raw[45] = 0xfd96068c74a05078, a0Raw[46] = 0x27711ff1899b01fe, a0Raw[47] = 0xe92e7d834171c0fc, a0Raw[48] = 0xdc1f013126d096fa, a0Raw[49] = 0x440bc43488795272, a0Raw[50] = 0xfa1b9fc3c371424d, a0Raw[51] = 0x5fc5a4197099af10, a0Raw[52] = 0xa47e26f037f49973, a0Raw[53] = 0xcc5ed7ec7734648a, a0Raw[54] = 0x26f6c2412bd4342a, a0Raw[55] = 0xf49a2a046390be71, a0Raw[56] = 0x919ec0faa2efffc6, a0Raw[57] = 0x4028464887cd407e, a0Raw[58] = 0xe8284dc4e1c0e87d, a0Raw[59] = 0x10f26ab63a0c1bcd, a0Raw[60] = 0xc70ad9bb020e3f84, a0Raw[61] = 0xa0beec0e4d5aaf1a, a0Raw[62] = 0x7affd36010294f97, a0Raw[63] = 0xe1e62f479f685be6;
    b0Raw[0] = 0x6de64c321a469617, b0Raw[1] = 0xe45c4337b5230457, b0Raw[2] = 0x35b34a50e6597c73, b0Raw[3] = 0x97f5a524a6ce6d80, b0Raw[4] = 0x7359055e448dc900, b0Raw[5] = 0xbb43c6c2a0040890, b0Raw[6] = 0xd9d5c0a95c5e799a, b0Raw[7] = 0x2d2a39b11ebf4dcd, b0Raw[8] = 0xc8f1198c43313817, b0Raw[9] = 0xa7c819ba913ab6ee, b0Raw[10] = 0x9c747bb7ff25b58a, b0Raw[11] = 0x1b58d7d7c5e6723b, b0Raw[12] = 0x6608ec2d331e5429, b0Raw[13] = 0x1efd32c8bf30fb5b, b0Raw[14] = 0xea594c177cc83c24, b0Raw[15] = 0x5e96dd010db650d5, b0Raw[16] = 0x58fb12a2a06afb52, b0Raw[17] = 0x844b34a6bf2435df, b0Raw[18] = 0x022849b902cef921, b0Raw[19] = 0x342a05749b690f16, b0Raw[20] = 0x82260de15d1a8eb5, b0Raw[21] = 0x08d106292db8c5db, b0Raw[22] = 0xa3da9f8e47d6d992, b0Raw[23] = 0x6ca2de1e0a39ed95, b0Raw[24] = 0x6f4cf8ba590a7cf0, b0Raw[25] = 0xabb51fc692f95fbf, b0Raw[26] = 0xb1a2a81482f8e523, b0Raw[27] = 0x8ae76f8756061a1b, b0Raw[28] = 0xb8ae7acf7da70e0b, b0Raw[29] = 0x19d48b147efe6531, b0Raw[30] = 0x95d95a503935d169, b0Raw[31] = 0x9f911c29c8170e23, b0Raw[32] = 0xffc922be924fef54, b0Raw[33] = 0x7edc62c8ad1753e6, b0Raw[34] = 0x48c3bc4380ca45fb, b0Raw[35] = 0xfb6ec302c1dd1512, b0Raw[36] = 0x959e9da64b0e451f, b0Raw[37] = 0xe5d5839185cd73eb, b0Raw[38] = 0xfc7c614b0c9a6d5f, b0Raw[39] = 0x7b2ce3d6aa9f2276, b0Raw[40] = 0x5566b21320cc15aa, b0Raw[41] = 0xfda205c3e5511915, b0Raw[42] = 0xdfa1743bc4f87f47, b0Raw[43] = 0x3370e84084252247, b0Raw[44] = 0x5b281cae91272cff, b0Raw[45] = 0xd01fe67017493a1f, b0Raw[46] = 0xe22a4cfc047d8008, b0Raw[47] = 0xd71323cf38ef7766, b0Raw[48] = 0x2fbd84c1d10116b9, b0Raw[49] = 0xca1a2e7ae448af14, b0Raw[50] = 0x6a49749022971beb, b0Raw[51] = 0xd1a4d851d1a1191e, b0Raw[52] = 0x2dbfa3d90c211223, b0Raw[53] = 0x9b0dc2bd2c1ddad3, b0Raw[54] = 0xb4db78e0f262c52b, b0Raw[55] = 0x5a7a35047f6be21e, b0Raw[56] = 0x73dc91fc862a42a4, b0Raw[57] = 0xb9c3a7d556991436, b0Raw[58] = 0x53478a7e6de93638, b0Raw[59] = 0xa5d2cd0da8a1bbf9, b0Raw[60] = 0xfb01e8dbf1fd1b22, b0Raw[61] = 0x01416b68b00b8bec, b0Raw[62] = 0x275a27935be83ee8, b0Raw[63] = 0x1d8a7094c90309df;
    x0Raw[0] = 0xbe20b84b74f88076, x0Raw[1] = 0x420a44f32d0dbbfd, x0Raw[2] = 0x955e29eeee591b7a, x0Raw[3] = 0xf5c819c57cb96667, x0Raw[4] = 0xa5701c29d0e2a16a, x0Raw[5] = 0xd5a3db4193382fe5, x0Raw[6] = 0x625a5623af814606, x0Raw[7] = 0xd60a136dbb279ef4, x0Raw[8] = 0x2da5470ac09093a6, x0Raw[9] = 0x363b0ab1ee4dcb95, x0Raw[10] = 0xb780128e53b73e99, x0Raw[11] = 0xdde3a39bb2e940c6, x0Raw[12] = 0xbbdd6867650da47d, x0Raw[13] = 0xa0744c73d51117b7, x0Raw[14] = 0x4c3861d2af61cdb7, x0Raw[15] = 0x01941b0083410487, x0Raw[16] = 0xc8ba63d220039d4f, x0Raw[17] = 0x5ec3b8bd5f6b1b5e, x0Raw[18] = 0x7654a62417f8e1df, x0Raw[19] = 0x03dbcfa3e0594809, x0Raw[20] = 0x7eb6dfeb660d876b, x0Raw[21] = 0x653e8159933e6638, x0Raw[22] = 0x83dc3307e0bdd5b5, x0Raw[23] = 0x69559e1a48b54b1e, x0Raw[24] = 0xefe8e26380cad762, x0Raw[25] = 0x6a04f9d3265eeb99, x0Raw[26] = 0x225d617d2c5c75e7, x0Raw[27] = 0x8363805539f7282c, x0Raw[28] = 0xba37e820956850b0, x0Raw[29] = 0x6db38878145ce67c, x0Raw[30] = 0x106408459b61f7ab, x0Raw[31] = 0xcc2d7a8fe272fb91, x0Raw[32] = 0x344f010998cf6f3e, x0Raw[33] = 0x84329d38e55b1b40, x0Raw[34] = 0xa4fd96f9b3448395, x0Raw[35] = 0x9cbe13f8091ee47d, x0Raw[36] = 0xb22719ed557fccb4, x0Raw[37] = 0x586421d83835af3e, x0Raw[38] = 0xc9a38a4a2a1515f5, x0Raw[39] = 0xdf2c002fde402e96, x0Raw[40] = 0xbd445fc38373ff2f, x0Raw[41] = 0x9a9425f6f05c7783, x0Raw[42] = 0x714779314115060e, x0Raw[43] = 0xe37f563245edfd5b, x0Raw[44] = 0x4b3ddefc76e57ba5, x0Raw[45] = 0x29f8f29e7cd1714f, x0Raw[46] = 0xff013667ad974522, x0Raw[47] = 0x31af7541a5fb3a30, x0Raw[48] = 0x80f4e457d73e802c, x0Raw[49] = 0x75e94b5e3474ff7c, x0Raw[50] = 0x56e6ae33979ea378, x0Raw[51] = 0x7f56f39bc4240e27, x0Raw[52] = 0x60c00e4d5c3bdb59, x0Raw[53] = 0xbbf14d4b17fb4bbc, x0Raw[54] = 0x7a9435137c7bb616, x0Raw[55] = 0x01b85a9f33621b65, x0Raw[56] = 0x1fba9f0e096aeb45, x0Raw[57] = 0x17314ee22fe3d536, x0Raw[58] = 0x5aedcf9f87ca4693, x0Raw[59] = 0x57f59dbb01eb4d31, x0Raw[60] = 0x5807ebff91b21259, x0Raw[61] = 0x99e19f9653d9600a, x0Raw[62] = 0x45d291bf33051a1f, x0Raw[63] = 0xfce5180272e451fc;
    y0Raw[0] = 0x9e862a46e76a81d1, y0Raw[1] = 0xf68717418abd7191, y0Raw[2] = 0x71b77fd4d439ca7e, y0Raw[3] = 0x34dc01045f12ab79, y0Raw[4] = 0x49f4e2a3a5d41d1b, y0Raw[5] = 0xb8a8dfa65619b6d5, y0Raw[6] = 0x4a91a9eb27555130, y0Raw[7] = 0xe1c0f5c8097a5306, y0Raw[8] = 0x5fd6e02df5d2e05c, y0Raw[9] = 0xa7fb4b4f9c7364ba, y0Raw[10] = 0xbadf19e84bf1f15e, y0Raw[11] = 0x6cc679b5b4bc83f2, y0Raw[12] = 0x4da659beef2e15d9, y0Raw[13] = 0x36c3cf008daec83b, y0Raw[14] = 0x6ad2b90e3b39f051, y0Raw[15] = 0xe7ede922f8f2a52f, y0Raw[16] = 0xd884e28f4d86f4d1, y0Raw[17] = 0x83dcf718fe40adea, y0Raw[18] = 0x067aed8cfb6974e8, y0Raw[19] = 0x20dc0d811a2aacca, y0Raw[20] = 0x13aebd692fee6116, y0Raw[21] = 0xeb7423e77fcde959, y0Raw[22] = 0xa1559867e454fac7, y0Raw[23] = 0x37c85dc075ec0261, y0Raw[24] = 0x08fe5ef7fc720a1b, y0Raw[25] = 0x2c43b0506c7218f1, y0Raw[26] = 0x6b6eb8671e01787e, y0Raw[27] = 0xa76710b792546eca, y0Raw[28] = 0x75ebb59af8a10f1d, y0Raw[29] = 0x867253b59577c2ad, y0Raw[30] = 0x5771d00c2ccded35, y0Raw[31] = 0x79a97f420c738595, y0Raw[32] = 0x37b3f1a26f2cf357, y0Raw[33] = 0x2d04c9829aaf6789, y0Raw[34] = 0xebf99e78c0f20125, y0Raw[35] = 0xa83e3cb9c00f7c84, y0Raw[36] = 0x99903914c963a96a, y0Raw[37] = 0xb8a05f4896dc725e, y0Raw[38] = 0xac3e59af83d0ec00, y0Raw[39] = 0xae7e31ac995534ef, y0Raw[40] = 0xfcab530eebdafc1a, y0Raw[41] = 0xd2f5e1ce10cbf6e0, y0Raw[42] = 0xfc313ff112f9818c, y0Raw[43] = 0x26e8b324b64604fa, y0Raw[44] = 0x17a2ef5b076d88e7, y0Raw[45] = 0x57bbedd91a679026, y0Raw[46] = 0xfc2dc4214fef2125, y0Raw[47] = 0xae2ea7b510f06d86, y0Raw[48] = 0x4be29d9ad4409f98, y0Raw[49] = 0x27c76e00c709d00b, y0Raw[50] = 0x6e1a96f3b4b931ae, y0Raw[51] = 0x8a7aa34c0addf34e, y0Raw[52] = 0x6072618fe7856cc7, y0Raw[53] = 0xeb20fe0bce64363a, y0Raw[54] = 0x4d9feec8d49fce92, y0Raw[55] = 0xaf054b2064e662bf, y0Raw[56] = 0x4dd72ca13995a5bf, y0Raw[57] = 0x3d1e8b5ff137fac0, y0Raw[58] = 0x60f9f716229a249a, y0Raw[59] = 0x6f1d9726a1e94627, y0Raw[60] = 0x525808a50c2db794, y0Raw[61] = 0xed5a9a07eb077368, y0Raw[62] = 0xf0745a1aedc7c965, y0Raw[63] = 0x17beab6df42d6eab;

    uint4096 a1, y1;
    uint4096 b1, x1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *x1Raw = (uint64 *) &x1, *y1Raw = (uint64 *) &y1;

    a1Raw[0] = 0xc41dc685f8e7a118, a1Raw[1] = 0xb1f9039bec6dab6c, a1Raw[2] = 0x73154123ee6db851, a1Raw[3] = 0xb64ca25637aa8d0d, a1Raw[4] = 0x2fe126f0520e3f61, a1Raw[5] = 0xd167c283aff25ae8, a1Raw[6] = 0xdfef6dd0932dfb35, a1Raw[7] = 0xdaa23df4f48824a8, a1Raw[8] = 0xa7860b3e65eb4abe, a1Raw[9] = 0xb0452278535345c8, a1Raw[10] = 0x1b8b9372f598e522, a1Raw[11] = 0xdb31861ddba9db4d, a1Raw[12] = 0x18bd67efb7284b6b, a1Raw[13] = 0x0713963471e99bcf, a1Raw[14] = 0x17f1d6466880e15c, a1Raw[15] = 0x425fa095dd63a592, a1Raw[16] = 0x047b09de4b44b519, a1Raw[17] = 0xe819d933ca1a2203, a1Raw[18] = 0x520848efdfaa812f, a1Raw[19] = 0xae0b12c93d5b81d6, a1Raw[20] = 0x31d2b7e690720046, a1Raw[21] = 0x77c676fb2e7164ad, a1Raw[22] = 0x709899adb3ab33fb, a1Raw[23] = 0x5a5427095c77a668, a1Raw[24] = 0x17ecd978284231b6, a1Raw[25] = 0x12c658ee38b24b88, a1Raw[26] = 0x85db098398202e0a, a1Raw[27] = 0x320aa75531c52794, a1Raw[28] = 0x4e47ee0df1e63565, a1Raw[29] = 0x639ef80e27c16053, a1Raw[30] = 0x1a7a78c54ef4af06, a1Raw[31] = 0x1cf7b01ad5ded853, a1Raw[32] = 0xf4a2bda7b8cad988, a1Raw[33] = 0xc7adb91e1956f657, a1Raw[34] = 0x8dc0c11ccfb862ab, a1Raw[35] = 0x7b9180569db02e0f, a1Raw[36] = 0x22ae8f7335094f26, a1Raw[37] = 0x7aa5ef675e0ab4e0, a1Raw[38] = 0x608e34d44751b2f9, a1Raw[39] = 0x77c0b3dcf90e6fe0, a1Raw[40] = 0x9dc96995ca9f0870, a1Raw[41] = 0xfc1de0c9601f429c, a1Raw[42] = 0x065699fc085520ce, a1Raw[43] = 0xf24ce17451368bf5, a1Raw[44] = 0x1ef6709c9d55977e, a1Raw[45] = 0x2ac35c3d2dd55e29, a1Raw[46] = 0x2bf6e9902a1d4ea8, a1Raw[47] = 0xd8f3ed45aa1b9989, a1Raw[48] = 0x2701ef5f63568127, a1Raw[49] = 0x010e1374637d29b5, a1Raw[50] = 0xa820d27fe554cfda, a1Raw[51] = 0xdbed82f171bf64e2, a1Raw[52] = 0xe1c46b36039dd611, a1Raw[53] = 0x30b12bd72324c9a9, a1Raw[54] = 0xcfccb5127ac743fc, a1Raw[55] = 0xb99256c5170774a8, a1Raw[56] = 0xf60c964f175ac520, a1Raw[57] = 0x9b5a136d690cad01, a1Raw[58] = 0x99da5d47f59906a3, a1Raw[59] = 0x3e7ab2f93b8dd4b4, a1Raw[60] = 0x0df9763916ada810, a1Raw[61] = 0x629e96a2225f5d03, a1Raw[62] = 0xeeedeb78555f28d1, a1Raw[63] = 0x17ce765088483932;
    b1Raw[0] = 0xd26e8ee3b4d1cc3e, b1Raw[1] = 0x3d92f6b374829762, b1Raw[2] = 0x8ceae3af57df0948, b1Raw[3] = 0xb3d85771c94fb2fd, b1Raw[4] = 0x24ae421882f5a467, b1Raw[5] = 0xff87f50d2d9debcc, b1Raw[6] = 0x1571862ddc3353c2, b1Raw[7] = 0xe2ceb3af16c27cb2, b1Raw[8] = 0x7b543302b5e17176, b1Raw[9] = 0x8d9e492722eab47a, b1Raw[10] = 0xa64c24eebce05b66, b1Raw[11] = 0x145d30fee3aaae69, b1Raw[12] = 0x88e53e3605d3aa12, b1Raw[13] = 0xfdf0a04bfd5e87f9, b1Raw[14] = 0x037c0533a3cd5bff, b1Raw[15] = 0xfb931803e3bf2286, b1Raw[16] = 0x346cbec9527c757e, b1Raw[17] = 0x4399dbc641e89576, b1Raw[18] = 0x9288013806fa7be6, b1Raw[19] = 0xc48ea653369e2724, b1Raw[20] = 0x838cd06cff350478, b1Raw[21] = 0x1a2f36a9dfb8889d, b1Raw[22] = 0x48f43a3359515f39, b1Raw[23] = 0x9bbe382032b09131, b1Raw[24] = 0x1ca6f2a39a41cba6, b1Raw[25] = 0x6085841754e92c19, b1Raw[26] = 0x5726cfa2097272db, b1Raw[27] = 0x23af9d57340ac2a1, b1Raw[28] = 0x3591bdecc7389224, b1Raw[29] = 0xfe3ece204ef1e793, b1Raw[30] = 0x9464cd9e15ada6b1, b1Raw[31] = 0x4da6c5e8dff10fe4, b1Raw[32] = 0x8fd766d96464a519, b1Raw[33] = 0xa1ed252f0d95fb74, b1Raw[34] = 0xa3330961c71e2446, b1Raw[35] = 0xca4475e781b24f0d, b1Raw[36] = 0x76618b3a8e336c5b, b1Raw[37] = 0xdd939913e1070313, b1Raw[38] = 0xbd2b1f360ab3c248, b1Raw[39] = 0x8e2a8da07c989447, b1Raw[40] = 0xc6dc247d1a03d1ff, b1Raw[41] = 0xf746d9cd81b48de9, b1Raw[42] = 0xa260628186b2ddbe, b1Raw[43] = 0x16066fb7bc31e3c9, b1Raw[44] = 0xf354ecf2a14045cf, b1Raw[45] = 0xbcf91e77b3d7470b, b1Raw[46] = 0x9dd27d444335a8af, b1Raw[47] = 0xadc4a95f811cfd1e, b1Raw[48] = 0xf4b199d28b3500f9, b1Raw[49] = 0x8a00272032279fe8, b1Raw[50] = 0xedfcc21dbe6f2688, b1Raw[51] = 0x669aeb41886e596f, b1Raw[52] = 0x9d0ef16bde643653, b1Raw[53] = 0x67dd0bf414a598b8, b1Raw[54] = 0xa4270a439e05e64c, b1Raw[55] = 0xd015369e11db5cb8, b1Raw[56] = 0xb13af27f8c12d1ad, b1Raw[57] = 0xc57c80373c4191f0, b1Raw[58] = 0xad686184ee4d897d, b1Raw[59] = 0x0f46597b91d6413f, b1Raw[60] = 0xdf8bbf04e1df10e1, b1Raw[61] = 0xec96b35212bbfc9a, b1Raw[62] = 0x05f7ba846fc630aa, b1Raw[63] = 0xd97c4076d3efe45c;
    x1Raw[0] = 0x779a03de0e397b1f, x1Raw[1] = 0xfd7287f4bf66f9f6, x1Raw[2] = 0x18e730565d234bd0, x1Raw[3] = 0x207d864ae6d79039, x1Raw[4] = 0xed18149854dd9cf5, x1Raw[5] = 0xa862dfbec9cfb5da, x1Raw[6] = 0x4163879e1033f862, x1Raw[7] = 0x735dad59eddd7b15, x1Raw[8] = 0xd2a5501ef6e57bdd, x1Raw[9] = 0xb68fa78e59bd1aa1, x1Raw[10] = 0x5274223436de80f2, x1Raw[11] = 0xb38a1793eac65588, x1Raw[12] = 0xd58ebd77df734b9f, x1Raw[13] = 0x50b8a69a68aef5b8, x1Raw[14] = 0x019d05adbc4d560c, x1Raw[15] = 0xcaf01d58a3fe3161, x1Raw[16] = 0x42e510248eec9006, x1Raw[17] = 0xe87ed3213c0ee556, x1Raw[18] = 0x383f9d4b05f5a2d0, x1Raw[19] = 0xaf01076c4450e1c1, x1Raw[20] = 0x6c5ec3dc77fd5404, x1Raw[21] = 0x411e1f673d360121, x1Raw[22] = 0xb64b1a8a4a028cce, x1Raw[23] = 0x2f8f89eac7de7a86, x1Raw[24] = 0x8c88633fb47837d8, x1Raw[25] = 0xf7c516600f97bac7, x1Raw[26] = 0x93d3a80fd1b8a15a, x1Raw[27] = 0x856ec64fd2e0e330, x1Raw[28] = 0x9df79edd432f9857, x1Raw[29] = 0x8c2ce7206ccb6ea3, x1Raw[30] = 0xc5a0f308ad17aace, x1Raw[31] = 0x4915321182080d27, x1Raw[32] = 0x0cc5664393fe2b39, x1Raw[33] = 0x57d4004cde17f313, x1Raw[34] = 0xf02d5db869073dce, x1Raw[35] = 0x4f9754090981363e, x1Raw[36] = 0xec62d9c2289cc9b2, x1Raw[37] = 0x20b2b2c7dcff7829, x1Raw[38] = 0xcbcaf52fcc4ea7ba, x1Raw[39] = 0x2d039459a9c6fdf2, x1Raw[40] = 0x88ff712340968915, x1Raw[41] = 0x16aeaaed04952e4b, x1Raw[42] = 0x595f0e576db26bd0, x1Raw[43] = 0xec515a41ccdca52b, x1Raw[44] = 0xf7a7e383ac99c5f9, x1Raw[45] = 0xc7cd81bfa6eb7a58, x1Raw[46] = 0x0419f2a2c0e9fe48, x1Raw[47] = 0x9222776ceb54f2ee, x1Raw[48] = 0xdc05e899008a92f9, x1Raw[49] = 0x7a577a6a584aa6fb, x1Raw[50] = 0x3d158e87b1f08adf, x1Raw[51] = 0x8e07e7ccf3e5297c, x1Raw[52] = 0x3906204994885544, x1Raw[53] = 0x725ea7548182ec8e, x1Raw[54] = 0x2523d5aab0a299e6, x1Raw[55] = 0x45853ee7a2c94494, x1Raw[56] = 0x47ebe4ea46bbcbbb, x1Raw[57] = 0xbb7b7fbb19034ae5, x1Raw[58] = 0x6fa5849afac1f858, x1Raw[59] = 0x7c48b20ce9cfb55e, x1Raw[60] = 0x73c6921fb2ad1d2c, x1Raw[61] = 0xa93f8be571dd02ed, x1Raw[62] = 0x4fef5c4f6f3684ae, x1Raw[63] = 0x24e58c68296a5852;
    y1Raw[0] = 0x4e3b3baf77964153, y1Raw[1] = 0xc8f7add98c398a0d, y1Raw[2] = 0xc4da9a9552be52e0, y1Raw[3] = 0xb705fcc00399e8a3, y1Raw[4] = 0xdfab43edbf9fa797, y1Raw[5] = 0x9b789153e63f2a7b, y1Raw[6] = 0x9f1e7fe8d47f4405, y1Raw[7] = 0x3509ab37afa7c9fb, y1Raw[8] = 0xf5c3c0d80b9ee067, y1Raw[9] = 0xf8b3240c8bd9456a, y1Raw[10] = 0x8376e187d8f64b71, y1Raw[11] = 0xc2daa00702e10e3e, y1Raw[12] = 0x650ea00f647ca44c, y1Raw[13] = 0xcb3166f226bb2ab3, y1Raw[14] = 0xa6bd87ab6c7254b6, y1Raw[15] = 0x095e645782586164, y1Raw[16] = 0x9e097865fe574b4c, y1Raw[17] = 0x78526b1bbdb6a6f1, y1Raw[18] = 0x5afd953431c9aabb, y1Raw[19] = 0xf57fd778f01110e4, y1Raw[20] = 0x30ac16b88d79890a, y1Raw[21] = 0xd44aa653b8d5635f, y1Raw[22] = 0xf2eb6976dac4168a, y1Raw[23] = 0xcb16653745bd2a06, y1Raw[24] = 0x34d93eea3182f833, y1Raw[25] = 0x99c4a59bc9c00d76, y1Raw[26] = 0xb9f881825b0277d6, y1Raw[27] = 0x26e74ff7a6088f90, y1Raw[28] = 0x981de7ae09a6a9e2, y1Raw[29] = 0x7064532ea4b95af0, y1Raw[30] = 0xb43ff037571c2e28, y1Raw[31] = 0x5d8d61b81d58aae3, y1Raw[32] = 0x58e6eab2e5e3d40d, y1Raw[33] = 0xd0269f317e359038, y1Raw[34] = 0xdc4d92fb979688a7, y1Raw[35] = 0x56570026ed090f8d, y1Raw[36] = 0x64de8196e7667723, y1Raw[37] = 0x9700e7bf409b5823, y1Raw[38] = 0xb9a6d199f0aff92a, y1Raw[39] = 0x4e691618d6b5a8eb, y1Raw[40] = 0xa7b252b4f19c95d3, y1Raw[41] = 0x1a5154558d75aecf, y1Raw[42] = 0x96d5123e8463c2cc, y1Raw[43] = 0x0ee287bf91b4241e, y1Raw[44] = 0x13b030fbd5065dc5, y1Raw[45] = 0xf892cf55250b5c6e, y1Raw[46] = 0xdab68a135d5b8c42, y1Raw[47] = 0x64571d02ef6fc6f0, y1Raw[48] = 0xe788a33f117cd0cb, y1Raw[49] = 0x985eaa2c69d5770f, y1Raw[50] = 0x710937ed81eacd5f, y1Raw[51] = 0xbd2033b315f7888d, y1Raw[52] = 0x619755f65dbeca99, y1Raw[53] = 0x82211374306dac11, y1Raw[54] = 0x406a37158084c486, y1Raw[55] = 0x578effd6a8617dfb, y1Raw[56] = 0x551372d34d56b47b, y1Raw[57] = 0x6914a9425cf7b50d, y1Raw[58] = 0xb0918e4692184292, y1Raw[59] = 0x9a9edf1db217d716, y1Raw[60] = 0x0d031fef4298d907, y1Raw[61] = 0xb66297ea2431bd6e, y1Raw[62] = 0x81d38d06c49911d7, y1Raw[63] = 0xfbf6110b06b5a826;

    uint4096 a2, y2;
    uint4096 b2, x2;
    uint64 *a2Raw = (uint64 *) &a2, *b2Raw = (uint64 *) &b2, *x2Raw = (uint64 *) &x2, *y2Raw = (uint64 *) &y2;

    a2Raw[0] = 0x73e42e215eb81ccd, a2Raw[1] = 0x88b0b89250a51b42, a2Raw[2] = 0x21adfd5989cc6ad7, a2Raw[3] = 0x7df065c0cc7de553, a2Raw[4] = 0x673e119b3d6c8b11, a2Raw[5] = 0xc097264d95202b08, a2Raw[6] = 0xa6981861ba6bb7bb, a2Raw[7] = 0x8adc48abfd915134, a2Raw[8] = 0xd50532516fc757dc, a2Raw[9] = 0xa93bf9306ba87c32, a2Raw[10] = 0xc88ebd9a76a01498, a2Raw[11] = 0xb83d8a7707ea488b, a2Raw[12] = 0x82bbe904688f96e9, a2Raw[13] = 0xef7caed939a370a4, a2Raw[14] = 0x427602801d9a6393, a2Raw[15] = 0xc1323253aa9a7314, a2Raw[16] = 0xf452481b17d21ea8, a2Raw[17] = 0x8efdd77d4ee7a3f1, a2Raw[18] = 0x16f1d8bebb5df06b, a2Raw[19] = 0xc399042821b23dfb, a2Raw[20] = 0x1e0d77906d16b50c, a2Raw[21] = 0x23926225af32d29d, a2Raw[22] = 0xdcb9d16989fd1e00, a2Raw[23] = 0x951941a912b3368b, a2Raw[24] = 0x7241831b6872f7c8, a2Raw[25] = 0xc7b2717f7f1884c7, a2Raw[26] = 0x6e160c10b1754ead, a2Raw[27] = 0x4b2dafb1990bfab3, a2Raw[28] = 0xe136dcaaad42f56e, a2Raw[29] = 0x961bb245ff5ea768, a2Raw[30] = 0x17895633897fc3b7, a2Raw[31] = 0x81daf1c0edfa2f45, a2Raw[32] = 0x9c084c8b37540bb1, a2Raw[33] = 0x71a974ff59898eb4, a2Raw[34] = 0xafd4921a4bf46590, a2Raw[35] = 0x821004bc37a8dd0e, a2Raw[36] = 0x667a685bc41e2ff3, a2Raw[37] = 0x98808d5f71c5a30d, a2Raw[38] = 0x7dd5fdcf5894fa60, a2Raw[39] = 0x4c83a56b7da3d719, a2Raw[40] = 0xfbe8e35578cd44c9, a2Raw[41] = 0xddb6bd6d728b3a21, a2Raw[42] = 0xe86b3ddae6421d6a, a2Raw[43] = 0xd1e4808ad98c6473, a2Raw[44] = 0x9e5e0b56f16a9cb5, a2Raw[45] = 0x5b7e1a2eb437b388, a2Raw[46] = 0x7a5e0bbc9ec1d727, a2Raw[47] = 0x516631178ebd2ac8, a2Raw[48] = 0x13729e77a26824f5, a2Raw[49] = 0x9a63f86b9f83e779, a2Raw[50] = 0xff40f1769501d7a4, a2Raw[51] = 0x8f3a7cb61049c2c9, a2Raw[52] = 0xa38ce2925859ae0f, a2Raw[53] = 0xb07e7e605dcab42b, a2Raw[54] = 0x06f61d6e60fe6fda, a2Raw[55] = 0xdcc810dcfea46783, a2Raw[56] = 0xaa722581fbd6e663, a2Raw[57] = 0xa0ee09bb34e7e1db, a2Raw[58] = 0x67b3828152ca6096, a2Raw[59] = 0x83266ba88cb966e7, a2Raw[60] = 0xbee5a7fc54d497da, a2Raw[61] = 0x5fb3256e14714494, a2Raw[62] = 0x20a2961bf08310e0, a2Raw[63] = 0x48401f555815ce8a;
    b2Raw[0] = 0x2d89c9a3341169bc, b2Raw[1] = 0xd92301400acf7ad3, b2Raw[2] = 0x928b217777326ba7, b2Raw[3] = 0x1f8098f351d5cd95, b2Raw[4] = 0x58c70fd4d7185ecf, b2Raw[5] = 0xae21eae63e996fb8, b2Raw[6] = 0x42cdd21da133a26f, b2Raw[7] = 0x0004f38e08e91542, b2Raw[8] = 0x9157d93e2f067f0d, b2Raw[9] = 0x1cf742c277098861, b2Raw[10] = 0xb49bd2646bafa00c, b2Raw[11] = 0x4b12f027c1917f9e, b2Raw[12] = 0x428e339a7bb75714, b2Raw[13] = 0x3421f764ad3f5c92, b2Raw[14] = 0xb0f7e415eedccd09, b2Raw[15] = 0xca1802025303e2be, b2Raw[16] = 0xe9adfaf5156dc95f, b2Raw[17] = 0xa828061aa00a1dda, b2Raw[18] = 0xb245d6479ebbfea4, b2Raw[19] = 0xa1afbb860945acd3, b2Raw[20] = 0xcba430f545925608, b2Raw[21] = 0xddf5234a5d6ace3a, b2Raw[22] = 0x2a203cc3efd077c3, b2Raw[23] = 0x3269dde5d100441e, b2Raw[24] = 0xc45644db929442a6, b2Raw[25] = 0x4da734ee985a7524, b2Raw[26] = 0x741fc7aaf4c48c55, b2Raw[27] = 0xf069519eb4bedddd, b2Raw[28] = 0x86cddf21112dbb7a, b2Raw[29] = 0xd90fe4851b7bc578, b2Raw[30] = 0x3cefb93c641368f3, b2Raw[31] = 0xdea953996b5385e4, b2Raw[32] = 0xeacb7189ab90ecde, b2Raw[33] = 0x1b50c0d0355a9406, b2Raw[34] = 0xeb009b8bcd8064ff, b2Raw[35] = 0xba11eb27ab2adb4b, b2Raw[36] = 0xc30ac8cea6e1457f, b2Raw[37] = 0x06c951041335a259, b2Raw[38] = 0x6dd8466898818f55, b2Raw[39] = 0x21ea15f8d838c364, b2Raw[40] = 0x706bb615848aa5d3, b2Raw[41] = 0xbfd30ecd5bd70dcd, b2Raw[42] = 0x1cf794ae71b0e195, b2Raw[43] = 0x88613af99ad656c8, b2Raw[44] = 0xfda2345f85821162, b2Raw[45] = 0xfb32e60ef2f5a484, b2Raw[46] = 0x02176c00441ac111, b2Raw[47] = 0x88242df9fec81e01, b2Raw[48] = 0xc165dceab1972ca4, b2Raw[49] = 0x49d4eb653386c394, b2Raw[50] = 0xdc2e756d8eba84cb, b2Raw[51] = 0x000a2236a945f867, b2Raw[52] = 0xa97b3d3758c9ee9b, b2Raw[53] = 0x96123b1b66cd569e, b2Raw[54] = 0x1ec28947421c59b9, b2Raw[55] = 0x7d717f7bbce24628, b2Raw[56] = 0xab1a294cc76add58, b2Raw[57] = 0xf4601608bfc91a29, b2Raw[58] = 0x43f067df4b06e389, b2Raw[59] = 0xbbf48e6ae396286b, b2Raw[60] = 0x80a090bc80fb90cb, b2Raw[61] = 0x39435781a7a13a8a, b2Raw[62] = 0x12beab0fa5d468c6, b2Raw[63] = 0x1e3c2c26a7bf78de;
    x2Raw[0] = 0xc4c36b6748cf1719, x2Raw[1] = 0xefd914010ddfbd6a, x2Raw[2] = 0x6d2da80942e28b54, x2Raw[3] = 0xa1d47df644e15b22, x2Raw[4] = 0x6c862c61cac71a56, x2Raw[5] = 0x5679034c774e5efc, x2Raw[6] = 0xae46a906fe3b0c06, x2Raw[7] = 0xc98a72b51c66c831, x2Raw[8] = 0x90d5a00660ab68ed, x2Raw[9] = 0xebc88a6237db69a0, x2Raw[10] = 0xe5ef42bb1789b7eb, x2Raw[11] = 0x83af0a24b465754d, x2Raw[12] = 0xdcd2061cb850fe74, x2Raw[13] = 0x1f30bf5d12880ef2, x2Raw[14] = 0xa7b31a9763598edc, x2Raw[15] = 0x267bf6d0f82453e2, x2Raw[16] = 0x6fd90b82cbf8fee8, x2Raw[17] = 0x455cceb31ad0fa69, x2Raw[18] = 0x8c065fc63971f21c, x2Raw[19] = 0x77dde17b3ab93d8a, x2Raw[20] = 0x5df2ae0c59bab8c1, x2Raw[21] = 0x629ee4984a0e367e, x2Raw[22] = 0xe17f0d570a964a44, x2Raw[23] = 0x30ba58fc87b128aa, x2Raw[24] = 0x5d3aedc48a871ae4, x2Raw[25] = 0x3dc2880a7ed838db, x2Raw[26] = 0x7a38b07903829b51, x2Raw[27] = 0x0b7496a2207d3cd2, x2Raw[28] = 0x804b5e791e296764, x2Raw[29] = 0xa39b82803c3be289, x2Raw[30] = 0xe26c13cfff204bd9, x2Raw[31] = 0x8550fd7eb9bee1e3, x2Raw[32] = 0xf8b07a71095cc962, x2Raw[33] = 0x2050b06f7fa0d27d, x2Raw[34] = 0x51733ab144360db4, x2Raw[35] = 0xb8230fd9c8c7515c, x2Raw[36] = 0xbbb3db91e5acdba4, x2Raw[37] = 0x86a4aebe6a152bfa, x2Raw[38] = 0xc0ab2b3fa3c7e939, x2Raw[39] = 0xa748e877e7aad3df, x2Raw[40] = 0x1dc2d95e8c735a15, x2Raw[41] = 0x1cf1e977e7f6b692, x2Raw[42] = 0x929d1c27e121ba35, x2Raw[43] = 0x6fe47667734cd764, x2Raw[44] = 0x8b26dce5e282553f, x2Raw[45] = 0x0da6287f104be2a3, x2Raw[46] = 0x8f4237a5026b005d, x2Raw[47] = 0xc34c7a16bb6ef3ab, x2Raw[48] = 0x38e37952c47e2430, x2Raw[49] = 0x306ac0e5fffa5ba0, x2Raw[50] = 0x5dec5b34591d072d, x2Raw[51] = 0xb4f55dbba2ae636a, x2Raw[52] = 0x03aed60b998e1737, x2Raw[53] = 0x9c855837fb8158fc, x2Raw[54] = 0x16b9bce6befad184, x2Raw[55] = 0xea44ae2b8a427250, x2Raw[56] = 0xbe3f30c717f05541, x2Raw[57] = 0xd3a838fcf4c128c4, x2Raw[58] = 0xfe5bff98f8a82815, x2Raw[59] = 0x0b2dde2f395e73d9, x2Raw[60] = 0xe6a2e40ff29ffdde, x2Raw[61] = 0x9440e0453b35cd82, x2Raw[62] = 0xe48e89e5c8206840, x2Raw[63] = 0xfda4e9a1fb52cde3;
    y2Raw[0] = 0x293dfc5ed01d7e31, y2Raw[1] = 0x5aebbfd86eb18ad7, y2Raw[2] = 0x2a1422d6af4fdf53, y2Raw[3] = 0xda7897530f8405eb, y2Raw[4] = 0x0b15971111b09d71, y2Raw[5] = 0xb79ac8839de2c3b5, y2Raw[6] = 0x20fd725831028ed2, y2Raw[7] = 0xf00047968e7f2dd0, y2Raw[8] = 0x03354d615a267e69, y2Raw[9] = 0xbde34d3d61b88b64, y2Raw[10] = 0x226cb4ab636f1a0a, y2Raw[11] = 0x3e7b308b3089af62, y2Raw[12] = 0x45a378a1157bc5c4, y2Raw[13] = 0xb1d3b87538885fdb, y2Raw[14] = 0x13247b67f5d8b65a, y2Raw[15] = 0x978ef512538777d4, y2Raw[16] = 0x37f2f330fbb12a21, y2Raw[17] = 0xcd5973c92f1af504, y2Raw[18] = 0x53b70838e1a76807, y2Raw[19] = 0x8317c83eba706647, y2Raw[20] = 0xb3b4794120be3fe5, y2Raw[21] = 0x9b6a9860237b27f3, y2Raw[22] = 0xefffd7f09d543d1a, y2Raw[23] = 0x27b4d42efb7bc333, y2Raw[24] = 0x3f9c15a2f791ff99, y2Raw[25] = 0x6890321c6ec5dac9, y2Raw[26] = 0xcbae210161277618, y2Raw[27] = 0xc28c17f41e2c49d2, y2Raw[28] = 0x6f7f45797f327778, y2Raw[29] = 0xe8982e72853f7bce, y2Raw[30] = 0x587763aef22a64cd, y2Raw[31] = 0xbbf5d52f3cda43cd, y2Raw[32] = 0x3182f1e8915c7a51, y2Raw[33] = 0x118842158de40444, y2Raw[34] = 0x5ec9189fe1b98cef, y2Raw[35] = 0x663fad450b2845e0, y2Raw[36] = 0x6d45a40fdef80886, y2Raw[37] = 0xc0f3125363f8d84f, y2Raw[38] = 0x9de023b70c3cbdc8, y2Raw[39] = 0xe17e20b5de6760d2, y2Raw[40] = 0x8e78314a0e9c97f6, y2Raw[41] = 0x656f193e1072191f, y2Raw[42] = 0x1f14134b87b6d1f9, y2Raw[43] = 0x594b699b02a34b57, y2Raw[44] = 0x071462b45f00a9a7, y2Raw[45] = 0xa82a5aa13e3961d8, y2Raw[46] = 0xcd33044556c5ae26, y2Raw[47] = 0x80a6180ea6f36b35, y2Raw[48] = 0xeb529091f0bbaa54, y2Raw[49] = 0x3c1538c3787fd195, y2Raw[50] = 0x1e7628a9e163973c, y2Raw[51] = 0x19c3de858400a3df, y2Raw[52] = 0x46021bec6ce9d76e, y2Raw[53] = 0x7b32998b4d655ffb, y2Raw[54] = 0x1ddf34ba6f7775df, y2Raw[55] = 0x3c8055e3ec0c29e8, y2Raw[56] = 0x1174cf610c61ca44, y2Raw[57] = 0x0b654a405ef96a9b, y2Raw[58] = 0xf6b57e0c9c16484e, y2Raw[59] = 0xa7c5e8ef132367f5, y2Raw[60] = 0xb032bd451b187c72, y2Raw[61] = 0x5b959f642c9f28dd, y2Raw[62] = 0x717aab016d60c620, y2Raw[63] = 0x5a1275608f02b66;

    uint4096 a3, y3;
    uint4096 b3, x3;
    uint64 *a3Raw = (uint64 *) &a3, *b3Raw = (uint64 *) &b3, *x3Raw = (uint64 *) &x3, *y3Raw = (uint64 *) &y3;

    a3Raw[0] = 0x1aa4151d3797787f, a3Raw[1] = 0x423d1be4a93de49f, a3Raw[2] = 0xfacd3b90e392a5ad, a3Raw[3] = 0x58837c367f5cbe3c, a3Raw[4] = 0x333e45511f510229, a3Raw[5] = 0xfe3ede5d9c75f419, a3Raw[6] = 0x04f3512ab09a0260, a3Raw[7] = 0x95e2a1b7b9140bc0, a3Raw[8] = 0x426e19f7b9106f29, a3Raw[9] = 0x477b3fb59b754e3d, a3Raw[10] = 0x957bebffd0ec6e77, a3Raw[11] = 0x21a4e0ebb2ea05b0, a3Raw[12] = 0xa76d02f03cc662a2, a3Raw[13] = 0x9f509e91f06630c0, a3Raw[14] = 0x09f1bb9ac3764a42, a3Raw[15] = 0x006a74da6c50c895, a3Raw[16] = 0xb59127e971560dba, a3Raw[17] = 0xa754b00dbf3ccd09, a3Raw[18] = 0x9f4e6be12ca1d85d, a3Raw[19] = 0xaf9c2c62cdd3a5bc, a3Raw[20] = 0xa7ecac4a4f159d2f, a3Raw[21] = 0xdfc868cefc28e49a, a3Raw[22] = 0x1141e1b8c576d869, a3Raw[23] = 0x7aae1113c2a0a985, a3Raw[24] = 0xd4d5b636ce0f5d84, a3Raw[25] = 0x064efb5874f27863, a3Raw[26] = 0xceffb010f1e57458, a3Raw[27] = 0x825d6214d1736c68, a3Raw[28] = 0x5b48e78f8fc966f2, a3Raw[29] = 0xdff2dc88a8cf5af9, a3Raw[30] = 0x58588a9ca29cdaf8, a3Raw[31] = 0x4248926ecc7360ae, a3Raw[32] = 0x08bf8dd2b51e2d6a, a3Raw[33] = 0x5e8f2428a544da5f, a3Raw[34] = 0x69967c6751973cb9, a3Raw[35] = 0x79edca1d486f6e23, a3Raw[36] = 0x305ea9dd3c6f1ffb, a3Raw[37] = 0xc7c9803653a22ac2, a3Raw[38] = 0xc8a90d8bd993866b, a3Raw[39] = 0x44e812036f361132, a3Raw[40] = 0x8fff2c97147f0bd2, a3Raw[41] = 0x6c712239b0fe564b, a3Raw[42] = 0x2554900443c8c45c, a3Raw[43] = 0x06db5b95e01e5635, a3Raw[44] = 0xf960c241d966bd37, a3Raw[45] = 0x8f9fe06a6a6dfe2f, a3Raw[46] = 0xfc266ce4d6d947c7, a3Raw[47] = 0xab5543c599794bea, a3Raw[48] = 0xe9ac510e1a10898f, a3Raw[49] = 0x3e394684ede46245, a3Raw[50] = 0x1e4886fb922a3bbb, a3Raw[51] = 0x3e0205d8ce42b5e8, a3Raw[52] = 0x49aef6586ffab59e, a3Raw[53] = 0x09709eb850ee89ce, a3Raw[54] = 0xe6522c9c8171efd2, a3Raw[55] = 0xce74d7281dcde0a3, a3Raw[56] = 0x954cc76634feaa9a, a3Raw[57] = 0x878116af6a3be767, a3Raw[58] = 0x34d95b0878b27ef0, a3Raw[59] = 0x9b22ed135525ffa7, a3Raw[60] = 0x0ab718b1568a82b4, a3Raw[61] = 0xce1da5536ab57e14, a3Raw[62] = 0x73512f09dce3c8fa, a3Raw[63] = 0x52bce1fde3237e23;
    b3Raw[0] = 0x756b45407e3abddb, b3Raw[1] = 0xf58d635c5d3601c9, b3Raw[2] = 0x31c237f65540bbf0, b3Raw[3] = 0xa0603fdaf4641769, b3Raw[4] = 0xd3a1ee5f86f4578f, b3Raw[5] = 0x1798e193cb8c15cf, b3Raw[6] = 0xf770ff7642c3f377, b3Raw[7] = 0x5a74a9b10a1b5c7e, b3Raw[8] = 0xadb7b62d4ef6812b, b3Raw[9] = 0x90736113af3e75c2, b3Raw[10] = 0x60f22dacc00b65ee, b3Raw[11] = 0x04c204d81d7f67b8, b3Raw[12] = 0x00a1a1c39fa463e6, b3Raw[13] = 0xc82ee5682adbec7e, b3Raw[14] = 0x8fdb77d388156e5d, b3Raw[15] = 0xdf09d0fdbe1d45dd, b3Raw[16] = 0xce4bcf39223159bd, b3Raw[17] = 0x48d2f9d65dec2743, b3Raw[18] = 0x529a4f65f41d1d0a, b3Raw[19] = 0xcd55a4de4a4b2d77, b3Raw[20] = 0x5fd1eebdf67e06be, b3Raw[21] = 0x1d685da1c2779835, b3Raw[22] = 0x9cdfb6412785eb36, b3Raw[23] = 0x100619fb210ef1e3, b3Raw[24] = 0xfa951c05067f23ca, b3Raw[25] = 0x8a398c9e2d78c82c, b3Raw[26] = 0xce9b0553d7cf52b7, b3Raw[27] = 0xe23b761759592ec0, b3Raw[28] = 0x3d40321996193048, b3Raw[29] = 0xae35ed883ad745e3, b3Raw[30] = 0x8daf5d05617d5e8f, b3Raw[31] = 0xf659ff99a45aff8b, b3Raw[32] = 0xfa41f6cfe3cad130, b3Raw[33] = 0x169611bcf4ba5c16, b3Raw[34] = 0xdca435545dbae69c, b3Raw[35] = 0x6a42cb8e93f7f297, b3Raw[36] = 0x6ca1da353df359a9, b3Raw[37] = 0x096a93e508c4b488, b3Raw[38] = 0xea7a27563f63f6cd, b3Raw[39] = 0xf60abcd87ba87166, b3Raw[40] = 0xf47b9492c7010e10, b3Raw[41] = 0x542188fc24fbe87b, b3Raw[42] = 0x40de72b1858fdb45, b3Raw[43] = 0xe9947f8f5d31b44c, b3Raw[44] = 0x573ff0775ad2cd7a, b3Raw[45] = 0x5d500f8c82ec543a, b3Raw[46] = 0x522761d5f09a3701, b3Raw[47] = 0x51e2dc182e85c5f1, b3Raw[48] = 0x02e05eeda8f9da0b, b3Raw[49] = 0x38d273dd6460b31e, b3Raw[50] = 0x46330a560ef59fd1, b3Raw[51] = 0xe7f383780fa88b91, b3Raw[52] = 0x3e6bb28a96ccc53e, b3Raw[53] = 0x61f87dc0cd30c2fd, b3Raw[54] = 0x4b69e1a407f4cb52, b3Raw[55] = 0x4092d95f6e91ba88, b3Raw[56] = 0xc1f1b0661e378e5f, b3Raw[57] = 0xf81be85d2e7021ce, b3Raw[58] = 0x657d2a8ac2758d6e, b3Raw[59] = 0x7d064d93b2fae9ef, b3Raw[60] = 0xb51c5bb4263fb93f, b3Raw[61] = 0x36bf0af7093106fc, b3Raw[62] = 0x4786c774d4020449, b3Raw[63] = 0xe79eeed9071649c2;
    x3Raw[0] = 0x6032cf6df5c692ee, x3Raw[1] = 0x13be74381d3e9165, x3Raw[2] = 0x130223e6a3328e65, x3Raw[3] = 0x113ec461777fa354, x3Raw[4] = 0xda9d805a0aa746dd, x3Raw[5] = 0x535b6c4dd7ff8414, x3Raw[6] = 0x07690f812b3adc2f, x3Raw[7] = 0xda7c821d8424c3c7, x3Raw[8] = 0x630063a23404e279, x3Raw[9] = 0x1338090e5ca7b79a, x3Raw[10] = 0xe6d49abc88597627, x3Raw[11] = 0x60da3ab5c426995f, x3Raw[12] = 0x47e34d10a1c403df, x3Raw[13] = 0x6e8241ac54e69701, x3Raw[14] = 0x72eb66a56d579a4f, x3Raw[15] = 0xe3a6cb13fb6a9fa9, x3Raw[16] = 0x17bbc9b83205883f, x3Raw[17] = 0x85f20a701f1f1182, x3Raw[18] = 0xfc7ac74c5cddcd95, x3Raw[19] = 0xa5f9d9b5a1b36652, x3Raw[20] = 0x42835af02bd7605f, x3Raw[21] = 0xec8fc826678c1bad, x3Raw[22] = 0x86bc107da7e505b3, x3Raw[23] = 0x8dcc78516c00eeba, x3Raw[24] = 0x46697d4287d2baa7, x3Raw[25] = 0x25bc3ad6be0195f7, x3Raw[26] = 0x867c0a6e0ff15a21, x3Raw[27] = 0xce0fff3d73dea021, x3Raw[28] = 0x5b17e476a09f9260, x3Raw[29] = 0xee303aff834fd2cb, x3Raw[30] = 0x41ee1d2e8a257147, x3Raw[31] = 0x62178778403b3d5e, x3Raw[32] = 0xf327cfc3208b0d91, x3Raw[33] = 0xf5ab2c453c319b4f, x3Raw[34] = 0x3a0662fa1048d7e1, x3Raw[35] = 0x52ecba733a6e64ee, x3Raw[36] = 0x2727b2525869771d, x3Raw[37] = 0x23b3ee34da78f62c, x3Raw[38] = 0xa01989a9f236ebc9, x3Raw[39] = 0x348b1c5c27e695b8, x3Raw[40] = 0xb65cbe97886a0643, x3Raw[41] = 0xbfb1132a7eeb2b1f, x3Raw[42] = 0xe5b0b63fd0ae99c4, x3Raw[43] = 0x4f0e66e446f4e146, x3Raw[44] = 0x95a19ba91174b337, x3Raw[45] = 0xd4a2f25461650185, x3Raw[46] = 0x12308d2c49ddfd52, x3Raw[47] = 0x33cc920ad745d44d, x3Raw[48] = 0x231134f3b8b113dd, x3Raw[49] = 0x24217440de56ae9a, x3Raw[50] = 0x7503c260731a0800, x3Raw[51] = 0xaaa486d4e612d88a, x3Raw[52] = 0x30b1b3e5775785e9, x3Raw[53] = 0x737309337ce6a8fd, x3Raw[54] = 0x4118ef9af8b99f3a, x3Raw[55] = 0xde7c2d63574f8109, x3Raw[56] = 0x0c924feb794cf90f, x3Raw[57] = 0xc918bfd7bd3fab59, x3Raw[58] = 0xcf8ee2e265e3b64e, x3Raw[59] = 0x9ef29850f6a03df4, x3Raw[60] = 0xf3bf214763b968bd, x3Raw[61] = 0xc360dfc3d6f1f932, x3Raw[62] = 0x77864432e29bb9e2, x3Raw[63] = 0xf543b583d187e606;
    y3Raw[0] = 0x100fde1f74d3f523, y3Raw[1] = 0x57bb723e9fe7b7d5, y3Raw[2] = 0x638df2963db3fc09, y3Raw[3] = 0x583448b9af9353a0, y3Raw[4] = 0xe5d1ee56d9e4cd18, y3Raw[5] = 0xf89f0e493e3ee887, y3Raw[6] = 0xf6dd4aec628bf84d, y3Raw[7] = 0x9ff9d20e184d98e3, y3Raw[8] = 0xc3e6fb87218dd28e, y3Raw[9] = 0x0a0ed5a1970598e4, y3Raw[10] = 0xdc9a78ed6179df78, y3Raw[11] = 0x28591c249fad11b9, y3Raw[12] = 0x1865b6ed91488830, y3Raw[13] = 0x2e165fcafe3596bc, y3Raw[14] = 0x78d152166912a35d, y3Raw[15] = 0x48025c346d0e58f9, y3Raw[16] = 0x8b773a15c1a4d063, y3Raw[17] = 0x280edfe72bd71e37, y3Raw[18] = 0x021279087af05423, y3Raw[19] = 0x56ae34ebd45348b3, y3Raw[20] = 0xb71d69b6eb14d587, y3Raw[21] = 0xf44c6b1732bacd8d, y3Raw[22] = 0xa99ff0fbc7f52956, y3Raw[23] = 0x8911cdca2cda078d, y3Raw[24] = 0xc464e6a2c0ec3dbf, y3Raw[25] = 0xd2891d40bfdbf053, y3Raw[26] = 0x45afb9a9097ecd99, y3Raw[27] = 0x302b4af05b2f0101, y3Raw[28] = 0xd741fbb8db49867e, y3Raw[29] = 0x89c1bd8a76e3f916, y3Raw[30] = 0x666b6bbb07651d7a, y3Raw[31] = 0xfcc9d74da3344e01, y3Raw[32] = 0xa9a57ed5f8bbd73e, y3Raw[33] = 0xd1d32502079ac9fd, y3Raw[34] = 0x156c222ac0c6e725, y3Raw[35] = 0xae6a29dc54bac703, y3Raw[36] = 0x068f92ed8ffdf67d, y3Raw[37] = 0x4162bff5fcc87907, y3Raw[38] = 0x215d28c4447dbb33, y3Raw[39] = 0xf0bc9141eeb77061, y3Raw[40] = 0x850e8ef3ee4c669d, y3Raw[41] = 0x7f6ddf218e26c16d, y3Raw[42] = 0x320856581e60852a, y3Raw[43] = 0x71fc442d1e37663c, y3Raw[44] = 0xd6fba94221538ba7, y3Raw[45] = 0x4cf03200582f7788, y3Raw[46] = 0xd0afae5746f93ca6, y3Raw[47] = 0x7c7c20cd933f0de6, y3Raw[48] = 0xc3168cf865c0ca84, y3Raw[49] = 0xae8526a88d900889, y3Raw[50] = 0xf3b4f6f1e83fc246, y3Raw[51] = 0x054299fbc9969134, y3Raw[52] = 0xe4997eacace7aec8, y3Raw[53] = 0x91927fe6bd36272c, y3Raw[54] = 0x97bb210c7b6c9e39, y3Raw[55] = 0x80e6aacb6f98ae90, y3Raw[56] = 0x194e8aa17ecf7c60, y3Raw[57] = 0xe18eee194f592c84, y3Raw[58] = 0x9867840e5b91e8c4, y3Raw[59] = 0xa09d792ec390b8c6, y3Raw[60] = 0x7567666e175668b4, y3Raw[61] = 0x0c2ac7e57350402b, y3Raw[62] = 0x88c6bfedecc9c7a4, y3Raw[63] = 0x3d5b936b25a8a0e;

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

    uint128 aM0, bM0, n0, rMask0;
    uint256 r0, nPrime0;
    uint32 rExp0 = 127;
    uint128 p0;
    uint64 *aM0Raw = (uint64 *) &aM0, *bM0Raw = (uint64 *) &bM0, *n0Raw = (uint64 *) &n0, *r0Raw = (uint64 *) &r0, *rMask0Raw = (uint64 *) &rMask0;
    uint64 *p0Raw = (uint64 *) &p0;

    aM0Raw[0] = 0xc2541f6a97e7564a, aM0Raw[1] = 0x2ff7ed92051d8257;
    bM0Raw[0] = 0x1ed0fcaaaf18c440, bM0Raw[1] = 0x14114eac30746ac2;
    n0Raw[0] = 0x984918320756d4a7, n0Raw[1] = 0x4f3188ac90e44e0d;
    r0Raw[0] = 0x0000000000000000, r0Raw[1] = 0x8000000000000000;
    rMask0Raw[0] = 0xffffffffffffffff, rMask0Raw[1] = 0x7fffffffffffffff;
    p0Raw[0] = 0xe5b22def38967c0c, p0Raw[1] = 0x3ba99b266d8e7887;

    uint128 aM1, bM1, n1, rMask1;
    uint256 r1, nPrime1;
    uint32 rExp1 = 128;
    uint128 p1;
    uint64 *aM1Raw = (uint64 *) &aM1, *bM1Raw = (uint64 *) &bM1, *n1Raw = (uint64 *) &n1, *r1Raw = (uint64 *) &r1, *rMask1Raw = (uint64 *) &rMask1;
    uint64 *p1Raw = (uint64 *) &p1;

    aM1Raw[0] = 0x7dcc7b4cd538656d, aM1Raw[1] = 0x4791a4a8f91d3abc;
    bM1Raw[0] = 0xe4e981732856aab7, bM1Raw[1] = 0x45f5e7a5dee2d66b;
    n1Raw[0] = 0xd93391ef4a757b27, n1Raw[1] = 0x8b6bea77a1fa9657;
    r1Raw[0] = 0x0000000000000000, r1Raw[1] = 0x0000000000000000, r1Raw[2] = 0x1;
    rMask1Raw[0] = 0xffffffffffffffff, rMask1Raw[1] = 0xffffffffffffffff;
    p1Raw[0] = 0x0c0ff064c7887cb9, p1Raw[1] = 0x71f2964d6f8620f3;

    uint128 aM2, bM2, n2, rMask2;
    uint256 r2, nPrime2;
    uint32 rExp2 = 128;
    uint128 p2;
    uint64 *aM2Raw = (uint64 *) &aM2, *bM2Raw = (uint64 *) &bM2, *n2Raw = (uint64 *) &n2, *r2Raw = (uint64 *) &r2, *rMask2Raw = (uint64 *) &rMask2;
    uint64 *p2Raw = (uint64 *) &p2;

    aM2Raw[0] = 0xe4f1e3663e47e861, aM2Raw[1] = 0xa382b04ea35a9f62;
    bM2Raw[0] = 0x1f253af2162c198a, bM2Raw[1] = 0xaf341dc4bafbf31;
    n2Raw[0] = 0x3d7135f2f4dfb9c7, n2Raw[1] = 0xf31d5ad7e4e97349;
    r2Raw[0] = 0x0000000000000000, r2Raw[1] = 0x0000000000000000, r2Raw[2] = 0x1;
    rMask2Raw[0] = 0xffffffffffffffff, rMask2Raw[1] = 0xffffffffffffffff;
    p2Raw[0] = 0x4df390822ff7b94c, p2Raw[1] = 0xcfad79edcdcfbbbd;

    uint128 aM3, bM3, n3, rMask3;
    uint256 r3, nPrime3;
    uint32 rExp3 = 127;
    uint128 p3;
    uint64 *aM3Raw = (uint64 *) &aM3, *bM3Raw = (uint64 *) &bM3, *n3Raw = (uint64 *) &n3, *r3Raw = (uint64 *) &r3, *rMask3Raw = (uint64 *) &rMask3;
    uint64 *p3Raw = (uint64 *) &p3;

    aM3Raw[0] = 0x94f4c9c1725294f4, aM3Raw[1] = 0x109a4111495af7d;
    bM3Raw[0] = 0x5acf8dccd2487d0f, bM3Raw[1] = 0x794375633baf17a0;
    n3Raw[0] = 0xdd707669874a3e77, n3Raw[1] = 0x7a02487be664d722;
    r3Raw[0] = 0x0000000000000000, r3Raw[1] = 0x8000000000000000;
    rMask3Raw[0] = 0xffffffffffffffff, rMask3Raw[1] = 0x7fffffffffffffff;
    p3Raw[0] = 0xe6603adf432be85b, p3Raw[1] = 0x4bb0160b9537fe5b;

    // ACT
    extendedEuclidean(r0, n0, unused, nPrime0);

    t = redc(rMask0, rExp0, n0, -(uint128)nPrime0, aM0 * bM0);
    uint128 c0 = redc(rMask0, rExp0, n0, -(uint128)nPrime0, t);

    extendedEuclidean(r1, n1, unused, nPrime1);

    t = redc(rMask1, rExp1, n1, -(uint128)nPrime1, aM1 * bM1);
    uint128 c1 = redc(rMask1, rExp1, n1, -(uint128)nPrime1, t);

    extendedEuclidean(r2, n2, unused, nPrime2);

    t = redc(rMask2, rExp2, n2, -(uint128)nPrime2, aM2 * bM2);
    uint128 c2 = redc(rMask2, rExp2, n2, -(uint128)nPrime2, t);

    extendedEuclidean(r3, n3, unused, nPrime3);

    t = redc(rMask3, rExp3, n3, -(uint128)nPrime3, aM3 * bM3);
    uint128 c3 = redc(rMask3, rExp3, n3, -(uint128)nPrime3, t);


    // ASSERT
    ASSERT_EQ(c0, p0);
    ASSERT_EQ(c1, p1);
    ASSERT_EQ(c2, p2);
    ASSERT_EQ(c3, p3);
}

TEST(BigIntegerAlgorithmTests, REDC256Bit) {
    // ARRANGE
    uint256 unused, t;

    uint256 aM0, bM0, n0, rMask0;
    uint512 r0, nPrime0;
    uint32 rExp0 = 256;
    uint256 p0;
    uint64 *aM0Raw = (uint64 *) &aM0, *bM0Raw = (uint64 *) &bM0, *n0Raw = (uint64 *) &n0, *r0Raw = (uint64 *) &r0, *rMask0Raw = (uint64 *) &rMask0;
    uint64 *p0Raw = (uint64 *) &p0;

    aM0Raw[0] = 0x72d8d96859a4b0d5, aM0Raw[1] = 0x4c881978a40a09de, aM0Raw[2] = 0x18b77818643123c6, aM0Raw[3] = 0x21fa0818da20f927;
    bM0Raw[0] = 0x0bcbce9e745dc9c4, bM0Raw[1] = 0x583bcb207aa485c1, bM0Raw[2] = 0x292690be2a096ab1, bM0Raw[3] = 0x7abf03ec88f40337;
    n0Raw[0] = 0xc11eac16bf0c30f7, n0Raw[1] = 0xc458a377fcafba50, n0Raw[2] = 0xfb15e8769e81b381, n0Raw[3] = 0xdc7dc4e983feef83;
    r0Raw[0] = 0x0000000000000000, r0Raw[1] = 0x0000000000000000, r0Raw[2] = 0x0000000000000000, r0Raw[3] = 0x0000000000000000, r0Raw[4] = 0x1;
    rMask0Raw[0] = 0xffffffffffffffff, rMask0Raw[1] = 0xffffffffffffffff, rMask0Raw[2] = 0xffffffffffffffff, rMask0Raw[3] = 0xffffffffffffffff;
    p0Raw[0] = 0x08701e7fc07b7b5b, p0Raw[1] = 0xfe9ae174f06b8418, p0Raw[2] = 0xef9fbb281909c40d, p0Raw[3] = 0xb580ffd1c3c64ad6;

    uint256 aM1, bM1, n1, rMask1;
    uint512 r1, nPrime1;
    uint32 rExp1 = 255;
    uint256 p1;
    uint64 *aM1Raw = (uint64 *) &aM1, *bM1Raw = (uint64 *) &bM1, *n1Raw = (uint64 *) &n1, *r1Raw = (uint64 *) &r1, *rMask1Raw = (uint64 *) &rMask1;
    uint64 *p1Raw = (uint64 *) &p1;

    aM1Raw[0] = 0x4f1ff5e7daba71fc, aM1Raw[1] = 0x6ebb073f91864bd0, aM1Raw[2] = 0x323a9967e5de1500, aM1Raw[3] = 0x2d70d8517216cf89;
    bM1Raw[0] = 0x70f1bca0d1f79656, bM1Raw[1] = 0xfdaa785a77bc2ebd, bM1Raw[2] = 0x0404d6043182fc7a, bM1Raw[3] = 0x3896309bace500fe;
    n1Raw[0] = 0xc32a18767ef7da93, n1Raw[1] = 0xa963c8f5159668fc, n1Raw[2] = 0x30a58999d7ff9d7d, n1Raw[3] = 0x6d41587d2b948224;
    r1Raw[0] = 0x0000000000000000, r1Raw[1] = 0x0000000000000000, r1Raw[2] = 0x0000000000000000, r1Raw[3] = 0x8000000000000000;
    rMask1Raw[0] = 0xffffffffffffffff, rMask1Raw[1] = 0xffffffffffffffff, rMask1Raw[2] = 0xffffffffffffffff, rMask1Raw[3] = 0x7fffffffffffffff;
    p1Raw[0] = 0xa5219f9ac8489e99, p1Raw[1] = 0x14d42a9ae6d5abfc, p1Raw[2] = 0x557f3287402f0da9, p1Raw[3] = 0x535156309e13d1af;

    uint256 aM2, bM2, n2, rMask2;
    uint512 r2, nPrime2;
    uint32 rExp2 = 256;
    uint256 p2;
    uint64 *aM2Raw = (uint64 *) &aM2, *bM2Raw = (uint64 *) &bM2, *n2Raw = (uint64 *) &n2, *r2Raw = (uint64 *) &r2, *rMask2Raw = (uint64 *) &rMask2;
    uint64 *p2Raw = (uint64 *) &p2;

    aM2Raw[0] = 0x94e160ba5f6c3acb, aM2Raw[1] = 0xab251ec76bdb7fdb, aM2Raw[2] = 0x06c1c899fda12caf, aM2Raw[3] = 0x1582f3610a2bfce2;
    bM2Raw[0] = 0x110139c34a711454, bM2Raw[1] = 0x150c00fdeda275ca, bM2Raw[2] = 0x9fe7cf822f61ea96, bM2Raw[3] = 0x71df14fb231daacf;
    n2Raw[0] = 0x8679ce2077611ef7, n2Raw[1] = 0x8297fc527550d9c7, n2Raw[2] = 0x5689114e0138e0c3, n2Raw[3] = 0xd73e3e9fec0917d1;
    r2Raw[0] = 0x0000000000000000, r2Raw[1] = 0x0000000000000000, r2Raw[2] = 0x0000000000000000, r2Raw[3] = 0x0000000000000000, r2Raw[4] = 0x1;
    rMask2Raw[0] = 0xffffffffffffffff, rMask2Raw[1] = 0xffffffffffffffff, rMask2Raw[2] = 0xffffffffffffffff, rMask2Raw[3] = 0xffffffffffffffff;
    p2Raw[0] = 0xe6303e2765c9ee10, p2Raw[1] = 0x5cd3c85a083cd681, p2Raw[2] = 0x89cba78d77d6a13f, p2Raw[3] = 0xad415cec9feba7f1;

    uint256 aM3, bM3, n3, rMask3;
    uint512 r3, nPrime3;
    uint32 rExp3 = 256;
    uint256 p3;
    uint64 *aM3Raw = (uint64 *) &aM3, *bM3Raw = (uint64 *) &bM3, *n3Raw = (uint64 *) &n3, *r3Raw = (uint64 *) &r3, *rMask3Raw = (uint64 *) &rMask3;
    uint64 *p3Raw = (uint64 *) &p3;

    aM3Raw[0] = 0x6f625323ddd11df3, aM3Raw[1] = 0x2d4d8ac87a23907b, aM3Raw[2] = 0x185588c922d1889b, aM3Raw[3] = 0xb97b88207806eef1;
    bM3Raw[0] = 0x813d275a39bb4291, bM3Raw[1] = 0x82a58774995f0d43, bM3Raw[2] = 0x27ad95e0f1ab71ab, bM3Raw[3] = 0x14131c1274423115;
    n3Raw[0] = 0x34528a7997135bf9, n3Raw[1] = 0x7740b192408fa4ab, n3Raw[2] = 0x1883b42b44dedcba, n3Raw[3] = 0xcf82306dab365acc;
    r3Raw[0] = 0x0000000000000000, r3Raw[1] = 0x0000000000000000, r3Raw[2] = 0x0000000000000000, r3Raw[3] = 0x0000000000000000, r3Raw[4] = 0x1;
    rMask3Raw[0] = 0xffffffffffffffff, rMask3Raw[1] = 0xffffffffffffffff, rMask3Raw[2] = 0xffffffffffffffff, rMask3Raw[3] = 0xffffffffffffffff;
    p3Raw[0] = 0xefd9b3a5a35f67b4, p3Raw[1] = 0x2f01b8c501f37146, p3Raw[2] = 0xd551c68cc1f3a37a, p3Raw[3] = 0xbbd3d17f7af7f487;

    // ACT
    extendedEuclidean(r0, n0, unused, nPrime0);

    t = redc(rMask0, rExp0, n0, -(uint256)nPrime0, aM0 * bM0);
    uint256 c0 = redc(rMask0, rExp0, n0, -(uint256)nPrime0, t);

    extendedEuclidean(r1, n1, unused, nPrime1);

    t = redc(rMask1, rExp1, n1, -(uint256)nPrime1, aM1 * bM1);
    uint256 c1 = redc(rMask1, rExp1, n1, -(uint256)nPrime1, t);

    extendedEuclidean(r2, n2, unused, nPrime2);

    t = redc(rMask2, rExp2, n2, -(uint256)nPrime2, aM2 * bM2);
    uint256 c2 = redc(rMask2, rExp2, n2, -(uint256)nPrime2, t);

    extendedEuclidean(r3, n3, unused, nPrime3);

    t = redc(rMask3, rExp3, n3, -(uint256)nPrime3, aM3 * bM3);
    uint256 c3 = redc(rMask3, rExp3, n3, -(uint256)nPrime3, t);


    // ASSERT
    ASSERT_EQ(c0, p0);
    ASSERT_EQ(c1, p1);
    ASSERT_EQ(c2, p2);
    ASSERT_EQ(c3, p3);
}

TEST(BigIntegerAlgorithmTests, REDC512Bit) {
    // ARRANGE
    uint512 unused, t;

    uint512 aM0, bM0, n0, rMask0;
    uint1024 r0, nPrime0;
    uint32 rExp0 = 510;
    uint512 p0;
    uint64 *aM0Raw = (uint64 *) &aM0, *bM0Raw = (uint64 *) &bM0, *n0Raw = (uint64 *) &n0, *r0Raw = (uint64 *) &r0, *rMask0Raw = (uint64 *) &rMask0;
    uint64 *p0Raw = (uint64 *) &p0;

    aM0Raw[0] = 0x36768153b00a10cc, aM0Raw[1] = 0x5cdfd330c0aa054b, aM0Raw[2] = 0xed95b3c257a0389b, aM0Raw[3] = 0xc0ea51c8fa71fa55, aM0Raw[4] = 0x2a16d1d980cb6937, aM0Raw[5] = 0x061a6f47ff174cb0, aM0Raw[6] = 0xf6d9b996db00251a, aM0Raw[7] = 0x1e5bd36f08b570dc;
    bM0Raw[0] = 0x3f0ae3a80f3d15ed, bM0Raw[1] = 0x026fea24c78e96c4, bM0Raw[2] = 0x189bc38bd07e4d6b, bM0Raw[3] = 0xb37a83b82897fc89, bM0Raw[4] = 0xcf9ca4e26967cac9, bM0Raw[5] = 0xe1b478629c89fe8d, bM0Raw[6] = 0x0acd4b40515944f8, bM0Raw[7] = 0x9783c0bf4344e48;
    n0Raw[0] = 0xf23f8d51e5b957bd, n0Raw[1] = 0xf7eed39a5426dc34, n0Raw[2] = 0x390bfb55f394e276, n0Raw[3] = 0x2558d51f15edfe90, n0Raw[4] = 0xab8209e299e2f428, n0Raw[5] = 0x28dc95b2f9c1ed3c, n0Raw[6] = 0x8053076a1d479411, n0Raw[7] = 0x33e7749f2f70dd6d;
    r0Raw[0] = 0x0000000000000000, r0Raw[1] = 0x0000000000000000, r0Raw[2] = 0x0000000000000000, r0Raw[3] = 0x0000000000000000, r0Raw[4] = 0x0000000000000000, r0Raw[5] = 0x0000000000000000, r0Raw[6] = 0x0000000000000000, r0Raw[7] = 0x4000000000000000;
    rMask0Raw[0] = 0xffffffffffffffff, rMask0Raw[1] = 0xffffffffffffffff, rMask0Raw[2] = 0xffffffffffffffff, rMask0Raw[3] = 0xffffffffffffffff, rMask0Raw[4] = 0xffffffffffffffff, rMask0Raw[5] = 0xffffffffffffffff, rMask0Raw[6] = 0xffffffffffffffff, rMask0Raw[7] = 0x3fffffffffffffff;
    p0Raw[0] = 0x8ecae05bc4e29319, p0Raw[1] = 0xb546a8f1464b1221, p0Raw[2] = 0x33fbe33b6de9baa2, p0Raw[3] = 0x03376df5e0d45fd2, p0Raw[4] = 0xe0514858de1c8edf, p0Raw[5] = 0xe8b4d7c033b7e08e, p0Raw[6] = 0x1be45341ac52b4c8, p0Raw[7] = 0x299468c5b8041b81;

    uint512 aM1, bM1, n1, rMask1;
    uint1024 r1, nPrime1;
    uint32 rExp1 = 511;
    uint512 p1;
    uint64 *aM1Raw = (uint64 *) &aM1, *bM1Raw = (uint64 *) &bM1, *n1Raw = (uint64 *) &n1, *r1Raw = (uint64 *) &r1, *rMask1Raw = (uint64 *) &rMask1;
    uint64 *p1Raw = (uint64 *) &p1;

    aM1Raw[0] = 0xe200fb9507a608c1, aM1Raw[1] = 0xb65f8827b4cd2c82, aM1Raw[2] = 0x76a0870449625c6b, aM1Raw[3] = 0x4b24b6c82af2fa31, aM1Raw[4] = 0x066d5c068b20e54c, aM1Raw[5] = 0x95bec01151aac608, aM1Raw[6] = 0x6c01b72c16dcf906, aM1Raw[7] = 0x3b3a380cf60aff5a;
    bM1Raw[0] = 0xc3ae917147ada4f5, bM1Raw[1] = 0x953fdac77e3fffb5, bM1Raw[2] = 0xeb0d1842be5d10bc, bM1Raw[3] = 0x817bb16eb506026b, bM1Raw[4] = 0x3dc8c530dd9d03d8, bM1Raw[5] = 0x25f2e1c6c9abd930, bM1Raw[6] = 0x10b751d5015cdeb8, bM1Raw[7] = 0x13b135057d545cea;
    n1Raw[0] = 0x895346d368651c43, n1Raw[1] = 0x11760f3d36bfb69c, n1Raw[2] = 0x807aad733d33ee11, n1Raw[3] = 0x5c02eabf087978ef, n1Raw[4] = 0x252760d6eee5150a, n1Raw[5] = 0x22d665bd3da20519, n1Raw[6] = 0x0804f4b06c5b974d, n1Raw[7] = 0x512f61815cb302e1;
    r1Raw[0] = 0x0000000000000000, r1Raw[1] = 0x0000000000000000, r1Raw[2] = 0x0000000000000000, r1Raw[3] = 0x0000000000000000, r1Raw[4] = 0x0000000000000000, r1Raw[5] = 0x0000000000000000, r1Raw[6] = 0x0000000000000000, r1Raw[7] = 0x8000000000000000;
    rMask1Raw[0] = 0xffffffffffffffff, rMask1Raw[1] = 0xffffffffffffffff, rMask1Raw[2] = 0xffffffffffffffff, rMask1Raw[3] = 0xffffffffffffffff, rMask1Raw[4] = 0xffffffffffffffff, rMask1Raw[5] = 0xffffffffffffffff, rMask1Raw[6] = 0xffffffffffffffff, rMask1Raw[7] = 0x7fffffffffffffff;
    p1Raw[0] = 0xf2a235828c521922, p1Raw[1] = 0xb7229fb00f310dfb, p1Raw[2] = 0x8b194c0918c8a68a, p1Raw[3] = 0xfec794ac5ab28f60, p1Raw[4] = 0x70dcafd4ff641393, p1Raw[5] = 0x6fad070527ddaf88, p1Raw[6] = 0x8cf6415d06252520, p1Raw[7] = 0x44f8b829ba449772;

    uint512 aM2, bM2, n2, rMask2;
    uint1024 r2, nPrime2;
    uint32 rExp2 = 512;
    uint512 p2;
    uint64 *aM2Raw = (uint64 *) &aM2, *bM2Raw = (uint64 *) &bM2, *n2Raw = (uint64 *) &n2, *r2Raw = (uint64 *) &r2, *rMask2Raw = (uint64 *) &rMask2;
    uint64 *p2Raw = (uint64 *) &p2;

    aM2Raw[0] = 0x5bc67b41481ca0f5, aM2Raw[1] = 0x61bc6754ebfba81e, aM2Raw[2] = 0x42c87b91cc605d47, aM2Raw[3] = 0xc2a54e9b4a469f84, aM2Raw[4] = 0x3439be8958d21103, aM2Raw[5] = 0xb07f7eb852881ec5, aM2Raw[6] = 0x01924e177a0a8a1c, aM2Raw[7] = 0xcf8390289418f6ab;
    bM2Raw[0] = 0x91b2bf64fc76c7b8, bM2Raw[1] = 0x78026adeca311648, bM2Raw[2] = 0xafa043b752a3b192, bM2Raw[3] = 0xedeb1452144d5808, bM2Raw[4] = 0x70f1f9566d108c1a, bM2Raw[5] = 0x397022bd4dbda2ca, bM2Raw[6] = 0x703a3a7395fb9b23, bM2Raw[7] = 0x573ed6b226767636;
    n2Raw[0] = 0x6c1018a7f3433f5d, n2Raw[1] = 0xd29f8d4b0257f8bc, n2Raw[2] = 0x8181d5d9d2c3b29b, n2Raw[3] = 0x0931196f2d274074, n2Raw[4] = 0x9fdffa66dddf469a, n2Raw[5] = 0x40db8e31451c2cfc, n2Raw[6] = 0x7766a4306137c187, n2Raw[7] = 0xe5c7d4158f61363a;
    r2Raw[0] = 0x0000000000000000, r2Raw[1] = 0x0000000000000000, r2Raw[2] = 0x0000000000000000, r2Raw[3] = 0x0000000000000000, r2Raw[4] = 0x0000000000000000, r2Raw[5] = 0x0000000000000000, r2Raw[6] = 0x0000000000000000, r2Raw[7] = 0x0000000000000000, r2Raw[8] = 0x1;
    rMask2Raw[0] = 0xffffffffffffffff, rMask2Raw[1] = 0xffffffffffffffff, rMask2Raw[2] = 0xffffffffffffffff, rMask2Raw[3] = 0xffffffffffffffff, rMask2Raw[4] = 0xffffffffffffffff, rMask2Raw[5] = 0xffffffffffffffff, rMask2Raw[6] = 0xffffffffffffffff, rMask2Raw[7] = 0xffffffffffffffff;
    p2Raw[0] = 0x5279cc32d0e33018, p2Raw[1] = 0x9512ab2dfc33171f, p2Raw[2] = 0x68298d4236529a2e, p2Raw[3] = 0xcb218c0257ccac42, p2Raw[4] = 0xe4dc107f84287289, p2Raw[5] = 0x8137d3788f7291ac, p2Raw[6] = 0xab71900ce98fe285, p2Raw[7] = 0x7dfe89e6cae2cf39;

    uint512 aM3, bM3, n3, rMask3;
    uint1024 r3, nPrime3;
    uint32 rExp3 = 509;
    uint512 p3;
    uint64 *aM3Raw = (uint64 *) &aM3, *bM3Raw = (uint64 *) &bM3, *n3Raw = (uint64 *) &n3, *r3Raw = (uint64 *) &r3, *rMask3Raw = (uint64 *) &rMask3;
    uint64 *p3Raw = (uint64 *) &p3;

    aM3Raw[0] = 0xe4ea009b9c6449ce, aM3Raw[1] = 0x077bbf4d34bdae21, aM3Raw[2] = 0x424905150285277e, aM3Raw[3] = 0x3c1ca76f5cf12c75, aM3Raw[4] = 0xa750032cda4b47db, aM3Raw[5] = 0x68ad062343472b96, aM3Raw[6] = 0x97e0745dd00c8622, aM3Raw[7] = 0xc2a44669c663ae2;
    bM3Raw[0] = 0xf5dc83cc457366ea, bM3Raw[1] = 0x697fa0991a47d27d, bM3Raw[2] = 0x48c572999f857fef, bM3Raw[3] = 0x60710a90bc7baa52, bM3Raw[4] = 0x6cf311a8a4774c55, bM3Raw[5] = 0x56a668ee68d7cee2, bM3Raw[6] = 0x1b5284007fb70a8b, bM3Raw[7] = 0x96df1ef5dda78dc;
    n3Raw[0] = 0x3796ff8d943fbccd, n3Raw[1] = 0x118ca40771b58359, n3Raw[2] = 0x453bbb2fe65fbd86, n3Raw[3] = 0xd69b323de11abda1, n3Raw[4] = 0xcca0a9c6c9bc9d4b, n3Raw[5] = 0xcf1a9534b3525dbb, n3Raw[6] = 0x8aeb76975283c111, n3Raw[7] = 0x13f9d98faddf5597;
    r3Raw[0] = 0x0000000000000000, r3Raw[1] = 0x0000000000000000, r3Raw[2] = 0x0000000000000000, r3Raw[3] = 0x0000000000000000, r3Raw[4] = 0x0000000000000000, r3Raw[5] = 0x0000000000000000, r3Raw[6] = 0x0000000000000000, r3Raw[7] = 0x2000000000000000;
    rMask3Raw[0] = 0xffffffffffffffff, rMask3Raw[1] = 0xffffffffffffffff, rMask3Raw[2] = 0xffffffffffffffff, rMask3Raw[3] = 0xffffffffffffffff, rMask3Raw[4] = 0xffffffffffffffff, rMask3Raw[5] = 0xffffffffffffffff, rMask3Raw[6] = 0xffffffffffffffff, rMask3Raw[7] = 0x1fffffffffffffff;
    p3Raw[0] = 0x65e7ef71ff9b746a, p3Raw[1] = 0xa2310f81f3e414e9, p3Raw[2] = 0x99f9db6ba2c574d0, p3Raw[3] = 0x9ade6b1ef97f8368, p3Raw[4] = 0xe089d01882c57679, p3Raw[5] = 0x602d1b67086138f8, p3Raw[6] = 0x82f8c07e2fad12ab, p3Raw[7] = 0x95fdcd6ff5a24f;

    // ACT
    extendedEuclidean(r0, n0, unused, nPrime0);

    t = redc(rMask0, rExp0, n0, -(uint512)nPrime0, aM0 * bM0);
    uint512 c0 = redc(rMask0, rExp0, n0, -(uint512)nPrime0, t);

    extendedEuclidean(r1, n1, unused, nPrime1);

    t = redc(rMask1, rExp1, n1, -(uint512)nPrime1, aM1 * bM1);
    uint512 c1 = redc(rMask1, rExp1, n1, -(uint512)nPrime1, t);

    extendedEuclidean(r2, n2, unused, nPrime2);

    t = redc(rMask2, rExp2, n2, -(uint512)nPrime2, aM2 * bM2);
    uint512 c2 = redc(rMask2, rExp2, n2, -(uint512)nPrime2, t);

    extendedEuclidean(r3, n3, unused, nPrime3);

    t = redc(rMask3, rExp3, n3, -(uint512)nPrime3, aM3 * bM3);
    uint512 c3 = redc(rMask3, rExp3, n3, -(uint512)nPrime3, t);


    // ASSERT
    ASSERT_EQ(c0, p0);
    ASSERT_EQ(c1, p1);
    ASSERT_EQ(c2, p2);
    ASSERT_EQ(c3, p3);
}

TEST(BigIntegerAlgorithmTests, REDC1024Bit) {
    // ARRANGE
    uint1024 unused, t;

    uint1024 aM0, bM0, n0, rMask0;
    uint2048 r0, nPrime0;
    uint32 rExp0 = 1024;
    uint1024 p0;
    uint64 *aM0Raw = (uint64 *) &aM0, *bM0Raw = (uint64 *) &bM0, *n0Raw = (uint64 *) &n0, *r0Raw = (uint64 *) &r0, *rMask0Raw = (uint64 *) &rMask0;
    uint64 *p0Raw = (uint64 *) &p0;

    aM0Raw[0] = 0x2599c5372d83b3d9, aM0Raw[1] = 0x90ac36e1c4a58115, aM0Raw[2] = 0x2a6972ce6733378c, aM0Raw[3] = 0x7d9bee6a3399da12, aM0Raw[4] = 0x85b85b3f91d9803c, aM0Raw[5] = 0x9244ef4a7ba32188, aM0Raw[6] = 0x57214e814f9c76c8, aM0Raw[7] = 0xa53c83713c9aab0d, aM0Raw[8] = 0xf96dbe2cbed5415b, aM0Raw[9] = 0xadc69f9b5181eac6, aM0Raw[10] = 0xa61e0ede4372f305, aM0Raw[11] = 0x0ae5ea4bdf3bcb5e, aM0Raw[12] = 0x6299fd26466d340d, aM0Raw[13] = 0xf886615d58bb3b04, aM0Raw[14] = 0x8b41b1e7fc239ea1, aM0Raw[15] = 0x8c6ad97ff3951c80;
    bM0Raw[0] = 0x9092e2b6c0911d62, bM0Raw[1] = 0x7e0ce700beb269fb, bM0Raw[2] = 0x1ac9de1561127524, bM0Raw[3] = 0xe94b11a614b22e7f, bM0Raw[4] = 0x9790786a6628793b, bM0Raw[5] = 0x99531ded5906a136, bM0Raw[6] = 0x6045d8fe7c6354b9, bM0Raw[7] = 0xc8f0969464a40c47, bM0Raw[8] = 0x5eb1a6e2f6a30cb3, bM0Raw[9] = 0xce7fd4da1add97d8, bM0Raw[10] = 0x412f313f2dc90805, bM0Raw[11] = 0x0611e1eca41d60ff, bM0Raw[12] = 0xd16f99970e2193e2, bM0Raw[13] = 0xe32a8c82b37ac66d, bM0Raw[14] = 0xaa7cd77205ad0396, bM0Raw[15] = 0x2508168845a30a8;
    n0Raw[0] = 0x45da0c64ab7d0c9d, n0Raw[1] = 0x08b5c77eaab5dba9, n0Raw[2] = 0x44096af8e3377fd4, n0Raw[3] = 0x92e8270fab8ed3ed, n0Raw[4] = 0xb0de7188e3bdaf25, n0Raw[5] = 0xe4caf08e66c87fcd, n0Raw[6] = 0xe9e6c51a4c369ed1, n0Raw[7] = 0xcf3bf0aff17a34a1, n0Raw[8] = 0xb9046debcf46933f, n0Raw[9] = 0xc04e099af371155d, n0Raw[10] = 0x350d30dd3decf248, n0Raw[11] = 0x9af394ceb536ce0e, n0Raw[12] = 0x69cc76fc3a6c2ce4, n0Raw[13] = 0xc0c26f204517a4d1, n0Raw[14] = 0x082eeecfb8a88c2e, n0Raw[15] = 0xe3a9188d85464449;
    r0Raw[0] = 0x0000000000000000, r0Raw[1] = 0x0000000000000000, r0Raw[2] = 0x0000000000000000, r0Raw[3] = 0x0000000000000000, r0Raw[4] = 0x0000000000000000, r0Raw[5] = 0x0000000000000000, r0Raw[6] = 0x0000000000000000, r0Raw[7] = 0x0000000000000000, r0Raw[8] = 0x0000000000000000, r0Raw[9] = 0x0000000000000000, r0Raw[10] = 0x0000000000000000, r0Raw[11] = 0x0000000000000000, r0Raw[12] = 0x0000000000000000, r0Raw[13] = 0x0000000000000000, r0Raw[14] = 0x0000000000000000, r0Raw[15] = 0x0000000000000000, r0Raw[16] = 0x1;
    rMask0Raw[0] = 0xffffffffffffffff, rMask0Raw[1] = 0xffffffffffffffff, rMask0Raw[2] = 0xffffffffffffffff, rMask0Raw[3] = 0xffffffffffffffff, rMask0Raw[4] = 0xffffffffffffffff, rMask0Raw[5] = 0xffffffffffffffff, rMask0Raw[6] = 0xffffffffffffffff, rMask0Raw[7] = 0xffffffffffffffff, rMask0Raw[8] = 0xffffffffffffffff, rMask0Raw[9] = 0xffffffffffffffff, rMask0Raw[10] = 0xffffffffffffffff, rMask0Raw[11] = 0xffffffffffffffff, rMask0Raw[12] = 0xffffffffffffffff, rMask0Raw[13] = 0xffffffffffffffff, rMask0Raw[14] = 0xffffffffffffffff, rMask0Raw[15] = 0xffffffffffffffff;
    p0Raw[0] = 0xaeab93190983a7a3, p0Raw[1] = 0x65f7c8f19e81c3a0, p0Raw[2] = 0xc98032c4e64633a8, p0Raw[3] = 0xa8d1b0baa44a2754, p0Raw[4] = 0x4abf4decfbf38b63, p0Raw[5] = 0xc23d8f6494a57875, p0Raw[6] = 0x75aa642ae0337e82, p0Raw[7] = 0x83ee750069c17a98, p0Raw[8] = 0x71298bbab9942b3d, p0Raw[9] = 0x93a4d6b04d9547a2, p0Raw[10] = 0xc77ead6a8cc884de, p0Raw[11] = 0x36cb3d2bd279781e, p0Raw[12] = 0x27f83b7c980483af, p0Raw[13] = 0x1c27393099dc8a78, p0Raw[14] = 0x294d747edee76f10, p0Raw[15] = 0x284ec8de27202e01;

    uint1024 aM1, bM1, n1, rMask1;
    uint2048 r1, nPrime1;
    uint32 rExp1 = 1023;
    uint1024 p1;
    uint64 *aM1Raw = (uint64 *) &aM1, *bM1Raw = (uint64 *) &bM1, *n1Raw = (uint64 *) &n1, *r1Raw = (uint64 *) &r1, *rMask1Raw = (uint64 *) &rMask1;
    uint64 *p1Raw = (uint64 *) &p1;

    aM1Raw[0] = 0x7c392dfdb87180b5, aM1Raw[1] = 0x115a1db0ffc91f58, aM1Raw[2] = 0x2f8806a25e92b318, aM1Raw[3] = 0x5cd643bb4fb1de8d, aM1Raw[4] = 0x95cfdb22e56bf41e, aM1Raw[5] = 0x6aaa277d9a00dbb7, aM1Raw[6] = 0x7cc291075a69902f, aM1Raw[7] = 0x23d7468a20aed017, aM1Raw[8] = 0xfb47efdd07cf510a, aM1Raw[9] = 0xa1d9df13e7c3cf73, aM1Raw[10] = 0xf0933a90a40cb402, aM1Raw[11] = 0xa2f8f02c69d3cd50, aM1Raw[12] = 0x1e29cc163f75078b, aM1Raw[13] = 0x0b4678f02cf8839a, aM1Raw[14] = 0x69783ef552ed9a53, aM1Raw[15] = 0x3980ef72b94e5535;
    bM1Raw[0] = 0x7aaa639e6cf10700, bM1Raw[1] = 0xbb9b7e455ec83c76, bM1Raw[2] = 0x339d257c3555cefb, bM1Raw[3] = 0x4b6c221fd282e229, bM1Raw[4] = 0x3bcf96f9d8a2f078, bM1Raw[5] = 0xc5756b22b7a55384, bM1Raw[6] = 0xbf8e505d091df72f, bM1Raw[7] = 0xbc0d3351d156798a, bM1Raw[8] = 0xebfbe7c8f539e02b, bM1Raw[9] = 0x2990b57aa9ea1b8b, bM1Raw[10] = 0xfc7a73fe0fab14c1, bM1Raw[11] = 0x55f651074dcc6c78, bM1Raw[12] = 0x25fe2c3ed821345b, bM1Raw[13] = 0x4f83b8fe4a4bb1bf, bM1Raw[14] = 0x28287685b57ddbfb, bM1Raw[15] = 0x3a8e2d393456b2e8;
    n1Raw[0] = 0xaa17e33717aca151, n1Raw[1] = 0xd48200109dd2e471, n1Raw[2] = 0x825b2fca193629f2, n1Raw[3] = 0x9c0fa0c222a54a65, n1Raw[4] = 0x9d261cae42476449, n1Raw[5] = 0x45f20a264f4667f0, n1Raw[6] = 0xa87d0114afdce4a2, n1Raw[7] = 0x9b45afa6798f993e, n1Raw[8] = 0x61e4d204b4e9a4ac, n1Raw[9] = 0x38858dfc3e210369, n1Raw[10] = 0xb1f2b40acb0378e5, n1Raw[11] = 0x562459178ad053c6, n1Raw[12] = 0x0af2ec30e0386d5a, n1Raw[13] = 0x9f3b61058c5ba704, n1Raw[14] = 0x8b4eed1f7879a4b0, n1Raw[15] = 0x5714f21f711fe51e;
    r1Raw[0] = 0x0000000000000000, r1Raw[1] = 0x0000000000000000, r1Raw[2] = 0x0000000000000000, r1Raw[3] = 0x0000000000000000, r1Raw[4] = 0x0000000000000000, r1Raw[5] = 0x0000000000000000, r1Raw[6] = 0x0000000000000000, r1Raw[7] = 0x0000000000000000, r1Raw[8] = 0x0000000000000000, r1Raw[9] = 0x0000000000000000, r1Raw[10] = 0x0000000000000000, r1Raw[11] = 0x0000000000000000, r1Raw[12] = 0x0000000000000000, r1Raw[13] = 0x0000000000000000, r1Raw[14] = 0x0000000000000000, r1Raw[15] = 0x8000000000000000;
    rMask1Raw[0] = 0xffffffffffffffff, rMask1Raw[1] = 0xffffffffffffffff, rMask1Raw[2] = 0xffffffffffffffff, rMask1Raw[3] = 0xffffffffffffffff, rMask1Raw[4] = 0xffffffffffffffff, rMask1Raw[5] = 0xffffffffffffffff, rMask1Raw[6] = 0xffffffffffffffff, rMask1Raw[7] = 0xffffffffffffffff, rMask1Raw[8] = 0xffffffffffffffff, rMask1Raw[9] = 0xffffffffffffffff, rMask1Raw[10] = 0xffffffffffffffff, rMask1Raw[11] = 0xffffffffffffffff, rMask1Raw[12] = 0xffffffffffffffff, rMask1Raw[13] = 0xffffffffffffffff, rMask1Raw[14] = 0xffffffffffffffff, rMask1Raw[15] = 0x7fffffffffffffff;
    p1Raw[0] = 0x6c3b990b8f03c920, p1Raw[1] = 0x555b2af34b8546e1, p1Raw[2] = 0xb98cc873463a3a27, p1Raw[3] = 0x996a3d32f1022a1d, p1Raw[4] = 0x271ded7b671736a2, p1Raw[5] = 0xc85925c7a9ac09d2, p1Raw[6] = 0x193ac24fbbdacdcd, p1Raw[7] = 0x15c0a0a8f7110cf1, p1Raw[8] = 0xfa9d4b8701534e75, p1Raw[9] = 0xf25f31d599e3b427, p1Raw[10] = 0x77bb4628750177c6, p1Raw[11] = 0xf8fd499d8c7f5885, p1Raw[12] = 0x0abe8ec0ba3402b1, p1Raw[13] = 0xc58e7ebdb7b9b960, p1Raw[14] = 0xd48a7d56213cd047, p1Raw[15] = 0x1c464e7c0171f8d3;

    uint1024 aM2, bM2, n2, rMask2;
    uint2048 r2, nPrime2;
    uint32 rExp2 = 1020;
    uint1024 p2;
    uint64 *aM2Raw = (uint64 *) &aM2, *bM2Raw = (uint64 *) &bM2, *n2Raw = (uint64 *) &n2, *r2Raw = (uint64 *) &r2, *rMask2Raw = (uint64 *) &rMask2;
    uint64 *p2Raw = (uint64 *) &p2;

    aM2Raw[0] = 0x6ba4b42d87f6aa49, aM2Raw[1] = 0xcfaa86d00f69983f, aM2Raw[2] = 0x5694ac4f65464225, aM2Raw[3] = 0x3162e721f0ee1b0c, aM2Raw[4] = 0x3bb5c7f83df8dbea, aM2Raw[5] = 0xbe00c9e68589f27b, aM2Raw[6] = 0x04344e2f82b04a80, aM2Raw[7] = 0xf71840b58b60559f, aM2Raw[8] = 0x7488b44cf089db49, aM2Raw[9] = 0x1038fa0c5bb7128f, aM2Raw[10] = 0xafc1eace7b93e200, aM2Raw[11] = 0xf32f214fcb5e3471, aM2Raw[12] = 0xe53cfdb5a74a579c, aM2Raw[13] = 0xd478785f4a7fa542, aM2Raw[14] = 0xedbda6974828efad, aM2Raw[15] = 0x259244048977f9b;
    bM2Raw[0] = 0xb8be37c7ded2037f, bM2Raw[1] = 0xe067cd01e22d31c1, bM2Raw[2] = 0xd2044541aafd3ae5, bM2Raw[3] = 0xcb6c9f1b04bceb12, bM2Raw[4] = 0xdb8601549a551538, bM2Raw[5] = 0x29a7aa2e544a3098, bM2Raw[6] = 0x712a240418a10511, bM2Raw[7] = 0xd0e77ae778b8cd60, bM2Raw[8] = 0x557c53985b47c95d, bM2Raw[9] = 0xbed0c34af9ee36fb, bM2Raw[10] = 0x8505e160037a45f0, bM2Raw[11] = 0xed11538b55000245, bM2Raw[12] = 0x25dc65c88fb159ec, bM2Raw[13] = 0x1a8a1d591023c2bf, bM2Raw[14] = 0x19c704d69aad4290, bM2Raw[15] = 0xa747b0e5d3228b9;
    n2Raw[0] = 0x51a99b6eb1fd81c9, n2Raw[1] = 0x4d49a348e0d079f0, n2Raw[2] = 0xf82b7e4a4a673118, n2Raw[3] = 0xa74efc873f45ced5, n2Raw[4] = 0x85d355bca87bef13, n2Raw[5] = 0x96c3fc7c22b196a1, n2Raw[6] = 0x95dae025d2a25952, n2Raw[7] = 0x71862199816ba520, n2Raw[8] = 0x08f66f2ec2168aaf, n2Raw[9] = 0x3d653b57fa63416f, n2Raw[10] = 0x44dbd3220fb37487, n2Raw[11] = 0xddd91043c9371565, n2Raw[12] = 0xa1ac3ca0eae643a6, n2Raw[13] = 0x44048e154c48bb09, n2Raw[14] = 0x993204eab44cbca5, n2Raw[15] = 0xcabd6f033d57d09;
    r2Raw[0] = 0x0000000000000000, r2Raw[1] = 0x0000000000000000, r2Raw[2] = 0x0000000000000000, r2Raw[3] = 0x0000000000000000, r2Raw[4] = 0x0000000000000000, r2Raw[5] = 0x0000000000000000, r2Raw[6] = 0x0000000000000000, r2Raw[7] = 0x0000000000000000, r2Raw[8] = 0x0000000000000000, r2Raw[9] = 0x0000000000000000, r2Raw[10] = 0x0000000000000000, r2Raw[11] = 0x0000000000000000, r2Raw[12] = 0x0000000000000000, r2Raw[13] = 0x0000000000000000, r2Raw[14] = 0x0000000000000000, r2Raw[15] = 0x1000000000000000;
    rMask2Raw[0] = 0xffffffffffffffff, rMask2Raw[1] = 0xffffffffffffffff, rMask2Raw[2] = 0xffffffffffffffff, rMask2Raw[3] = 0xffffffffffffffff, rMask2Raw[4] = 0xffffffffffffffff, rMask2Raw[5] = 0xffffffffffffffff, rMask2Raw[6] = 0xffffffffffffffff, rMask2Raw[7] = 0xffffffffffffffff, rMask2Raw[8] = 0xffffffffffffffff, rMask2Raw[9] = 0xffffffffffffffff, rMask2Raw[10] = 0xffffffffffffffff, rMask2Raw[11] = 0xffffffffffffffff, rMask2Raw[12] = 0xffffffffffffffff, rMask2Raw[13] = 0xffffffffffffffff, rMask2Raw[14] = 0xffffffffffffffff, rMask2Raw[15] = 0xfffffffffffffff;
    p2Raw[0] = 0x32155aa16e1bcba1, p2Raw[1] = 0xb24e37f8d80d1891, p2Raw[2] = 0x9576f03b242f20b1, p2Raw[3] = 0xf7cd9ef0759dc497, p2Raw[4] = 0xd95ad1a47cf37b88, p2Raw[5] = 0xb6be17ba958162f9, p2Raw[6] = 0x8c4a21e97b417dcc, p2Raw[7] = 0x2c1a1b50491fa5d5, p2Raw[8] = 0x5952454997895508, p2Raw[9] = 0xba2d09c370acde09, p2Raw[10] = 0x787fb03455b387e1, p2Raw[11] = 0xcd0b0a9bce5f46e4, p2Raw[12] = 0xad90faecd359cfc5, p2Raw[13] = 0xf90ae1994437d8ef, p2Raw[14] = 0xc3b6c1e5f39a7716, p2Raw[15] = 0x47452f45458c091;

    uint1024 aM3, bM3, n3, rMask3;
    uint2048 r3, nPrime3;
    uint32 rExp3 = 1024;
    uint1024 p3;
    uint64 *aM3Raw = (uint64 *) &aM3, *bM3Raw = (uint64 *) &bM3, *n3Raw = (uint64 *) &n3, *r3Raw = (uint64 *) &r3, *rMask3Raw = (uint64 *) &rMask3;
    uint64 *p3Raw = (uint64 *) &p3;

    aM3Raw[0] = 0xedb28307f2e7c0b2, aM3Raw[1] = 0x3986b161ea72fa16, aM3Raw[2] = 0x4b6005721e372256, aM3Raw[3] = 0xd740a08b4d8f876a, aM3Raw[4] = 0x7e67b14f57b86e96, aM3Raw[5] = 0x5e824e7f04784227, aM3Raw[6] = 0xba739d0042ccc007, aM3Raw[7] = 0x24db901c649eac34, aM3Raw[8] = 0x3445127c1c7db2ff, aM3Raw[9] = 0x3a8a6e6ca63faeea, aM3Raw[10] = 0xcea08151a09d7f02, aM3Raw[11] = 0x80354b9dc5c3d453, aM3Raw[12] = 0x32376856771846fe, aM3Raw[13] = 0x04f12cae01ba078a, aM3Raw[14] = 0x67a92a28f412029b, aM3Raw[15] = 0xf0229ac1ba7f423;
    bM3Raw[0] = 0x8f31cb80dded1fb7, bM3Raw[1] = 0xe0a313ad27e142dc, bM3Raw[2] = 0x3219642dc3becd36, bM3Raw[3] = 0xe2e28f70dff0ce0c, bM3Raw[4] = 0x644ff7a44eebca28, bM3Raw[5] = 0x3a64430f745f5eb3, bM3Raw[6] = 0xadc8b2cf26ce7f5b, bM3Raw[7] = 0x03aa33d64ed6d03e, bM3Raw[8] = 0x95050a65ab02afee, bM3Raw[9] = 0x24036a783681731d, bM3Raw[10] = 0x82d35c9c92788f67, bM3Raw[11] = 0xf721de0725be5c20, bM3Raw[12] = 0x362d7564ff4b1714, bM3Raw[13] = 0x1a2613669aa6e41f, bM3Raw[14] = 0xf466770e1ffefc6d, bM3Raw[15] = 0x3ca5030969893a5e;
    n3Raw[0] = 0x4baa2e06d39442d9, n3Raw[1] = 0x4761c41355e25aaf, n3Raw[2] = 0x3acf9bedcc6ba98a, n3Raw[3] = 0xebdbaf9e362a2923, n3Raw[4] = 0xd455b41746029783, n3Raw[5] = 0xccaa735dccb86f24, n3Raw[6] = 0xc3d1451a7193ca45, n3Raw[7] = 0xc4b86696214bbc55, n3Raw[8] = 0xad03e9418c6ee6b2, n3Raw[9] = 0x95b80edcbc578fad, n3Raw[10] = 0xc72844e1bae0f631, n3Raw[11] = 0x6c1c48dcb90f474a, n3Raw[12] = 0x1f45720721b30007, n3Raw[13] = 0x5fca7bbf7b5d2251, n3Raw[14] = 0x4b9dff7566caac58, n3Raw[15] = 0xa3504390e1777a2f;
    r3Raw[0] = 0x0000000000000000, r3Raw[1] = 0x0000000000000000, r3Raw[2] = 0x0000000000000000, r3Raw[3] = 0x0000000000000000, r3Raw[4] = 0x0000000000000000, r3Raw[5] = 0x0000000000000000, r3Raw[6] = 0x0000000000000000, r3Raw[7] = 0x0000000000000000, r3Raw[8] = 0x0000000000000000, r3Raw[9] = 0x0000000000000000, r3Raw[10] = 0x0000000000000000, r3Raw[11] = 0x0000000000000000, r3Raw[12] = 0x0000000000000000, r3Raw[13] = 0x0000000000000000, r3Raw[14] = 0x0000000000000000, r3Raw[15] = 0x0000000000000000, r3Raw[16] = 0x1;
    rMask3Raw[0] = 0xffffffffffffffff, rMask3Raw[1] = 0xffffffffffffffff, rMask3Raw[2] = 0xffffffffffffffff, rMask3Raw[3] = 0xffffffffffffffff, rMask3Raw[4] = 0xffffffffffffffff, rMask3Raw[5] = 0xffffffffffffffff, rMask3Raw[6] = 0xffffffffffffffff, rMask3Raw[7] = 0xffffffffffffffff, rMask3Raw[8] = 0xffffffffffffffff, rMask3Raw[9] = 0xffffffffffffffff, rMask3Raw[10] = 0xffffffffffffffff, rMask3Raw[11] = 0xffffffffffffffff, rMask3Raw[12] = 0xffffffffffffffff, rMask3Raw[13] = 0xffffffffffffffff, rMask3Raw[14] = 0xffffffffffffffff, rMask3Raw[15] = 0xffffffffffffffff;
    p3Raw[0] = 0x70a187a23ef53cef, p3Raw[1] = 0x8eb015623acc65aa, p3Raw[2] = 0x7d06b2b73856e320, p3Raw[3] = 0xb4f36c3b226d632f, p3Raw[4] = 0xf23e7dcac1e00916, p3Raw[5] = 0xb0e9ad2850670aa7, p3Raw[6] = 0xb1985dceaf2540ec, p3Raw[7] = 0xc66d9d09f661cffa, p3Raw[8] = 0xb1ddf04e9c439e44, p3Raw[9] = 0x83ef72cecb4c1a1a, p3Raw[10] = 0x12b36b8e4ea798af, p3Raw[11] = 0x67be3c06ddb7369d, p3Raw[12] = 0xc10a07ddb9e1f6f7, p3Raw[13] = 0xcf8a8249b130b5fd, p3Raw[14] = 0x75c6baaa9fd76517, p3Raw[15] = 0x78b598c510ce2e46;

    // ACT
    extendedEuclidean(r0, n0, unused, nPrime0);

    t = redc(rMask0, rExp0, n0, -(uint1024)nPrime0, aM0 * bM0);
    uint1024 c0 = redc(rMask0, rExp0, n0, -(uint1024)nPrime0, t);

    extendedEuclidean(r1, n1, unused, nPrime1);

    t = redc(rMask1, rExp1, n1, -(uint1024)nPrime1, aM1 * bM1);
    uint1024 c1 = redc(rMask1, rExp1, n1, -(uint1024)nPrime1, t);

    extendedEuclidean(r2, n2, unused, nPrime2);

    t = redc(rMask2, rExp2, n2, -(uint1024)nPrime2, aM2 * bM2);
    uint1024 c2 = redc(rMask2, rExp2, n2, -(uint1024)nPrime2, t);

    extendedEuclidean(r3, n3, unused, nPrime3);

    t = redc(rMask3, rExp3, n3, -(uint1024)nPrime3, aM3 * bM3);
    uint1024 c3 = redc(rMask3, rExp3, n3, -(uint1024)nPrime3, t);


    // ASSERT
    ASSERT_EQ(c0, p0);
    ASSERT_EQ(c1, p1);
    ASSERT_EQ(c2, p2);
    ASSERT_EQ(c3, p3);
}

TEST(BigIntegerAlgorithmTests, REDC2048Bit) {
    // ARRANGE
    uint2048 unused, t;

    uint2048 aM0, bM0, n0, rMask0;
    uint4096 r0, nPrime0;
    uint32 rExp0 = 2047;
    uint2048 p0;
    uint64 *aM0Raw = (uint64 *) &aM0, *bM0Raw = (uint64 *) &bM0, *n0Raw = (uint64 *) &n0, *r0Raw = (uint64 *) &r0, *rMask0Raw = (uint64 *) &rMask0;
    uint64 *p0Raw = (uint64 *) &p0;

    aM0Raw[0] = 0x5bf8662597e03dbe, aM0Raw[1] = 0x20ad5d8d8b933fa8, aM0Raw[2] = 0xdc765e85ea3737af, aM0Raw[3] = 0xd010122c6427590e, aM0Raw[4] = 0x55509476ed18f589, aM0Raw[5] = 0xc9ec93959f0df171, aM0Raw[6] = 0x33b3b513358c44cc, aM0Raw[7] = 0xb34080dedb5792c8, aM0Raw[8] = 0xf53a432e8aacf68f, aM0Raw[9] = 0x2aee2c256539edd4, aM0Raw[10] = 0xee0bcafabe11cc2d, aM0Raw[11] = 0xf986b38456dd1079, aM0Raw[12] = 0x7356818039990359, aM0Raw[13] = 0x4f3b35769c71560d, aM0Raw[14] = 0xe6c404483fa98082, aM0Raw[15] = 0x5d92b067b060bd70, aM0Raw[16] = 0xb999139fc1b753a9, aM0Raw[17] = 0x14f24dbb1bf4f212, aM0Raw[18] = 0x6db4340b7efd7d93, aM0Raw[19] = 0xcdedf02df707c687, aM0Raw[20] = 0xae9f84fdef6b66f5, aM0Raw[21] = 0xc88d87490c311bf2, aM0Raw[22] = 0x44bb1f6a77a862b3, aM0Raw[23] = 0x1938bf90d0c09cda, aM0Raw[24] = 0x01c7efd9f548ef13, aM0Raw[25] = 0x4963c50a43f097d6, aM0Raw[26] = 0xb8fe285200b6e728, aM0Raw[27] = 0x68a1f5e783549726, aM0Raw[28] = 0xd0f6052d477cab30, aM0Raw[29] = 0xc74ba61f3e92c53d, aM0Raw[30] = 0x2940a196186a259c, aM0Raw[31] = 0x2474058325a48d7c;
    bM0Raw[0] = 0x5e7b86513cde72a0, bM0Raw[1] = 0x6140a2a4bee368fd, bM0Raw[2] = 0x7a0164fce1c2b44b, bM0Raw[3] = 0x86d1ccc9a8354810, bM0Raw[4] = 0x2e10dd56a201bbef, bM0Raw[5] = 0x58c66e1ec76ae78c, bM0Raw[6] = 0xebe0a09fa627bd2d, bM0Raw[7] = 0x65f5c8a0303ad5d9, bM0Raw[8] = 0x4598a15d0de03821, bM0Raw[9] = 0xeb7b961e638a9612, bM0Raw[10] = 0xaf7e00244dbf0c4d, bM0Raw[11] = 0xbad0046b879da5bf, bM0Raw[12] = 0x70b5101a73317abe, bM0Raw[13] = 0x61c0af0bcaaca112, bM0Raw[14] = 0x681cbf5ed7b45b4c, bM0Raw[15] = 0x73be9b71755e6ae8, bM0Raw[16] = 0xf6cb20bad19572b6, bM0Raw[17] = 0x2ebefa355b795402, bM0Raw[18] = 0x38f3bd129eb90829, bM0Raw[19] = 0x0488b0e195f8f54d, bM0Raw[20] = 0xc9651a4ffced7c7f, bM0Raw[21] = 0x7a166b67e268e9af, bM0Raw[22] = 0xc903cfbbe0182646, bM0Raw[23] = 0x7381f3f1e238abf2, bM0Raw[24] = 0x72ef39dc053d183b, bM0Raw[25] = 0x26672e53cb188835, bM0Raw[26] = 0xed3abd23e5504214, bM0Raw[27] = 0x6ae762fd57e396d9, bM0Raw[28] = 0x2514e5d7b9823f06, bM0Raw[29] = 0xe9ad910a1f08f4f9, bM0Raw[30] = 0xff9b16bc3543cae5, bM0Raw[31] = 0x3c237f95a6662c3;
    n0Raw[0] = 0xfd85cb688dfb8151, n0Raw[1] = 0xa73e04ab12238e4a, n0Raw[2] = 0xbca534a7f72f67c7, n0Raw[3] = 0xcff5474eeaa01464, n0Raw[4] = 0x4bb0bb86f41ddf89, n0Raw[5] = 0x0cc3f5ed0ea203e6, n0Raw[6] = 0xdaec7c48b053f6e3, n0Raw[7] = 0x8acb7d57ecf01568, n0Raw[8] = 0x284b851de0a0a694, n0Raw[9] = 0x1331e4e6406a2725, n0Raw[10] = 0xba438f778f7ffc83, n0Raw[11] = 0xc9b8307d6fe5e226, n0Raw[12] = 0x384f765e3b550522, n0Raw[13] = 0x4aa7468ce3cac030, n0Raw[14] = 0xa7e590ab09e9e2cf, n0Raw[15] = 0x96ddb5ef37790eb4, n0Raw[16] = 0xe36d303d756e7a64, n0Raw[17] = 0x5e2deaaf1a85d101, n0Raw[18] = 0x05aa22d04cded4fa, n0Raw[19] = 0xe443775450df9670, n0Raw[20] = 0x33dacbbcde61f789, n0Raw[21] = 0xe3f0961a004b9acf, n0Raw[22] = 0x0f98a3b58359394a, n0Raw[23] = 0xf2f9f54bcf7d81e7, n0Raw[24] = 0x8eb516316ee39bd8, n0Raw[25] = 0x0e7834f160c65b80, n0Raw[26] = 0xb73ed27d661bdedd, n0Raw[27] = 0x4be231eb821375e1, n0Raw[28] = 0x2bb17f6753599d2a, n0Raw[29] = 0xb4ae7037f5c6135b, n0Raw[30] = 0x12d82d23df98bf0e, n0Raw[31] = 0x4e1e8efe46c202e0;
    r0Raw[0] = 0x0000000000000000, r0Raw[1] = 0x0000000000000000, r0Raw[2] = 0x0000000000000000, r0Raw[3] = 0x0000000000000000, r0Raw[4] = 0x0000000000000000, r0Raw[5] = 0x0000000000000000, r0Raw[6] = 0x0000000000000000, r0Raw[7] = 0x0000000000000000, r0Raw[8] = 0x0000000000000000, r0Raw[9] = 0x0000000000000000, r0Raw[10] = 0x0000000000000000, r0Raw[11] = 0x0000000000000000, r0Raw[12] = 0x0000000000000000, r0Raw[13] = 0x0000000000000000, r0Raw[14] = 0x0000000000000000, r0Raw[15] = 0x0000000000000000, r0Raw[16] = 0x0000000000000000, r0Raw[17] = 0x0000000000000000, r0Raw[18] = 0x0000000000000000, r0Raw[19] = 0x0000000000000000, r0Raw[20] = 0x0000000000000000, r0Raw[21] = 0x0000000000000000, r0Raw[22] = 0x0000000000000000, r0Raw[23] = 0x0000000000000000, r0Raw[24] = 0x0000000000000000, r0Raw[25] = 0x0000000000000000, r0Raw[26] = 0x0000000000000000, r0Raw[27] = 0x0000000000000000, r0Raw[28] = 0x0000000000000000, r0Raw[29] = 0x0000000000000000, r0Raw[30] = 0x0000000000000000, r0Raw[31] = 0x8000000000000000;
    rMask0Raw[0] = 0xffffffffffffffff, rMask0Raw[1] = 0xffffffffffffffff, rMask0Raw[2] = 0xffffffffffffffff, rMask0Raw[3] = 0xffffffffffffffff, rMask0Raw[4] = 0xffffffffffffffff, rMask0Raw[5] = 0xffffffffffffffff, rMask0Raw[6] = 0xffffffffffffffff, rMask0Raw[7] = 0xffffffffffffffff, rMask0Raw[8] = 0xffffffffffffffff, rMask0Raw[9] = 0xffffffffffffffff, rMask0Raw[10] = 0xffffffffffffffff, rMask0Raw[11] = 0xffffffffffffffff, rMask0Raw[12] = 0xffffffffffffffff, rMask0Raw[13] = 0xffffffffffffffff, rMask0Raw[14] = 0xffffffffffffffff, rMask0Raw[15] = 0xffffffffffffffff, rMask0Raw[16] = 0xffffffffffffffff, rMask0Raw[17] = 0xffffffffffffffff, rMask0Raw[18] = 0xffffffffffffffff, rMask0Raw[19] = 0xffffffffffffffff, rMask0Raw[20] = 0xffffffffffffffff, rMask0Raw[21] = 0xffffffffffffffff, rMask0Raw[22] = 0xffffffffffffffff, rMask0Raw[23] = 0xffffffffffffffff, rMask0Raw[24] = 0xffffffffffffffff, rMask0Raw[25] = 0xffffffffffffffff, rMask0Raw[26] = 0xffffffffffffffff, rMask0Raw[27] = 0xffffffffffffffff, rMask0Raw[28] = 0xffffffffffffffff, rMask0Raw[29] = 0xffffffffffffffff, rMask0Raw[30] = 0xffffffffffffffff, rMask0Raw[31] = 0x7fffffffffffffff;
    p0Raw[0] = 0xa89448a4ae3cf4ee, p0Raw[1] = 0xeda6754318d4c4a6, p0Raw[2] = 0x79cf3d1fb3a885a5, p0Raw[3] = 0x0688d25d6e71626c, p0Raw[4] = 0xd71ad2ec3cd4a3a7, p0Raw[5] = 0xbadb6e7f9bbf1329, p0Raw[6] = 0x4de70071ee86c1c0, p0Raw[7] = 0x58657cb201b6dd34, p0Raw[8] = 0x11633ce3af47f5d3, p0Raw[9] = 0x1c5fb01268cf9c6d, p0Raw[10] = 0x84ac795de498ed83, p0Raw[11] = 0x232799bc29faae81, p0Raw[12] = 0x5753cbee5d0e6f96, p0Raw[13] = 0x578d81be44b36d44, p0Raw[14] = 0x737db121912a5083, p0Raw[15] = 0xeecba7a89c8226fb, p0Raw[16] = 0xf8520215440a1c93, p0Raw[17] = 0xc11b9159f3953c12, p0Raw[18] = 0x557898d2963553e9, p0Raw[19] = 0x911854cbb8cb7e33, p0Raw[20] = 0x74dd62a0fafb7f37, p0Raw[21] = 0x4f65142305965979, p0Raw[22] = 0x4037d0c9c311068f, p0Raw[23] = 0x61ab57243d6c1593, p0Raw[24] = 0x12bff23db6e3626d, p0Raw[25] = 0xc8f89e458b2c2ec3, p0Raw[26] = 0x33fa9a6b615bd359, p0Raw[27] = 0x76fc46f387836af1, p0Raw[28] = 0x1eee4e9831890b85, p0Raw[29] = 0x74c8029c70b844c1, p0Raw[30] = 0x7b641895f1788210, p0Raw[31] = 0x30895ca07a4c20a1;

    uint2048 aM1, bM1, n1, rMask1;
    uint4096 r1, nPrime1;
    uint32 rExp1 = 2047;
    uint2048 p1;
    uint64 *aM1Raw = (uint64 *) &aM1, *bM1Raw = (uint64 *) &bM1, *n1Raw = (uint64 *) &n1, *r1Raw = (uint64 *) &r1, *rMask1Raw = (uint64 *) &rMask1;
    uint64 *p1Raw = (uint64 *) &p1;

    aM1Raw[0] = 0xdbe1b72b2127a1e0, aM1Raw[1] = 0x00608c1f544a7058, aM1Raw[2] = 0x0969e052a9b758ae, aM1Raw[3] = 0x31bf2f71e5739394, aM1Raw[4] = 0xb28c728bd30b43c9, aM1Raw[5] = 0x09add110b961eff3, aM1Raw[6] = 0x9f5360aed17adcef, aM1Raw[7] = 0xe0f5e0ff789826c6, aM1Raw[8] = 0x7f64c45e252b6fa6, aM1Raw[9] = 0x8f9992bc1bc1bc36, aM1Raw[10] = 0x7dae1552ad7b7389, aM1Raw[11] = 0x141a400b2393a946, aM1Raw[12] = 0x94c51f7e6b98429f, aM1Raw[13] = 0x790899cdf5d61abb, aM1Raw[14] = 0xf0412d3f62db8a59, aM1Raw[15] = 0x6bbcee81777225d5, aM1Raw[16] = 0x29df222c4bfd3214, aM1Raw[17] = 0x7944857d158ddd69, aM1Raw[18] = 0x160ed348a2b5f502, aM1Raw[19] = 0x09c4c0bd2c4f4bbd, aM1Raw[20] = 0xd11dd35ad9bed598, aM1Raw[21] = 0xa61e9e55a0ac4c23, aM1Raw[22] = 0xcd5d159e7e237a69, aM1Raw[23] = 0x613ebdfb3b0019a8, aM1Raw[24] = 0x0337a15b5194ad1f, aM1Raw[25] = 0x9b2154a515d8ef73, aM1Raw[26] = 0x6f5590d42b210033, aM1Raw[27] = 0xc23c7328a0f26c1d, aM1Raw[28] = 0x30e62cbfb584ff62, aM1Raw[29] = 0xfff69a7ffede9d5b, aM1Raw[30] = 0x3d027f9c27b3707a, aM1Raw[31] = 0x560d57e1043984c1;
    bM1Raw[0] = 0x94daefe3e19ca3c7, bM1Raw[1] = 0x4d04934eceb73d64, bM1Raw[2] = 0x67b3045ee609e530, bM1Raw[3] = 0xa9164fa273911f29, bM1Raw[4] = 0x6a0aa9bf90f12e45, bM1Raw[5] = 0x88f6c3bc867fcf08, bM1Raw[6] = 0x29fac2f76019ca8e, bM1Raw[7] = 0x101da0172b5946ed, bM1Raw[8] = 0x740a2943e9e69107, bM1Raw[9] = 0x9df63511174cb0ab, bM1Raw[10] = 0x537cf038d0fad04b, bM1Raw[11] = 0x5ee085d33eae7bc3, bM1Raw[12] = 0x0be5feceefa9d920, bM1Raw[13] = 0xa3a75d9146be845f, bM1Raw[14] = 0xaf930f3e5ff3b099, bM1Raw[15] = 0x9f2c1dda1c31db0b, bM1Raw[16] = 0x43d3a09c5624b53f, bM1Raw[17] = 0x737a97b5524f16cc, bM1Raw[18] = 0x148330467d5c3720, bM1Raw[19] = 0x935dca046210c8f6, bM1Raw[20] = 0x51bcfb92d1852f4f, bM1Raw[21] = 0xcae5063bf6dab09f, bM1Raw[22] = 0x2b4f7420e1c5a646, bM1Raw[23] = 0x0a3bd8394c7f09d9, bM1Raw[24] = 0x7e9cc8b5a8e5f01a, bM1Raw[25] = 0x7264767b4ca3e252, bM1Raw[26] = 0x84ad2d8a0b77b6cc, bM1Raw[27] = 0x43ffad3435ce99b5, bM1Raw[28] = 0x299773fae7487f65, bM1Raw[29] = 0x70271dbf8b54f103, bM1Raw[30] = 0xe7dc8c3704af0d24, bM1Raw[31] = 0x3ef7a6e17b2410b2;
    n1Raw[0] = 0xfdd95ec95f04b259, n1Raw[1] = 0xa8c04091d08e649c, n1Raw[2] = 0xfa6f7a93502a7feb, n1Raw[3] = 0x634cb2bfce8fc866, n1Raw[4] = 0xbd0a9d2dec4ee472, n1Raw[5] = 0xd84ce364c3b13c90, n1Raw[6] = 0x871b76fce6ea2d9c, n1Raw[7] = 0xfb572d5c0cfd6dea, n1Raw[8] = 0x5ad1a16f81498b62, n1Raw[9] = 0x7ef542fece8e37f6, n1Raw[10] = 0xca15eef07e2ac558, n1Raw[11] = 0x1395b6f02dae537d, n1Raw[12] = 0xd3a32fb2c92d86dc, n1Raw[13] = 0x4d7b32420bf80b82, n1Raw[14] = 0xa7cc09d8cac21a19, n1Raw[15] = 0x2ea07e1eec8f4a4b, n1Raw[16] = 0x90a86f08d090907f, n1Raw[17] = 0x70f863b106c2e43e, n1Raw[18] = 0x731c33e4a894056b, n1Raw[19] = 0xb128e3ccd91d0d97, n1Raw[20] = 0xb0cdb018f2b73e00, n1Raw[21] = 0x261ae06522f92921, n1Raw[22] = 0xea1368500e42113a, n1Raw[23] = 0x2610e0e13468037b, n1Raw[24] = 0xbf9be6b27083a470, n1Raw[25] = 0xa6342d8a50a9a662, n1Raw[26] = 0xf7c75f54a071fead, n1Raw[27] = 0x5dce12e6bd9f1998, n1Raw[28] = 0xa589f03e51a4f347, n1Raw[29] = 0x1c1a48dbdbcc48a1, n1Raw[30] = 0x0e8006eca9e53de4, n1Raw[31] = 0x5d1496236c33ae26;
    r1Raw[0] = 0x0000000000000000, r1Raw[1] = 0x0000000000000000, r1Raw[2] = 0x0000000000000000, r1Raw[3] = 0x0000000000000000, r1Raw[4] = 0x0000000000000000, r1Raw[5] = 0x0000000000000000, r1Raw[6] = 0x0000000000000000, r1Raw[7] = 0x0000000000000000, r1Raw[8] = 0x0000000000000000, r1Raw[9] = 0x0000000000000000, r1Raw[10] = 0x0000000000000000, r1Raw[11] = 0x0000000000000000, r1Raw[12] = 0x0000000000000000, r1Raw[13] = 0x0000000000000000, r1Raw[14] = 0x0000000000000000, r1Raw[15] = 0x0000000000000000, r1Raw[16] = 0x0000000000000000, r1Raw[17] = 0x0000000000000000, r1Raw[18] = 0x0000000000000000, r1Raw[19] = 0x0000000000000000, r1Raw[20] = 0x0000000000000000, r1Raw[21] = 0x0000000000000000, r1Raw[22] = 0x0000000000000000, r1Raw[23] = 0x0000000000000000, r1Raw[24] = 0x0000000000000000, r1Raw[25] = 0x0000000000000000, r1Raw[26] = 0x0000000000000000, r1Raw[27] = 0x0000000000000000, r1Raw[28] = 0x0000000000000000, r1Raw[29] = 0x0000000000000000, r1Raw[30] = 0x0000000000000000, r1Raw[31] = 0x8000000000000000;
    rMask1Raw[0] = 0xffffffffffffffff, rMask1Raw[1] = 0xffffffffffffffff, rMask1Raw[2] = 0xffffffffffffffff, rMask1Raw[3] = 0xffffffffffffffff, rMask1Raw[4] = 0xffffffffffffffff, rMask1Raw[5] = 0xffffffffffffffff, rMask1Raw[6] = 0xffffffffffffffff, rMask1Raw[7] = 0xffffffffffffffff, rMask1Raw[8] = 0xffffffffffffffff, rMask1Raw[9] = 0xffffffffffffffff, rMask1Raw[10] = 0xffffffffffffffff, rMask1Raw[11] = 0xffffffffffffffff, rMask1Raw[12] = 0xffffffffffffffff, rMask1Raw[13] = 0xffffffffffffffff, rMask1Raw[14] = 0xffffffffffffffff, rMask1Raw[15] = 0xffffffffffffffff, rMask1Raw[16] = 0xffffffffffffffff, rMask1Raw[17] = 0xffffffffffffffff, rMask1Raw[18] = 0xffffffffffffffff, rMask1Raw[19] = 0xffffffffffffffff, rMask1Raw[20] = 0xffffffffffffffff, rMask1Raw[21] = 0xffffffffffffffff, rMask1Raw[22] = 0xffffffffffffffff, rMask1Raw[23] = 0xffffffffffffffff, rMask1Raw[24] = 0xffffffffffffffff, rMask1Raw[25] = 0xffffffffffffffff, rMask1Raw[26] = 0xffffffffffffffff, rMask1Raw[27] = 0xffffffffffffffff, rMask1Raw[28] = 0xffffffffffffffff, rMask1Raw[29] = 0xffffffffffffffff, rMask1Raw[30] = 0xffffffffffffffff, rMask1Raw[31] = 0x7fffffffffffffff;
    p1Raw[0] = 0x769011622cab56a7, p1Raw[1] = 0x63f9fc756add4774, p1Raw[2] = 0x6b5edf3625b817bf, p1Raw[3] = 0x240b2d202302ba85, p1Raw[4] = 0x1206b4ca6c478ed3, p1Raw[5] = 0x6f8267f49cf66565, p1Raw[6] = 0xbe7f17f176bb9893, p1Raw[7] = 0x2b4b192679eb5680, p1Raw[8] = 0x5007010c2da73453, p1Raw[9] = 0x716f68ff293ee762, p1Raw[10] = 0xa69da7c4080de381, p1Raw[11] = 0xf5160810a6066eda, p1Raw[12] = 0x1e8e46e0ca2737f2, p1Raw[13] = 0xa4a16a0170e21249, p1Raw[14] = 0x8c58184f8fd17b83, p1Raw[15] = 0x299bb3d0e2083b3a, p1Raw[16] = 0xb8b3c2221ebbb5ff, p1Raw[17] = 0x5263e358e1b91608, p1Raw[18] = 0xe40f48db11ae5fed, p1Raw[19] = 0xa5187e177eb2da1d, p1Raw[20] = 0x117f81c4ce1a7def, p1Raw[21] = 0x77b82eaeef30eecc, p1Raw[22] = 0x407e830a160a197d, p1Raw[23] = 0x1da9fe6bb8dddf56, p1Raw[24] = 0xa9d91d82e208a1b2, p1Raw[25] = 0x610df44fc7f3c21f, p1Raw[26] = 0x88d71989ca708fdc, p1Raw[27] = 0xab242a8286353d6f, p1Raw[28] = 0x0bd99722f9649e48, p1Raw[29] = 0xfca679c0b200250d, p1Raw[30] = 0xc51006434420db33, p1Raw[31] = 0x30e1a78210f1659f;

    uint2048 aM2, bM2, n2, rMask2;
    uint4096 r2, nPrime2;
    uint32 rExp2 = 2048;
    uint2048 p2;
    uint64 *aM2Raw = (uint64 *) &aM2, *bM2Raw = (uint64 *) &bM2, *n2Raw = (uint64 *) &n2, *r2Raw = (uint64 *) &r2, *rMask2Raw = (uint64 *) &rMask2;
    uint64 *p2Raw = (uint64 *) &p2;

    aM2Raw[0] = 0x06749ce11a1eb1d2, aM2Raw[1] = 0x63184d4e99acf85d, aM2Raw[2] = 0x52ceec342fe65548, aM2Raw[3] = 0x8d12758c79e0c618, aM2Raw[4] = 0x785c52c7af96a6cc, aM2Raw[5] = 0x4a66ac91b6ff04f3, aM2Raw[6] = 0x3bd06408ac39cad3, aM2Raw[7] = 0x5b41c8d9d08bfdd1, aM2Raw[8] = 0x38650677fb6b087c, aM2Raw[9] = 0x7b09abcf1fe5a80f, aM2Raw[10] = 0xda0b27fe934df226, aM2Raw[11] = 0x88e9c25dc6d405f5, aM2Raw[12] = 0x270a67cff44acb50, aM2Raw[13] = 0x1229775d6d8ffed3, aM2Raw[14] = 0xaf6de47ff8daf8e6, aM2Raw[15] = 0x5a5dff965fcc6f0a, aM2Raw[16] = 0x1ca6b653983ff234, aM2Raw[17] = 0x4de16bad81c23eb9, aM2Raw[18] = 0x05e071bd667e2289, aM2Raw[19] = 0xa476aa0a1b423ea6, aM2Raw[20] = 0x45f530e81498b6ef, aM2Raw[21] = 0xabd3a7051961bdda, aM2Raw[22] = 0xe32dd4ec4228c19b, aM2Raw[23] = 0x709195636d5c37f6, aM2Raw[24] = 0x69ddaff5ac2fa5db, aM2Raw[25] = 0x928d2ce3ad74e0e4, aM2Raw[26] = 0x3e881853de510092, aM2Raw[27] = 0xaac0b6ba75470e58, aM2Raw[28] = 0x8b0630de0347f577, aM2Raw[29] = 0x4191a4a109076602, aM2Raw[30] = 0x2d1783d3a6d2c56a, aM2Raw[31] = 0x10781df5458274a0;
    bM2Raw[0] = 0x9f42e941997ec826, bM2Raw[1] = 0x7f76f9f205588740, bM2Raw[2] = 0xd86fb0f953a8085d, bM2Raw[3] = 0x938f5ac8ec87ff60, bM2Raw[4] = 0x413a7be024aa06d6, bM2Raw[5] = 0x778d347c154ce962, bM2Raw[6] = 0x2f3ddc5fac29ff94, bM2Raw[7] = 0xe7080fefbc9a26dc, bM2Raw[8] = 0xa3a10f11151919f1, bM2Raw[9] = 0x33978633d02d324c, bM2Raw[10] = 0xd82194ca4237ea70, bM2Raw[11] = 0x4030c186c981a541, bM2Raw[12] = 0x0405ed87c064bcdd, bM2Raw[13] = 0x689c05d5de6eeb1e, bM2Raw[14] = 0x0a075362dabd20f5, bM2Raw[15] = 0xbac3fd9a7625fa4f, bM2Raw[16] = 0x1a689507ad8ed9e2, bM2Raw[17] = 0xefb8a891e780648b, bM2Raw[18] = 0xd6180dd7bf404883, bM2Raw[19] = 0x3b309c81cfcfcac3, bM2Raw[20] = 0xd72cf6ddc4e5fa60, bM2Raw[21] = 0x8638f5a7daf19468, bM2Raw[22] = 0x97097bb4dadc1c0d, bM2Raw[23] = 0x6e851a86bb518ff9, bM2Raw[24] = 0x692c3612464263c6, bM2Raw[25] = 0x9397f9161cb7c26e, bM2Raw[26] = 0xe0c559c642d5d9f1, bM2Raw[27] = 0xa05318ce8d6e7b12, bM2Raw[28] = 0x387c347b38408d12, bM2Raw[29] = 0x324489e41c42e35d, bM2Raw[30] = 0x5147310710bd487e, bM2Raw[31] = 0xdb5f9d7e0ad1732;
    n2Raw[0] = 0xa54feadcecaaeddf, n2Raw[1] = 0xd2f9044aa93da1e6, n2Raw[2] = 0x8b17d489dd30bc43, n2Raw[3] = 0x8a3c62c73b22d842, n2Raw[4] = 0x2555151e998f8cec, n2Raw[5] = 0x836ad9b8722bae3d, n2Raw[6] = 0xe7931fbffd616f85, n2Raw[7] = 0x85911bd4671f0260, n2Raw[8] = 0x1d964cbe1789afdd, n2Raw[9] = 0x393264d8c382f0a0, n2Raw[10] = 0x1c0c3a37c330bec2, n2Raw[11] = 0xf319d0eec4c7feb6, n2Raw[12] = 0x2593b4aa204eb59e, n2Raw[13] = 0x3890ee09634976e0, n2Raw[14] = 0xb4564b6c014e8273, n2Raw[15] = 0x75bfa5725c383abe, n2Raw[16] = 0x60b73ce448de893d, n2Raw[17] = 0x55354f457f8e3636, n2Raw[18] = 0x7ef187b8415beb06, n2Raw[19] = 0x9a2a01c5e094d7ac, n2Raw[20] = 0x7049c602b7ece1f3, n2Raw[21] = 0x14ed5fcf7c2dcb35, n2Raw[22] = 0x6e8cefc8ae133350, n2Raw[23] = 0xd876f352f53c1470, n2Raw[24] = 0xb97d0a2a65557890, n2Raw[25] = 0x0bf67be7df5d35b0, n2Raw[26] = 0xd7416a04813d5852, n2Raw[27] = 0x2001cec6f84b4365, n2Raw[28] = 0xd9bef712995bea2a, n2Raw[29] = 0x75441dddce7b8519, n2Raw[30] = 0xa6a181d25c31a0db, n2Raw[31] = 0xafa61129f0503592;
    r2Raw[0] = 0x0000000000000000, r2Raw[1] = 0x0000000000000000, r2Raw[2] = 0x0000000000000000, r2Raw[3] = 0x0000000000000000, r2Raw[4] = 0x0000000000000000, r2Raw[5] = 0x0000000000000000, r2Raw[6] = 0x0000000000000000, r2Raw[7] = 0x0000000000000000, r2Raw[8] = 0x0000000000000000, r2Raw[9] = 0x0000000000000000, r2Raw[10] = 0x0000000000000000, r2Raw[11] = 0x0000000000000000, r2Raw[12] = 0x0000000000000000, r2Raw[13] = 0x0000000000000000, r2Raw[14] = 0x0000000000000000, r2Raw[15] = 0x0000000000000000, r2Raw[16] = 0x0000000000000000, r2Raw[17] = 0x0000000000000000, r2Raw[18] = 0x0000000000000000, r2Raw[19] = 0x0000000000000000, r2Raw[20] = 0x0000000000000000, r2Raw[21] = 0x0000000000000000, r2Raw[22] = 0x0000000000000000, r2Raw[23] = 0x0000000000000000, r2Raw[24] = 0x0000000000000000, r2Raw[25] = 0x0000000000000000, r2Raw[26] = 0x0000000000000000, r2Raw[27] = 0x0000000000000000, r2Raw[28] = 0x0000000000000000, r2Raw[29] = 0x0000000000000000, r2Raw[30] = 0x0000000000000000, r2Raw[31] = 0x0000000000000000, r2Raw[32] = 0x1;
    rMask2Raw[0] = 0xffffffffffffffff, rMask2Raw[1] = 0xffffffffffffffff, rMask2Raw[2] = 0xffffffffffffffff, rMask2Raw[3] = 0xffffffffffffffff, rMask2Raw[4] = 0xffffffffffffffff, rMask2Raw[5] = 0xffffffffffffffff, rMask2Raw[6] = 0xffffffffffffffff, rMask2Raw[7] = 0xffffffffffffffff, rMask2Raw[8] = 0xffffffffffffffff, rMask2Raw[9] = 0xffffffffffffffff, rMask2Raw[10] = 0xffffffffffffffff, rMask2Raw[11] = 0xffffffffffffffff, rMask2Raw[12] = 0xffffffffffffffff, rMask2Raw[13] = 0xffffffffffffffff, rMask2Raw[14] = 0xffffffffffffffff, rMask2Raw[15] = 0xffffffffffffffff, rMask2Raw[16] = 0xffffffffffffffff, rMask2Raw[17] = 0xffffffffffffffff, rMask2Raw[18] = 0xffffffffffffffff, rMask2Raw[19] = 0xffffffffffffffff, rMask2Raw[20] = 0xffffffffffffffff, rMask2Raw[21] = 0xffffffffffffffff, rMask2Raw[22] = 0xffffffffffffffff, rMask2Raw[23] = 0xffffffffffffffff, rMask2Raw[24] = 0xffffffffffffffff, rMask2Raw[25] = 0xffffffffffffffff, rMask2Raw[26] = 0xffffffffffffffff, rMask2Raw[27] = 0xffffffffffffffff, rMask2Raw[28] = 0xffffffffffffffff, rMask2Raw[29] = 0xffffffffffffffff, rMask2Raw[30] = 0xffffffffffffffff, rMask2Raw[31] = 0xffffffffffffffff;
    p2Raw[0] = 0x5b86b068aa1a7fed, p2Raw[1] = 0xf0e0d92123489e28, p2Raw[2] = 0x13535707ccc7a058, p2Raw[3] = 0xef1a8592143290c2, p2Raw[4] = 0xa88c8641aa5edde6, p2Raw[5] = 0xe94a85d8a4da507d, p2Raw[6] = 0xeba6d0d488b5294a, p2Raw[7] = 0x80bfc1097f76cbb2, p2Raw[8] = 0x22d26ab8db10fc5a, p2Raw[9] = 0x58ff3511a88aa199, p2Raw[10] = 0x3152a43aec7396f2, p2Raw[11] = 0x01428793294734f3, p2Raw[12] = 0x49969da3f7da9ef9, p2Raw[13] = 0xb46a111b7bc78f52, p2Raw[14] = 0x3234e551ec914082, p2Raw[15] = 0x3cbc42d9229a7a9d, p2Raw[16] = 0x566b5411932796a0, p2Raw[17] = 0xd0cdd89e2a59d901, p2Raw[18] = 0xe3a6f175e039931b, p2Raw[19] = 0x94a647137e03bcfe, p2Raw[20] = 0xb99187a2050c9cab, p2Raw[21] = 0xf7821b6f10b6a7eb, p2Raw[22] = 0xb49c8b67b1cb0466, p2Raw[23] = 0x76615d3a2ed0de58, p2Raw[24] = 0x5d460d7e4c556750, p2Raw[25] = 0x61d10da1d29d95e0, p2Raw[26] = 0xf1bcc9f4e1e07b3c, p2Raw[27] = 0x0706ec1f70c1bc30, p2Raw[28] = 0x1bf026c96c1048b4, p2Raw[29] = 0x5622865d450a009b, p2Raw[30] = 0x399ca47c7690d58a, p2Raw[31] = 0x2fc6ffbc2ff435e5;

    uint2048 aM3, bM3, n3, rMask3;
    uint4096 r3, nPrime3;
    uint32 rExp3 = 2048;
    uint2048 p3;
    uint64 *aM3Raw = (uint64 *) &aM3, *bM3Raw = (uint64 *) &bM3, *n3Raw = (uint64 *) &n3, *r3Raw = (uint64 *) &r3, *rMask3Raw = (uint64 *) &rMask3;
    uint64 *p3Raw = (uint64 *) &p3;

    aM3Raw[0] = 0xdbbfd199d1b7915e, aM3Raw[1] = 0x231f4b3cef58c50e, aM3Raw[2] = 0x5da924ddfef426b2, aM3Raw[3] = 0x1ac6579dfe77c1a3, aM3Raw[4] = 0x1d54605fcc913c65, aM3Raw[5] = 0xd7c3ea663647ffb3, aM3Raw[6] = 0xb00dda89a126f82d, aM3Raw[7] = 0x706033e08cd0aa05, aM3Raw[8] = 0x639120e9aa88bf9b, aM3Raw[9] = 0x95dfeda1f0117de3, aM3Raw[10] = 0x60a93815026e3c4d, aM3Raw[11] = 0x8339d3a407e5f067, aM3Raw[12] = 0xb20d4a4685b29bf6, aM3Raw[13] = 0x1542cbf9d02fcb2b, aM3Raw[14] = 0xe923a07ea3d9c9d1, aM3Raw[15] = 0xfa8e02af34017dd3, aM3Raw[16] = 0x3c51c169627b50b4, aM3Raw[17] = 0x71bb33a0fe2b3c32, aM3Raw[18] = 0xb442018001200c2a, aM3Raw[19] = 0xded265c0ef8fc12d, aM3Raw[20] = 0x375cf315b0be5a01, aM3Raw[21] = 0x58370237dcd62498, aM3Raw[22] = 0xacc5e567b83fd6e4, aM3Raw[23] = 0xaa25209bb0f43d54, aM3Raw[24] = 0x841c2676046374bf, aM3Raw[25] = 0x559e9cc144e99349, aM3Raw[26] = 0x00b31d2eecfbe6a0, aM3Raw[27] = 0x2e932a9db0ebcc6a, aM3Raw[28] = 0xe5dc660c063832b1, aM3Raw[29] = 0xd5c560f0de445507, aM3Raw[30] = 0x616a705cce6eaed2, aM3Raw[31] = 0x9b468438d0b3d79f;
    bM3Raw[0] = 0x8aa2604ac2f391d0, bM3Raw[1] = 0xee5d151d5eed7bc6, bM3Raw[2] = 0x5e6e3d25659a73cd, bM3Raw[3] = 0xae403decf0d9c93c, bM3Raw[4] = 0x91ba677235407ba6, bM3Raw[5] = 0xfc732a003ff073ff, bM3Raw[6] = 0xa2689181025c3051, bM3Raw[7] = 0x44992c6dc21696dc, bM3Raw[8] = 0x0e4c88ab395cc6c9, bM3Raw[9] = 0x07ffd523b0585ad4, bM3Raw[10] = 0xf1555b0fa59f43e3, bM3Raw[11] = 0x5e46af338f09a7cd, bM3Raw[12] = 0x86b0802e5d6ba02b, bM3Raw[13] = 0xeeb472bc04a5c7f2, bM3Raw[14] = 0xc8da0b3e08d499b6, bM3Raw[15] = 0xc081686157e79490, bM3Raw[16] = 0x96a1752f81988cbd, bM3Raw[17] = 0xda0ac200fe30a3ed, bM3Raw[18] = 0x8bfff11cfb02b0bb, bM3Raw[19] = 0x2cb2e02f970f3d10, bM3Raw[20] = 0x361a9c574574c505, bM3Raw[21] = 0x3cd4250216d205c2, bM3Raw[22] = 0xb08be811e21ca0d4, bM3Raw[23] = 0x22a77953dbf2b600, bM3Raw[24] = 0xe9938fafdf58e3f9, bM3Raw[25] = 0x7d3eeec6ea55a811, bM3Raw[26] = 0x0199670f4b18ac1a, bM3Raw[27] = 0xefea4a95b3480fc4, bM3Raw[28] = 0x14979c83d9f76c5d, bM3Raw[29] = 0x43d49b92981d2910, bM3Raw[30] = 0xe1fa68d9c2084288, bM3Raw[31] = 0xbbde5b5cb10ca44;
    n3Raw[0] = 0x623030778b2056df, n3Raw[1] = 0x20314e9ff8bf6ebc, n3Raw[2] = 0xb2adf8f49330cc46, n3Raw[3] = 0xbd21789d5d05a630, n3Raw[4] = 0x46bb1fd1fa0702b6, n3Raw[5] = 0x3d15896a2914721e, n3Raw[6] = 0x3a61e87904c4ffe8, n3Raw[7] = 0x1c286af03717a6bb, n3Raw[8] = 0x29cfb5ba1ee7a4dd, n3Raw[9] = 0xfc1d7912be95c3f1, n3Raw[10] = 0xc7ca1d0b8c2336f4, n3Raw[11] = 0x67a5b2a8d7e00d0e, n3Raw[12] = 0x38d0047ecbae0e1a, n3Raw[13] = 0xe52ca46ec9548194, n3Raw[14] = 0xbe763ef3a9e9cbd2, n3Raw[15] = 0xd783ecf3c8941444, n3Raw[16] = 0xcb5c0f978fe45796, n3Raw[17] = 0x820ec47cfeb7e55d, n3Raw[18] = 0x214d0f1cd5fd9616, n3Raw[19] = 0x7c9e18c8e0cf07fe, n3Raw[20] = 0x6ca5eeeb463f34c7, n3Raw[21] = 0xbd6fd89d14462943, n3Raw[22] = 0x2a2a64629a26cc90, n3Raw[23] = 0xd8ea8d7e1b34e811, n3Raw[24] = 0x9227794f6f080e53, n3Raw[25] = 0x2ceed217fe2b103f, n3Raw[26] = 0xae0b566965834c8b, n3Raw[27] = 0xfc9be0d33d919849, n3Raw[28] = 0x7ec4358f1e5710c7, n3Raw[29] = 0xceb08973044e18ca, n3Raw[30] = 0x2e86fe93abe80f8f, n3Raw[31] = 0xbbcbe8113a00f16e;
    r3Raw[0] = 0x0000000000000000, r3Raw[1] = 0x0000000000000000, r3Raw[2] = 0x0000000000000000, r3Raw[3] = 0x0000000000000000, r3Raw[4] = 0x0000000000000000, r3Raw[5] = 0x0000000000000000, r3Raw[6] = 0x0000000000000000, r3Raw[7] = 0x0000000000000000, r3Raw[8] = 0x0000000000000000, r3Raw[9] = 0x0000000000000000, r3Raw[10] = 0x0000000000000000, r3Raw[11] = 0x0000000000000000, r3Raw[12] = 0x0000000000000000, r3Raw[13] = 0x0000000000000000, r3Raw[14] = 0x0000000000000000, r3Raw[15] = 0x0000000000000000, r3Raw[16] = 0x0000000000000000, r3Raw[17] = 0x0000000000000000, r3Raw[18] = 0x0000000000000000, r3Raw[19] = 0x0000000000000000, r3Raw[20] = 0x0000000000000000, r3Raw[21] = 0x0000000000000000, r3Raw[22] = 0x0000000000000000, r3Raw[23] = 0x0000000000000000, r3Raw[24] = 0x0000000000000000, r3Raw[25] = 0x0000000000000000, r3Raw[26] = 0x0000000000000000, r3Raw[27] = 0x0000000000000000, r3Raw[28] = 0x0000000000000000, r3Raw[29] = 0x0000000000000000, r3Raw[30] = 0x0000000000000000, r3Raw[31] = 0x0000000000000000, r3Raw[32] = 0x1;
    rMask3Raw[0] = 0xffffffffffffffff, rMask3Raw[1] = 0xffffffffffffffff, rMask3Raw[2] = 0xffffffffffffffff, rMask3Raw[3] = 0xffffffffffffffff, rMask3Raw[4] = 0xffffffffffffffff, rMask3Raw[5] = 0xffffffffffffffff, rMask3Raw[6] = 0xffffffffffffffff, rMask3Raw[7] = 0xffffffffffffffff, rMask3Raw[8] = 0xffffffffffffffff, rMask3Raw[9] = 0xffffffffffffffff, rMask3Raw[10] = 0xffffffffffffffff, rMask3Raw[11] = 0xffffffffffffffff, rMask3Raw[12] = 0xffffffffffffffff, rMask3Raw[13] = 0xffffffffffffffff, rMask3Raw[14] = 0xffffffffffffffff, rMask3Raw[15] = 0xffffffffffffffff, rMask3Raw[16] = 0xffffffffffffffff, rMask3Raw[17] = 0xffffffffffffffff, rMask3Raw[18] = 0xffffffffffffffff, rMask3Raw[19] = 0xffffffffffffffff, rMask3Raw[20] = 0xffffffffffffffff, rMask3Raw[21] = 0xffffffffffffffff, rMask3Raw[22] = 0xffffffffffffffff, rMask3Raw[23] = 0xffffffffffffffff, rMask3Raw[24] = 0xffffffffffffffff, rMask3Raw[25] = 0xffffffffffffffff, rMask3Raw[26] = 0xffffffffffffffff, rMask3Raw[27] = 0xffffffffffffffff, rMask3Raw[28] = 0xffffffffffffffff, rMask3Raw[29] = 0xffffffffffffffff, rMask3Raw[30] = 0xffffffffffffffff, rMask3Raw[31] = 0xffffffffffffffff;
    p3Raw[0] = 0x1bbb30b6ee8db67b, p3Raw[1] = 0x5357497e9b051cdf, p3Raw[2] = 0x284bd5f60a6e7035, p3Raw[3] = 0x4504ebc698831e12, p3Raw[4] = 0x282c8ad1bbf9fcf4, p3Raw[5] = 0x3bd850c53ff9a4c1, p3Raw[6] = 0x738c1a6c792852b6, p3Raw[7] = 0xfc6d844dc7133c96, p3Raw[8] = 0x64e391312e207247, p3Raw[9] = 0xb0bafaeb4b7e97ea, p3Raw[10] = 0xa0177472e147e78d, p3Raw[11] = 0xfcb964f7487f1f3d, p3Raw[12] = 0xb9c1825737931ed7, p3Raw[13] = 0x26e2543109a21419, p3Raw[14] = 0x54dce6d47ac66efb, p3Raw[15] = 0x7b008e7ee8cb4b80, p3Raw[16] = 0xc7d29542e36e6779, p3Raw[17] = 0xf77f68414f51393b, p3Raw[18] = 0xabdc39bd8aae7a7a, p3Raw[19] = 0xf5e9350086d7f954, p3Raw[20] = 0x6ddf13fd455cc450, p3Raw[21] = 0x21bdc8a1511bb4c2, p3Raw[22] = 0x87b2b52db704efd8, p3Raw[23] = 0x9be4e99d5c3136c7, p3Raw[24] = 0x47a23a9dde1f313c, p3Raw[25] = 0x957e0a90630318f3, p3Raw[26] = 0xb8e5448c2a2cb9ae, p3Raw[27] = 0x28af66f4292f038f, p3Raw[28] = 0xdeb81357311064ab, p3Raw[29] = 0x62c130970d8da42b, p3Raw[30] = 0xa09f9c2e3483f10f, p3Raw[31] = 0x5730f44783b604cf;

    // ACT
    extendedEuclidean(r0, n0, unused, nPrime0);

    t = redc(rMask0, rExp0, n0, -(uint2048)nPrime0, aM0 * bM0);
    uint2048 c0 = redc(rMask0, rExp0, n0, -(uint2048)nPrime0, t);

    extendedEuclidean(r1, n1, unused, nPrime1);

    t = redc(rMask1, rExp1, n1, -(uint2048)nPrime1, aM1 * bM1);
    uint2048 c1 = redc(rMask1, rExp1, n1, -(uint2048)nPrime1, t);

    extendedEuclidean(r2, n2, unused, nPrime2);

    t = redc(rMask2, rExp2, n2, -(uint2048)nPrime2, aM2 * bM2);
    uint2048 c2 = redc(rMask2, rExp2, n2, -(uint2048)nPrime2, t);

    extendedEuclidean(r3, n3, unused, nPrime3);

    t = redc(rMask3, rExp3, n3, -(uint2048)nPrime3, aM3 * bM3);
    uint2048 c3 = redc(rMask3, rExp3, n3, -(uint2048)nPrime3, t);


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

    a0Raw[0] = 0x3133ef91092e182e, a0Raw[1] = 0xb0c34331f2c38888;
    b0Raw[0] = 0xfd6ea183ed7dd232, b0Raw[1] = 0xf3c95dd81f15af9b;
    m0Raw[0] = 0x030c7aa88f0b7781, m0Raw[1] = 0xe20e1a0dda5484e;
    r0Raw[0] = 0x0562ccceffcb7420, r0Raw[1] = 0x7818e21e1be3277;

    uint128 a1, m1, r1;
    uint128 b1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *m1Raw = (uint64 *) &m1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0xdc7077420daaf646, a1Raw[1] = 0xa2fca986f0e7a8fb;
    b1Raw[0] = 0x9f47c5c059a32768, b1Raw[1] = 0xc077e8fe9682fcab;
    m1Raw[0] = 0x6fa1a70065a6aa0f, m1Raw[1] = 0x12e218e594dac07d;
    r1Raw[0] = 0xd0cf53e2e5030fbe, r1Raw[1] = 0x1121e94fab8e91fd;

    uint128 a2, m2, r2;
    uint128 b2;
    uint64 *a2Raw = (uint64 *) &a2, *b2Raw = (uint64 *) &b2, *m2Raw = (uint64 *) &m2, *r2Raw = (uint64 *) &r2;

    a2Raw[0] = 0x49b9928d7788beaa, a2Raw[1] = 0xa67dc314de69f836;
    b2Raw[0] = 0xb245cbcb5be38e3f, b2Raw[1] = 0x7cae74bf9da9c195;
    m2Raw[0] = 0xfbf2ecaf4d724753, m2Raw[1] = 0xf168ad57ed541cb5;
    r2Raw[0] = 0x9f983cf2f40a3fe9, r2Raw[1] = 0x4cb3aa09b4e48b61;

    uint128 a3, m3, r3;
    uint128 b3;
    uint64 *a3Raw = (uint64 *) &a3, *b3Raw = (uint64 *) &b3, *m3Raw = (uint64 *) &m3, *r3Raw = (uint64 *) &r3;

    a3Raw[0] = 0xcc946b65de5aa076, a3Raw[1] = 0x289dba64cca367da;
    b3Raw[0] = 0x08e48b5f0c7b36ec, b3Raw[1] = 0x46d89e8fc493179;
    m3Raw[0] = 0xfcd3add542a9f643, m3Raw[1] = 0xe084607be482bb79;
    r3Raw[0] = 0x8005503e73094213, r3Raw[1] = 0xc614d9045350c81c;

    // ACT
    uint128 c0 = a0.modularExponent(b0, m0);
    uint128 c1 = a1.modularExponent(b1, m1);
    uint128 c2 = a2.modularExponent(b2, m2);
    uint128 c3 = a3.modularExponent(b3, m3);

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

    a0Raw[0] = 0x72e727f733b67f88, a0Raw[1] = 0x6257e8edb832e589, a0Raw[2] = 0x3ca734c9c0c98cdd, a0Raw[3] = 0x886354f9dd2fe879;
    b0Raw[0] = 0x8cb0f22495d709a9, b0Raw[1] = 0x47b5fe2d9663bcd4, b0Raw[2] = 0xcbb48084088b3c9d, b0Raw[3] = 0x7993b7d527543a6f;
    m0Raw[0] = 0x8a72c69c6ce3a47d, m0Raw[1] = 0x86d41e0d61fbe6e2, m0Raw[2] = 0xb819c8eb4296d00d, m0Raw[3] = 0xf5df861c67711e5c;
    r0Raw[0] = 0x3ecd77425a1ba9a8, r0Raw[1] = 0x445e1ea1ba66a8f1, r0Raw[2] = 0x51d81d59fbb7f0a6, r0Raw[3] = 0x8c0b5d7b6b39e2bf;

    uint256 a1, m1, r1;
    uint256 b1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *m1Raw = (uint64 *) &m1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0x07daebbaa19abe75, a1Raw[1] = 0x984ca4c94007ec7e, a1Raw[2] = 0xfa03dbf3b8da4214, a1Raw[3] = 0x19ea1f3b4c95cae4;
    b1Raw[0] = 0x9e87bee6cc6dc73a, b1Raw[1] = 0x0b900ef929b275d6, b1Raw[2] = 0x98449b173b8c3a85, b1Raw[3] = 0xdd562f3ba3a43af6;
    m1Raw[0] = 0xc98d312fd70fd0ed, m1Raw[1] = 0x0b422f49f5dba46c, m1Raw[2] = 0x38c0992e74092740, m1Raw[3] = 0x354b0e1b1717dd7c;
    r1Raw[0] = 0x9d744fa2e92ec76f, r1Raw[1] = 0xc9126eb1569428fd, r1Raw[2] = 0x9a7aadcc8afce7fb, r1Raw[3] = 0x1546b8ce0077a482;

    uint256 a2, m2, r2;
    uint256 b2;
    uint64 *a2Raw = (uint64 *) &a2, *b2Raw = (uint64 *) &b2, *m2Raw = (uint64 *) &m2, *r2Raw = (uint64 *) &r2;

    a2Raw[0] = 0x275f6606cc91dcb2, a2Raw[1] = 0x49be802688b32e37, a2Raw[2] = 0x6ccf6e72a1a525a4, a2Raw[3] = 0x5507ec97418e868b;
    b2Raw[0] = 0x1ce6837f31a40cfe, b2Raw[1] = 0x5fc751aa0f26a4d3, b2Raw[2] = 0xecd23e4e5c2a21d8, b2Raw[3] = 0xc8c8d6b0e2926b48;
    m2Raw[0] = 0xb445345a1475e96b, m2Raw[1] = 0xba3cd2420ddb9969, m2Raw[2] = 0x773a9d378e28a580, m2Raw[3] = 0x7b1e750e27da41ed;
    r2Raw[0] = 0xfc93d1313bac407d, r2Raw[1] = 0x854c87d3f7f49525, r2Raw[2] = 0x1a790a6c278dcc37, r2Raw[3] = 0x6ff920c32d4249e4;

    uint256 a3, m3, r3;
    uint256 b3;
    uint64 *a3Raw = (uint64 *) &a3, *b3Raw = (uint64 *) &b3, *m3Raw = (uint64 *) &m3, *r3Raw = (uint64 *) &r3;

    a3Raw[0] = 0x9f719be33700c584, a3Raw[1] = 0x4244ac3fac852034, a3Raw[2] = 0x40d0e5bbba96577f, a3Raw[3] = 0xe92c2d01c6513c00;
    b3Raw[0] = 0x32e441492d2d612e, b3Raw[1] = 0x34d491bcfdafcf9a, b3Raw[2] = 0x5973396762226e6b, b3Raw[3] = 0x28235ac4122b0f54;
    m3Raw[0] = 0xcf6b97353bfd00f7, m3Raw[1] = 0x65c404e47c22aed0, m3Raw[2] = 0x19af50b5675ec5ac, m3Raw[3] = 0x9742efbaa6807742;
    r3Raw[0] = 0x5c3a306dd893f864, r3Raw[1] = 0x543c1609ae60a360, r3Raw[2] = 0xed5c018cc90ecc19, r3Raw[3] = 0x47719d783915507d;

    // ACT
    uint256 c0 = a0.modularExponent(b0, m0);
    uint256 c1 = a1.modularExponent(b1, m1);
    uint256 c2 = a2.modularExponent(b2, m2);
    uint256 c3 = a3.modularExponent(b3, m3);

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

    a0Raw[0] = 0xe073b7999e9f6b18, a0Raw[1] = 0xf1211e16925c934b, a0Raw[2] = 0xeef851030973e74d, a0Raw[3] = 0x9457dee102e85c2f, a0Raw[4] = 0x993470dd4924e500, a0Raw[5] = 0x580188ffc8b72dfd, a0Raw[6] = 0x5af9e4279d89b16a, a0Raw[7] = 0x309b9538c65711cb;
    b0Raw[0] = 0xdba5981e7bcb6e04, b0Raw[1] = 0x02cd72f8fa829204, b0Raw[2] = 0xf127e851eda6fd18, b0Raw[3] = 0xa7880cdaedcaf282, b0Raw[4] = 0x8170b27a2af838dd, b0Raw[5] = 0x7ee56dd8a7b29778, b0Raw[6] = 0xaf850021d64973fd, b0Raw[7] = 0xe6f861b6d75c6177;
    m0Raw[0] = 0xd87cc395631fe8c1, m0Raw[1] = 0x40af562c70210226, m0Raw[2] = 0x51e45e1bb3492550, m0Raw[3] = 0xf78d74d08174cd52, m0Raw[4] = 0xe690b40e7d8056f0, m0Raw[5] = 0x677b6cba09cf2837, m0Raw[6] = 0x7fc41204af697751, m0Raw[7] = 0xf042a1d02f531ae2;
    r0Raw[0] = 0xbec004b9dfcf0b9c, r0Raw[1] = 0x3f7eb201fa510a57, r0Raw[2] = 0x1368860ddb2b6046, r0Raw[3] = 0x661c9b3e172a5612, r0Raw[4] = 0xa58d67dd00ce6967, r0Raw[5] = 0x0cc7036a8cc84287, r0Raw[6] = 0xdc6ad16cf270f3e2, r0Raw[7] = 0xc337c12d31a89952;

    uint512 a1, m1, r1;
    uint512 b1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *m1Raw = (uint64 *) &m1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0xca52c674f38e31c9, a1Raw[1] = 0xb71199c41abf26dd, a1Raw[2] = 0x9c8fd53b3a290e47, a1Raw[3] = 0x71c2325f96f2aaed, a1Raw[4] = 0x667f9c3cae5e4ca5, a1Raw[5] = 0x24ed9c859d3feab1, a1Raw[6] = 0x3c10571f159b10f6, a1Raw[7] = 0xa42209539095aaf4;
    b1Raw[0] = 0xc32c7c996d436749, b1Raw[1] = 0x70d17000bd64197b, b1Raw[2] = 0x205f7b1fa6d1225c, b1Raw[3] = 0x4ba3fdaa795e8bfd, b1Raw[4] = 0xe23365b60b0496f1, b1Raw[5] = 0x958021866b486389, b1Raw[6] = 0x619e0b03165001e9, b1Raw[7] = 0xde32254d3d0ff06e;
    m1Raw[0] = 0x3d742be75254a493, m1Raw[1] = 0x14ba1dc65caea826, m1Raw[2] = 0xa6987b3924ebdaea, m1Raw[3] = 0x0780d3b9499f1df6, m1Raw[4] = 0x8d6de01cd1c76fad, m1Raw[5] = 0x3ed8ca2cf9c25a10, m1Raw[6] = 0xa0f22e21acb7bba4, m1Raw[7] = 0x666a627ac4482889;
    r1Raw[0] = 0x4170423e21f69ba3, r1Raw[1] = 0x768bf644ea7bb00a, r1Raw[2] = 0x14bace7353e997ba, r1Raw[3] = 0x8265d67fef63a367, r1Raw[4] = 0x666dbc0fd8e6aafb, r1Raw[5] = 0xc68f9e00c7261166, r1Raw[6] = 0x0b53ab9ef3b642db, r1Raw[7] = 0x3f822a21877bab7f;

    uint512 a2, m2, r2;
    uint512 b2;
    uint64 *a2Raw = (uint64 *) &a2, *b2Raw = (uint64 *) &b2, *m2Raw = (uint64 *) &m2, *r2Raw = (uint64 *) &r2;

    a2Raw[0] = 0x29a29eb697e23191, a2Raw[1] = 0x697aba637e4a15cb, a2Raw[2] = 0xd54251ad044bef52, a2Raw[3] = 0xfefc352a79f020a0, a2Raw[4] = 0x96b0af1b035926ab, a2Raw[5] = 0xeba3c2898e4308c1, a2Raw[6] = 0xaa68015ced2dc868, a2Raw[7] = 0x78f516df7e93e829;
    b2Raw[0] = 0x3ce287cc9f1eacd5, b2Raw[1] = 0xe53d56bc5bb5e847, b2Raw[2] = 0xf20bf63f9057075f, b2Raw[3] = 0x10ecab3eaca769ae, b2Raw[4] = 0x070b564adc2b01d3, b2Raw[5] = 0xc4e0ca7a30387fa0, b2Raw[6] = 0xf716fa026fb56a5d, b2Raw[7] = 0xc73776d43657f5a;
    m2Raw[0] = 0x545c0634aff636f9, m2Raw[1] = 0x0a9a85309da2776e, m2Raw[2] = 0xa6f447a4cba4a617, m2Raw[3] = 0x58d33550c69a773d, m2Raw[4] = 0xb665dbb904fd75ea, m2Raw[5] = 0xfef7c4900999e41b, m2Raw[6] = 0xdecf1142af64a0b7, m2Raw[7] = 0xbca3fde833df8a37;
    r2Raw[0] = 0x753fe574c23c160f, r2Raw[1] = 0x7d4388af06e0ebbd, r2Raw[2] = 0x042962d01ee7245e, r2Raw[3] = 0xa9e8c6fd43bda93a, r2Raw[4] = 0x14250d981281561d, r2Raw[5] = 0x5185c69d4af73ff2, r2Raw[6] = 0xad7f504a268ae0e6, r2Raw[7] = 0xa2787c180f409a4c;

    uint512 a3, m3, r3;
    uint512 b3;
    uint64 *a3Raw = (uint64 *) &a3, *b3Raw = (uint64 *) &b3, *m3Raw = (uint64 *) &m3, *r3Raw = (uint64 *) &r3;

    a3Raw[0] = 0x3fbacf24c1d45e4f, a3Raw[1] = 0xfe308a069750c62c, a3Raw[2] = 0xab769a7c9047410e, a3Raw[3] = 0x59249442a23d3231, a3Raw[4] = 0xe6f6dc4191509faf, a3Raw[5] = 0x585c019e9a93eca9, a3Raw[6] = 0x3db9b37a28baeee5, a3Raw[7] = 0xd0686fbcab51726e;
    b3Raw[0] = 0xb29ebccef65d57bb, b3Raw[1] = 0x74d98e05b552a0d1, b3Raw[2] = 0xf2564296ee45c815, b3Raw[3] = 0xbe2156b2d488816f, b3Raw[4] = 0xbf6de025ff0cf311, b3Raw[5] = 0x7515887e92cc1c39, b3Raw[6] = 0x71aacc83bc7f2083, b3Raw[7] = 0x62b240a1e8285ebb;
    m3Raw[0] = 0xa01d63a608a5129d, m3Raw[1] = 0x7a6f7f3b5d5de60e, m3Raw[2] = 0x0d29ceb1332e4523, m3Raw[3] = 0x3c59d4b0865e8eea, m3Raw[4] = 0x96d269a084a473f4, m3Raw[5] = 0x61a4dcab312d02a8, m3Raw[6] = 0xf28bfb94afc63178, m3Raw[7] = 0x6519c028049c16a9;
    r3Raw[0] = 0xe16f894da36136e1, r3Raw[1] = 0xc81dc53f613f831c, r3Raw[2] = 0x7c334ebf892ef5e8, r3Raw[3] = 0xf748c902036244e6, r3Raw[4] = 0x177062f2cf454ef5, r3Raw[5] = 0x9366950fd9c9b498, r3Raw[6] = 0x555f1de8956fdbe4, r3Raw[7] = 0x1ef69538969bd707;

    // ACT
    uint512 c0 = a0.modularExponent(b0, m0);
    uint512 c1 = a1.modularExponent(b1, m1);
    uint512 c2 = a2.modularExponent(b2, m2);
    uint512 c3 = a3.modularExponent(b3, m3);

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

    a0Raw[0] = 0x46842fe8b727f59c, a0Raw[1] = 0xaf02405ffd078d6e, a0Raw[2] = 0xed6e225f1a2b55d0, a0Raw[3] = 0xbc087421dd710f6b, a0Raw[4] = 0xd7f9098dfe423cb9, a0Raw[5] = 0x13ee3e58c262c9ad, a0Raw[6] = 0x808837f26cdf4956, a0Raw[7] = 0x7745bd4992eee860, a0Raw[8] = 0x27f11116c7f02591, a0Raw[9] = 0xe5ee52912d32d831, a0Raw[10] = 0x5b9ca876900b496e, a0Raw[11] = 0xf7da0013c9fb311a, a0Raw[12] = 0x1d2e8d864dfff8d7, a0Raw[13] = 0x42adb2b3d17b7b71, a0Raw[14] = 0x5c39aae8def3c3c7, a0Raw[15] = 0x8953ea33de1e59ad;
    b0Raw[0] = 0xe7dd9540d521ff97, b0Raw[1] = 0x6a22cf29d0a9928f, b0Raw[2] = 0xa1ef859df39775a4, b0Raw[3] = 0xf1f01d84591799a6, b0Raw[4] = 0x3f76eadd986d76af, b0Raw[5] = 0xa8fc13ae34b3d471, b0Raw[6] = 0x831be00a064d65b4, b0Raw[7] = 0xe1afe63fa1664b39, b0Raw[8] = 0x1a234684739315f7, b0Raw[9] = 0xb63095602ed6d77e, b0Raw[10] = 0x2e35c1108ad4e19c, b0Raw[11] = 0x7da684693a7c3883, b0Raw[12] = 0x31ea945ad955c5f8, b0Raw[13] = 0x6853561b0f115f84, b0Raw[14] = 0xd6d24500adec0173, b0Raw[15] = 0xac0ddad1a2f4dffe;
    m0Raw[0] = 0xce7542bb44baa795, m0Raw[1] = 0xc28370fada5299d9, m0Raw[2] = 0x9e2877de15088d7f, m0Raw[3] = 0x635a7014dc51df10, m0Raw[4] = 0xa174b2bd426df7eb, m0Raw[5] = 0xd1fafffb8cbbcb19, m0Raw[6] = 0xe60740d66b28728b, m0Raw[7] = 0x242c54f3250444ec, m0Raw[8] = 0xc4d76e056ad65258, m0Raw[9] = 0x7ad636f1a7196f40, m0Raw[10] = 0x32593e6e68df3aee, m0Raw[11] = 0xa0e64a6d988732ef, m0Raw[12] = 0xe11e97ce15e4869d, m0Raw[13] = 0x964864a6d91a6508, m0Raw[14] = 0x8c17b972a4416fc1, m0Raw[15] = 0xaae11c6a21fe129f;
    r0Raw[0] = 0x9492a028225296df, r0Raw[1] = 0xa0ed2cac14ec787c, r0Raw[2] = 0x621ccb4fe19f7a02, r0Raw[3] = 0xc04a560f98920112, r0Raw[4] = 0x07bd6e4e8d675359, r0Raw[5] = 0xe0afd1e630a70bb4, r0Raw[6] = 0xf2e8d38808be5518, r0Raw[7] = 0xd9cf32a060fa9dc3, r0Raw[8] = 0x833c11e998da17e2, r0Raw[9] = 0x4bbdc52c8dcdc4e6, r0Raw[10] = 0xc0dac1f898f679b7, r0Raw[11] = 0x417eed1c361ea46f, r0Raw[12] = 0x53feceaf69e5cccc, r0Raw[13] = 0xa68458285321f1c0, r0Raw[14] = 0x5d9c3834ee4e815e, r0Raw[15] = 0x1e6e474a88c21cb9;

    uint1024 a1, m1, r1;
    uint1024 b1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *m1Raw = (uint64 *) &m1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0x8c484f0c38e39a65, a1Raw[1] = 0x3912ff49ebfaf2bd, a1Raw[2] = 0xa0c39dba6cdbb7b3, a1Raw[3] = 0x4713c7b22fe74e25, a1Raw[4] = 0xe28579283164bb3c, a1Raw[5] = 0x01d932215d40e55f, a1Raw[6] = 0x393ea17d9cee01b6, a1Raw[7] = 0xf479a8285eb8a3d7, a1Raw[8] = 0xe36dad812cfb0205, a1Raw[9] = 0x08de25805987f6e3, a1Raw[10] = 0xfc5cbd65bdd2716e, a1Raw[11] = 0x99c47c40a6056714, a1Raw[12] = 0xd913a1d6f15b51b5, a1Raw[13] = 0x998a0d60613ab0f4, a1Raw[14] = 0x321f6b0a11824824, a1Raw[15] = 0x5cf38b22af36471a;
    b1Raw[0] = 0xc5c36646f01cf63d, b1Raw[1] = 0x0753511552b35fa6, b1Raw[2] = 0xe9260033eede373a, b1Raw[3] = 0xa8d1c986b3140385, b1Raw[4] = 0xab36f59ef40e93ed, b1Raw[5] = 0xf3dd076a6a2efcc3, b1Raw[6] = 0x66bdb954d0fc42e4, b1Raw[7] = 0x9bc852e176f47602, b1Raw[8] = 0x5e2e3d56ba233a25, b1Raw[9] = 0x241f088ad3ef287b, b1Raw[10] = 0xdbc36be9f18563f5, b1Raw[11] = 0xfa3a87bb1ae2537c, b1Raw[12] = 0x2b8ec4594c8bd559, b1Raw[13] = 0xe9e1c7d16114f710, b1Raw[14] = 0x037c2baba43a71b9, b1Raw[15] = 0xcaf85935de94e6c7;
    m1Raw[0] = 0xf7a692c7bd38e603, m1Raw[1] = 0x04957e6981fa0165, m1Raw[2] = 0xb549094682fd3eee, m1Raw[3] = 0x1eac9005015fc756, m1Raw[4] = 0x08c29cbbb4648c17, m1Raw[5] = 0x9ec56ef5708063f3, m1Raw[6] = 0xd6fcfce9ad819f4e, m1Raw[7] = 0x38ad112bae56b839, m1Raw[8] = 0xdac9468ab867f493, m1Raw[9] = 0xec68b00c3c835b75, m1Raw[10] = 0x2f33430e5543242a, m1Raw[11] = 0xf7686efdfeaea35b, m1Raw[12] = 0x189a69c9bf5e5c76, m1Raw[13] = 0x4286ba088b1f6149, m1Raw[14] = 0x378c2d6da67546cd, m1Raw[15] = 0xfebc4ed2e0e540f;
    r1Raw[0] = 0xfe87a266fe162b72, r1Raw[1] = 0x7458483e414c1c8b, r1Raw[2] = 0xd776111180728cf6, r1Raw[3] = 0x8828cef67e9da13f, r1Raw[4] = 0xb7587fd160c1abc2, r1Raw[5] = 0x522ce117d74751a9, r1Raw[6] = 0x54393546bfdf65ca, r1Raw[7] = 0x662946f45d56a422, r1Raw[8] = 0xdc59391d4117ac62, r1Raw[9] = 0x893d99d915d07bab, r1Raw[10] = 0xe4b142731aa58ee5, r1Raw[11] = 0xbbc158ef3c4f347e, r1Raw[12] = 0x4cabddecad6404fe, r1Raw[13] = 0xabf9de8994aba51d, r1Raw[14] = 0x2e7f2bd10dd52480, r1Raw[15] = 0x3261578baf3eb72;

    uint1024 a2, m2, r2;
    uint1024 b2;
    uint64 *a2Raw = (uint64 *) &a2, *b2Raw = (uint64 *) &b2, *m2Raw = (uint64 *) &m2, *r2Raw = (uint64 *) &r2;

    a2Raw[0] = 0xa2a3efa2286a5f8e, a2Raw[1] = 0xd7e86a9d9194c026, a2Raw[2] = 0x46e2092654621925, a2Raw[3] = 0xd1b0baa2dc5f7299, a2Raw[4] = 0x24845489bb8a2373, a2Raw[5] = 0xc5bc8ee266861ea9, a2Raw[6] = 0xa115127aa0c14a19, a2Raw[7] = 0xfb14f47d5ece4b08, a2Raw[8] = 0x7beda3ea2cde6c88, a2Raw[9] = 0x73a923b7179dd687, a2Raw[10] = 0xb98e24c781b266c2, a2Raw[11] = 0xab3f109086d9f62a, a2Raw[12] = 0x7553305ebf117e6c, a2Raw[13] = 0x25c0e2c1fa5d550b, a2Raw[14] = 0x893963cbc00439d4, a2Raw[15] = 0xee88240aaae6b446;
    b2Raw[0] = 0x64878a7d9fba14c4, b2Raw[1] = 0x573b60034ccbad87, b2Raw[2] = 0xf9ec94c0459f96e1, b2Raw[3] = 0xc1ad21c2ab21ebe3, b2Raw[4] = 0xacade256aeec2c69, b2Raw[5] = 0x6fa04098e5cf2fa9, b2Raw[6] = 0xac1df8e94f280051, b2Raw[7] = 0xea9f01ab25c5f249, b2Raw[8] = 0x05a6d8d9103e3525, b2Raw[9] = 0x02737f0915ee684a, b2Raw[10] = 0x488642ec076c66ca, b2Raw[11] = 0x96567a81d346ead8, b2Raw[12] = 0x409c465f94a337f2, b2Raw[13] = 0xe533ae739c72e366, b2Raw[14] = 0x0ac831b1daab6b08, b2Raw[15] = 0xa1bce8e10eae5434;
    m2Raw[0] = 0x2216a14f0a577aa1, m2Raw[1] = 0x1b2e717fdc342c61, m2Raw[2] = 0x28fc240338f93c43, m2Raw[3] = 0x2e0e7f954e48e0e4, m2Raw[4] = 0x6db235bc328f2f91, m2Raw[5] = 0x064ebf69b7a1a889, m2Raw[6] = 0xd62781b8cadfd528, m2Raw[7] = 0x57e10462a06787be, m2Raw[8] = 0x953119221e95f012, m2Raw[9] = 0xd3ffceeb9233bc6b, m2Raw[10] = 0x0fe88fadc9d68d99, m2Raw[11] = 0x9e891e270ad00054, m2Raw[12] = 0xf8e20e0d7539fc3b, m2Raw[13] = 0x663d6abf24eed338, m2Raw[14] = 0x6e97bcba1c569b23, m2Raw[15] = 0xb6383c71357508ee;
    r2Raw[0] = 0x795a5ee3dcc0de01, r2Raw[1] = 0xbfe7eab85b9433c4, r2Raw[2] = 0xeb1727915a5434d6, r2Raw[3] = 0xead1a0d807201981, r2Raw[4] = 0x8f1ff26b57f5c346, r2Raw[5] = 0xf7ec8e66d7d2afa3, r2Raw[6] = 0xdf2bc7e6ec5eae5a, r2Raw[7] = 0xdf89801c6a9ecace, r2Raw[8] = 0xde19b694e827f291, r2Raw[9] = 0xbc8f96b06e0d2077, r2Raw[10] = 0x6e101686200162bb, r2Raw[11] = 0x83441f1364e86b7c, r2Raw[12] = 0xbc6d2efa2af0c556, r2Raw[13] = 0x195c3e111129cf0b, r2Raw[14] = 0x650826d6379ffa6f, r2Raw[15] = 0x4da05366d3287139;

    uint1024 a3, m3, r3;
    uint1024 b3;
    uint64 *a3Raw = (uint64 *) &a3, *b3Raw = (uint64 *) &b3, *m3Raw = (uint64 *) &m3, *r3Raw = (uint64 *) &r3;

    a3Raw[0] = 0x2fb06b46a251273a, a3Raw[1] = 0x842779ba1493b286, a3Raw[2] = 0x4e1d5176d6bd08ae, a3Raw[3] = 0x82ba9db1adfdfa1e, a3Raw[4] = 0xc8620b686e809370, a3Raw[5] = 0x2fdd85c17149af75, a3Raw[6] = 0x01550a5742909c94, a3Raw[7] = 0xbac91eaac13e5bfb, a3Raw[8] = 0x96096fba8f59aaef, a3Raw[9] = 0x33e3a39f161add75, a3Raw[10] = 0x494596b9b76b4241, a3Raw[11] = 0x520c22f313d551a3, a3Raw[12] = 0x29e5f1b791e35d26, a3Raw[13] = 0x2337197fb8dc5181, a3Raw[14] = 0xf54658e7e9496a78, a3Raw[15] = 0xa006920c1db920f8;
    b3Raw[0] = 0x676d7c8047894cc4, b3Raw[1] = 0xae22c0db53f74f48, b3Raw[2] = 0x534244ae803e0724, b3Raw[3] = 0x117163e8c39a2075, b3Raw[4] = 0x00641614f7375bad, b3Raw[5] = 0x212be32949c7546e, b3Raw[6] = 0x5cee1243c93d8934, b3Raw[7] = 0xecc569b91c080eb9, b3Raw[8] = 0x4862303258024cd7, b3Raw[9] = 0xf52aa006f3d88697, b3Raw[10] = 0x443f62b8c2c8f7f7, b3Raw[11] = 0x9815ea274e32c668, b3Raw[12] = 0xf447a5bb1401b333, b3Raw[13] = 0xce4a01f2d06f58c6, b3Raw[14] = 0xe64a58a4a342f428, b3Raw[15] = 0x26fda9e4c2d833cc;
    m3Raw[0] = 0x363ca9659c07d99d, m3Raw[1] = 0xe66ba222c2b3b0d2, m3Raw[2] = 0x747b0e16aa7bf6e9, m3Raw[3] = 0x045536d54bd89301, m3Raw[4] = 0xd45c7970f2c9d1d0, m3Raw[5] = 0x57ef40f1f56091de, m3Raw[6] = 0x0449bbfa161afa08, m3Raw[7] = 0x64c83a51baa65e40, m3Raw[8] = 0x73ff3da1dd11d555, m3Raw[9] = 0xa69e0c09545c8fc5, m3Raw[10] = 0xf15093797260d9bf, m3Raw[11] = 0x706a106223221421, m3Raw[12] = 0xaf3886e24490c09a, m3Raw[13] = 0xb68397be90212bf8, m3Raw[14] = 0x0db3e25dd9fc8bec, m3Raw[15] = 0xb8fabcc2ce3c73a1;
    r3Raw[0] = 0xb2b7f9f79a145978, r3Raw[1] = 0xe24f8b604100286e, r3Raw[2] = 0x7739255f5b4aa05e, r3Raw[3] = 0xc11fe03edc14ea8f, r3Raw[4] = 0xd512a83639634414, r3Raw[5] = 0x3592f12c74022697, r3Raw[6] = 0x7a5ff0a515e738bc, r3Raw[7] = 0x05363a383865ffeb, r3Raw[8] = 0xc8a3c2705b5d51e4, r3Raw[9] = 0xc3f40ba6fc1add46, r3Raw[10] = 0xaaab525f41706413, r3Raw[11] = 0xd8cb9574619b442d, r3Raw[12] = 0x68f3379f36b14b0b, r3Raw[13] = 0xb2fe69c8cf902920, r3Raw[14] = 0x00062be7c2cf829b, r3Raw[15] = 0x50fac124aa182f06;

    // ACT
    uint1024 c0 = a0.modularExponent(b0, m0);
    uint1024 c1 = a1.modularExponent(b1, m1);
    uint1024 c2 = a2.modularExponent(b2, m2);
    uint1024 c3 = a3.modularExponent(b3, m3);

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

    a0Raw[0] = 0x07efc95588df0555, a0Raw[1] = 0x77d45f23866faf00, a0Raw[2] = 0xacdc83dc878618e2, a0Raw[3] = 0x404d2c18f4f092d5, a0Raw[4] = 0x7149bee1daa59064, a0Raw[5] = 0x7e665dfcf7350abf, a0Raw[6] = 0x7d30d201abf27552, a0Raw[7] = 0x2b30515496a79596, a0Raw[8] = 0x089217dd4e9b1f0b, a0Raw[9] = 0x41ba4b3c7664e0f9, a0Raw[10] = 0x30e26785cc8234b5, a0Raw[11] = 0x216f6cdaad57d269, a0Raw[12] = 0xa6a5eb6bdb15e2cf, a0Raw[13] = 0xa0bb22c9e2178610, a0Raw[14] = 0x59a8450f6507af37, a0Raw[15] = 0x5200d6f6113f5157, a0Raw[16] = 0xbb01a204c2b73a62, a0Raw[17] = 0x78c8d258610eeccd, a0Raw[18] = 0x9286149075edcfc1, a0Raw[19] = 0x6473adef1e850550, a0Raw[20] = 0x2462cffd9eda4fb2, a0Raw[21] = 0x91bf5aa4e30c4df6, a0Raw[22] = 0x5af69b8749f21692, a0Raw[23] = 0x08905ec5af6d731d, a0Raw[24] = 0x62c531e6686649f6, a0Raw[25] = 0xb4714d6e4c3c03f5, a0Raw[26] = 0xbeb1a382479cb1e2, a0Raw[27] = 0x750ee9ab48c98358, a0Raw[28] = 0xda70e918fa81d890, a0Raw[29] = 0x78e406ec49c358d8, a0Raw[30] = 0x2fc15cfc883a6493, a0Raw[31] = 0xea0de1d1b74e5bf8;
    b0Raw[0] = 0x332ea64b31f07813, b0Raw[1] = 0xc432263d44ceb2cc, b0Raw[2] = 0x7c23d1c5164cbd06, b0Raw[3] = 0x1e32d96eb4ee62b7, b0Raw[4] = 0xfca7d29d1e8acbcf, b0Raw[5] = 0x8aec2d94721cc94a, b0Raw[6] = 0x6588b7752d3255ed, b0Raw[7] = 0x6854bc03220ce3fe, b0Raw[8] = 0x1621ad3547b2f55d, b0Raw[9] = 0x56fb2e37a4014d68, b0Raw[10] = 0xeaa1d8a660ca835f, b0Raw[11] = 0xe15e47b18810d1d9, b0Raw[12] = 0x4a19981328f4732e, b0Raw[13] = 0xe668017addc8d90c, b0Raw[14] = 0xe491a363e1a15e48, b0Raw[15] = 0x6f832293be14702b, b0Raw[16] = 0x1bac35a189a18704, b0Raw[17] = 0x570fcf2a96be0f86, b0Raw[18] = 0x8b9724b6f1fccff9, b0Raw[19] = 0x373bb265459fd21f, b0Raw[20] = 0x05c2a7d529834724, b0Raw[21] = 0x420215695fab61a4, b0Raw[22] = 0xbbf3f2a9eadece99, b0Raw[23] = 0xaf444f962ff05fae, b0Raw[24] = 0xf0219c92b8d692fa, b0Raw[25] = 0x4cf07abc0ac225f3, b0Raw[26] = 0xf8bb1155ccc4f2d7, b0Raw[27] = 0x9a12defddd8b50b9, b0Raw[28] = 0x76e155141275a0f9, b0Raw[29] = 0x0a382308d3dfa66d, b0Raw[30] = 0x5086e0d6fca95f5e, b0Raw[31] = 0xdda7e2ff5f536fba;
    m0Raw[0] = 0xb361d8adefef18e1, m0Raw[1] = 0x20805324accf1d8c, m0Raw[2] = 0x73d0d3bbf43d202d, m0Raw[3] = 0xd9d5fa35e62daa3c, m0Raw[4] = 0xf6a1883bed8860ca, m0Raw[5] = 0xc9a54ca75763934e, m0Raw[6] = 0xa70f22931e23dbd5, m0Raw[7] = 0x1a9bc212cd8f7898, m0Raw[8] = 0x8e713857185aaeb6, m0Raw[9] = 0xc1b8c8e4059351de, m0Raw[10] = 0x3f4173f5162d7e8c, m0Raw[11] = 0x37fb3f6698451c4d, m0Raw[12] = 0x32192b8a65ceb17a, m0Raw[13] = 0xd8c09106fa9390d1, m0Raw[14] = 0xa9a0e52359b8f57d, m0Raw[15] = 0x8ad7dd9d5c7c0995, m0Raw[16] = 0x4c6dfb7e1945f90c, m0Raw[17] = 0x03d8f257af22ad81, m0Raw[18] = 0x3bf5964d5db9d90d, m0Raw[19] = 0x2581ac0143741c48, m0Raw[20] = 0x06be325c7df407ba, m0Raw[21] = 0x52dfb797c6f52e34, m0Raw[22] = 0xc43e45814ee05e36, m0Raw[23] = 0xf4b391a990fed5f9, m0Raw[24] = 0x9d31eb13f05770b2, m0Raw[25] = 0x9b6f164822c7655c, m0Raw[26] = 0x7bb05288ead6fa6a, m0Raw[27] = 0xc9221e5a89ee7dfa, m0Raw[28] = 0xecffb890b4164ca8, m0Raw[29] = 0x231e23eff2175014, m0Raw[30] = 0x6e70d2475a8a20aa, m0Raw[31] = 0x7a01d884a6a45b26;
    r0Raw[0] = 0x44eec541a1264a9b, r0Raw[1] = 0x0e0f95c9d842094f, r0Raw[2] = 0xdf7d4cd4064b710e, r0Raw[3] = 0x5f54a43329345965, r0Raw[4] = 0x279ff8d945a6d5c1, r0Raw[5] = 0x98cbd01e6abe69ce, r0Raw[6] = 0xf26942e879c88387, r0Raw[7] = 0x8293e25133e6731a, r0Raw[8] = 0xe30cd121e9f2a623, r0Raw[9] = 0xd8460e340ffc78f6, r0Raw[10] = 0xe07bb3a3d1e303af, r0Raw[11] = 0x7e69f127809ae743, r0Raw[12] = 0xd7d9fc988ceb8c75, r0Raw[13] = 0xce3301c895384753, r0Raw[14] = 0x0bf3b49cbb5b165c, r0Raw[15] = 0xe51843e09e23163b, r0Raw[16] = 0x14e9bf4786dda421, r0Raw[17] = 0xe23f4c926f06fee1, r0Raw[18] = 0xa05fc92b75a88c33, r0Raw[19] = 0x45beccd235276ba6, r0Raw[20] = 0x12ed54856140fc1c, r0Raw[21] = 0x7084041973087d7a, r0Raw[22] = 0xe96e2cf8f110216b, r0Raw[23] = 0x6460c0bb37d50529, r0Raw[24] = 0x6f04f643c8fa7a5e, r0Raw[25] = 0x629c2d8f9fdacd98, r0Raw[26] = 0x8a218002ffa9b31b, r0Raw[27] = 0x5f25bcbf4ea03180, r0Raw[28] = 0x5e48157e846cb41b, r0Raw[29] = 0x996145477e375ef4, r0Raw[30] = 0x5219a93ac3e1a589, r0Raw[31] = 0x2f705e89be4fda1a;

    uint2048 a1, m1, r1;
    uint2048 b1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *m1Raw = (uint64 *) &m1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0xf80f811f1ffee4ac, a1Raw[1] = 0x3c400b9d3ca8d228, a1Raw[2] = 0x985b37b274809442, a1Raw[3] = 0x02d6e227d2b6c563, a1Raw[4] = 0x277ee83da15367bf, a1Raw[5] = 0x0652f885a17b3d92, a1Raw[6] = 0xb54fb7337e8e70bd, a1Raw[7] = 0x2ecee0411a05098f, a1Raw[8] = 0x3c8de756a97791a4, a1Raw[9] = 0x55054759a71b3aa3, a1Raw[10] = 0xa50bef57252be89b, a1Raw[11] = 0x5449379ba6cab595, a1Raw[12] = 0xd521b41427670124, a1Raw[13] = 0x5de3af694ec5a7f4, a1Raw[14] = 0x1447f9ac48807f5a, a1Raw[15] = 0x0ded32a3d2eb482f, a1Raw[16] = 0xc71289a6e719007f, a1Raw[17] = 0xd5c66e0d1eea97d5, a1Raw[18] = 0x984f55bb86b41085, a1Raw[19] = 0x10626335fb31a0c8, a1Raw[20] = 0xe9579cb81ed80d27, a1Raw[21] = 0x8238afe6b1b4d53a, a1Raw[22] = 0x987e7ddb96d9b5b5, a1Raw[23] = 0x04e626a115482e3a, a1Raw[24] = 0xf534e07633718fe6, a1Raw[25] = 0x0fe86d52d668a78a, a1Raw[26] = 0x54ce6e12f89afe2b, a1Raw[27] = 0xac00215d081fd4c4, a1Raw[28] = 0x82b16e73725d21b5, a1Raw[29] = 0xce63386a3a9ea1d8, a1Raw[30] = 0x9d948e2d865c10ca, a1Raw[31] = 0x4d9370193ecae825;
    b1Raw[0] = 0x9c5202e02cab7f79, b1Raw[1] = 0xf3540e0e94f7b649, b1Raw[2] = 0x98b120adf970614a, b1Raw[3] = 0xec8736556fd8af0e, b1Raw[4] = 0xb8a72d2c2402aea3, b1Raw[5] = 0x99fd888b7d7db0a6, b1Raw[6] = 0x8255c91280e6b8c8, b1Raw[7] = 0xb6b3d7a43a6c2be1, b1Raw[8] = 0x267aaaedf478087b, b1Raw[9] = 0xb081dc83fd630666, b1Raw[10] = 0x2bca3bce8133eece, b1Raw[11] = 0xcc9b6e2dd2bc8271, b1Raw[12] = 0xf35652ad17afa69e, b1Raw[13] = 0x4cce5f47222cffc3, b1Raw[14] = 0xf9d88aec70e08cbb, b1Raw[15] = 0x9f42e057227ec788, b1Raw[16] = 0xd0df317fbe493889, b1Raw[17] = 0x8f12fa9f16c9235a, b1Raw[18] = 0x8f7eb095c4aa2b38, b1Raw[19] = 0x6d47230effada55b, b1Raw[20] = 0xed532e616ecb4317, b1Raw[21] = 0xcaa8007d2856970a, b1Raw[22] = 0x057c7b7586d002c0, b1Raw[23] = 0x92f0bc7acf75a9e6, b1Raw[24] = 0xbaa9cf9227794682, b1Raw[25] = 0xd5ba1d833a2ad4f8, b1Raw[26] = 0xbcaa055b6f4cee31, b1Raw[27] = 0xac26524b0d69be8a, b1Raw[28] = 0x21f98a30ec9e7437, b1Raw[29] = 0xbcc5d024d5eda0a1, b1Raw[30] = 0x2239d2196d0abc1b, b1Raw[31] = 0x77a73b6eee01f1d3;
    m1Raw[0] = 0x1b1959b766dc42dd, m1Raw[1] = 0xa53fe6f1993d3709, m1Raw[2] = 0x76be22b2f11ea301, m1Raw[3] = 0xf7044a014023bd0e, m1Raw[4] = 0xffbd9b09611bf4ae, m1Raw[5] = 0x765b510768493478, m1Raw[6] = 0x797c6d687e34195b, m1Raw[7] = 0x332efff5db76740c, m1Raw[8] = 0xc9e1ba75b60c1ed6, m1Raw[9] = 0xe7d53415e551f308, m1Raw[10] = 0x1b9e6efa0433c7a8, m1Raw[11] = 0x05630e4f77dad654, m1Raw[12] = 0x6d7404a2cac33594, m1Raw[13] = 0xcc84b54860592440, m1Raw[14] = 0xec58b0bfa4abc5e5, m1Raw[15] = 0x70f5c0dc09da91df, m1Raw[16] = 0x3d3c852582486429, m1Raw[17] = 0x13d44796d2e3ccd1, m1Raw[18] = 0xcc5f171094e87366, m1Raw[19] = 0x14f41a5afe1dab34, m1Raw[20] = 0x856c6f0424e1d837, m1Raw[21] = 0x0bd1857a405914d2, m1Raw[22] = 0x8c82e57f734366f3, m1Raw[23] = 0xb1dcff4a18ac05d5, m1Raw[24] = 0x19967c1b5c8fe64c, m1Raw[25] = 0xf527c01137f3081b, m1Raw[26] = 0xb4cb8a4d5aa8b583, m1Raw[27] = 0x03c8b346294ec2b4, m1Raw[28] = 0x347e9f726f093ca0, m1Raw[29] = 0xc7b6d4e53c9693cf, m1Raw[30] = 0x854444c66fea2e03, m1Raw[31] = 0xc1992ca5ac62212e;
    r1Raw[0] = 0x9ef34d4e26ad10a3, r1Raw[1] = 0x6c67d8e1b6ad327c, r1Raw[2] = 0xaed428786ec21627, r1Raw[3] = 0x07f7870a48f48d7e, r1Raw[4] = 0x9ba9b8a1446bb5e6, r1Raw[5] = 0xf40841bfa273c31b, r1Raw[6] = 0x7731ba97d6bcda74, r1Raw[7] = 0xd3e8581b6784ce7c, r1Raw[8] = 0x9b47f6b3bb04a09f, r1Raw[9] = 0xbced8d0969fbafe5, r1Raw[10] = 0x45993aac4c89ae77, r1Raw[11] = 0xa0dc4fc9e7eb2670, r1Raw[12] = 0x8d21cb81623a313d, r1Raw[13] = 0x953208efc9e01db7, r1Raw[14] = 0x0a4b2f84b311caf9, r1Raw[15] = 0xbc15e952809ee869, r1Raw[16] = 0x423c239e8a99d2c2, r1Raw[17] = 0xb9214d37a724d980, r1Raw[18] = 0x860094165da719ed, r1Raw[19] = 0x8d713c4f49f9bac4, r1Raw[20] = 0x1c5e10a3f77c718d, r1Raw[21] = 0x6ba1194f4456e4e7, r1Raw[22] = 0xc7a8fb750a205890, r1Raw[23] = 0xac53b06e8078d4a2, r1Raw[24] = 0x833938643781b7c3, r1Raw[25] = 0xf03468d21d701bc1, r1Raw[26] = 0xee0c1aa473aa22c2, r1Raw[27] = 0x8ada09a37aa1b58d, r1Raw[28] = 0x3cb8f9c44fa4d574, r1Raw[29] = 0xbfe1cde3c10eeb9a, r1Raw[30] = 0x1cb1af4baf4dc4d8, r1Raw[31] = 0x746c412b8f564458;

    uint2048 a2, m2, r2;
    uint2048 b2;
    uint64 *a2Raw = (uint64 *) &a2, *b2Raw = (uint64 *) &b2, *m2Raw = (uint64 *) &m2, *r2Raw = (uint64 *) &r2;

    a2Raw[0] = 0xbeb99d467c0b772c, a2Raw[1] = 0xc511c7a403519b23, a2Raw[2] = 0x6018ae5a358bcefc, a2Raw[3] = 0x8bdb77d8acc8f69f, a2Raw[4] = 0x7bd4ba68c7790239, a2Raw[5] = 0xafc58f2629220e72, a2Raw[6] = 0xb00b5046474c4532, a2Raw[7] = 0xefa2a16cee0e6302, a2Raw[8] = 0xf30c7ec5a9e3b9f0, a2Raw[9] = 0x036143451ea95aee, a2Raw[10] = 0xa121bc0095c3fed4, a2Raw[11] = 0x26914ae87f5aba5b, a2Raw[12] = 0xa4ba92e5f2558dbf, a2Raw[13] = 0x39a08a38d90f1664, a2Raw[14] = 0x20e0c6c03e95208e, a2Raw[15] = 0x27f8c90ed8868f12, a2Raw[16] = 0x1fb94e6174c9947d, a2Raw[17] = 0xad8ffde49b1e6dc4, a2Raw[18] = 0x48e084cde3b83ece, a2Raw[19] = 0xebbcf52e3d020455, a2Raw[20] = 0x58b0282f4a904ea8, a2Raw[21] = 0x6e199079df7442d2, a2Raw[22] = 0x63304b777e1ca600, a2Raw[23] = 0xe9ca0481c20bf1b0, a2Raw[24] = 0x54f8f2fb9d10a99e, a2Raw[25] = 0xde4330cc07817c52, a2Raw[26] = 0x485503f9de7b6770, a2Raw[27] = 0xf910482e94f6d16e, a2Raw[28] = 0x948ff1064852e2b2, a2Raw[29] = 0xc4667b639d8ad4f1, a2Raw[30] = 0x03bd546d00006561, a2Raw[31] = 0xd324da03783c7921;
    b2Raw[0] = 0x31ab19b929a57770, b2Raw[1] = 0x13933d906ccabcd3, b2Raw[2] = 0x7ae9e7e9b8383fb7, b2Raw[3] = 0xbf21f5a60bce2b99, b2Raw[4] = 0xf782ebaad7bbf172, b2Raw[5] = 0xbeb142710cddc334, b2Raw[6] = 0xa967e4f51159a625, b2Raw[7] = 0x8dd450c34ffcaadf, b2Raw[8] = 0x735cd8baa091b32f, b2Raw[9] = 0xba8062712666349a, b2Raw[10] = 0xba669e396317b6b5, b2Raw[11] = 0x65a5cb1880b87261, b2Raw[12] = 0x9f8aa366f7e26908, b2Raw[13] = 0xda200dc0f6af07d1, b2Raw[14] = 0x0de9dd664a05a05d, b2Raw[15] = 0x94cd6188795cade6, b2Raw[16] = 0x367ed8570ae2c3f0, b2Raw[17] = 0xf5274699d1be698c, b2Raw[18] = 0x1f62c51faf1459a0, b2Raw[19] = 0x33059de4a0339663, b2Raw[20] = 0x19393db50b3335e9, b2Raw[21] = 0xe070d6e1dda12bdd, b2Raw[22] = 0x3b27f5175c3f9580, b2Raw[23] = 0x0a2baced485f065f, b2Raw[24] = 0x823145b0bab631fa, b2Raw[25] = 0xd2feda061c0ec42d, b2Raw[26] = 0x7197225b321c84a4, b2Raw[27] = 0x6d3fadd37f2d6daa, b2Raw[28] = 0x34872ab82b7f5677, b2Raw[29] = 0x9ed70c566fc15126, b2Raw[30] = 0x3f02d1ca1fa8d350, b2Raw[31] = 0xae3687506000de90;
    m2Raw[0] = 0x78235d7173ad67b9, m2Raw[1] = 0x2a891aa9eaef853b, m2Raw[2] = 0xd9ec297edc40f36e, m2Raw[3] = 0x262ce5d0b96a7818, m2Raw[4] = 0xc1ee2cfc5be678db, m2Raw[5] = 0xeb30fd533f51eafa, m2Raw[6] = 0x0b6923cf9742a1d3, m2Raw[7] = 0x268b526ac3236cae, m2Raw[8] = 0xb2f28f85c7371107, m2Raw[9] = 0xfb93762d1feef480, m2Raw[10] = 0xf6eebafb6220bc14, m2Raw[11] = 0xdab072afda1ba4b6, m2Raw[12] = 0xa5b5acf4d5bb268a, m2Raw[13] = 0x24dbdbe29d352938, m2Raw[14] = 0x8ce63774daeb1351, m2Raw[15] = 0x190238d4525d504b, m2Raw[16] = 0x92e749e8c758186c, m2Raw[17] = 0x9e51f0e3f1a2731c, m2Raw[18] = 0xb92ceb020238fd1b, m2Raw[19] = 0xc1b3279aa52d0211, m2Raw[20] = 0x027c2b8c335ec16c, m2Raw[21] = 0x20448b9fc534310f, m2Raw[22] = 0x82b58f3a9178a802, m2Raw[23] = 0x3067b98a5fd16e5b, m2Raw[24] = 0xcaf7cf08112c1945, m2Raw[25] = 0x93d618e2447b4964, m2Raw[26] = 0x58e161a350bcff04, m2Raw[27] = 0x7a82ba68fd300644, m2Raw[28] = 0x684ffcf341a4d6c7, m2Raw[29] = 0x92269ae60dc139bb, m2Raw[30] = 0xdf7c26c7d774b4f9, m2Raw[31] = 0x79f3e059465c562e;
    r2Raw[0] = 0x4dabb7ca014a3c35, r2Raw[1] = 0x1f201cf038f007aa, r2Raw[2] = 0x6af0805dad2bfb08, r2Raw[3] = 0x87554a1d61c65293, r2Raw[4] = 0xe92a9db1ed27b5ba, r2Raw[5] = 0x61590b9300dbc1c6, r2Raw[6] = 0xd2dc160295aff34c, r2Raw[7] = 0xe72fc9eb776676eb, r2Raw[8] = 0x37df2675bb15edbb, r2Raw[9] = 0x35fb13124fd74cb0, r2Raw[10] = 0x6b354fcf28ad02fa, r2Raw[11] = 0x34d585f8ca822da8, r2Raw[12] = 0xb0bab76522349782, r2Raw[13] = 0xb4543f128f57f0c0, r2Raw[14] = 0xda23875b94aff7d6, r2Raw[15] = 0x1f83396513626b14, r2Raw[16] = 0xffff195ebcdf3984, r2Raw[17] = 0xf71b0e056a41d5d2, r2Raw[18] = 0xb7fe3903d58716db, r2Raw[19] = 0x77968d4d13f884d0, r2Raw[20] = 0xc5843f23c12f34d2, r2Raw[21] = 0x7076dea03fcd81c2, r2Raw[22] = 0x08367bb21b5601ac, r2Raw[23] = 0xc7b7084b7728947b, r2Raw[24] = 0xb781142ef192b3d0, r2Raw[25] = 0x1538de20aca523d0, r2Raw[26] = 0xc8d377008d7fd63d, r2Raw[27] = 0x3812e08c152b1185, r2Raw[28] = 0x84d00849cfde93b5, r2Raw[29] = 0xe46d25b8e3b56a19, r2Raw[30] = 0xaf8cd2fff1989c5f, r2Raw[31] = 0x263b5b46dcbf7644;

    uint2048 a3, m3, r3;
    uint2048 b3;
    uint64 *a3Raw = (uint64 *) &a3, *b3Raw = (uint64 *) &b3, *m3Raw = (uint64 *) &m3, *r3Raw = (uint64 *) &r3;

    a3Raw[0] = 0x2c46d5b87c3243e1, a3Raw[1] = 0xe8ab0eb4f2d6e182, a3Raw[2] = 0x5e271c6c2e141c61, a3Raw[3] = 0x45e431b88e1a5247, a3Raw[4] = 0xc9d433abac3ab026, a3Raw[5] = 0x998c5801414ff10d, a3Raw[6] = 0x069f10015eaa3b6a, a3Raw[7] = 0x1e8797b776264594, a3Raw[8] = 0x0e13face3fa7878c, a3Raw[9] = 0x97091ac9a5a76005, a3Raw[10] = 0x091461f85475c069, a3Raw[11] = 0xd7cb1a0c8418c689, a3Raw[12] = 0x406d3e35b79e4447, a3Raw[13] = 0x9c03a08b0501d210, a3Raw[14] = 0xd7a18836541e03c0, a3Raw[15] = 0x132226e7d1fb14a8, a3Raw[16] = 0x714f9ec09f1e6da7, a3Raw[17] = 0xef803e9cb9ccde01, a3Raw[18] = 0x5ce019f281a2295a, a3Raw[19] = 0x21606ffbdb9ea224, a3Raw[20] = 0xa30dde8a558b0ab0, a3Raw[21] = 0xfb2a91547413fd13, a3Raw[22] = 0xe4f540d5f7904dd2, a3Raw[23] = 0x598b5da5dc6340ca, a3Raw[24] = 0x16b03d7acbd79ea4, a3Raw[25] = 0x3c538f9d5c01f24a, a3Raw[26] = 0x5419cfe91d24051b, a3Raw[27] = 0xc72df3ac29a78f31, a3Raw[28] = 0x1c3535bb6300f5e5, a3Raw[29] = 0x504633c5b68d3bc0, a3Raw[30] = 0x76a97a501935b23d, a3Raw[31] = 0xf9d5d22d215dce32;
    b3Raw[0] = 0xbc3fba52167c1bd5, b3Raw[1] = 0xc73e794386bb0859, b3Raw[2] = 0x70a2da85ef5dd168, b3Raw[3] = 0xfd0f03f0afcf05a0, b3Raw[4] = 0xb0f90ae404bed734, b3Raw[5] = 0xeefad4dbf485e91c, b3Raw[6] = 0xe1ba6d345c4b9191, b3Raw[7] = 0x146bb0bee7f942c6, b3Raw[8] = 0xd1defbf567807387, b3Raw[9] = 0xf26ab0c886fbc195, b3Raw[10] = 0xcbc80d7dd0746caa, b3Raw[11] = 0x55f2295953e6eedd, b3Raw[12] = 0x06ac073e93a8a65b, b3Raw[13] = 0xb57eb68a344aac0d, b3Raw[14] = 0x5837b8728c91e7bd, b3Raw[15] = 0x0ce4b9dfac179975, b3Raw[16] = 0xad616342dcf36f5e, b3Raw[17] = 0x2e73da05458053f9, b3Raw[18] = 0x50ff746614a34389, b3Raw[19] = 0x9e9f442bc8ce7520, b3Raw[20] = 0x0ae22c706d730a63, b3Raw[21] = 0x48d242614a9b00fa, b3Raw[22] = 0xb208766212986d84, b3Raw[23] = 0xc2ccce60d5496e48, b3Raw[24] = 0x02b460e11bf8bb96, b3Raw[25] = 0x84a94af8f2796f3e, b3Raw[26] = 0x4a6ef951e5422446, b3Raw[27] = 0xf27ba85d4ed8e413, b3Raw[28] = 0x20f5cd88b3408d01, b3Raw[29] = 0xd46a7214b3978962, b3Raw[30] = 0xa2ea2d67ecdc29e7, b3Raw[31] = 0x8f0fe480170fa983;
    m3Raw[0] = 0x70f6b545a6d75c4f, m3Raw[1] = 0xd39f0c4a77b52065, m3Raw[2] = 0x428e8f48c5924597, m3Raw[3] = 0x56a2fd1fd555822e, m3Raw[4] = 0x8ddd88259a467447, m3Raw[5] = 0x90d3ef218cbf24cd, m3Raw[6] = 0x5ab58a5dd9c49c69, m3Raw[7] = 0xffe4bed94b3b5570, m3Raw[8] = 0x0efaf29ce61bd959, m3Raw[9] = 0x184e043505f0281b, m3Raw[10] = 0xc2ee0f076bd906c4, m3Raw[11] = 0xceb834d02bc18f1e, m3Raw[12] = 0xcaaf436b4b753554, m3Raw[13] = 0xb0964ada7a4c70d0, m3Raw[14] = 0x476f8783d41e2bf7, m3Raw[15] = 0x1f3e18cbe20bbc74, m3Raw[16] = 0x5d1e38787179fc2f, m3Raw[17] = 0xb0654a06672d0829, m3Raw[18] = 0xf3ef69ce2a89b425, m3Raw[19] = 0x706c701ce36a64d4, m3Raw[20] = 0xa6e13f35febc2848, m3Raw[21] = 0xfb2af29f66d6201f, m3Raw[22] = 0xeddfc3a0a34f505d, m3Raw[23] = 0x85125b4a0a2e604e, m3Raw[24] = 0xd45fe448ef80ecfa, m3Raw[25] = 0xf5255cc5e6196f35, m3Raw[26] = 0xc87addf58a7c5445, m3Raw[27] = 0x5759c64d03de503b, m3Raw[28] = 0xe7aaa4b29a2156b3, m3Raw[29] = 0xd6cdfe97b75f3fa7, m3Raw[30] = 0x337de9f26cc9bb3d, m3Raw[31] = 0xd4e0bc1917518546;
    r3Raw[0] = 0x2d9ae6b0e4b46188, r3Raw[1] = 0x0f53e8caf2c5f743, r3Raw[2] = 0x1ad92e89db216f0a, r3Raw[3] = 0x9318c42590a724c5, r3Raw[4] = 0x1c1f3a286e975b5f, r3Raw[5] = 0xa3f53e940824f4c3, r3Raw[6] = 0xd2f6b9c9941dc678, r3Raw[7] = 0x3cba5c90c74f8b9b, r3Raw[8] = 0x5037c75d16e8d0d3, r3Raw[9] = 0xe2bc2e7442b3c6f4, r3Raw[10] = 0xfb8602b1f58453cb, r3Raw[11] = 0x963cbb8ea37f2ea0, r3Raw[12] = 0x294baed4e113db1f, r3Raw[13] = 0x5d0a79bcfcc54a11, r3Raw[14] = 0xec128591fb87fb58, r3Raw[15] = 0x0bb97fcc7263a143, r3Raw[16] = 0x06457a125e1d73e8, r3Raw[17] = 0xe93081db79150375, r3Raw[18] = 0x7f1119133f93c25c, r3Raw[19] = 0x3742652a51987010, r3Raw[20] = 0x53d9589eacedf17d, r3Raw[21] = 0x7f05b6623b89fc6d, r3Raw[22] = 0x381e54c7a5987a0f, r3Raw[23] = 0x600b031d1be2ae8a, r3Raw[24] = 0x8439dcb2b5f67d73, r3Raw[25] = 0x52a4ec7182ae5c66, r3Raw[26] = 0xbc6260595ec7725f, r3Raw[27] = 0xfaabb33d0543cbc7, r3Raw[28] = 0x6d5333be329587cd, r3Raw[29] = 0x931d2b196c967e18, r3Raw[30] = 0x88a372c51d9d5483, r3Raw[31] = 0x8509aab8c4c4e274;

    // ACT
    uint2048 c0 = a0.modularExponent(b0, m0);
    uint2048 c1 = a1.modularExponent(b1, m1);
    uint2048 c2 = a2.modularExponent(b2, m2);
    uint2048 c3 = a3.modularExponent(b3, m3);

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
    ASSERT_EQ(c2, r2);
    ASSERT_EQ(c3, r3);
}