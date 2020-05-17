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

    a0Raw[0] = 0x5b316fb6dbcdfc59, a0Raw[1] = 0xb48ebc2fd5c5c746;
    b0Raw[0] = 0xbfc30fad7608e9b6, b0Raw[1] = 0x4fdb973d38b35e28;
    x0Raw[0] = 0x85e9b1064a9b6f1d, x0Raw[1] = 0x3e364c1d662d42e;
    y0Raw[0] = 0x46466fe7e08eab42, y0Raw[1] = 0xf7356d0e3f0bf750;

    uint128 a1, y1;
    uint128 b1, x1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *x1Raw = (uint64 *) &x1, *y1Raw = (uint64 *) &y1;

    a1Raw[0] = 0xd321e78771e65cef, a1Raw[1] = 0x8a27fff61d5c4075;
    b1Raw[0] = 0xc9a6e34a9e2aae8c, b1Raw[1] = 0x27218da48b2ac549;
    x1Raw[0] = 0xee49391565a72dc7, x1Raw[1] = 0xf258c5fd10f3144;
    y1Raw[0] = 0x0fb0f9d9800ccdda, y1Raw[1] = 0xca85eaee778288f2;

    uint128 a2, y2;
    uint128 b2, x2;
    uint64 *a2Raw = (uint64 *) &a2, *b2Raw = (uint64 *) &b2, *x2Raw = (uint64 *) &x2, *y2Raw = (uint64 *) &y2;

    a2Raw[0] = 0x0908da1b36141194, a2Raw[1] = 0x179b4f3710f30df;
    b2Raw[0] = 0xdc7f331f5ecc6cae, b2Raw[1] = 0xcd6d1b2fc84437bd;
    x2Raw[0] = 0xe44f94bbfdb45b52, x2Raw[1] = 0x14f3a41394909a1b;
    y2Raw[0] = 0x1221de5994d276fb, y2Raw[1] = 0xffd97a247e2f8441;

    uint128 a3, y3;
    uint128 b3, x3;
    uint64 *a3Raw = (uint64 *) &a3, *b3Raw = (uint64 *) &b3, *x3Raw = (uint64 *) &x3, *y3Raw = (uint64 *) &y3;

    a3Raw[0] = 0x09a1f84bd8a594d3, a3Raw[1] = 0xe9955abc86a04491;
    b3Raw[0] = 0xe031c2365383b78b, b3Raw[1] = 0xc80cb32ce915ed76;
    x3Raw[0] = 0xd7a3a7f27c706b31, x3Raw[1] = 0x6215e5f9a98dca2a;
    y3Raw[0] = 0xf33ff31d67dedb9a, y3Raw[1] = 0x8d78fe49ab9eecb7;

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

    a0Raw[0] = 0x32e7da14e1a45526, a0Raw[1] = 0x85c50220e256145d, a0Raw[2] = 0x3be4123e5367e15f, a0Raw[3] = 0xbbf73c6bc75bea8f;
    b0Raw[0] = 0x233dd70dc65cfb6b, b0Raw[1] = 0x5a7838a7e77000a7;
    x0Raw[0] = 0x6262b88535406ccb, x0Raw[1] = 0x39550205a2b4919;
    y0Raw[0] = 0x23a44516e2d3975d, y0Raw[1] = 0x6a147f736ac71f4b, y0Raw[2] = 0xe99e5ac64ddb8ced, y0Raw[3] = 0xf88e20f455f10430;

    uint256 a1, y1;
    uint128 b1, x1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *x1Raw = (uint64 *) &x1, *y1Raw = (uint64 *) &y1;

    a1Raw[0] = 0x9547874116fe1947, a1Raw[1] = 0x3cbcce1b43865c07, a1Raw[2] = 0x8f3cb8e2a7a0aba6, a1Raw[3] = 0xdec5efaa8b61d312;
    b1Raw[0] = 0xc2412538971e576c, b1Raw[1] = 0x686a4e0076aba2d3;
    x1Raw[0] = 0xbd98228bc083c2ef, x1Raw[1] = 0x26750998442e7e52;
    y1Raw[0] = 0x4174ca37fb2404ea, y1Raw[1] = 0x6bd019eaab01fa4d, y1Raw[2] = 0xb2ee4dba0c71dc12, y1Raw[3] = 0xadf34e71c7a4db3a;

    uint256 a2, y2;
    uint128 b2, x2;
    uint64 *a2Raw = (uint64 *) &a2, *b2Raw = (uint64 *) &b2, *x2Raw = (uint64 *) &x2, *y2Raw = (uint64 *) &y2;

    a2Raw[0] = 0x117c908030827b03, a2Raw[1] = 0x9c4afaec6035c835, a2Raw[2] = 0xe53be5f5121178a2, a2Raw[3] = 0x308fbcc18303d3c7;
    b2Raw[0] = 0x32221b1f9427fd0a, b2Raw[1] = 0xd84aac40375034cb;
    x2Raw[0] = 0x48455cbc3d8dff91, x2Raw[1] = 0xefd4ac0ef0edf1be;
    y2Raw[0] = 0x4bf6d3ec227ec0bb, y2Raw[1] = 0x1752bb162bec9bac, y2Raw[2] = 0x9092902ef78a0f7d, y2Raw[3] = 0x3a15aff6972d513;

    uint256 a3, y3;
    uint128 b3, x3;
    uint64 *a3Raw = (uint64 *) &a3, *b3Raw = (uint64 *) &b3, *x3Raw = (uint64 *) &x3, *y3Raw = (uint64 *) &y3;

    a3Raw[0] = 0xc1c8a1354b19a3e3, a3Raw[1] = 0xe3bd19a63238e700, a3Raw[2] = 0x932f41cf491c8133, a3Raw[3] = 0xde0b98453068cb98;
    b3Raw[0] = 0x9ffc35e926ca11f2, b3Raw[1] = 0x40ec81937e4ead0;
    x3Raw[0] = 0x76fcf09ec2189125, x3Raw[1] = 0xffa4c7f817d3067d;
    y3Raw[0] = 0x1190ecef072f8aa1, y3Raw[1] = 0xe88c9ae76f22a185, y3Raw[2] = 0x848b529e467c811c, y3Raw[3] = 0x137fa00916cc551c;

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

    a0Raw[0] = 0x34536644bf3b73aa, a0Raw[1] = 0x5036762974f0b918, a0Raw[2] = 0x52b6b00a55f6c9c6, a0Raw[3] = 0xb578f54a7b866ba1;
    b0Raw[0] = 0x7a854fa13aa5e2e5, b0Raw[1] = 0x9a593c412a185488, b0Raw[2] = 0xbfe1620b751132cf, b0Raw[3] = 0xa4318aed01f1c9a1;
    x0Raw[0] = 0xedb8ddf029af52a3, x0Raw[1] = 0xba63f96c25638304, x0Raw[2] = 0x8be88ec1e2c9f03e, x0Raw[3] = 0x23374810fad9d657;
    y0Raw[0] = 0x6d4a0c00f8034087, y0Raw[1] = 0x9b7428abff2ba76a, y0Raw[2] = 0x2081590e3f08d707, y0Raw[3] = 0xd913fdf30fc77d13;

    uint256 a1, y1;
    uint256 b1, x1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *x1Raw = (uint64 *) &x1, *y1Raw = (uint64 *) &y1;

    a1Raw[0] = 0x1da96235e2c445e5, a1Raw[1] = 0x1d1785652f730698, a1Raw[2] = 0x0787791073b160f0, a1Raw[3] = 0x64ae65418cc39a0;
    b1Raw[0] = 0xa9e018d9e1b8fc07, b1Raw[1] = 0xc5183926178ed94e, b1Raw[2] = 0xbd6121d2629f187c, b1Raw[3] = 0x671a549db19d3fd9;
    x1Raw[0] = 0x93eaa0c05f67c127, x1Raw[1] = 0x6681090e6bc14337, x1Raw[2] = 0x637725fd9e89963a, x1Raw[3] = 0xfe5d3ba59d25d8b7;
    y1Raw[0] = 0x8371e1083bea7c2c, y1Raw[1] = 0xaafe1e7c53be5fd4, y1Raw[2] = 0x019760edb7a37b36, y1Raw[3] = 0x198ee65f6b74a1;

    uint256 a2, y2;
    uint256 b2, x2;
    uint64 *a2Raw = (uint64 *) &a2, *b2Raw = (uint64 *) &b2, *x2Raw = (uint64 *) &x2, *y2Raw = (uint64 *) &y2;

    a2Raw[0] = 0x87bd2163da49bd0d, a2Raw[1] = 0xfc7dcdda1d9f113f, a2Raw[2] = 0x8fd1e67957c97a18, a2Raw[3] = 0x97f5df2dab3910f8;
    b2Raw[0] = 0x4d124213aa110c48, b2Raw[1] = 0x6973b35605ae7179, b2Raw[2] = 0xabe8ee2095222ffc, b2Raw[3] = 0x3aa9001eadcd1968;
    x2Raw[0] = 0xc4999f70c9592545, x2Raw[1] = 0xde1ecca6218f7b81, x2Raw[2] = 0x1bbc66b0c7b70877, x2Raw[3] = 0xf02556332d2c6d1d;
    y2Raw[0] = 0x2a593243186c16d0, y2Raw[1] = 0xcd5cc5535613c541, y2Raw[2] = 0xf4b7e0af9df4d621, y2Raw[3] = 0x29120e966159c977;

    uint256 a3, y3;
    uint256 b3, x3;
    uint64 *a3Raw = (uint64 *) &a3, *b3Raw = (uint64 *) &b3, *x3Raw = (uint64 *) &x3, *y3Raw = (uint64 *) &y3;

    a3Raw[0] = 0x021c90bf0944fd2c, a3Raw[1] = 0x4c8c6a60b3fb27b8, a3Raw[2] = 0x8d7d733980389076, a3Raw[3] = 0x77d5f6bedf0617e2;
    b3Raw[0] = 0xc47a835ea9f278f9, b3Raw[1] = 0x853b5b525a306cc6, b3Raw[2] = 0xe4db8e475f17bbee, b3Raw[3] = 0xc9b87c9be4704eaf;
    x3Raw[0] = 0x543f9033f6e48070, x3Raw[1] = 0x12aaf1dc55aac7f3, x3Raw[2] = 0xf57f1a08d14730c7, x3Raw[3] = 0xcd8a963e4c8ec64e;
    y3Raw[0] = 0x7744b231f5c7dc09, y3Raw[1] = 0x1f39eae8ee653621, y3Raw[2] = 0xec6eac8e7fa5610c, y3Raw[3] = 0x1df9d29392c2c5d0;

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

    a0Raw[0] = 0x585053cf29394e5e, a0Raw[1] = 0x5a80c39aaa718c45, a0Raw[2] = 0x10b8150c30c08d34, a0Raw[3] = 0x89c4bb3597704c35, a0Raw[4] = 0x735ce54d0844e3b2, a0Raw[5] = 0x091b9211a753008d, a0Raw[6] = 0x50981c98882ca6b7, a0Raw[7] = 0x5c423406a7927b36;
    b0Raw[0] = 0x1951bc6af674a5cf, b0Raw[1] = 0x76fa3a943481b2f5, b0Raw[2] = 0x28e286ed84bc2d16, b0Raw[3] = 0x5fc1f3c6f0c8829c;
    x0Raw[0] = 0x234b549d1c40f565, x0Raw[1] = 0x7e91f106f7f668cb, x0Raw[2] = 0x6b17af96852f0912, x0Raw[3] = 0x27288c11438a57d;
    y0Raw[0] = 0x734b67ba6da75825, y0Raw[1] = 0x1eb9929853bfc863, y0Raw[2] = 0x0f8e1aa28d7f6c6f, y0Raw[3] = 0xdd82be9ff735f0cb, y0Raw[4] = 0xd019bc0ab17060f8, y0Raw[5] = 0xa616c5225934812a, y0Raw[6] = 0x5a9d2cc031af44e9, y0Raw[7] = 0xfda45c0eab3c702a;

    uint512 a1, y1;
    uint256 b1, x1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *x1Raw = (uint64 *) &x1, *y1Raw = (uint64 *) &y1;

    a1Raw[0] = 0x86e24a33939929b7, a1Raw[1] = 0xb6106b10a68ac600, a1Raw[2] = 0x493ff06c313d70f4, a1Raw[3] = 0xdb52ecf3a2d2dc82, a1Raw[4] = 0x0d0e4efcb090607b, a1Raw[5] = 0xef4ec06e9c3d84a1, a1Raw[6] = 0x211ee08192f6667d, a1Raw[7] = 0xb41d622f788a8784;
    b1Raw[0] = 0x5ef0ff541036cbf6, b1Raw[1] = 0x2c50aa66784d8ee3, b1Raw[2] = 0x3cf7d02eafd4d376, b1Raw[3] = 0x57e892323751fa7d;
    x1Raw[0] = 0x825ba272780ce38b, x1Raw[1] = 0xb142aae7cacb45c1, x1Raw[2] = 0x2c48834a775dd20e, x1Raw[3] = 0x6645e4d86e7a1f1;
    y1Raw[0] = 0x1a6484088c205856, y1Raw[1] = 0x81ccc51a8b512fd0, y1Raw[2] = 0x2704a1bc8cbbff3c, y1Raw[3] = 0x95464952be008b5c, y1Raw[4] = 0xbc60b16688093c0f, y1Raw[5] = 0xe0320a02c29f36a9, y1Raw[6] = 0x53e6190d93abd51c, y1Raw[7] = 0xf2e74300754a35f5;

    uint512 a2, y2;
    uint256 b2, x2;
    uint64 *a2Raw = (uint64 *) &a2, *b2Raw = (uint64 *) &b2, *x2Raw = (uint64 *) &x2, *y2Raw = (uint64 *) &y2;

    a2Raw[0] = 0xb8d3882bf1d3f7d4, a2Raw[1] = 0x4fd2521b591d34ed, a2Raw[2] = 0x2921fb08d86242d6, a2Raw[3] = 0xd25ee4e1057c0ea1, a2Raw[4] = 0xe49101c41e5fae72, a2Raw[5] = 0x988babfebb2afad8, a2Raw[6] = 0x1fac31699bb420c5, a2Raw[7] = 0x5c807daff7da1a17;
    b2Raw[0] = 0x4840c73c4d7cee80, b2Raw[1] = 0x57113d788c56428d, b2Raw[2] = 0xc37c0596b0c83f57, b2Raw[3] = 0xa62aff97e3548d36;
    x2Raw[0] = 0xd10a43cc5d165afd, x2Raw[1] = 0x78639515a7d9d8c6, x2Raw[2] = 0xb6470723f1c624b6, x2Raw[3] = 0x6cf308c74c975eb;
    y2Raw[0] = 0x9f875d955f0c3783, y2Raw[1] = 0xf7317eba53d027ef, y2Raw[2] = 0x935cf69e3d992173, y2Raw[3] = 0xf96755ed9305ff71, y2Raw[4] = 0xb1d07597c3654efe, y2Raw[5] = 0xe14af5260d501b2a, y2Raw[6] = 0x8639c720f51b28c1, y2Raw[7] = 0xfc359b263eeb346a;

    uint512 a3, y3;
    uint256 b3, x3;
    uint64 *a3Raw = (uint64 *) &a3, *b3Raw = (uint64 *) &b3, *x3Raw = (uint64 *) &x3, *y3Raw = (uint64 *) &y3;

    a3Raw[0] = 0xd29191d0c5c49f9c, a3Raw[1] = 0x49c9ea35955799a5, a3Raw[2] = 0xf15d48019ac4e686, a3Raw[3] = 0x34060e921e0f8fa3, a3Raw[4] = 0x46d662fa0920fbae, a3Raw[5] = 0xf5716a6ca9de1a06, a3Raw[6] = 0xc693c98ab74d1715, a3Raw[7] = 0x23cdfb4b8e45bf08;
    b3Raw[0] = 0x524cd268d0fcdd31, b3Raw[1] = 0xa5ac36f090f0df5c, b3Raw[2] = 0xdc5012f53603d22f, b3Raw[3] = 0x8fdce98a8bf66464;
    x3Raw[0] = 0x7b09d6587c1968f2, x3Raw[1] = 0x16245722eb94a25f, x3Raw[2] = 0x282dae2586ffc9b0, x3Raw[3] = 0xdbca34d0146906ac;
    y3Raw[0] = 0xf7608cc25b8a40d9, y3Raw[1] = 0x8bf838cfe1da6ac8, y3Raw[2] = 0xd8ecc07be8b1231e, y3Raw[3] = 0x3b07902e55c80833, y3Raw[4] = 0x2cbd2abee60dcc18, y3Raw[5] = 0x7e7e895e4d5e7711, y3Raw[6] = 0x9875ac65afd259b8, y3Raw[7] = 0x90311161681d263;

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

    a0Raw[0] = 0x9c4d795b821a42b5, a0Raw[1] = 0xf003338c3d2a71d6, a0Raw[2] = 0x83c6344406cc773e, a0Raw[3] = 0xa1a5db6f50bf6fcc, a0Raw[4] = 0xce5cab5cab12200f, a0Raw[5] = 0xd704046f3186ae7f, a0Raw[6] = 0x0a908a45e5e6e50a, a0Raw[7] = 0x972dd24fd17a2dbf;
    b0Raw[0] = 0x6bce2d2401a753ed, b0Raw[1] = 0xb5b39f7a01053cc5, b0Raw[2] = 0x7aeb33305f043ae2, b0Raw[3] = 0x43fc480ce1b86e8a, b0Raw[4] = 0xc8abf04a54dcffd9, b0Raw[5] = 0xf8c324768c894ae3, b0Raw[6] = 0xc9cf92718f27df32, b0Raw[7] = 0x762ac9cb7081b345;
    x0Raw[0] = 0xc73d91e00dba628f, x0Raw[1] = 0x85ba58ab539a68d2, x0Raw[2] = 0x1d51a76cbc6e17ab, x0Raw[3] = 0x300a2301069cb2d8, x0Raw[4] = 0x34e5e48a352cbf77, x0Raw[5] = 0x9c3fe0a41f28268f, x0Raw[6] = 0x9296643cb84b42b1, x0Raw[7] = 0xcf30fe6aec8bcfeb;
    y0Raw[0] = 0x0eaa5a9b64aaadbe, y0Raw[1] = 0xcad42835f64dd53d, y0Raw[2] = 0x9d1622a7487823cd, y0Raw[3] = 0xb9d4295316e90145, y0Raw[4] = 0x672555429b8edb70, y0Raw[5] = 0xa6bce922babfc0ed, y0Raw[6] = 0xffbf32c6c536bfef, y0Raw[7] = 0x3e71aebe3c4dba90;

    uint512 a1, y1;
    uint512 b1, x1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *x1Raw = (uint64 *) &x1, *y1Raw = (uint64 *) &y1;

    a1Raw[0] = 0xe441898b8fd76a85, a1Raw[1] = 0x05fc65dcaf8d0b89, a1Raw[2] = 0xc7aee7767ab09ce0, a1Raw[3] = 0x6b5fe7e7844d96a0, a1Raw[4] = 0x186a7a869e3e8770, a1Raw[5] = 0x22b26ce9d1e13d64, a1Raw[6] = 0x993f0d8e69f0474b, a1Raw[7] = 0xe46e7701e4a3d250;
    b1Raw[0] = 0x192e4a94580d5bc5, b1Raw[1] = 0x0f94bb17824e6642, b1Raw[2] = 0x560d6401ccaebdef, b1Raw[3] = 0x245bedd47e416fa2, b1Raw[4] = 0x1beddfeccb292bdf, b1Raw[5] = 0x32d3fe7dad7d1789, b1Raw[6] = 0x46ffe3b213392575, b1Raw[7] = 0xbebec559e9310e0d;
    x1Raw[0] = 0x912571043c0e8871, x1Raw[1] = 0xb1af08ca7e6c27ca, x1Raw[2] = 0xa911a9a7a4201574, x1Raw[3] = 0x07013987962d1145, x1Raw[4] = 0x5873739b66230523, x1Raw[5] = 0xb9d926f80d358097, x1Raw[6] = 0xf7b2115191419bda, x1Raw[7] = 0xff5d695f67a86009;
    y1Raw[0] = 0x3bdd133e7773e2ca, y1Raw[1] = 0x31060e922a4cdaa5, y1Raw[2] = 0x2e4de67ab0069091, y1Raw[3] = 0x66a6f206d39f15cb, y1Raw[4] = 0x072720f7c7673cf8, y1Raw[5] = 0xe5a3401cd5239d5b, y1Raw[6] = 0x7c4c74364b1d5f71, y1Raw[7] = 0xc2b62dd6a5488e;

    uint512 a2, y2;
    uint512 b2, x2;
    uint64 *a2Raw = (uint64 *) &a2, *b2Raw = (uint64 *) &b2, *x2Raw = (uint64 *) &x2, *y2Raw = (uint64 *) &y2;

    a2Raw[0] = 0x73ecb61d8fba2b28, a2Raw[1] = 0x2dd33c94aebfbc8b, a2Raw[2] = 0x6b024a2abf281c23, a2Raw[3] = 0xdcbbe55a2346aa9e, a2Raw[4] = 0x1272161d7a5742b8, a2Raw[5] = 0xe07b415758efc36a, a2Raw[6] = 0x8c36ab4d751b2839, a2Raw[7] = 0x5a57f7c8517c29ab;
    b2Raw[0] = 0x5cdf0afc56ef986f, b2Raw[1] = 0x2d7f033ef6b4d50f, b2Raw[2] = 0x67af1a6e4405e252, b2Raw[3] = 0x32f9d2265524747a, b2Raw[4] = 0x5193d0a5367af88b, b2Raw[5] = 0x99d4ef9383103bec, b2Raw[6] = 0x67eb7749900f46f3, b2Raw[7] = 0x7c7a8f9848fa57fa;
    x2Raw[0] = 0xe911ec5f3b805203, x2Raw[1] = 0xa14a486278a38c3f, x2Raw[2] = 0xc2f81bb7d0c8d2e8, x2Raw[3] = 0xc48605d57085976b, x2Raw[4] = 0xdac26d16ea278529, x2Raw[5] = 0xdb7c054c3de764e5, x2Raw[6] = 0x3ec62f647ca59b78, x2Raw[7] = 0xfb35dc9fb16aca76;
    y2Raw[0] = 0xb11049a89b1d7487, y2Raw[1] = 0x114a0e638727d768, y2Raw[2] = 0x7504fdf5ce215ad8, y2Raw[3] = 0xff90db55f7d921f5, y2Raw[4] = 0xa68f3af1aa6696b4, y2Raw[5] = 0x771bddb3f361ed5c, y2Raw[6] = 0x75afc8a9ee4632a3, y2Raw[7] = 0x379e6a86a3d3b8a;

    uint512 a3, y3;
    uint512 b3, x3;
    uint64 *a3Raw = (uint64 *) &a3, *b3Raw = (uint64 *) &b3, *x3Raw = (uint64 *) &x3, *y3Raw = (uint64 *) &y3;

    a3Raw[0] = 0xf1942816a0a81784, a3Raw[1] = 0x4859f6bc63875eda, a3Raw[2] = 0x7a8d72cc8f977d53, a3Raw[3] = 0xe62d42f934582c68, a3Raw[4] = 0x3b2724762592b852, a3Raw[5] = 0xc8c878ceb4a88d9a, a3Raw[6] = 0x679b8094d8e7c4c2, a3Raw[7] = 0x490e28e1fe48a0d4;
    b3Raw[0] = 0x90c785d8f544b8e2, b3Raw[1] = 0xbc1b128569269751, b3Raw[2] = 0xe4347a86024fa14b, b3Raw[3] = 0xebe59040f8e320b0, b3Raw[4] = 0x7fe2162fcc602247, b3Raw[5] = 0x5f1f8a97190c92d0, b3Raw[6] = 0xf95b9d0731795ede, b3Raw[7] = 0x333b96b4348e079;
    x3Raw[0] = 0x9cab92d59adb47f6, x3Raw[1] = 0x7c67b71b3fa59b15, x3Raw[2] = 0x60b4b39fec893ea2, x3Raw[3] = 0x857239b50724c07f, x3Raw[4] = 0x6b7831bef19b5d6d, x3Raw[5] = 0xb55868d9f712933c, x3Raw[6] = 0xf2c2b27ba6c23c90, x3Raw[7] = 0xc030ba1b196d25;
    y3Raw[0] = 0x73a80286bb16bd65, y3Raw[1] = 0xa91f7bfceeebab0f, y3Raw[2] = 0x21844d84e73aa55e, y3Raw[3] = 0xd8a814a78aeba008, y3Raw[4] = 0x0ce0bdf26b2b06ee, y3Raw[5] = 0x34a838b97edd7eed, y3Raw[6] = 0xd6c9f9ec485aeece, y3Raw[7] = 0xeedf2469e1be17ed;

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

    a0Raw[0] = 0x88d115b7f91ae66d, a0Raw[1] = 0x67bdb37b87140e92, a0Raw[2] = 0xe6b30e49236a8135, a0Raw[3] = 0x117c6ca682e5b134, a0Raw[4] = 0x12af23aed932322d, a0Raw[5] = 0x192b87f1f08c415f, a0Raw[6] = 0x2459a7c3397c6b97, a0Raw[7] = 0x3865f3d497b42aef, a0Raw[8] = 0x1609b8c7cc78a16e, a0Raw[9] = 0x7f124a4a4fc37604, a0Raw[10] = 0x27373399e702736f, a0Raw[11] = 0xe9f36d257c78a637, a0Raw[12] = 0x5ad8268ff86d04f1, a0Raw[13] = 0xf585a22454fd962a, a0Raw[14] = 0xcbe014d97509471e, a0Raw[15] = 0xe9618ee0b3cae8a1;
    b0Raw[0] = 0x5951c07c5e077dd6, b0Raw[1] = 0x6a78c36805962a9e, b0Raw[2] = 0x6287f937e5b7375b, b0Raw[3] = 0x16c38433a190aa65, b0Raw[4] = 0x44a8ed199624e10c, b0Raw[5] = 0x7d6d70e5e63822fb, b0Raw[6] = 0xd33ebd1abf1de402, b0Raw[7] = 0xe98da069cfcc71ba;
    x0Raw[0] = 0xc3d42b5c1949675f, x0Raw[1] = 0xd89974b18f34fd03, x0Raw[2] = 0x974f48d06a5481f1, x0Raw[3] = 0xfa7d40ac719c96f8, x0Raw[4] = 0x72ed57844f56435a, x0Raw[5] = 0xcf2e6613dc877d99, x0Raw[6] = 0xefe91e89cc32887f, x0Raw[7] = 0x73d0a0f242d463a;
    y0Raw[0] = 0x9917dd52c8f07815, y0Raw[1] = 0xf209bd451b0dce8c, y0Raw[2] = 0x60694b1ea446aa81, y0Raw[3] = 0x06b864cae8083b3e, y0Raw[4] = 0x8e3fa39fd92fa348, y0Raw[5] = 0x0e91c1cbe713a7cc, y0Raw[6] = 0x8646ff82ff24cb6d, y0Raw[7] = 0x950e83865d33af0b, y0Raw[8] = 0x432b96b4644ceeba, y0Raw[9] = 0x70c764c8b64998a2, y0Raw[10] = 0xd7028ce50f56cfc5, y0Raw[11] = 0x1d8369b65145b655, y0Raw[12] = 0x9eb434753685b7c1, y0Raw[13] = 0x053856a100ee9f13, y0Raw[14] = 0xcedce60717d10c44, y0Raw[15] = 0xf8c45395e9ce4614;

    uint1024 a1, y1;
    uint512 b1, x1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *x1Raw = (uint64 *) &x1, *y1Raw = (uint64 *) &y1;

    a1Raw[0] = 0x1fe82ff22ea731a2, a1Raw[1] = 0xf81fc95aea7641be, a1Raw[2] = 0xe8b4d6fe15c344aa, a1Raw[3] = 0xc94508bb59eab560, a1Raw[4] = 0xee6ff87701e16211, a1Raw[5] = 0xdfe4c6814379a9fc, a1Raw[6] = 0x9f70101e440d5d99, a1Raw[7] = 0xeddccd8195c65753, a1Raw[8] = 0x93672e42a7cbd14f, a1Raw[9] = 0xbe23bdf163b611e0, a1Raw[10] = 0x0930982a1ae1ad64, a1Raw[11] = 0x937c0c927b4ef485, a1Raw[12] = 0x5b425c080c500714, a1Raw[13] = 0x126b40c2179c4a9d, a1Raw[14] = 0xe890327564cb18b5, a1Raw[15] = 0x15c9f3eaeea14381;
    b1Raw[0] = 0xcd7b8780b4f75f3c, b1Raw[1] = 0xb9f8542104ff531b, b1Raw[2] = 0x331087775d959c73, b1Raw[3] = 0x1ff3ce4ad74ad8f5, b1Raw[4] = 0xb5148ae7db8193d2, b1Raw[5] = 0xd635070fef336937, b1Raw[6] = 0x6cb9daaabdad1f9c, b1Raw[7] = 0x57d8ecb7f47b0619;
    x1Raw[0] = 0x44fde1e55b943d99, x1Raw[1] = 0x437e54a441d1329f, x1Raw[2] = 0xeea721afa8774f6b, x1Raw[3] = 0x51559aa24d4a981e, x1Raw[4] = 0x9940ef3485e5cc91, x1Raw[5] = 0x9e903680851f60a8, x1Raw[6] = 0x5c488325bbcbecc9, x1Raw[7] = 0xfef22f2d4ab20419;
    y1Raw[0] = 0x7ad434f642059734, y1Raw[1] = 0x0a4136ceb788ca84, y1Raw[2] = 0x00d781c7ea891e90, y1Raw[3] = 0xd6940ac056504f4d, y1Raw[4] = 0xc5abd770b20f07d1, y1Raw[5] = 0xa9b27f7c16fb4175, y1Raw[6] = 0xbfad1fee4ceb840e, y1Raw[7] = 0x3a9e2f9efbad8531, y1Raw[8] = 0x9ab00673eb674043, y1Raw[9] = 0x4c0df609b04b594d, y1Raw[10] = 0xd80e490803c200d6, y1Raw[11] = 0xa034428a107c5dbc, y1Raw[12] = 0x9e56a091f0c7f93c, y1Raw[13] = 0xaa442cbc23ce1785, y1Raw[14] = 0x81b04cb4cf821844, y1Raw[15] = 0x42ec3561db83dd;

    uint1024 a2, y2;
    uint512 b2, x2;
    uint64 *a2Raw = (uint64 *) &a2, *b2Raw = (uint64 *) &b2, *x2Raw = (uint64 *) &x2, *y2Raw = (uint64 *) &y2;

    a2Raw[0] = 0xabdbe601f5f0bed2, a2Raw[1] = 0xcf30bac8cf52aee3, a2Raw[2] = 0x84eb8f8a385ad01b, a2Raw[3] = 0x5412658c8b6fed9e, a2Raw[4] = 0x460e6167a1a81358, a2Raw[5] = 0x4d02c8628de9df3c, a2Raw[6] = 0x10ad05da14b4f19a, a2Raw[7] = 0x4baa254fa7d9cd89, a2Raw[8] = 0x826ff77e36001513, a2Raw[9] = 0xd29d881e0d3f26bb, a2Raw[10] = 0x8ab1d03a174a3cb6, a2Raw[11] = 0xb79262164a2c051e, a2Raw[12] = 0x5e0297253344659f, a2Raw[13] = 0x6af6695617ab1a0e, a2Raw[14] = 0x6f774453727544e3, a2Raw[15] = 0x15c240673b1373cb;
    b2Raw[0] = 0x8821eba8d04963b4, b2Raw[1] = 0x5a901ffaa0c1f314, b2Raw[2] = 0x78e00ec70bda3b5f, b2Raw[3] = 0xd4f00bb783a34d85, b2Raw[4] = 0x6c05d55bffc5b679, b2Raw[5] = 0xb1ad74c484017168, b2Raw[6] = 0x062e179ab167beed, b2Raw[7] = 0xffbee81dba157256;
    x2Raw[0] = 0x55bd9266cb22a995, x2Raw[1] = 0xb3159cc2e674a4d7, x2Raw[2] = 0x02c61e77c9bb67d3, x2Raw[3] = 0x821cc9ea1e8fbecc, x2Raw[4] = 0x17bfce81bcc29dfa, x2Raw[5] = 0xe15becfa2d4bdf17, x2Raw[6] = 0x7a9485c0a27fe146, x2Raw[7] = 0xee72ba0b3c24740b;
    y2Raw[0] = 0x2314b8949e93acfa, y2Raw[1] = 0x086efb3ba6e1fe69, y2Raw[2] = 0x61186d990603fe41, y2Raw[3] = 0x3bb4777e1b226591, y2Raw[4] = 0xa440747519485818, y2Raw[5] = 0xf36a11230a0c2ab2, y2Raw[6] = 0xd5864c4a9293446d, y2Raw[7] = 0x8142d8108682fbe9, y2Raw[8] = 0x2f049004a929bee3, y2Raw[9] = 0xbb1252589697ab5b, y2Raw[10] = 0x9795ff389bbbaad7, y2Raw[11] = 0xa22c10c35cd877f1, y2Raw[12] = 0x66471f3e292ba46b, y2Raw[13] = 0x0cabc3662d4fbca3, y2Raw[14] = 0xa785c5a1caa035a3, y2Raw[15] = 0x17e496acb8a288a;

    uint1024 a3, y3;
    uint512 b3, x3;
    uint64 *a3Raw = (uint64 *) &a3, *b3Raw = (uint64 *) &b3, *x3Raw = (uint64 *) &x3, *y3Raw = (uint64 *) &y3;

    a3Raw[0] = 0x60a5b973ff2f54b9, a3Raw[1] = 0x221af1d406c14442, a3Raw[2] = 0xe479b1286980810b, a3Raw[3] = 0xc01249ffc7c3cbb9, a3Raw[4] = 0x5a01cc1e242a1717, a3Raw[5] = 0xc864258124e44508, a3Raw[6] = 0x34eefdac5521497d, a3Raw[7] = 0x4b0802bc37d2768d, a3Raw[8] = 0xa452f4f2df129f00, a3Raw[9] = 0xf7365cfbe9d9a5dd, a3Raw[10] = 0x838c2977193f0868, a3Raw[11] = 0x2dcc35b586899346, a3Raw[12] = 0x829de3da33e2281d, a3Raw[13] = 0x3c78c41613487bd4, a3Raw[14] = 0x6fa03b0e3478fd5b, a3Raw[15] = 0x2499e6f1f9e969b9;
    b3Raw[0] = 0x03ae6cc3208b9b0a, b3Raw[1] = 0x6ab39fc5293f1f39, b3Raw[2] = 0xbfa63bf62e0cf291, b3Raw[3] = 0xe552c800c9e2eab3, b3Raw[4] = 0xa0d781c7d857e3a0, b3Raw[5] = 0xe4853dfc84119289, b3Raw[6] = 0x2e0968677a6677ec, b3Raw[7] = 0x9e96908047d1e5be;
    x3Raw[0] = 0x0770adca5a673c9d, x3Raw[1] = 0xbda4d5a241c41503, x3Raw[2] = 0xbdc4c0d86a6ec68b, x3Raw[3] = 0xfbc97e48810d91d9, x3Raw[4] = 0x9bae8dbd3c9ed5b3, x3Raw[5] = 0xfd96e0773350fd44, x3Raw[6] = 0x2ed4334248df64c5, x3Raw[7] = 0x3680d75c3d9b01ca;
    y3Raw[0] = 0xa57ad833e763d20e, y3Raw[1] = 0xb63d6581038717b5, y3Raw[2] = 0x76c472526d8e7456, y3Raw[3] = 0x6287b69710e53479, y3Raw[4] = 0x5ca3b996cb5baeed, y3Raw[5] = 0xb5de1f138e0fe219, y3Raw[6] = 0xb9272a58ab7361f1, y3Raw[7] = 0xed54c7646949f445, y3Raw[8] = 0x6724fd2f7c73cb0c, y3Raw[9] = 0x26fff0097ac9ccc2, y3Raw[10] = 0x50a58fd2dd26b189, y3Raw[11] = 0x6b3721257a6e12c9, y3Raw[12] = 0x32a4d18e0c2bc080, y3Raw[13] = 0x73f4794319442e9b, y3Raw[14] = 0x737df665823a8820, y3Raw[15] = 0xf36bc4db5a193c57;

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

    a0Raw[0] = 0xf4df6dfb2cfad5ad, a0Raw[1] = 0xf1e903f228fdf9b9, a0Raw[2] = 0x8ebef55047c53f4d, a0Raw[3] = 0x9e62fbed16b796fb, a0Raw[4] = 0x7208f6e109105715, a0Raw[5] = 0x623c7f0b4074454a, a0Raw[6] = 0xc1e134655b353898, a0Raw[7] = 0x03478addd14fdb77, a0Raw[8] = 0x05a7396df1e1d42e, a0Raw[9] = 0xf416c61af40541b0, a0Raw[10] = 0x0c6eef86359a0085, a0Raw[11] = 0xf2cb1d5147d67f6b, a0Raw[12] = 0xc2c746d652d0baa2, a0Raw[13] = 0x4f826ef10f8adb7f, a0Raw[14] = 0x89b2009164751959, a0Raw[15] = 0xf82e5364d2077ebb;
    b0Raw[0] = 0x60e0b065d2cb460d, b0Raw[1] = 0x2c9a0b4ea6d9868d, b0Raw[2] = 0x7e178acfe2c6b5a6, b0Raw[3] = 0xcfbc26609dec3ad7, b0Raw[4] = 0xc264eaa11ccdbacc, b0Raw[5] = 0x77fdfeca6057abe0, b0Raw[6] = 0xc1d9c8f01810b672, b0Raw[7] = 0x05f3e4665d4ce2f2, b0Raw[8] = 0x683f04b2040a132b, b0Raw[9] = 0xfef5d6645ccbe971, b0Raw[10] = 0x2eccc64d27e4ffde, b0Raw[11] = 0x716e08899156af2a, b0Raw[12] = 0x95de7ce7c1c944d1, b0Raw[13] = 0x286ddf89a523965c, b0Raw[14] = 0x082e3f5b2301bec6, b0Raw[15] = 0x81f44f1aeb98fb93;
    x0Raw[0] = 0x5b0fd474d8e0192f, x0Raw[1] = 0xbce423c45abb4a6e, x0Raw[2] = 0xef4c8e942981adf8, x0Raw[3] = 0x3c6761d9cdb129f5, x0Raw[4] = 0xd8f53a5b9891c7bd, x0Raw[5] = 0x0754279e8a9d6368, x0Raw[6] = 0x80557aabf1f7b17d, x0Raw[7] = 0x34c3b666acca7736, x0Raw[8] = 0x4132796b57f07b18, x0Raw[9] = 0xe5834bfbfe622916, x0Raw[10] = 0x970a433495bf8d03, x0Raw[11] = 0xc3465911d27d1e12, x0Raw[12] = 0x2d030d48757b324f, x0Raw[13] = 0x5f02cf379e1cc799, x0Raw[14] = 0xb7f45384a1c1883c, x0Raw[15] = 0xd8bbd37cb5e34b1c;
    y0Raw[0] = 0xc5c3510108ab9fb6, y0Raw[1] = 0x379747f8d62ec4a7, y0Raw[2] = 0xe1f5b12244bff6ea, y0Raw[3] = 0x24f6f08673cb084e, y0Raw[4] = 0x6b4f2c5d657afdb0, y0Raw[5] = 0x427f15a854a7d8f8, y0Raw[6] = 0xff95bdab6a4ba0f1, y0Raw[7] = 0xd9228e35ea4befa5, y0Raw[8] = 0xcb8158e62e40a8dc, y0Raw[9] = 0xbcf4eec1a5dc5fb9, y0Raw[10] = 0xefb446fd400db0f2, y0Raw[11] = 0x36f771f393a37f69, y0Raw[12] = 0x05452917219eadd8, y0Raw[13] = 0xbfeb0007638ef07d, y0Raw[14] = 0x25b837a95e0c7a78, y0Raw[15] = 0x4afd30f43d988b9d;

    uint1024 a1, y1;
    uint1024 b1, x1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *x1Raw = (uint64 *) &x1, *y1Raw = (uint64 *) &y1;

    a1Raw[0] = 0x33fa071541ccd2b7, a1Raw[1] = 0x909f84e745dbac4a, a1Raw[2] = 0xbecf910bbac44714, a1Raw[3] = 0xc3c29fac4eb7a36c, a1Raw[4] = 0xc262191921f87d11, a1Raw[5] = 0xc1787ddb3e527f0b, a1Raw[6] = 0x5990d9f7d8c63875, a1Raw[7] = 0x151dc16b58c771fe, a1Raw[8] = 0x539c8f3d6ec866b0, a1Raw[9] = 0xf6abb2f4e349b046, a1Raw[10] = 0x6b5d9905f149f329, a1Raw[11] = 0x834a8743c3bf5a8c, a1Raw[12] = 0x4777907b8595efe4, a1Raw[13] = 0x7c3e0ecbf5fc91c7, a1Raw[14] = 0x8f15f6bdb49a72a7, a1Raw[15] = 0xa3c967d0fc664e9;
    b1Raw[0] = 0x17bc55ebff5054bb, b1Raw[1] = 0x0732050f2a95509f, b1Raw[2] = 0xcfbe2e35a2617e13, b1Raw[3] = 0x87af855c46ff411e, b1Raw[4] = 0x03371f9a6192337c, b1Raw[5] = 0xee1d3d7c72af2455, b1Raw[6] = 0x6cab33b7fe4e5b96, b1Raw[7] = 0x2419601fa4f8f300, b1Raw[8] = 0xeafe1fb44203943f, b1Raw[9] = 0x7ca36d86f39922ab, b1Raw[10] = 0x533089e6824bb3b6, b1Raw[11] = 0x63ddede8aa4ef081, b1Raw[12] = 0x2af6c661525b8ac5, b1Raw[13] = 0x0bcb9b6ca1ed7b59, b1Raw[14] = 0x305f3699c4962d43, b1Raw[15] = 0xef84f858a5088a87;
    x1Raw[0] = 0xbdf88c3f4bf914fe, x1Raw[1] = 0x9db37e3931155fef, x1Raw[2] = 0x23939789379a0c75, x1Raw[3] = 0x4d0a628e530c7baa, x1Raw[4] = 0xe2454f7ef4ef1d49, x1Raw[5] = 0x7dd91773fd5c208d, x1Raw[6] = 0x899e4926f48aac1b, x1Raw[7] = 0x0e0e134d5d0cccde, x1Raw[8] = 0x9e630c8b4d266e86, x1Raw[9] = 0xd2ebc8d72a7b1a9c, x1Raw[10] = 0x84922856e14c162a, x1Raw[11] = 0x070f37fb3697026c, x1Raw[12] = 0xe7dfb724debca75f, x1Raw[13] = 0xc4fc2abcfbb884fd, x1Raw[14] = 0x0f1eeafdf24c7b5f, x1Raw[15] = 0xcb4838386d8e1205;
    y1Raw[0] = 0x174294b8873027dd, y1Raw[1] = 0x2884e4a2828cc8ba, y1Raw[2] = 0x9ed726b72ce6e2e8, y1Raw[3] = 0xb4ab49786b352a07, y1Raw[4] = 0xaa185428181a6ed1, y1Raw[5] = 0xd0067bf15667cdad, y1Raw[6] = 0x2ba22337aca9c4ef, y1Raw[7] = 0x990e2cca7b34907f, y1Raw[8] = 0x84b41af0d2e8e57c, y1Raw[9] = 0x968fa43c3bed94a5, y1Raw[10] = 0xaf04587cfb1823cb, y1Raw[11] = 0xa96e591d3b20d13b, y1Raw[12] = 0xc7ecf735003495b3, y1Raw[13] = 0x61b8605c68a2fcb8, y1Raw[14] = 0xcc41f70599a24197, y1Raw[15] = 0x240c9aae03b85e4;

    uint1024 a2, y2;
    uint1024 b2, x2;
    uint64 *a2Raw = (uint64 *) &a2, *b2Raw = (uint64 *) &b2, *x2Raw = (uint64 *) &x2, *y2Raw = (uint64 *) &y2;

    a2Raw[0] = 0xc49b413935ffcf8d, a2Raw[1] = 0x43372745a1bc1e8a, a2Raw[2] = 0xae661944650a1ccf, a2Raw[3] = 0x53f0d440d442ced6, a2Raw[4] = 0xabe4e3a0b99ca27b, a2Raw[5] = 0x1ae05e8166c01284, a2Raw[6] = 0xa3a06b3ba1256c5e, a2Raw[7] = 0x393b39f92427c5f0, a2Raw[8] = 0xabbbd1f30302c91b, a2Raw[9] = 0x5b82c9f2c2fc8bc0, a2Raw[10] = 0xf05ca2106835c9e5, a2Raw[11] = 0x3e9786e831d5ff9a, a2Raw[12] = 0xc222e87f5c475407, a2Raw[13] = 0xaa1bde7afb6c862e, a2Raw[14] = 0xfec1022a51132302, a2Raw[15] = 0xeb96eff266fe9084;
    b2Raw[0] = 0x7458942bb4ff346b, b2Raw[1] = 0x07bb1d3f4c5e8f18, b2Raw[2] = 0x44f3f2e944191015, b2Raw[3] = 0xc4bae2080c398929, b2Raw[4] = 0x759398eb52c5f581, b2Raw[5] = 0x121e1f7cefe7b7eb, b2Raw[6] = 0x6019887509732ffe, b2Raw[7] = 0x463596b532f72c26, b2Raw[8] = 0x7eb00dfe686f7882, b2Raw[9] = 0x32d537aa4850a8b6, b2Raw[10] = 0xdbf556919107f046, b2Raw[11] = 0x178aa162c7866abd, b2Raw[12] = 0x31b0759107e89498, b2Raw[13] = 0x2ddba9be50e65cec, b2Raw[14] = 0x4f709db5ae2813b7, b2Raw[15] = 0x99033049024aedf5;
    x2Raw[0] = 0xbeeba6ab19ff0f38, x2Raw[1] = 0x58b377d9cb06b367, x2Raw[2] = 0xa36ceed9211a112f, x2Raw[3] = 0xefd8a338007d5400, x2Raw[4] = 0x0818c4b759a760df, x2Raw[5] = 0x19fa6efee8a3c655, x2Raw[6] = 0x8ff3643591a5468f, x2Raw[7] = 0xd0402cc00221953b, x2Raw[8] = 0x1d8f8aa4162cd892, x2Raw[9] = 0x35aac66a6dc5b0d9, x2Raw[10] = 0x6c441091b711bbf6, x2Raw[11] = 0xe85037231998e60d, x2Raw[12] = 0x3ca2182b77b9ef76, x2Raw[13] = 0xd613868252ecedcc, x2Raw[14] = 0x19bd6c14cb017248, x2Raw[15] = 0x282ffa9d9acd0e58;
    y2Raw[0] = 0xb66a5aecccec24bb, y2Raw[1] = 0xef838189d9a979e2, y2Raw[2] = 0x8eba62e6b3b708f1, y2Raw[3] = 0x36873c963323dea9, y2Raw[4] = 0x21dae7b44b50c163, y2Raw[5] = 0x22caf2bb63cc2a27, y2Raw[6] = 0xd9ee60f749ba0673, y2Raw[7] = 0x8d417b0770e0d6c3, y2Raw[8] = 0xc59418904387c80f, y2Raw[9] = 0x470badcf003575c8, y2Raw[10] = 0x2fc846985383c75b, y2Raw[11] = 0xc42e89c6a2d89a21, y2Raw[12] = 0xc405cd783e7f14c7, y2Raw[13] = 0x94f4d0052f2cbb56, y2Raw[14] = 0xa843daadc40ce4a8, y2Raw[15] = 0xc21fd89ce55a38a1;

    uint1024 a3, y3;
    uint1024 b3, x3;
    uint64 *a3Raw = (uint64 *) &a3, *b3Raw = (uint64 *) &b3, *x3Raw = (uint64 *) &x3, *y3Raw = (uint64 *) &y3;

    a3Raw[0] = 0xe66c66c052c81de1, a3Raw[1] = 0x0dd33c4fa4de96d5, a3Raw[2] = 0xdcce63b8a78b6256, a3Raw[3] = 0xf86e4f1fa54cf321, a3Raw[4] = 0x477997d81dbe4bea, a3Raw[5] = 0xd118f43ffa9a6b8f, a3Raw[6] = 0x7a7146c477751680, a3Raw[7] = 0x1458cda9551b152b, a3Raw[8] = 0xbb72f7f494d37537, a3Raw[9] = 0x41e6a45d89d2ca4b, a3Raw[10] = 0x5aaa8a891e10cc12, a3Raw[11] = 0x90bde18c02b3466f, a3Raw[12] = 0x1193831753aee460, a3Raw[13] = 0xd632c89e36fe41da, a3Raw[14] = 0x4e825f7597aec84b, a3Raw[15] = 0x5f72977d5e8cb5e5;
    b3Raw[0] = 0x09afc17383939e03, b3Raw[1] = 0x0c130213491872cd, b3Raw[2] = 0x243e301d5d4f6cc4, b3Raw[3] = 0xc9b6e419362c422c, b3Raw[4] = 0xf6ac166a08662b22, b3Raw[5] = 0x373bab2338e0abd9, b3Raw[6] = 0x2656db0640967b1d, b3Raw[7] = 0x7d91e50e8b34816e, b3Raw[8] = 0x5aeb741b63c6b34b, b3Raw[9] = 0x60afd8eebedc2ce3, b3Raw[10] = 0x0b94e48527f44d26, b3Raw[11] = 0x94b0165ce802ffb4, b3Raw[12] = 0xd88ed99efbb07d9d, b3Raw[13] = 0xdeb37d5620f625aa, b3Raw[14] = 0xf6e2caa2a3998709, b3Raw[15] = 0x66161c6da150bc62;
    x3Raw[0] = 0xde23e2018358456d, x3Raw[1] = 0x42ef7f7d2eb58987, x3Raw[2] = 0xe197caa128a31c53, x3Raw[3] = 0xb97d03de73b066dc, x3Raw[4] = 0xb039c9c2dbe8198d, x3Raw[5] = 0xf7fbcff1e0a91663, x3Raw[6] = 0x07341469cdb9f376, x3Raw[7] = 0xd46904bea2421108, x3Raw[8] = 0xd7c3c76c295714d6, x3Raw[9] = 0xc4303fe5858adf16, x3Raw[10] = 0x66ce5a3a87223417, x3Raw[11] = 0x57355c4b9181b4cf, x3Raw[12] = 0x7e23e0385cad01d5, x3Raw[13] = 0x99379b575328f262, x3Raw[14] = 0x624df370c5f536d4, x3Raw[15] = 0x2375d4c3b293d0dd;
    y3Raw[0] = 0xb09703f74c0488bc, y3Raw[1] = 0xdc91c573e78570e0, y3Raw[2] = 0x9c86c2379c603868, y3Raw[3] = 0x990e3014a14a80a8, y3Raw[4] = 0x7f6ad3b0472f94c7, y3Raw[5] = 0x312811c9784dc099, y3Raw[6] = 0x07b8ec4b1d4d551c, y3Raw[7] = 0x4949068440b367a6, y3Raw[8] = 0x2ae391d6ba802deb, y3Raw[9] = 0xf2a24af280d6ed78, y3Raw[10] = 0x417375528693a775, y3Raw[11] = 0x5aef42c048a969f5, y3Raw[12] = 0x68942377a985e67a, y3Raw[13] = 0x3d0165595411802d, y3Raw[14] = 0x17c2b56737e060f1, y3Raw[15] = 0xded881ab0338d83e;

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

    a0Raw[0] = 0x1e804f320c0ee182, a0Raw[1] = 0x3895f84bccfc009c, a0Raw[2] = 0xf8712e5d7b914506, a0Raw[3] = 0xc59af37efdad667e, a0Raw[4] = 0xa39018b557a06089, a0Raw[5] = 0xcb2c361835fccf8f, a0Raw[6] = 0x158f5533e7635288, a0Raw[7] = 0x4e99344a93bde704, a0Raw[8] = 0xabe97dcad0127b70, a0Raw[9] = 0x26796298aee7adb9, a0Raw[10] = 0x129b7dc7491e620c, a0Raw[11] = 0x84783d3bef18046c, a0Raw[12] = 0x892631cdee5c737a, a0Raw[13] = 0x3669d3ca91595e3a, a0Raw[14] = 0x93e5b17c04f8e44b, a0Raw[15] = 0xb1ce341a810b0ded, a0Raw[16] = 0x0d93c28168f45278, a0Raw[17] = 0xe823afaa73a930c9, a0Raw[18] = 0x052ec69fe0d59a9e, a0Raw[19] = 0xced5cf792a833f1b, a0Raw[20] = 0x7767ca7a4d38ecef, a0Raw[21] = 0x5e7bf535cbf2cd6f, a0Raw[22] = 0x65450fd43bdc4f88, a0Raw[23] = 0xb10a41db5862ef17, a0Raw[24] = 0xc2e809fd16ab5108, a0Raw[25] = 0x7dad38923a649473, a0Raw[26] = 0x22c1ef01bf0173a3, a0Raw[27] = 0xedefeb283f9a0b2b, a0Raw[28] = 0x8d0b87cc41b4258b, a0Raw[29] = 0xd845e49a384568ca, a0Raw[30] = 0x13454c2b4566e0cb, a0Raw[31] = 0x2966cf21c4c5f959;
    b0Raw[0] = 0x3842ba89421ba67d, b0Raw[1] = 0x5f76bb91b66915b2, b0Raw[2] = 0x27cf3d62a582bca0, b0Raw[3] = 0x6be97e483bd31577, b0Raw[4] = 0xd28b217bd216d8cc, b0Raw[5] = 0xf95f3ca8cf7d36c9, b0Raw[6] = 0xe7c4664a2263a3ff, b0Raw[7] = 0xba7d067d8d1452cf, b0Raw[8] = 0x93e6e61833cd3962, b0Raw[9] = 0x9ef4e85447a37bee, b0Raw[10] = 0x7d4aeb5c241578d2, b0Raw[11] = 0x42e08e2535319911, b0Raw[12] = 0x764f09ab541dd85a, b0Raw[13] = 0xcf072c241aeb8d6b, b0Raw[14] = 0xb8dd617ce1bf7099, b0Raw[15] = 0xf0af5c6441f896aa;
    x0Raw[0] = 0x2474963542bc5d80, x0Raw[1] = 0x733e226356018b17, x0Raw[2] = 0xfc68c3d124759cfa, x0Raw[3] = 0x1d50fae3b17990e5, x0Raw[4] = 0xa7c56f5b3a0f84c6, x0Raw[5] = 0xc923531b237850d0, x0Raw[6] = 0x2a16bbda2a50979b, x0Raw[7] = 0xe6b985aca0da5949, x0Raw[8] = 0xbb7bbc3151708028, x0Raw[9] = 0x373b2a401885405d, x0Raw[10] = 0x2c4b4e99567bb9c1, x0Raw[11] = 0x74ead9483b902c14, x0Raw[12] = 0x55f18d28daae8b57, x0Raw[13] = 0xf44a9f8bba2392dc, x0Raw[14] = 0xc87e98d43150d9aa, x0Raw[15] = 0xfe59c00bc6db5c48;
    y0Raw[0] = 0x2e33afc43604abd5, y0Raw[1] = 0xe98cfd89bfd1ca1a, y0Raw[2] = 0x36050a5e43ecd2e6, y0Raw[3] = 0xa45af7af0bd84137, y0Raw[4] = 0x432759115f3f41d9, y0Raw[5] = 0x9d2784e261fda564, y0Raw[6] = 0xb7238a3087cc2134, y0Raw[7] = 0xe5cfd6f62527bd7e, y0Raw[8] = 0xb56bdc8779a86c51, y0Raw[9] = 0x5b9047e19337e38e, y0Raw[10] = 0x8d38041983eef67f, y0Raw[11] = 0x0b870843575af23b, y0Raw[12] = 0xa0a412129b593a3e, y0Raw[13] = 0x73cb3554c92f285e, y0Raw[14] = 0x0a141ee640a10174, y0Raw[15] = 0xabfbcf85b3f49bf8, y0Raw[16] = 0x463bd63906645050, y0Raw[17] = 0xefae85ed285090f2, y0Raw[18] = 0x05dd68b72171062b, y0Raw[19] = 0x4406b72a4c18a2ca, y0Raw[20] = 0xc6c75dba8e5a94e9, y0Raw[21] = 0x55877a047ee6a2d1, y0Raw[22] = 0x49f6c10434481a45, y0Raw[23] = 0x772a66eaf4810f8a, y0Raw[24] = 0xd89767a8addc0582, y0Raw[25] = 0xe0cab890a78f7838, y0Raw[26] = 0x9f84c04b6d4d3fea, y0Raw[27] = 0x7f13d4c46a1bde74, y0Raw[28] = 0xe585c6b2188feb82, y0Raw[29] = 0x305492a9696b3670, y0Raw[30] = 0xeea96ecd957eae40, y0Raw[31] = 0x48a2335bc2d568;

    uint2048 a1, y1;
    uint1024 b1, x1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *x1Raw = (uint64 *) &x1, *y1Raw = (uint64 *) &y1;

    a1Raw[0] = 0xf18359ec68877a30, a1Raw[1] = 0x2b3f0ff1de422ddb, a1Raw[2] = 0x60b63d16571f594d, a1Raw[3] = 0x0a02a4be6808129b, a1Raw[4] = 0x288cc051fd66736f, a1Raw[5] = 0x2e180d6ae029536f, a1Raw[6] = 0xc2c68437f78d826d, a1Raw[7] = 0xd3d53bd788ae2d47, a1Raw[8] = 0xfe9719d57a1e01f8, a1Raw[9] = 0xed8fecc4e5c22d0b, a1Raw[10] = 0xa5b4d4212846cd20, a1Raw[11] = 0x46b8f619edda88f2, a1Raw[12] = 0x4feb900ee2e85c9c, a1Raw[13] = 0xb0cfff7ef10e7593, a1Raw[14] = 0x66a8fca869ca850a, a1Raw[15] = 0x41bd20ca14d6ae8e, a1Raw[16] = 0x48870661f9b83f47, a1Raw[17] = 0x4ebfeb964176181e, a1Raw[18] = 0x120cb62078b9bd19, a1Raw[19] = 0x47d6e66ee36378e9, a1Raw[20] = 0x95c2134c1c284462, a1Raw[21] = 0x4a7b3befaa7f33dd, a1Raw[22] = 0x45b0564b04553dce, a1Raw[23] = 0xbe385b33e992c7f6, a1Raw[24] = 0x852856f6cac63390, a1Raw[25] = 0xe86f6191e197796d, a1Raw[26] = 0x1c829ed443279887, a1Raw[27] = 0x6b5ffe4d21a836e8, a1Raw[28] = 0x442611ac828eed17, a1Raw[29] = 0x28bb835a1163dfdf, a1Raw[30] = 0x51403377ea6e60d1, a1Raw[31] = 0x2e10085d5c1cf4;
    b1Raw[0] = 0xfe3a864ec4a52acc, b1Raw[1] = 0xe4e84af322672dca, b1Raw[2] = 0xba6ef8fb1e2a847a, b1Raw[3] = 0x91d327f35feef9ec, b1Raw[4] = 0x01223558d2948aae, b1Raw[5] = 0xda54d6e5fe83a0fd, b1Raw[6] = 0x2f3891d25cd84280, b1Raw[7] = 0x3d2637a901697def, b1Raw[8] = 0xdf86d0077156c9c5, b1Raw[9] = 0xff65d0efcd06d3cd, b1Raw[10] = 0x51619c1163a2d2ee, b1Raw[11] = 0x5a1375f7f463bf84, b1Raw[12] = 0x247190f760bdeec3, b1Raw[13] = 0x4f9ea5c361e120b6, b1Raw[14] = 0x1e0482890101ce33, b1Raw[15] = 0xc959dd8f87796707;
    x1Raw[0] = 0x188b355d8793c236, x1Raw[1] = 0x3a985b7a6b6e8778, x1Raw[2] = 0xc50093008f4ed5d6, x1Raw[3] = 0x1db41e37543ca2c1, x1Raw[4] = 0x50ad2e9c3fb83b87, x1Raw[5] = 0xbf8127ff7777c8b7, x1Raw[6] = 0xd6ab78207fa8709e, x1Raw[7] = 0x91e511572e1c6979, x1Raw[8] = 0xeb905d5ea9e27540, x1Raw[9] = 0xef248c9269b06c6a, x1Raw[10] = 0x601ef8c3282c9f71, x1Raw[11] = 0xc3fee14a31c74e02, x1Raw[12] = 0x985085a4f3792935, x1Raw[13] = 0x2503b96b177efa52, x1Raw[14] = 0x1c1d40c8f339bdbf, x1Raw[15] = 0x9afd133ad951582;
    y1Raw[0] = 0x3beec4d681054023, y1Raw[1] = 0xcc5abdfcbed552d0, y1Raw[2] = 0xf47f8688c9b9ff33, y1Raw[3] = 0xfff2ed7fe1faaa0d, y1Raw[4] = 0x8cd52e3c83c22c2d, y1Raw[5] = 0xc1aabbe2a0648ddb, y1Raw[6] = 0xb308ab9be1a70e36, y1Raw[7] = 0x00ee48b0e21afd40, y1Raw[8] = 0x4a5067f482a7e351, y1Raw[9] = 0xdec487acb7123584, y1Raw[10] = 0xa21ef59b0a2d656e, y1Raw[11] = 0x7b5f731ff7f5923a, y1Raw[12] = 0x7781cffc7870a43a, y1Raw[13] = 0xaf9515942e056603, y1Raw[14] = 0x1a14ca939cf9982e, y1Raw[15] = 0xe7f8cc9c37561c80, y1Raw[16] = 0xc3b32ef73f9e61d2, y1Raw[17] = 0x8dbab26c59ef0e6e, y1Raw[18] = 0x436902654dde0646, y1Raw[19] = 0x1339cac6fb20c6df, y1Raw[20] = 0xfee1fc0fb7630453, y1Raw[21] = 0x387a88973db32bed, y1Raw[22] = 0x37555794e1bd952f, y1Raw[23] = 0x104dee51b8df15a5, y1Raw[24] = 0x7ea14df581d61a0e, y1Raw[25] = 0xc86da1fa89c37cf2, y1Raw[26] = 0x6666f33e344a328e, y1Raw[27] = 0xc7d8803229ea1107, y1Raw[28] = 0x6da515204554408c, y1Raw[29] = 0x50e86374e2cdf7e6, y1Raw[30] = 0x4d89c9394913ac9b, y1Raw[31] = 0xfffdc8b29fd5f168;

    uint2048 a2, y2;
    uint1024 b2, x2;
    uint64 *a2Raw = (uint64 *) &a2, *b2Raw = (uint64 *) &b2, *x2Raw = (uint64 *) &x2, *y2Raw = (uint64 *) &y2;

    a2Raw[0] = 0xd5c5ae176308875f, a2Raw[1] = 0x28161e8e39f63a32, a2Raw[2] = 0xa8c1057e29f25aa7, a2Raw[3] = 0xc71c1b44052b7aba, a2Raw[4] = 0x157105c681923535, a2Raw[5] = 0xf1bc50a8822f1541, a2Raw[6] = 0xc7765833765f9c6f, a2Raw[7] = 0x1cc85da02dbad0a1, a2Raw[8] = 0xdac542e478921776, a2Raw[9] = 0x51b71e2ed4d8784b, a2Raw[10] = 0xb3f0fdb369e8c83a, a2Raw[11] = 0x50c49ee6a3e8f1f2, a2Raw[12] = 0x34d66d8f939cc605, a2Raw[13] = 0xdde07bd15d8da452, a2Raw[14] = 0xd37b4d02cb7f99cd, a2Raw[15] = 0x5af3a1366da8b545, a2Raw[16] = 0x9997267137b2c79e, a2Raw[17] = 0x1d21dfabcb0b0353, a2Raw[18] = 0xd570fc7afebd27cb, a2Raw[19] = 0xf967b11f1ad0868b, a2Raw[20] = 0xa7dbdc02b0d6cf13, a2Raw[21] = 0xbecdfe75339b868c, a2Raw[22] = 0xaa230ff15a232f5a, a2Raw[23] = 0xaae1db4f76a7f137, a2Raw[24] = 0x449bded841daba66, a2Raw[25] = 0x04d9947040796328, a2Raw[26] = 0xc059f2fdab9b1e10, a2Raw[27] = 0x7688b461b9346499, a2Raw[28] = 0xdd7f802919357fe2, a2Raw[29] = 0xdc76fb7ae8e0016e, a2Raw[30] = 0x7e64a518cab01dfa, a2Raw[31] = 0xf7fc1b47f1dcf7c;
    b2Raw[0] = 0xe33bd87e1dab6ea1, b2Raw[1] = 0x4c272ac5c8593fc9, b2Raw[2] = 0xbe560bfbac13ec39, b2Raw[3] = 0x0f397d1efe014745, b2Raw[4] = 0x73811bc325c92660, b2Raw[5] = 0x31e0b03f2fd1fbb2, b2Raw[6] = 0xf767bab456d95fed, b2Raw[7] = 0x19db4055888c579e, b2Raw[8] = 0xc06574ba48d38c93, b2Raw[9] = 0xbe94039c49450ce3, b2Raw[10] = 0xf68f8d682bb37589, b2Raw[11] = 0x20ca10af6a2f60f3, b2Raw[12] = 0xeb49bf6cd58f5149, b2Raw[13] = 0x2abec7457e24f046, b2Raw[14] = 0x561158564d322844, b2Raw[15] = 0xe6055f62181bbd65;
    x2Raw[0] = 0xdecae2780bda5b84, x2Raw[1] = 0x4058e28b58c1e5a0, x2Raw[2] = 0x271bae3f98d52fbe, x2Raw[3] = 0x12221787009bc515, x2Raw[4] = 0xd401266869114515, x2Raw[5] = 0xf3a29f9b6bd3c8bd, x2Raw[6] = 0x7453c1d8ecb7050a, x2Raw[7] = 0x6ca1d6db2043e864, x2Raw[8] = 0xe36453f0ae2c98ba, x2Raw[9] = 0xa77b068de5f27a71, x2Raw[10] = 0x406aaba767bac31f, x2Raw[11] = 0x8d3bb2c93bf6dad4, x2Raw[12] = 0xbdb371bd54ef2349, x2Raw[13] = 0x045b4a5613e98662, x2Raw[14] = 0xadecfa34cb592980, x2Raw[15] = 0x1acd1f3dac70a632;
    y2Raw[0] = 0xd737cfe119f863a7, y2Raw[1] = 0xca73641f57f4dbf3, y2Raw[2] = 0x977be433917b0353, y2Raw[3] = 0x803292e650a241e1, y2Raw[4] = 0xfbf89b6fdac272a3, y2Raw[5] = 0x0342b59ef8db3ccf, y2Raw[6] = 0x2b8b8d834557c3a0, y2Raw[7] = 0x2a5bc4a07a431349, y2Raw[8] = 0xbf813b9e09edc8c0, y2Raw[9] = 0x7946ecdd726eeb3c, y2Raw[10] = 0x8f53b7fa9b2ca636, y2Raw[11] = 0x419f8f625467852e, y2Raw[12] = 0xfab0cf1797d321a1, y2Raw[13] = 0xbff5e501165e2aa7, y2Raw[14] = 0x99948a1dde60a673, y2Raw[15] = 0x343a797f874dcd19, y2Raw[16] = 0xe4b169d2a93b5227, y2Raw[17] = 0x9dd67ad4e85b5db2, y2Raw[18] = 0xc70a3b5a57548d11, y2Raw[19] = 0x515b0d02da48929b, y2Raw[20] = 0x06db24df5e209328, y2Raw[21] = 0xb3addc317972255a, y2Raw[22] = 0x0b8d12aa9bfb7e85, y2Raw[23] = 0xaebb1bdf3989d4e5, y2Raw[24] = 0xcdaaccbb1bf6d734, y2Raw[25] = 0xe497907c5ca1756b, y2Raw[26] = 0x68a99527baa99284, y2Raw[27] = 0x6e9311e92a2df18c, y2Raw[28] = 0xaa3cbbe25d0195cd, y2Raw[29] = 0xcc31d0c9988815e6, y2Raw[30] = 0x0c1d7d686ea741d6, y2Raw[31] = 0xfe31b0c9a013644b;

    uint2048 a3, y3;
    uint1024 b3, x3;
    uint64 *a3Raw = (uint64 *) &a3, *b3Raw = (uint64 *) &b3, *x3Raw = (uint64 *) &x3, *y3Raw = (uint64 *) &y3;

    a3Raw[0] = 0xc342e4f835e2566e, a3Raw[1] = 0xb4ffba41fa306e58, a3Raw[2] = 0x1d8daed15f8eddc9, a3Raw[3] = 0xe8580a50a53c14bf, a3Raw[4] = 0xfeb6b8e9ad7dd4d7, a3Raw[5] = 0xc6e6ade892b7eb1c, a3Raw[6] = 0xbe7903b33649cf7b, a3Raw[7] = 0xe0347a16f4632cf7, a3Raw[8] = 0xf2935ce95afa7c2d, a3Raw[9] = 0x207aeecef8f86d4c, a3Raw[10] = 0x6bbb38e9ce3eaff1, a3Raw[11] = 0x9a73086b23ea5a78, a3Raw[12] = 0x571a321476479eea, a3Raw[13] = 0x00eee60e93225ae8, a3Raw[14] = 0x645737f19ad4d19a, a3Raw[15] = 0x1bd0e0d48cd8ae51, a3Raw[16] = 0xdd277777f4a9c61e, a3Raw[17] = 0x13091bbb42156c1c, a3Raw[18] = 0x3b074281f612e801, a3Raw[19] = 0x1df7027ba2d9d389, a3Raw[20] = 0x10e9b4c2001715ad, a3Raw[21] = 0x0591a3b08f581633, a3Raw[22] = 0x18b49eec742a4b03, a3Raw[23] = 0x7a5675dc7c4ade5b, a3Raw[24] = 0x49f9be60b9601d9a, a3Raw[25] = 0x79cf53c01038b2d0, a3Raw[26] = 0x5c8a62e3983e9d2a, a3Raw[27] = 0x68c828b6800d2883, a3Raw[28] = 0x07408afd96c813e3, a3Raw[29] = 0xa588051f058b5e17, a3Raw[30] = 0xf5780852a24f3642, a3Raw[31] = 0x15efdf614b4bc633;
    b3Raw[0] = 0xed99f7247ee73eee, b3Raw[1] = 0x74cf493577d06da7, b3Raw[2] = 0x6f2af7a7ef786e5b, b3Raw[3] = 0x8755ca62e05babcc, b3Raw[4] = 0xf4b64806d2305559, b3Raw[5] = 0x18b095ee4f1da46b, b3Raw[6] = 0x653cf76d11d4bc4c, b3Raw[7] = 0x0fa1a9df944081c8, b3Raw[8] = 0x5c46ef48d3e83470, b3Raw[9] = 0x7b85c4c762941837, b3Raw[10] = 0xa4b89ed8ef0c2f1e, b3Raw[11] = 0x946ad87ce1960cd3, b3Raw[12] = 0x02f5ec08983e6524, b3Raw[13] = 0x962e08cb111fd8ae, b3Raw[14] = 0x349e426f92dea6c5, b3Raw[15] = 0x9cc8477ccf7f5ab5;
    x3Raw[0] = 0x3735d3fc2167d4c6, x3Raw[1] = 0xf2336698857e093f, x3Raw[2] = 0x5f613406a5270877, x3Raw[3] = 0xb1a81d5f500ff6da, x3Raw[4] = 0x4e58328ab27fc5c8, x3Raw[5] = 0x54fab7dd9018e629, x3Raw[6] = 0xa6f09586390afb0b, x3Raw[7] = 0xa645a5b1d4aa564e, x3Raw[8] = 0xf4b4300ead04cc02, x3Raw[9] = 0x2635818c886057de, x3Raw[10] = 0xde91f3cea39f531c, x3Raw[11] = 0xb4e14748adbc2364, x3Raw[12] = 0x29ea2262fc702995, x3Raw[13] = 0xe7602c4aa0159b1e, x3Raw[14] = 0xf6c97b666ab8a333, x3Raw[15] = 0xffd663c07d55458b;
    y3Raw[0] = 0xa6ebfc3dd1f03fb5, y3Raw[1] = 0x4a9705eb5703f39d, y3Raw[2] = 0xb5c39ac778b03a08, y3Raw[3] = 0xa11e0f04a852aea3, y3Raw[4] = 0x031438e85a80b467, y3Raw[5] = 0x067d9642f58dbd55, y3Raw[6] = 0x8f724e3b18c8b164, y3Raw[7] = 0xe435249fcf4967d1, y3Raw[8] = 0xa8989b9a15a37caa, y3Raw[9] = 0xe034b026ddc33124, y3Raw[10] = 0x18ca3017f4cebc8d, y3Raw[11] = 0xb4422ce1ef83e64d, y3Raw[12] = 0x89434d8f85c5e079, y3Raw[13] = 0x6602c48e34236be7, y3Raw[14] = 0xe144976f49a5bcea, y3Raw[15] = 0x571f2c2200ef9866, y3Raw[16] = 0x156e7b3ca03a501d, y3Raw[17] = 0xf88e3c9d9a4bb628, y3Raw[18] = 0x4b6a2aacf1fb565a, y3Raw[19] = 0x848b7a34005be4bb, y3Raw[20] = 0x5860604ea9d2c9f3, y3Raw[21] = 0xa5413d06d10eb39b, y3Raw[22] = 0xa1d596b2b781ef2b, y3Raw[23] = 0x5a9506be050ae5c1, y3Raw[24] = 0x38b4c9c634e8af43, y3Raw[25] = 0xefe7b021f61e2533, y3Raw[26] = 0xbe54d68d485af267, y3Raw[27] = 0x001424016746d8fb, y3Raw[28] = 0x43561ba720fa5ea7, y3Raw[29] = 0x3b43c10bb535daf6, y3Raw[30] = 0x75250617dd96d676, y3Raw[31] = 0x5d276b61f0096;

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

    a0Raw[0] = 0x9f0ae0ae28607b8d, a0Raw[1] = 0xcc80ede65ae1b452, a0Raw[2] = 0x730cee199c8c34c0, a0Raw[3] = 0xe5cd02e811676fa2, a0Raw[4] = 0x29c43449d96335c2, a0Raw[5] = 0x7463f408ffe347cb, a0Raw[6] = 0xc0b189977764cd7f, a0Raw[7] = 0x3b0f2d733b9d5108, a0Raw[8] = 0x488c657a2f087a91, a0Raw[9] = 0xd06a40f6546105e6, a0Raw[10] = 0x2a8e938488396db4, a0Raw[11] = 0xfe394c3c8fefdc54, a0Raw[12] = 0x25f3265b304fb362, a0Raw[13] = 0xbad4d0b18336a782, a0Raw[14] = 0x3436a6955f9ec962, a0Raw[15] = 0x0ff10e6c6c97345f, a0Raw[16] = 0x32b03edbd5c68078, a0Raw[17] = 0xd48a3399d591e58b, a0Raw[18] = 0x3ef13772a681e538, a0Raw[19] = 0x603e5217a332b6c8, a0Raw[20] = 0xa2b45680d6b08b43, a0Raw[21] = 0x807e9158df970109, a0Raw[22] = 0xb7c34627498cc5bc, a0Raw[23] = 0xde4d5ce0b53cb16a, a0Raw[24] = 0x7772a5a5a0cd0814, a0Raw[25] = 0xdd5e8336efae3c9a, a0Raw[26] = 0x513aed7acf0df2a3, a0Raw[27] = 0x3f950fe9ff0f5cc7, a0Raw[28] = 0x42bb30078697a99a, a0Raw[29] = 0x575803e7d36c0d29, a0Raw[30] = 0x0b52c76bf99f4958, a0Raw[31] = 0xf04628c708892884;
    b0Raw[0] = 0xf72cbe61163dd89e, b0Raw[1] = 0x5cdd4448afba0bb6, b0Raw[2] = 0x833de4120e5d82c1, b0Raw[3] = 0x0248610626356dcf, b0Raw[4] = 0x48ea1ca8b4e7e3e1, b0Raw[5] = 0xdf24cd6ade7cb037, b0Raw[6] = 0x547e562f18c9064b, b0Raw[7] = 0x5347a1c948aadd64, b0Raw[8] = 0x2e063898a9598853, b0Raw[9] = 0x520e7c396a864260, b0Raw[10] = 0x0db233624541c5c0, b0Raw[11] = 0x7f1739192529fbb4, b0Raw[12] = 0x5536dc84bfcecc88, b0Raw[13] = 0x2acec66b890812fe, b0Raw[14] = 0xc599acddc3b0dc54, b0Raw[15] = 0x0d732ec32ebf1e9e, b0Raw[16] = 0xe57de10ea0e0ddb9, b0Raw[17] = 0xb7a0eec76f5fc2ac, b0Raw[18] = 0x944406bd139216b0, b0Raw[19] = 0x162936406238b9b9, b0Raw[20] = 0x7e889b31d40c1fdb, b0Raw[21] = 0xcd1be232f9cb8732, b0Raw[22] = 0x31c9ef74c34a23cd, b0Raw[23] = 0x4130118e12a2ec6b, b0Raw[24] = 0x04451ce2346501fb, b0Raw[25] = 0x6d7ef3a822d5bb5d, b0Raw[26] = 0xae84c41f6f246bf7, b0Raw[27] = 0x9b9ae4163fce39f2, b0Raw[28] = 0x1dad00c182b0752f, b0Raw[29] = 0xeeecc7e7d0c10d1b, b0Raw[30] = 0x88d700ca07d382dd, b0Raw[31] = 0x2b727d4e1c3eaa7d;
    x0Raw[0] = 0x28099f436d00d17b, x0Raw[1] = 0x88c68942fc96263b, x0Raw[2] = 0x589996ed7f369e5c, x0Raw[3] = 0xe386929057715f78, x0Raw[4] = 0x88490d1346c63e64, x0Raw[5] = 0xacc5a9065f9b3f59, x0Raw[6] = 0x92dc9af27b917a28, x0Raw[7] = 0xa3403b807e350e5f, x0Raw[8] = 0x783f027da87f40d1, x0Raw[9] = 0x4bc2bfca989ee09e, x0Raw[10] = 0x5e8c5ae5217372f8, x0Raw[11] = 0x11f1027d30c14b15, x0Raw[12] = 0x25acd8acb315baef, x0Raw[13] = 0xfddfae46816ffead, x0Raw[14] = 0x7d8164ac93816fcc, x0Raw[15] = 0x68cd4c3511036c39, x0Raw[16] = 0xa93f43be6ecc227d, x0Raw[17] = 0x047cc6f9012f5568, x0Raw[18] = 0xd626c5b6ef4cf609, x0Raw[19] = 0xd09f0911ec61fc9b, x0Raw[20] = 0x0ee98547e658c9b5, x0Raw[21] = 0x1a53bd2a9e96a788, x0Raw[22] = 0x741780978b13ee30, x0Raw[23] = 0xf2083e96cadc5482, x0Raw[24] = 0x791eced4012f9f43, x0Raw[25] = 0x1599987a0233e7df, x0Raw[26] = 0xc7800dd3eeb7a617, x0Raw[27] = 0x5d73499d4336ff5d, x0Raw[28] = 0x4fd5e3075518653b, x0Raw[29] = 0xa2a3de33b64bd5ef, x0Raw[30] = 0x9c485758018d1781, x0Raw[31] = 0x110a6ca1aac0e0c;
    y0Raw[0] = 0x39cdc9f5130f783e, y0Raw[1] = 0xf7ef08ef8e2c50bf, y0Raw[2] = 0x8cf1b104b1226580, y0Raw[3] = 0xf311f83036860c36, y0Raw[4] = 0xf327d60e5111a275, y0Raw[5] = 0x7ad95678601f3119, y0Raw[6] = 0xc46a31b2ca15eeb1, y0Raw[7] = 0xc295a2435ec17453, y0Raw[8] = 0xac011e26a7fa6959, y0Raw[9] = 0xaa59c26eb0cdd4d7, y0Raw[10] = 0xb953257736d2c0dd, y0Raw[11] = 0xf30272c43a2cf4d4, y0Raw[12] = 0x44c5b47d7c24062d, y0Raw[13] = 0x6d13ddc0099950ff, y0Raw[14] = 0xa281b0371230d280, y0Raw[15] = 0xab1cbb89d7577276, y0Raw[16] = 0x65bf9a027ac4329d, y0Raw[17] = 0xf2ef8ccdd7c94d2b, y0Raw[18] = 0xf0ada716df1d5254, y0Raw[19] = 0xa0b4283aa5c9c685, y0Raw[20] = 0x2f8644f34b49ad77, y0Raw[21] = 0x192e5d0b35863c9c, y0Raw[22] = 0x16ef63721408f63e, y0Raw[23] = 0xf57e609f090adf92, y0Raw[24] = 0x3dfabd856f7e0b9a, y0Raw[25] = 0xd697a593633782d5, y0Raw[26] = 0x9e5359ada9723b12, y0Raw[27] = 0x91ed223954786883, y0Raw[28] = 0x3aa2ca130c45819f, y0Raw[29] = 0x8b47e403e39f2238, y0Raw[30] = 0x17c3614f1365ea00, y0Raw[31] = 0xfa1c2b2b84c3fb76;

    uint2048 a1, y1;
    uint2048 b1, x1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *x1Raw = (uint64 *) &x1, *y1Raw = (uint64 *) &y1;

    a1Raw[0] = 0x02466bdd9ee296fc, a1Raw[1] = 0x3e53e64c6f82900a, a1Raw[2] = 0x4d0f0ff60177ca3b, a1Raw[3] = 0xbc5d11299af5b7c6, a1Raw[4] = 0x34f3261c030af8a6, a1Raw[5] = 0x2501f3dd53ac7f02, a1Raw[6] = 0x2f3bda1f8e9b8b9e, a1Raw[7] = 0xe5638e8dd92ab0dc, a1Raw[8] = 0x72878d19b3210a5f, a1Raw[9] = 0xe7173f428e278b38, a1Raw[10] = 0xa4b2240d64bbbc87, a1Raw[11] = 0x0bb3b21539c8ac34, a1Raw[12] = 0x76c55001de803caa, a1Raw[13] = 0xa697f35983bcd436, a1Raw[14] = 0xd9aa0aaef6dd955d, a1Raw[15] = 0x97db8b18504bd5ec, a1Raw[16] = 0x2a0780c55a845e5a, a1Raw[17] = 0x0480aa3dbd6a9e44, a1Raw[18] = 0x3445cb61ddebf011, a1Raw[19] = 0x40e93f3915fb2e0a, a1Raw[20] = 0xdf7f67de384ba287, a1Raw[21] = 0x08955b21f04b74e4, a1Raw[22] = 0x94146c8ab340c431, a1Raw[23] = 0x4836be5e4c232902, a1Raw[24] = 0x8e8af81fc53a095a, a1Raw[25] = 0x8272d424a25b104e, a1Raw[26] = 0x3121e76c529b1dd6, a1Raw[27] = 0x68ea460afec5e294, a1Raw[28] = 0x5ab1bfd9922d2870, a1Raw[29] = 0x983c45e6061f5ba0, a1Raw[30] = 0x220fe7c04a354ffd, a1Raw[31] = 0x67040edcbfa92baa;
    b1Raw[0] = 0xa4c1b335d8bc1a5e, b1Raw[1] = 0x03c600c662306628, b1Raw[2] = 0x2a5d9de971dc94f7, b1Raw[3] = 0x76ce17c2649262ee, b1Raw[4] = 0x4c3e9e221dbcf0c1, b1Raw[5] = 0x4867a31864b32cd8, b1Raw[6] = 0x1a088f49076182be, b1Raw[7] = 0x1b3060d6062be68e, b1Raw[8] = 0x075b1759805dd93a, b1Raw[9] = 0x16608f753a61d856, b1Raw[10] = 0x21e9807cbf569585, b1Raw[11] = 0xec72f2143a7cbef3, b1Raw[12] = 0x99a5bf63c2560cf6, b1Raw[13] = 0x5ec2e914c33a8b72, b1Raw[14] = 0xb3abf96f9e006ebf, b1Raw[15] = 0xb8ca7885c0d4c789, b1Raw[16] = 0xee488e9f85443e83, b1Raw[17] = 0x5394a87900b6f216, b1Raw[18] = 0x957bafbc856b8292, b1Raw[19] = 0xa5da33163e43cd7d, b1Raw[20] = 0x27cb4b04231864a7, b1Raw[21] = 0x903ae24831273ec8, b1Raw[22] = 0x5b55924ed73da76c, b1Raw[23] = 0x0ad1370885e5576d, b1Raw[24] = 0x3099cf26164c505a, b1Raw[25] = 0xc4f6e7ab5c788f94, b1Raw[26] = 0x0e2547a35bf0b449, b1Raw[27] = 0x25c338b11b6c2989, b1Raw[28] = 0x2dfa33171c88443a, b1Raw[29] = 0x2e53ef3611c2a1da, b1Raw[30] = 0x312b77641fdf24d1, b1Raw[31] = 0x4f0d9dd3ad7868d0;
    x1Raw[0] = 0x303bdf05c230d58f, x1Raw[1] = 0x200e474d8b828b62, x1Raw[2] = 0x91977c9865980678, x1Raw[3] = 0x5593f4f364a1692e, x1Raw[4] = 0x67d9dce16744fa45, x1Raw[5] = 0x49d63819f391e236, x1Raw[6] = 0x743bdc0f8369abf9, x1Raw[7] = 0x0fdfacb7869b111a, x1Raw[8] = 0x2d1c23a49d81ce44, x1Raw[9] = 0x96c6fcc2e2bfaab9, x1Raw[10] = 0x46721a2aadaa24a5, x1Raw[11] = 0x6c79865d2452b88f, x1Raw[12] = 0xce97ff9aefe8d298, x1Raw[13] = 0xb9cce117a0a9bcce, x1Raw[14] = 0x18d5b470b046db9b, x1Raw[15] = 0xbd13e2ec23f1cae3, x1Raw[16] = 0x320f03eaee8e54ab, x1Raw[17] = 0xd389d0b6290657ac, x1Raw[18] = 0xf2f8f35d8f16ad5d, x1Raw[19] = 0x94d2e58952e6892c, x1Raw[20] = 0x0ccae22fddfff468, x1Raw[21] = 0xf04a9fb78f60434b, x1Raw[22] = 0xbad7aac2f9525a6d, x1Raw[23] = 0x9ee463a559ae2044, x1Raw[24] = 0x7f41b1f2e96d8cdd, x1Raw[25] = 0xbea45dfdaa514049, x1Raw[26] = 0xd5b4b863c99bc0a3, x1Raw[27] = 0xab9749403a7bbe3f, x1Raw[28] = 0x770ead98582b030a, x1Raw[29] = 0x6b9c5bb6c73ecff9, x1Raw[30] = 0xe6880c58186405c8, x1Raw[31] = 0x6979e2f43fd9c27;
    y1Raw[0] = 0x4b5537ecf02b2991, y1Raw[1] = 0x066a30c0b5e2fec0, y1Raw[2] = 0x7b6f848f73e9742e, y1Raw[3] = 0xf27fc31cd067daf9, y1Raw[4] = 0x66ae6c65de4e33f4, y1Raw[5] = 0x886aded97cfff055, y1Raw[6] = 0xb24edf84927f627f, y1Raw[7] = 0xf29b9da5368be01f, y1Raw[8] = 0x0efc881413becc06, y1Raw[9] = 0x934c07ab4e6f400d, y1Raw[10] = 0x4a9c869e66d28b17, y1Raw[11] = 0x192b601b9334dcec, y1Raw[12] = 0xf99684d74ac689e8, y1Raw[13] = 0xa8a224428ff67879, y1Raw[14] = 0x9e614cd7d0448874, y1Raw[15] = 0xdbcefd9061a9e2e1, y1Raw[16] = 0xe95e1ffe77b3313e, y1Raw[17] = 0x1ed4c2df3a972ef4, y1Raw[18] = 0x856e358bdd346796, y1Raw[19] = 0x18b2f243a1219709, y1Raw[20] = 0x4ea6b58d050c0161, y1Raw[21] = 0x5cbedfa7ea4b505c, y1Raw[22] = 0x6f6416d4980926d4, y1Raw[23] = 0x0ddb6f6d07b1e214, y1Raw[24] = 0x25c68969c7f21d31, y1Raw[25] = 0x5871e0f1e6ae0e48, y1Raw[26] = 0x8ed2eb02c96fd77f, y1Raw[27] = 0x0adf5bfedf861121, y1Raw[28] = 0x289cc50a3d21b54f, y1Raw[29] = 0xeeac9aab5a5404a5, y1Raw[30] = 0x50ce12ad96a175cd, y1Raw[31] = 0xf768d4802f5744ff;

    uint2048 a2, y2;
    uint2048 b2, x2;
    uint64 *a2Raw = (uint64 *) &a2, *b2Raw = (uint64 *) &b2, *x2Raw = (uint64 *) &x2, *y2Raw = (uint64 *) &y2;

    a2Raw[0] = 0x4369ac1c70e1bd18, a2Raw[1] = 0x03030556b7323679, a2Raw[2] = 0xc2f2637f75c325ce, a2Raw[3] = 0xf3d9adf67dd45db8, a2Raw[4] = 0x52882f1fe6d424a9, a2Raw[5] = 0x95483b5cb9696cfd, a2Raw[6] = 0x13c97964906bb9ce, a2Raw[7] = 0x1ddf33a6784f537b, a2Raw[8] = 0x3616bbc3b00663bb, a2Raw[9] = 0x361df3261d4d5964, a2Raw[10] = 0xe3210ca9d1803caa, a2Raw[11] = 0x9dd073a2073a758e, a2Raw[12] = 0x4b738c44655ad6c7, a2Raw[13] = 0x485ed57fcc054022, a2Raw[14] = 0x133d3f2c209b2427, a2Raw[15] = 0xd73f98c7e6557b1a, a2Raw[16] = 0x1cddc9a9b522aacd, a2Raw[17] = 0xa8bfb37a0a31a82c, a2Raw[18] = 0xd515b5f73bd20d27, a2Raw[19] = 0x28ac0099ff5c33ce, a2Raw[20] = 0x95819d0f5a8d5af4, a2Raw[21] = 0x14f2eb6a742c4e8c, a2Raw[22] = 0x2457380091ce4f48, a2Raw[23] = 0xd213de8c11534be2, a2Raw[24] = 0x94f0b0084f8416e0, a2Raw[25] = 0x980e0895584fea8d, a2Raw[26] = 0xb21017b04fd9f023, a2Raw[27] = 0x9b63ffbe19ecbeb6, a2Raw[28] = 0xe753d74b26e037bb, a2Raw[29] = 0x0f0ac57818fb8a20, a2Raw[30] = 0x019cda34a987425d, a2Raw[31] = 0xcf6d9094e3c84cd7;
    b2Raw[0] = 0x5f9a248f4542ae6f, b2Raw[1] = 0xf4be1e3e6dccf3c5, b2Raw[2] = 0xab664f8d5a0563e6, b2Raw[3] = 0x972b16fa5a1c4884, b2Raw[4] = 0xfe6a5590c38f6b3a, b2Raw[5] = 0x5ddfb2fa5f9f6f87, b2Raw[6] = 0x61afc2ff2038ea43, b2Raw[7] = 0xb46c63612d702cda, b2Raw[8] = 0x9eda8c6551c8b826, b2Raw[9] = 0xcdad22da05e5aaa6, b2Raw[10] = 0xb2015dbce1b2c7a6, b2Raw[11] = 0xec2461a4134e5b27, b2Raw[12] = 0x40288071de8a80d9, b2Raw[13] = 0xe4160e3afaea4731, b2Raw[14] = 0xee479199f76bafd4, b2Raw[15] = 0x063ae35c52fc0f02, b2Raw[16] = 0x0e4f1f5c80657c64, b2Raw[17] = 0xb3b97418c7b27300, b2Raw[18] = 0x712d3f5a2bf504aa, b2Raw[19] = 0xdbcbb7251defab00, b2Raw[20] = 0xa725d70e023f1ed1, b2Raw[21] = 0xd698ef60ac73f1c6, b2Raw[22] = 0x5838ba43128ba2d4, b2Raw[23] = 0x9a8deb0f746c78da, b2Raw[24] = 0xa5f8a30c5278b5d9, b2Raw[25] = 0x915050e9288ac2ec, b2Raw[26] = 0xc6cbdc3221809fa7, b2Raw[27] = 0xd4bf208f29128b20, b2Raw[28] = 0xd64af3887ede4ee6, b2Raw[29] = 0x02a29cad7cecdd1e, b2Raw[30] = 0xf50107eee04389bb, b2Raw[31] = 0xfa80bb487ccf94;
    x2Raw[0] = 0xb6341d12a4e14f72, x2Raw[1] = 0x3e99de31d08b535f, x2Raw[2] = 0x9b98f71e4bae6b56, x2Raw[3] = 0x416c71dd3754520e, x2Raw[4] = 0x57339ea4694b51c9, x2Raw[5] = 0x0d5295f9a4589ae8, x2Raw[6] = 0xf5283d90b9e6e5e3, x2Raw[7] = 0xdd0feb91b3ca5333, x2Raw[8] = 0xc0b8215aa287cfe4, x2Raw[9] = 0xc5be2bd2efb7205c, x2Raw[10] = 0x83c1a88ea911246b, x2Raw[11] = 0xcc2cb55517e7805c, x2Raw[12] = 0xa5f01f4cf47dee2a, x2Raw[13] = 0x65b0592624c21930, x2Raw[14] = 0x66e83c442211c9ee, x2Raw[15] = 0x0c1089cd0984ea58, x2Raw[16] = 0xb2c3f20e669e374f, x2Raw[17] = 0x3197d37b1b68964b, x2Raw[18] = 0x18bd46c00ca4c848, x2Raw[19] = 0xeae68345de32601b, x2Raw[20] = 0x67c82dd9c3514a13, x2Raw[21] = 0x34180aa388b90772, x2Raw[22] = 0xda5f57d92eff25c8, x2Raw[23] = 0x6a0597fa65eefb1f, x2Raw[24] = 0xe39634693d43909a, x2Raw[25] = 0xa37a97f1b019c184, x2Raw[26] = 0xc63286212ad131e7, x2Raw[27] = 0xa3bc5f93aa8ec33f, x2Raw[28] = 0xddbd316637cd4e88, x2Raw[29] = 0x0482965117bbceb9, x2Raw[30] = 0xd20f456b9f0ac770, x2Raw[31] = 0xfff4aaf707162abb;
    y2Raw[0] = 0xa80c6da7d823ea3f, y2Raw[1] = 0x058454123ab65249, y2Raw[2] = 0xd91b614b7c68c84e, y2Raw[3] = 0xfcf3aca02c4d2544, y2Raw[4] = 0x4afcfb7faeacddf8, y2Raw[5] = 0x3c32d99e4cbc55dc, y2Raw[6] = 0xbb39a37ecf441a20, y2Raw[7] = 0xc6fbf548cbc3020a, y2Raw[8] = 0xf57b0dd95b8cb683, y2Raw[9] = 0x695c6edfedf8a801, y2Raw[10] = 0xfdc6df8b357257d2, y2Raw[11] = 0x78557d2ed624120b, y2Raw[12] = 0x328e8d1bb40a3030, y2Raw[13] = 0x8eefc58a745845b9, y2Raw[14] = 0x1b7bfb0d1d06efd5, y2Raw[15] = 0x93dd924d99041733, y2Raw[16] = 0x5a0a911a08e3a42d, y2Raw[17] = 0xc62bc3c5ce34aa56, y2Raw[18] = 0x59b98489e695661e, y2Raw[19] = 0x741be82f8d533df8, y2Raw[20] = 0x5056efcc5fead1dc, y2Raw[21] = 0x3252afc976fc8805, y2Raw[22] = 0xe3e97db40daa68b6, y2Raw[23] = 0xf037db649c708dac, y2Raw[24] = 0x7e1a2ac841644656, y2Raw[25] = 0x0f61ec07a3b7a3d8, y2Raw[26] = 0x0d21ae6f3af34ec5, y2Raw[27] = 0xb207efa2f371d4c4, y2Raw[28] = 0x7ae3d5756d16592b, y2Raw[29] = 0x7468763447e93d73, y2Raw[30] = 0x62476a5d433f8420, y2Raw[31] = 0x962310ce851d756;

    uint2048 a3, y3;
    uint2048 b3, x3;
    uint64 *a3Raw = (uint64 *) &a3, *b3Raw = (uint64 *) &b3, *x3Raw = (uint64 *) &x3, *y3Raw = (uint64 *) &y3;

    a3Raw[0] = 0x2a16c4db6a67bb2c, a3Raw[1] = 0xdd958d7c946c0d87, a3Raw[2] = 0x4d624a30e0530ab7, a3Raw[3] = 0x0e1e614ec3d521a2, a3Raw[4] = 0xb99251d5f94f63ec, a3Raw[5] = 0xe5170bdacfef69d0, a3Raw[6] = 0x4f89de2f88df56f5, a3Raw[7] = 0x907392154905b105, a3Raw[8] = 0x881801d271f1901e, a3Raw[9] = 0x9f581ffb87e92d2a, a3Raw[10] = 0x5c3c3560fc500d91, a3Raw[11] = 0xb75999457b13950a, a3Raw[12] = 0x82e59ae404b343b8, a3Raw[13] = 0xa04f6043e441009a, a3Raw[14] = 0x89df92e0e0aea238, a3Raw[15] = 0x65cfad225d717914, a3Raw[16] = 0x1ee35d57a0bfc92c, a3Raw[17] = 0x4322062d046f14ac, a3Raw[18] = 0xf7ae77ed808970b7, a3Raw[19] = 0x436d49b825f7dadf, a3Raw[20] = 0x38e77a8c8391ff94, a3Raw[21] = 0x67398e0fe91950d7, a3Raw[22] = 0xf812abc23236730a, a3Raw[23] = 0xd640125e02253579, a3Raw[24] = 0x7c0f59d3f3c19d27, a3Raw[25] = 0x3ed5db294236545c, a3Raw[26] = 0xfae9216b88882af0, a3Raw[27] = 0xbf2c55b8ce7ca9ba, a3Raw[28] = 0x22249ad338993bec, a3Raw[29] = 0x9440394da6d01cdb, a3Raw[30] = 0xd5358c82d44cb5cc, a3Raw[31] = 0xca79d53422985ce7;
    b3Raw[0] = 0xdd246ff98c7f5d3c, b3Raw[1] = 0xcd6715cf9662a639, b3Raw[2] = 0xbee01721dd00467f, b3Raw[3] = 0x3d90977600c65876, b3Raw[4] = 0xfd104b3f2297b458, b3Raw[5] = 0xd48e5fbdd7ef4cb7, b3Raw[6] = 0x2d07434f02bdb6de, b3Raw[7] = 0xd66fa594da0754b0, b3Raw[8] = 0x9e951b3208b5104e, b3Raw[9] = 0x0d455e8487527ef1, b3Raw[10] = 0xda319e0cdb9633f3, b3Raw[11] = 0x70d66ce98b77a8cc, b3Raw[12] = 0x422c855ee6eeebd9, b3Raw[13] = 0x958d548c96dba420, b3Raw[14] = 0x858aeefed2c5a7d3, b3Raw[15] = 0x7ae441c2ca366d0e, b3Raw[16] = 0x17b4340685fc5d3d, b3Raw[17] = 0x876caa0dc503ba19, b3Raw[18] = 0xac3b9d3a389134e4, b3Raw[19] = 0xaa6aaca6e1d04b76, b3Raw[20] = 0xfd9148a5aecb6474, b3Raw[21] = 0xf72160a65f58bcba, b3Raw[22] = 0x48fcec06b937d015, b3Raw[23] = 0x2ad2bb439b768de2, b3Raw[24] = 0x1c913c8765a8b0d6, b3Raw[25] = 0xe62e8d23082a7671, b3Raw[26] = 0x75fd3cb6fb63ac6c, b3Raw[27] = 0xf11e04364cf349b3, b3Raw[28] = 0x0cf75d9b463b7211, b3Raw[29] = 0xafd0999716e4ac8d, b3Raw[30] = 0xf72fddd6d22e635f, b3Raw[31] = 0x232540b8930a65d8;
    x3Raw[0] = 0xbb146ecb19ce4635, x3Raw[1] = 0x4cd841afb8941396, x3Raw[2] = 0xf798456a410b801b, x3Raw[3] = 0x01437ffc40a9aa64, x3Raw[4] = 0x26e09386656c2b52, x3Raw[5] = 0x5ae8f0e1dfea8498, x3Raw[6] = 0x0ca09c3c0677efe7, x3Raw[7] = 0x1549bac9d595b783, x3Raw[8] = 0x2c3a85703a7bce8a, x3Raw[9] = 0xcdcea07a3c682020, x3Raw[10] = 0x0380ad8394530223, x3Raw[11] = 0x8ab8b78f6901929c, x3Raw[12] = 0x3bde10801abd99b0, x3Raw[13] = 0x049a615cb28ebc60, x3Raw[14] = 0xd5cfbe98497ccc5d, x3Raw[15] = 0x3aa88407b8f7f8db, x3Raw[16] = 0x0748ae980f7be0fd, x3Raw[17] = 0xb8709ab1d6dc5898, x3Raw[18] = 0x95b19664b0496668, x3Raw[19] = 0xb9af04bb790d1c93, x3Raw[20] = 0xdb2b0f8e52555962, x3Raw[21] = 0xf8c068206298028d, x3Raw[22] = 0x2789c00049fdbde7, x3Raw[23] = 0x4f04dccfab90c362, x3Raw[24] = 0x06a617475dffe3cb, x3Raw[25] = 0x2fd2c26b54bba2d0, x3Raw[26] = 0x7fd5bad6d578f720, x3Raw[27] = 0x26d15ddff82568c1, x3Raw[28] = 0xd8a33abb8c7b467a, x3Raw[29] = 0xf130cbc0bd3cecfe, x3Raw[30] = 0xc66e89494be027e2, x3Raw[31] = 0x834cf729e8e8f;
    y3Raw[0] = 0xb8f7dd06ff4e53e6, y3Raw[1] = 0x92f1d15809a91a8e, y3Raw[2] = 0x45cceec63cf095cb, y3Raw[3] = 0xf85da1790b0f3d88, y3Raw[4] = 0x1ceec198bf569d6f, y3Raw[5] = 0x533745e70c9f9bbf, y3Raw[6] = 0xc4efc8043997307d, y3Raw[7] = 0x0f0f10161e18bba2, y3Raw[8] = 0xce7953f4b7a8269e, y3Raw[9] = 0x01f0023f93e02e8f, y3Raw[10] = 0x897b64ba1f52fc1f, y3Raw[11] = 0x4d30224ca52e8c10, y3Raw[12] = 0x0d2ded9c55fed499, y3Raw[13] = 0xb1e4a74a9af4ec71, y3Raw[14] = 0xe03cc092b1d7dbec, y3Raw[15] = 0x30338879d2afed91, y3Raw[16] = 0x0ec8f9aa53ced980, y3Raw[17] = 0xf830f74b0a1443bc, y3Raw[18] = 0x43f7ed5e79b6def5, y3Raw[19] = 0x765ea67672d23527, y3Raw[20] = 0xaa6387cf398389ad, y3Raw[21] = 0xe345aab4f24ed960, y3Raw[22] = 0xf7ca237174e70945, y3Raw[23] = 0x90fa840deb778640, y3Raw[24] = 0xb143e6430cff3504, y3Raw[25] = 0x54f37b6de41a0dd5, y3Raw[26] = 0x8622c49d42c2b9c4, y3Raw[27] = 0x2c691819d976a7da, y3Raw[28] = 0x66ccae83d6427b62, y3Raw[29] = 0x4327736d6aec741d, y3Raw[30] = 0xeb59151d45ada9b6, y3Raw[31] = 0xffd0b913e1910fd0;

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

    a0Raw[0] = 0xf2fdb698cde571e1, a0Raw[1] = 0x00fb97d1a3951b0c, a0Raw[2] = 0x79c5d21b61b57072, a0Raw[3] = 0x2e1d44306aa5c64a, a0Raw[4] = 0xf730fb6afd377405, a0Raw[5] = 0x9b1cc819a9e84e63, a0Raw[6] = 0xbb5c12ff8ee7be48, a0Raw[7] = 0xe1e8e30f46cafbfd, a0Raw[8] = 0x204c35d6118c28e1, a0Raw[9] = 0x6ef3fcf480f8bbf6, a0Raw[10] = 0x263d75a3514a0825, a0Raw[11] = 0xcea1ffdd5b61fe23, a0Raw[12] = 0x4d90857fa6e45e19, a0Raw[13] = 0x9b3213782e756c4c, a0Raw[14] = 0xec622d864cf9e140, a0Raw[15] = 0x9c886ee97c2a7110, a0Raw[16] = 0xc768a80036b5b344, a0Raw[17] = 0x0e4eeafdea5a9579, a0Raw[18] = 0xcf4e0a9c8c552aa2, a0Raw[19] = 0x44ffd21a0d2e241e, a0Raw[20] = 0x00bb665cff31019a, a0Raw[21] = 0xcfe62e50ff41fdb8, a0Raw[22] = 0xe186e73c2d0fdf4c, a0Raw[23] = 0x6ff5cb271ca66a74, a0Raw[24] = 0xacf92f1608e9d851, a0Raw[25] = 0x37aa7841bd51b0f1, a0Raw[26] = 0x0184769031e5e6ef, a0Raw[27] = 0x61a14f530239a6ec, a0Raw[28] = 0x154ce2d5c01d9c9f, a0Raw[29] = 0x83e205f4a03e6389, a0Raw[30] = 0xae8dc768e9d32469, a0Raw[31] = 0xb718a955a86ff226, a0Raw[32] = 0x6aee77e38de10ec5, a0Raw[33] = 0x5caf49fd5a7b9b33, a0Raw[34] = 0x6e6218ea6c97f230, a0Raw[35] = 0x0baff7e13459b58d, a0Raw[36] = 0xaccc8dfce5b9ad34, a0Raw[37] = 0x8577c2bb90db2cd0, a0Raw[38] = 0xfaebd21b1c9de2c9, a0Raw[39] = 0x03c3a105bab3e82a, a0Raw[40] = 0xb813e4396e0369cf, a0Raw[41] = 0x02a77310b14f1cd2, a0Raw[42] = 0x17bdccc97fde7593, a0Raw[43] = 0x541ce55fae365c0e, a0Raw[44] = 0xece5e3f964436459, a0Raw[45] = 0x623ea4962f71ef06, a0Raw[46] = 0x3dc7009098dbee7a, a0Raw[47] = 0x1c9e4357564dd403, a0Raw[48] = 0xc9c4e0378f5af3a6, a0Raw[49] = 0x4de95fb8ad76d40b, a0Raw[50] = 0x839dd5aeb830effa, a0Raw[51] = 0xd4cf6524fb47f422, a0Raw[52] = 0x9f376ff2b96b2954, a0Raw[53] = 0xb8deffd02025c706, a0Raw[54] = 0x93b56245bb85f0cc, a0Raw[55] = 0x16cea91fc432aade, a0Raw[56] = 0x510116f592557eea, a0Raw[57] = 0x77e7ec706e6f2c92, a0Raw[58] = 0x045f14117eb1fa9b, a0Raw[59] = 0x8e6e52317ae8f5e4, a0Raw[60] = 0x32b3cbb78f42e0a0, a0Raw[61] = 0x78b8723619be5637, a0Raw[62] = 0xa4c613731aa46249, a0Raw[63] = 0x9e13ed1d9a597a6e;
    b0Raw[0] = 0x123ffe1d99cfd9bc, b0Raw[1] = 0x17497ccade7350a8, b0Raw[2] = 0xcc55257492f2c2af, b0Raw[3] = 0x3b1ddda62a702aab, b0Raw[4] = 0xa8747bb26a755f19, b0Raw[5] = 0xed5a88e1f7b8b62b, b0Raw[6] = 0x45829babcb2bd223, b0Raw[7] = 0x73909861cd4d57f8, b0Raw[8] = 0xf7aa7ec0ec710dd8, b0Raw[9] = 0xce1e0f2b3fc51ab6, b0Raw[10] = 0x13e1368fecac5408, b0Raw[11] = 0xd75282837701fcb2, b0Raw[12] = 0x60b0db01a6e6586b, b0Raw[13] = 0xcd611485679a7174, b0Raw[14] = 0xa3958b1cb3a775a7, b0Raw[15] = 0x04741c33ea10e547, b0Raw[16] = 0x0009fabaaf2fc5ff, b0Raw[17] = 0x3949c4152223403a, b0Raw[18] = 0xb89dcbd3c85c73fa, b0Raw[19] = 0x4354da2ee2eb2ed1, b0Raw[20] = 0x86f1ed98437b5dd7, b0Raw[21] = 0x3828d8a2aa4e3625, b0Raw[22] = 0x54bf0df8825c528b, b0Raw[23] = 0xca08756ab1ea4aa4, b0Raw[24] = 0xd981078da2021515, b0Raw[25] = 0xd4e36721b28a86c0, b0Raw[26] = 0x2f9b1f6b5aa7949c, b0Raw[27] = 0x5221f8b5c1b3ff38, b0Raw[28] = 0x0c1762d379bbac98, b0Raw[29] = 0x446f46f4b050be96, b0Raw[30] = 0xcefe371b183cb0ba, b0Raw[31] = 0x33883075c0fa0c1e;
    x0Raw[0] = 0xe70a766fefe8a3d9, x0Raw[1] = 0x9c1b0c729d551a1e, x0Raw[2] = 0xb90eb536f889946b, x0Raw[3] = 0xabc943205ddd8c7d, x0Raw[4] = 0x1c1d0fa4e9c4a8af, x0Raw[5] = 0x8f52121d40c10dc9, x0Raw[6] = 0x0a3b8ac1c8cf72fc, x0Raw[7] = 0x1c11c128ea8fc592, x0Raw[8] = 0x78c91df6e5964c6e, x0Raw[9] = 0x68b7b862e3598c21, x0Raw[10] = 0x0feaa202ec321fd5, x0Raw[11] = 0x9650b554063361fa, x0Raw[12] = 0x981688a15bff35f0, x0Raw[13] = 0xb0bd71efc68ca6ac, x0Raw[14] = 0x22f92c21b127ea63, x0Raw[15] = 0x9c3a7d5905bcc291, x0Raw[16] = 0xec782f36f55ef85b, x0Raw[17] = 0x59a72d98334d18f5, x0Raw[18] = 0x4070bf05af614188, x0Raw[19] = 0xd103ee4280572732, x0Raw[20] = 0x9fc75e2bf3b88a31, x0Raw[21] = 0x6d4bb0668a80b611, x0Raw[22] = 0x414219a6cb306f63, x0Raw[23] = 0x41e6dd387002f151, x0Raw[24] = 0xf3bb54a320b888dd, x0Raw[25] = 0x18ab352f2e2bf1cd, x0Raw[26] = 0x2a11a8f1a90190bc, x0Raw[27] = 0xca48db595f2ce1a1, x0Raw[28] = 0x5713a4c7f48cdc0b, x0Raw[29] = 0x8cfefaa80755af8a, x0Raw[30] = 0xa6e58750b2ad53b9, x0Raw[31] = 0xee186257b631da9a;
    y0Raw[0] = 0x6d6aa6ef0e0640ce, y0Raw[1] = 0x4ada9eba8aa8c5ec, y0Raw[2] = 0x69ef564ce8042768, y0Raw[3] = 0xd2a11f284d792a04, y0Raw[4] = 0xca286b8c89f48549, y0Raw[5] = 0xf0b8391c49232b7a, y0Raw[6] = 0xfe197a49f8ce7e0d, y0Raw[7] = 0x0ad233f6a119530c, y0Raw[8] = 0x5f19d98c852e506b, y0Raw[9] = 0xa298ec304ea229ef, y0Raw[10] = 0xbd47613f6fc80172, y0Raw[11] = 0x445ce83d9913ef89, y0Raw[12] = 0x5046c301733f512a, y0Raw[13] = 0x9d8d87a068674bb9, y0Raw[14] = 0xff3ff4541a8a6e4f, y0Raw[15] = 0x19445369e36061ff, y0Raw[16] = 0xcf820fc75088c72c, y0Raw[17] = 0x5edfeb40bff2d0b7, y0Raw[18] = 0x843a01bf1722f844, y0Raw[19] = 0x153d57fbad6df31a, y0Raw[20] = 0x024375d0a9501630, y0Raw[21] = 0xa732d6684199fab5, y0Raw[22] = 0xc875557f0feaf888, y0Raw[23] = 0x875af062e144021b, y0Raw[24] = 0x01b47836a6e97bd1, y0Raw[25] = 0xc1f2c82884baa88f, y0Raw[26] = 0xbe7ecabab83de526, y0Raw[27] = 0x36d68c5723bb6b8f, y0Raw[28] = 0xf73b2f502b57eec5, y0Raw[29] = 0x98bbd05941d4f201, y0Raw[30] = 0xe89a4ddc9754afff, y0Raw[31] = 0x260278e58f09b6a8, y0Raw[32] = 0x8535f829d1f4f567, y0Raw[33] = 0xd00fa0576bb0c19d, y0Raw[34] = 0x6fb476f3b030ffce, y0Raw[35] = 0x0c88d939749860c5, y0Raw[36] = 0x25fb4bb91ad2d007, y0Raw[37] = 0x6f08dec09b5fe6c4, y0Raw[38] = 0x26b094e07defa038, y0Raw[39] = 0x3d7a43742d8484f2, y0Raw[40] = 0x7743f15b45566cb4, y0Raw[41] = 0x6268c522c087a6dd, y0Raw[42] = 0x0a6f5af2f5414092, y0Raw[43] = 0x3c7f0d7f10b14cc4, y0Raw[44] = 0xf768dcc766c9d733, y0Raw[45] = 0xb41759a41c1caa1c, y0Raw[46] = 0x2967714239d237ec, y0Raw[47] = 0x5ec73b974845091d, y0Raw[48] = 0x829b69e1fc97cf13, y0Raw[49] = 0x09ef49ce77fce055, y0Raw[50] = 0x2116a73f806314de, y0Raw[51] = 0x1385a91068077a7c, y0Raw[52] = 0x1eb6dc05ac61fb25, y0Raw[53] = 0xb018399916bddebd, y0Raw[54] = 0x500674fe7119f14b, y0Raw[55] = 0xb8edd72ab8b7b3b8, y0Raw[56] = 0x22b0e771896617c8, y0Raw[57] = 0xc4f95948e44cf8ac, y0Raw[58] = 0xa949f8c765ede72f, y0Raw[59] = 0xce2c89dac2b522af, y0Raw[60] = 0xebb1c84fbfcbab15, y0Raw[61] = 0xe65dcae9eb933cdc, y0Raw[62] = 0xe203310b513301a0, y0Raw[63] = 0x36ec8c9f52e08281;

    uint4096 a1, y1;
    uint2048 b1, x1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *x1Raw = (uint64 *) &x1, *y1Raw = (uint64 *) &y1;

    a1Raw[0] = 0x753967c8fbf29b1d, a1Raw[1] = 0x658c3e0352685364, a1Raw[2] = 0xac8f9cff08a3105b, a1Raw[3] = 0x34c860172cf6f050, a1Raw[4] = 0x4a2aa53cfbcf981f, a1Raw[5] = 0x3fcfa6dbedbf25a8, a1Raw[6] = 0xe749884c152dce6f, a1Raw[7] = 0x6669bf18a0914cb9, a1Raw[8] = 0x9604c40fa7c291bf, a1Raw[9] = 0xb2dba7600eabb5c3, a1Raw[10] = 0x3357480ca1ed880a, a1Raw[11] = 0x913713bf1cf8b41f, a1Raw[12] = 0x40ba856083eb553d, a1Raw[13] = 0x37647c4462ce62b1, a1Raw[14] = 0x2f018a230a418d75, a1Raw[15] = 0x78f054afcc29bdd0, a1Raw[16] = 0x9823c13656d7a398, a1Raw[17] = 0x8935f11da3b9fc45, a1Raw[18] = 0x067fb538c3c0341e, a1Raw[19] = 0xe7924956af704eaa, a1Raw[20] = 0x63c69c9528647467, a1Raw[21] = 0x44066d9089f97f0a, a1Raw[22] = 0x64e913b7d4b57241, a1Raw[23] = 0x3aadebbe06e04ae8, a1Raw[24] = 0x3455a6b02d1f54d1, a1Raw[25] = 0xca5d85e306b8a08a, a1Raw[26] = 0x0c4df83bd71d6820, a1Raw[27] = 0x700599c1ef6e9905, a1Raw[28] = 0x06ff757c22caa208, a1Raw[29] = 0x757f9e800eb0a0bc, a1Raw[30] = 0x4e46999e8ac8a9d7, a1Raw[31] = 0xe0d02512525d8f27, a1Raw[32] = 0xeef1a0e1728c2567, a1Raw[33] = 0x8926991a26600acf, a1Raw[34] = 0x868d4ef3dee67ca3, a1Raw[35] = 0x8ab7484550b70724, a1Raw[36] = 0xa10ae869ff264504, a1Raw[37] = 0x7d851e14b995afba, a1Raw[38] = 0xe7bae64cd20e239c, a1Raw[39] = 0x5db66de48b87c408, a1Raw[40] = 0x610c74713a5117d2, a1Raw[41] = 0x51a09044c80e7bd9, a1Raw[42] = 0xa852838b2af2f564, a1Raw[43] = 0xfcdc9b7bae67b9ab, a1Raw[44] = 0xea0be4065420955b, a1Raw[45] = 0x21700db47bce1e13, a1Raw[46] = 0x331baf161882048a, a1Raw[47] = 0xc6a4823ae56ab639, a1Raw[48] = 0xd01b42cecf33d0e0, a1Raw[49] = 0x3022615e72ac211b, a1Raw[50] = 0x1514906abd4d9779, a1Raw[51] = 0x00c84f4d5db68c10, a1Raw[52] = 0xca850bb4adb12dff, a1Raw[53] = 0x303481b7a5fa2d7b, a1Raw[54] = 0x8ae3e717098cc051, a1Raw[55] = 0xaef90ab4844d19b0, a1Raw[56] = 0x4a58ed1846867003, a1Raw[57] = 0x1a0670d0c5d5c698, a1Raw[58] = 0x76be7411ab59098f, a1Raw[59] = 0xbb5fb035e5d208ee, a1Raw[60] = 0x5249c2a7f0193366, a1Raw[61] = 0xce4b9d6187b4131a, a1Raw[62] = 0xe2128a765dfdbde4, a1Raw[63] = 0x5e0da76586c93524;
    b1Raw[0] = 0x03227670ae065bc6, b1Raw[1] = 0xbe8b628c33dfcfb7, b1Raw[2] = 0x28b979fb55a861a8, b1Raw[3] = 0xc856ce1275ea23ae, b1Raw[4] = 0x7747a50a1b52fc52, b1Raw[5] = 0xed6e2712549d4e09, b1Raw[6] = 0x5c77a3ea15fd06c1, b1Raw[7] = 0x285230b391333146, b1Raw[8] = 0x6e2822002c3db459, b1Raw[9] = 0x610adf714595b2e4, b1Raw[10] = 0x4b139cd621979dcf, b1Raw[11] = 0xe2ded9e6de1277db, b1Raw[12] = 0x0c1dd160f2108e4a, b1Raw[13] = 0x66c4d7be489e63e5, b1Raw[14] = 0x7adb21d7224beaa6, b1Raw[15] = 0xbb8e13fdb3e855f8, b1Raw[16] = 0x08f2dc9f885019fd, b1Raw[17] = 0x3278313e5b552d71, b1Raw[18] = 0xdd41b23b0dc5a7ca, b1Raw[19] = 0x8e9a68e970a3b39c, b1Raw[20] = 0x371d769870b1f2fd, b1Raw[21] = 0x7b0bf30a40470717, b1Raw[22] = 0x7598f71d5ce5bc60, b1Raw[23] = 0xfed76a8f97003acc, b1Raw[24] = 0xcadc9beb6589a53d, b1Raw[25] = 0x9abd51e9dc92c171, b1Raw[26] = 0x57db5e5a8ae9d10d, b1Raw[27] = 0x882f22522ff857c3, b1Raw[28] = 0x1f3d7c4c9b82a4f3, b1Raw[29] = 0xf7132c24ba46820d, b1Raw[30] = 0xa45f6696fd8a030e, b1Raw[31] = 0x743031f297989940;
    x1Raw[0] = 0x11634fa4f5df6927, x1Raw[1] = 0x71f881488c063a25, x1Raw[2] = 0x7f3ad8726bad42e5, x1Raw[3] = 0xabb712e5760bc524, x1Raw[4] = 0xb4c6377f4da001fc, x1Raw[5] = 0xf6255b961ee18e06, x1Raw[6] = 0xc5d5cb60a74d3a23, x1Raw[7] = 0xe5bfa97cfcc9025f, x1Raw[8] = 0xa59c2518bebe34b6, x1Raw[9] = 0xfe0a180e2700dfd2, x1Raw[10] = 0xee32944d06b0c28f, x1Raw[11] = 0xe45d48c56839a17c, x1Raw[12] = 0xd4c6633ec71548ed, x1Raw[13] = 0xe2156ef92e17bac4, x1Raw[14] = 0xd938d792d5fafe47, x1Raw[15] = 0xcf458e69bc29a8b5, x1Raw[16] = 0x01d618866e4dd7a2, x1Raw[17] = 0x154e3dc5449dfb17, x1Raw[18] = 0x032cdcc3a5b311ef, x1Raw[19] = 0x054b17c4ff4befd5, x1Raw[20] = 0x91d67576bd191f2a, x1Raw[21] = 0x4ce649a3693c6143, x1Raw[22] = 0x832028ef5ac7d218, x1Raw[23] = 0x10a4646235641c7d, x1Raw[24] = 0x83ad13454a9414a7, x1Raw[25] = 0x66ed70f74f4e28bd, x1Raw[26] = 0xcaef4497c3a29582, x1Raw[27] = 0xd6bbb28aa3d887f0, x1Raw[28] = 0xebd9959c25881e01, x1Raw[29] = 0xdffa9b76f8a05997, x1Raw[30] = 0x99fe367233909c43, x1Raw[31] = 0x3488106e8c5f2a1a;
    y1Raw[0] = 0xa5d8985f96b3e9f9, y1Raw[1] = 0x145eff0348d027fe, y1Raw[2] = 0xa020ab211dc6f4a1, y1Raw[3] = 0x81f3a163792d5638, y1Raw[4] = 0xb400617c1e86f508, y1Raw[5] = 0x9fc55dd49b3b74e1, y1Raw[6] = 0x93b18f11570b5662, y1Raw[7] = 0x90f0b444c8e3a593, y1Raw[8] = 0xdc2b935d52b813cb, y1Raw[9] = 0x328929223dab7450, y1Raw[10] = 0x1bba39db40b17469, y1Raw[11] = 0x82866e342b114342, y1Raw[12] = 0xb56e8f938e0bc767, y1Raw[13] = 0x609e263ff2294967, y1Raw[14] = 0x53f445fbc41d78a9, y1Raw[15] = 0xa299ca9df26b342e, y1Raw[16] = 0x22a2b8fae468a091, y1Raw[17] = 0x6d80359a12df2992, y1Raw[18] = 0xcdd12f5a5135edd7, y1Raw[19] = 0xb5fee619f72496cd, y1Raw[20] = 0x5226a43ab0b1b019, y1Raw[21] = 0x90797c3717bfdb5d, y1Raw[22] = 0x4e8ed515732cfbb6, y1Raw[23] = 0x4a3e25508e413564, y1Raw[24] = 0xe1b8fe54d35d93c0, y1Raw[25] = 0x4bb115ba5d773a25, y1Raw[26] = 0x64e2b7c782289754, y1Raw[27] = 0x42ec279403a6dd62, y1Raw[28] = 0x0adde221952dddff, y1Raw[29] = 0x0a4bc0897588df73, y1Raw[30] = 0xe507d0109592e991, y1Raw[31] = 0xd9b1173829d192ea, y1Raw[32] = 0x43375c4a6fef747b, y1Raw[33] = 0x93b48663c38ae11f, y1Raw[34] = 0xeeda0d4457f639e2, y1Raw[35] = 0x70752a5fb8fa403b, y1Raw[36] = 0x08df323f08aeaddf, y1Raw[37] = 0x8c6ee184c1eef637, y1Raw[38] = 0xcf8b9abecd24ae3e, y1Raw[39] = 0xfe86848cb31858b0, y1Raw[40] = 0x634f5a98e88ab6f1, y1Raw[41] = 0x8cd7d24571fbec27, y1Raw[42] = 0x56450902029be38b, y1Raw[43] = 0xea3a187031a07f66, y1Raw[44] = 0x9b45523488b6a138, y1Raw[45] = 0xc69efe78672e4cde, y1Raw[46] = 0x0bee1b7a0e7647a1, y1Raw[47] = 0x92ef730068621d26, y1Raw[48] = 0xdaba7f856c507a30, y1Raw[49] = 0xa37b485228c6e457, y1Raw[50] = 0xc5e4c68824dce665, y1Raw[51] = 0x6d6436da39221f82, y1Raw[52] = 0x2e85ac15e5b17d54, y1Raw[53] = 0xe13c54406bf25463, y1Raw[54] = 0x2cbcd0fe284d9b3d, y1Raw[55] = 0x6b97e43315543350, y1Raw[56] = 0xb4e1fb26ee3d4c0d, y1Raw[57] = 0x72838c193a085479, y1Raw[58] = 0x9e71c1dfbf09e1b3, y1Raw[59] = 0xbcf20357b654f918, y1Raw[60] = 0x52c6bcc791ba9573, y1Raw[61] = 0x520fa38c56220b9b, y1Raw[62] = 0xae5e970a2d94586f, y1Raw[63] = 0xd579ea400ac13354;

    uint4096 a2, y2;
    uint2048 b2, x2;
    uint64 *a2Raw = (uint64 *) &a2, *b2Raw = (uint64 *) &b2, *x2Raw = (uint64 *) &x2, *y2Raw = (uint64 *) &y2;

    a2Raw[0] = 0x2f9d4a0c1e3265c6, a2Raw[1] = 0x254406d82aac8b24, a2Raw[2] = 0x555bb301062efd7b, a2Raw[3] = 0x6c2d48e041bf5d1c, a2Raw[4] = 0x43a0c5432f7e0b7f, a2Raw[5] = 0x4ad40a5ba34c9f94, a2Raw[6] = 0x0e5a18af3d767c06, a2Raw[7] = 0x890641673e6d2dda, a2Raw[8] = 0x09da82d2a155acfd, a2Raw[9] = 0x52a4f94e02274ed8, a2Raw[10] = 0x2d5ab536096f8193, a2Raw[11] = 0x9a543308e9594220, a2Raw[12] = 0x9da71d8281f1caae, a2Raw[13] = 0x3ea9139a0ea2c491, a2Raw[14] = 0x946e31e7d7b9c5e0, a2Raw[15] = 0x28033fe3c964ea1b, a2Raw[16] = 0xc130f0b8aab48010, a2Raw[17] = 0xd1a15f826e022d00, a2Raw[18] = 0x4ea24b638e2a5bf7, a2Raw[19] = 0x64a6265e9624b11f, a2Raw[20] = 0x128ea298507d165e, a2Raw[21] = 0x2de35c637686ad81, a2Raw[22] = 0x2b15c040ecf85075, a2Raw[23] = 0x9b0c9c3b7972fb54, a2Raw[24] = 0xd6ef4a58f1f3d742, a2Raw[25] = 0x1f684bffbc4fec2b, a2Raw[26] = 0x7e5eedb87160a866, a2Raw[27] = 0xd51062c0a6fc7ce2, a2Raw[28] = 0x2be003c40cbbe9bc, a2Raw[29] = 0x305b7eafb0cabfea, a2Raw[30] = 0x00993acac2cfd44c, a2Raw[31] = 0x5d852adbf0a06b58, a2Raw[32] = 0x294cfbb94d198fe3, a2Raw[33] = 0x5fa1f165351e8296, a2Raw[34] = 0x50abd373012c498d, a2Raw[35] = 0x2b99ecb36f6495c7, a2Raw[36] = 0x07a22f4ba3873f0b, a2Raw[37] = 0x7ad968e3e519655d, a2Raw[38] = 0xd0a253c2cc1c02c6, a2Raw[39] = 0x7ddbd6cc9dd2d1e4, a2Raw[40] = 0xca1ce0d366257059, a2Raw[41] = 0x5ddce255c13fccea, a2Raw[42] = 0xc565faf78bd0ee84, a2Raw[43] = 0xa444815cb6618868, a2Raw[44] = 0x525de6c582d9e62d, a2Raw[45] = 0x22320af4cf42cef2, a2Raw[46] = 0xb4360909467aaf9d, a2Raw[47] = 0x3cd5518b666ab634, a2Raw[48] = 0xe0939d4f4546193d, a2Raw[49] = 0x06e984a0d894087c, a2Raw[50] = 0x261c8c4ccc5b34be, a2Raw[51] = 0x9ba412d7c83da904, a2Raw[52] = 0xb7c106cc0c8e80f1, a2Raw[53] = 0x687779ebfcff9d87, a2Raw[54] = 0x5f471527e61d73ca, a2Raw[55] = 0x94fb3151c5b0291c, a2Raw[56] = 0x1ddeba332c6a124b, a2Raw[57] = 0xce1505d7b2f70cf7, a2Raw[58] = 0xb58d95708fde3764, a2Raw[59] = 0xd4bb880986f5b04a, a2Raw[60] = 0x41bad7189882d813, a2Raw[61] = 0x54f63d6822403c52, a2Raw[62] = 0x6883841cd987c14b, a2Raw[63] = 0xaae4239b88f1b324;
    b2Raw[0] = 0x34524dc03a027e2e, b2Raw[1] = 0x9d88211615289a39, b2Raw[2] = 0x019b3f4ac4d98c32, b2Raw[3] = 0x4c89567b806b6cd7, b2Raw[4] = 0x07dab1d62a458718, b2Raw[5] = 0x417975a47a6210d1, b2Raw[6] = 0x154a2667683ba208, b2Raw[7] = 0x69686011a9adbcd6, b2Raw[8] = 0xf5b6e22fc10fd6f7, b2Raw[9] = 0x9b160ce283958a87, b2Raw[10] = 0x2f60c0b42bdf9dd0, b2Raw[11] = 0x78afb64e89d0d457, b2Raw[12] = 0x43eac29f6b8ae936, b2Raw[13] = 0x32148d78389f3761, b2Raw[14] = 0x78356b5e3de5e7a9, b2Raw[15] = 0xcf8f0a599ad46a74, b2Raw[16] = 0xedf417d6c164f1f2, b2Raw[17] = 0x3eb5502c0c8f92f8, b2Raw[18] = 0xefd193fc620a35f5, b2Raw[19] = 0x289f93a17ad5d1b0, b2Raw[20] = 0xec8bb5bff7168273, b2Raw[21] = 0x0c684234617694ce, b2Raw[22] = 0x480e9a859e905d20, b2Raw[23] = 0xa08b7f13ca4303e8, b2Raw[24] = 0x23eb6eecd8c8c8bb, b2Raw[25] = 0xc544e6a57eee231d, b2Raw[26] = 0x6aac34f8a99e2af5, b2Raw[27] = 0xb78e3a1861dd84a4, b2Raw[28] = 0x4121f3abe0975f3e, b2Raw[29] = 0xc0220deab3308ca6, b2Raw[30] = 0x5e8126571785504d, b2Raw[31] = 0x752804121f4e9b37;
    x2Raw[0] = 0x6f3593a651212c93, x2Raw[1] = 0x46e05500e1d4ba4e, x2Raw[2] = 0x6e995d38f3a7cee3, x2Raw[3] = 0x132adae43cdbdebe, x2Raw[4] = 0x316f614ce6ab3ee7, x2Raw[5] = 0x6a859b7234cc1440, x2Raw[6] = 0x2a1779cd6d1e3aec, x2Raw[7] = 0x96e5c8569d40f72f, x2Raw[8] = 0xedc8bcccc1d07be7, x2Raw[9] = 0x783eef98b8b21757, x2Raw[10] = 0x0924fe955a793b61, x2Raw[11] = 0x40fbbe9d6497909c, x2Raw[12] = 0xd1a2cd95a78b5009, x2Raw[13] = 0x4932f24c59d7b4e9, x2Raw[14] = 0x9a766d97aa57d61e, x2Raw[15] = 0xe335f490ca843cfa, x2Raw[16] = 0xf611e355e6957f20, x2Raw[17] = 0xca46b8bd5cedfaf4, x2Raw[18] = 0xde0d104f333e94dc, x2Raw[19] = 0xa3b9e4db1aa3c3b4, x2Raw[20] = 0x305a07f2fc1cb584, x2Raw[21] = 0xd34def7779df8fd9, x2Raw[22] = 0x3274f3180e69d579, x2Raw[23] = 0x6cb6328fccff27bc, x2Raw[24] = 0xcb0fe9724189e690, x2Raw[25] = 0xbe50848f41e32e71, x2Raw[26] = 0x9a10435a176a656b, x2Raw[27] = 0xdcf8ffb304ec216a, x2Raw[28] = 0x2dba8211aba8a0ba, x2Raw[29] = 0xe3e418547157ef71, x2Raw[30] = 0xdc2bc40177b4c32e, x2Raw[31] = 0xfe07f9f5ee99c509;
    y2Raw[0] = 0xa42b9bc7e30a27d0, y2Raw[1] = 0x4e6a20930515694d, y2Raw[2] = 0x8ff5f4a3f20c283f, y2Raw[3] = 0xe05e0d14640a38b3, y2Raw[4] = 0xad3403c8d40b3b2d, y2Raw[5] = 0x965d81a4f0109c03, y2Raw[6] = 0x102faf8a6c933768, y2Raw[7] = 0xc5193b0a6df79949, y2Raw[8] = 0x52a4a87dd56c40b0, y2Raw[9] = 0x1d529f7564b9d4ae, y2Raw[10] = 0x74db8bf5d0258e5e, y2Raw[11] = 0x2167c3a90de1d543, y2Raw[12] = 0xb1b411edb5eabcac, y2Raw[13] = 0x8bc33654cdfb4bb4, y2Raw[14] = 0x503eb5900229a776, y2Raw[15] = 0x0be4054a23ee525a, y2Raw[16] = 0x1e9dcb50ba499908, y2Raw[17] = 0xbff66c62983dad5b, y2Raw[18] = 0x88483dbce2851e12, y2Raw[19] = 0xb3f0681fb0c8bda0, y2Raw[20] = 0x2bb1a35496265162, y2Raw[21] = 0x54c6cf82073659c0, y2Raw[22] = 0x3c80e3b3c82c9f60, y2Raw[23] = 0xb69a7fbd39917c7a, y2Raw[24] = 0xa95165de5ff91830, y2Raw[25] = 0xb9852ff5c7318954, y2Raw[26] = 0x655bb76b7523eeaa, y2Raw[27] = 0xc226369f3ff3e633, y2Raw[28] = 0xc4ec4a5cceb0e553, y2Raw[29] = 0xfc7d9544adb78468, y2Raw[30] = 0x4f1e7e08ca37914e, y2Raw[31] = 0x503f92d9b0b1b2a6, y2Raw[32] = 0x5e5dc124411dcfb2, y2Raw[33] = 0xfa68c7061234d9f1, y2Raw[34] = 0xa4f5af790dfcdef5, y2Raw[35] = 0xb66c9db802e827ab, y2Raw[36] = 0x8e358eba9a8c05e4, y2Raw[37] = 0x99296cb4392b3250, y2Raw[38] = 0x5f4bbe8f815b2a3a, y2Raw[39] = 0xdedc3d5ffea7cea8, y2Raw[40] = 0x94be46f28f54f70b, y2Raw[41] = 0x8adb87a617292ab3, y2Raw[42] = 0xad22e34048593d9e, y2Raw[43] = 0x6f920e69a1d911cc, y2Raw[44] = 0x6bc6d80051bb1940, y2Raw[45] = 0x55e05ecc6a5ceff3, y2Raw[46] = 0xf6ace96a9aac367b, y2Raw[47] = 0x46e53df59e42ef6b, y2Raw[48] = 0x72ba3009f227bb49, y2Raw[49] = 0x297a647532059aef, y2Raw[50] = 0x6f49cf26565da770, y2Raw[51] = 0x9799f7ede14d992e, y2Raw[52] = 0x1b0cd4b280907a48, y2Raw[53] = 0x51ba89026147c140, y2Raw[54] = 0x41b143fae5853899, y2Raw[55] = 0x85bab7689e9f6441, y2Raw[56] = 0x762c7a3496d2cf96, y2Raw[57] = 0xa45ec3e693ccb1c9, y2Raw[58] = 0x2867fa47b0d5603a, y2Raw[59] = 0xe818556a439dd192, y2Raw[60] = 0xd9f2cae4aba882b1, y2Raw[61] = 0x59c48a4ac32fc890, y2Raw[62] = 0xcdcf81d863abc3ac, y2Raw[63] = 0x2df32e4b5984aad;

    uint4096 a3, y3;
    uint2048 b3, x3;
    uint64 *a3Raw = (uint64 *) &a3, *b3Raw = (uint64 *) &b3, *x3Raw = (uint64 *) &x3, *y3Raw = (uint64 *) &y3;

    a3Raw[0] = 0xdeca383d84537440, a3Raw[1] = 0x5ad09c2252839c17, a3Raw[2] = 0x120fcf6f4c14c9a7, a3Raw[3] = 0x954e0c941e91d4cc, a3Raw[4] = 0x521a19d77d2f0fa8, a3Raw[5] = 0x70dbeeda20e22e73, a3Raw[6] = 0x748d6883a07012f8, a3Raw[7] = 0x53387516e640b4f4, a3Raw[8] = 0x7568440fe605211e, a3Raw[9] = 0xe7e1df0c645b8b66, a3Raw[10] = 0x164624e0eddb4465, a3Raw[11] = 0xd70a57ce23a1d4d6, a3Raw[12] = 0x3fe1bfcec931d95e, a3Raw[13] = 0x9d65670780d9c0d3, a3Raw[14] = 0x5c7055ea9b25dbb3, a3Raw[15] = 0x85908f410647b418, a3Raw[16] = 0x8065eb3ba38cf8c7, a3Raw[17] = 0x416c2d8244c1e609, a3Raw[18] = 0xc72dabddb4bcd440, a3Raw[19] = 0xe4694a60063e999e, a3Raw[20] = 0x09b5964891a2073c, a3Raw[21] = 0xc3b74f74161f149d, a3Raw[22] = 0xfdb1e50da6063e2b, a3Raw[23] = 0x72687a5368847107, a3Raw[24] = 0xe7fce9e79b9dbdff, a3Raw[25] = 0x4b198248c5bb9db3, a3Raw[26] = 0x7e4cbe1f0a17c52f, a3Raw[27] = 0xf95e856bbb6e1781, a3Raw[28] = 0xf7cfeb44dda2c389, a3Raw[29] = 0xf5c4c04cff4e5825, a3Raw[30] = 0x58cc27c473995c01, a3Raw[31] = 0xcebc2f2895d740b3, a3Raw[32] = 0x8e6606d09393af4f, a3Raw[33] = 0x3f472e29c552a4c2, a3Raw[34] = 0x27d819dcfe053cf5, a3Raw[35] = 0xb7798a1d8de755c9, a3Raw[36] = 0x42ba57f7ef8f1f90, a3Raw[37] = 0x128113b7629c973d, a3Raw[38] = 0x54d90527c820e542, a3Raw[39] = 0xb34835f3c68929e0, a3Raw[40] = 0x2315603f8f6c9732, a3Raw[41] = 0x0ae9049742058fc5, a3Raw[42] = 0x351700763cdf166e, a3Raw[43] = 0xa79c30dfd78e1ef8, a3Raw[44] = 0x13e6aac6fa2a787f, a3Raw[45] = 0x8e1942231b4c0c1b, a3Raw[46] = 0xca7cb711de5e6932, a3Raw[47] = 0xc32cf8da7a01c18b, a3Raw[48] = 0x87d4e4a9556f3c74, a3Raw[49] = 0x997ecefc1bd75c01, a3Raw[50] = 0x2f9ff9d5c0d00b1a, a3Raw[51] = 0x2a70b4fc0079c6aa, a3Raw[52] = 0x9cb25868ceb9e016, a3Raw[53] = 0x712da6d756d07dad, a3Raw[54] = 0x65b2c337ee5d0350, a3Raw[55] = 0x1fad095916009405, a3Raw[56] = 0x481bbf944309df99, a3Raw[57] = 0xf69a7fb691842b6f, a3Raw[58] = 0xc9ad44ed7e9de0ae, a3Raw[59] = 0x6c7730dac948e04b, a3Raw[60] = 0x470fbc78530019af, a3Raw[61] = 0x62151800f297101e, a3Raw[62] = 0x30d21cee1956c674, a3Raw[63] = 0xb7f8a6b4099a58c6;
    b3Raw[0] = 0x144e8e680bd95a46, b3Raw[1] = 0x671a231ad260cefc, b3Raw[2] = 0x57e1f622d984751b, b3Raw[3] = 0x2d4b79780f4c3cd3, b3Raw[4] = 0x90d421e2c2894f32, b3Raw[5] = 0x143ef7e1c6472208, b3Raw[6] = 0xd7ed205f045e8ed2, b3Raw[7] = 0xa1d6ab69bbb5dd64, b3Raw[8] = 0x4f50d778eb611f82, b3Raw[9] = 0x59a11b11f803fd71, b3Raw[10] = 0x3e979c2dabc57516, b3Raw[11] = 0x6a1b4c9aee03db8f, b3Raw[12] = 0x61eeb7f2f37341ac, b3Raw[13] = 0x28dcd6fe6c7e242e, b3Raw[14] = 0x5cf9efa1b4c067f7, b3Raw[15] = 0x86ed4b73ca582d6e, b3Raw[16] = 0x12d37436a4f0e6f0, b3Raw[17] = 0xe1a099c150eea841, b3Raw[18] = 0x9501cce40004a0b6, b3Raw[19] = 0x02107dbd47e037fb, b3Raw[20] = 0x882c27cd4cec5b66, b3Raw[21] = 0x23e0f1c8587dd1b8, b3Raw[22] = 0xa636f63ad72968b5, b3Raw[23] = 0xd87535be06004b86, b3Raw[24] = 0x0cbd95498aba1428, b3Raw[25] = 0x110931b292e7a846, b3Raw[26] = 0x0f476b5e1fa0b4ef, b3Raw[27] = 0xe9701f0feeb0511d, b3Raw[28] = 0xb6ea668c49f42f78, b3Raw[29] = 0x56a3552268bf93cb, b3Raw[30] = 0x4fca3cf92a2198d6, b3Raw[31] = 0xde9485b6cb20e529;
    x3Raw[0] = 0x34e72408df049594, x3Raw[1] = 0x510d73eff8dd785b, x3Raw[2] = 0x073f6ccd5a6769b3, x3Raw[3] = 0xcb2f7d89e7f1948c, x3Raw[4] = 0x7e814b7f263fad6e, x3Raw[5] = 0xb9567d9a8a715ce8, x3Raw[6] = 0x1df67a8e986ccb5f, x3Raw[7] = 0x309815575ddb0e64, x3Raw[8] = 0xee3a3a98a3908a87, x3Raw[9] = 0x31e128dd937a34dc, x3Raw[10] = 0xf5264b926cb2f385, x3Raw[11] = 0x442632717f9a9eea, x3Raw[12] = 0xb2cf9b7958edc322, x3Raw[13] = 0x61bb17b04341a9f4, x3Raw[14] = 0x2ed668f2bd66ac80, x3Raw[15] = 0xd09b02d7187dd7d1, x3Raw[16] = 0xd5082f07d926dd78, x3Raw[17] = 0xf018b4cbf0746469, x3Raw[18] = 0x95dac2ae58ab8c4e, x3Raw[19] = 0xe33f87db3e3a6eac, x3Raw[20] = 0x23e12c2ec9d7484e, x3Raw[21] = 0xc00d5b99567ae78d, x3Raw[22] = 0x4905998704f8566a, x3Raw[23] = 0xf2aa9280cfed369e, x3Raw[24] = 0x1e38e9016a774ed9, x3Raw[25] = 0xec5bf3aa824cc75e, x3Raw[26] = 0xbccf1885f68978f9, x3Raw[27] = 0x452164a06c1cf4bd, x3Raw[28] = 0xeea127708d910879, x3Raw[29] = 0xf5120ac6dc70bdd1, x3Raw[30] = 0x7023e2a5a25ad03a, x3Raw[31] = 0xfe5853691580493d;
    y3Raw[0] = 0x923592374f80270b, y3Raw[1] = 0x444d59bebd0fa2e8, y3Raw[2] = 0xccf9f1530df40616, y3Raw[3] = 0x3c54590b7935b5c1, y3Raw[4] = 0x3c77c09d8832ef7e, y3Raw[5] = 0xd9f2dc260ee7b61f, y3Raw[6] = 0x8ecc3d392c481a47, y3Raw[7] = 0x6cdcdd341f5e14a0, y3Raw[8] = 0xf1a61c9936fcec2b, y3Raw[9] = 0x8a427c44d25b4e96, y3Raw[10] = 0xed1b03fcc9371152, y3Raw[11] = 0x4405e970b522a868, y3Raw[12] = 0xcb2e645ecc50dc8c, y3Raw[13] = 0x17bf258d10163706, y3Raw[14] = 0xacffd319b348e96e, y3Raw[15] = 0x94a0b942f99427b5, y3Raw[16] = 0xab6cb634c44efec5, y3Raw[17] = 0x58b96f3bec6c8249, y3Raw[18] = 0xd5bc69013b67b9cf, y3Raw[19] = 0x4322c92e06c17e24, y3Raw[20] = 0x4857d14775963743, y3Raw[21] = 0x6c23531b09c1f76c, y3Raw[22] = 0xcc6ab12a92740728, y3Raw[23] = 0xd647287fa5bd334c, y3Raw[24] = 0xd33a224558db670f, y3Raw[25] = 0xf6d678fa59eb9790, y3Raw[26] = 0x3f0d92364e39e230, y3Raw[27] = 0x0894e3ead333499d, y3Raw[28] = 0x399a25b4a351c1e2, y3Raw[29] = 0x4cf89dbb2f5479b8, y3Raw[30] = 0x4cd163d4de6d842e, y3Raw[31] = 0x9329de353b4c0855, y3Raw[32] = 0x54843e190cb2ff0c, y3Raw[33] = 0xfe38ab7de4976c44, y3Raw[34] = 0x2aed96c8882e1314, y3Raw[35] = 0x49432fa64f8e5cc6, y3Raw[36] = 0x6c4990e66a39d9cf, y3Raw[37] = 0x3636de934338ffc9, y3Raw[38] = 0x3226d3b94065d369, y3Raw[39] = 0xbaeff6a2065385c5, y3Raw[40] = 0xd2f8740d2417bbf7, y3Raw[41] = 0x1a5b2a63a7c56930, y3Raw[42] = 0x304112f8ee7de87d, y3Raw[43] = 0xcc900fca35852112, y3Raw[44] = 0x784db9a92c7ed69f, y3Raw[45] = 0x1619bf10e70c28a9, y3Raw[46] = 0xb8589d963f84a19f, y3Raw[47] = 0x7089105fac5c8da3, y3Raw[48] = 0xda265393bcde17aa, y3Raw[49] = 0x74a01970ea75ffb6, y3Raw[50] = 0x719554d90b66e4f8, y3Raw[51] = 0x152a3efd39afbabc, y3Raw[52] = 0xf5d5b152ad64e11b, y3Raw[53] = 0xaab5cd7fb3410cd7, y3Raw[54] = 0x6c7703895166f9bb, y3Raw[55] = 0x7ec71a0e58f9283a, y3Raw[56] = 0xb5ca27d392923d66, y3Raw[57] = 0x9bdc899165415a7b, y3Raw[58] = 0x09844bee11f9af5d, y3Raw[59] = 0x9eea082a844f180c, y3Raw[60] = 0xe48e278d8a84ef04, y3Raw[61] = 0xa1c0d80a77b6ebe2, y3Raw[62] = 0xd40f987ea1cb817c, y3Raw[63] = 0x15e2ef584fb42c8;

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

    a0Raw[0] = 0x30f4a9110b53501e, a0Raw[1] = 0x9184df77ce05c9f2, a0Raw[2] = 0x08b6033c4a6ca075, a0Raw[3] = 0x1288e985030e3de8, a0Raw[4] = 0x25d5cdbee4beb457, a0Raw[5] = 0x7aaddbbe848e04d4, a0Raw[6] = 0x7fa6dd3ec7e839a8, a0Raw[7] = 0xbc35c682ebfdd699, a0Raw[8] = 0xc85c27fc7e99ec8f, a0Raw[9] = 0xe4d289b39aa019eb, a0Raw[10] = 0x925ff38f4f9e5e4b, a0Raw[11] = 0xc408683c4347ee5d, a0Raw[12] = 0x564f0e82507ef7a1, a0Raw[13] = 0xed15d6949e511167, a0Raw[14] = 0xeeb169657c8e2036, a0Raw[15] = 0xf624e83fbb31129e, a0Raw[16] = 0xa876a5bdfa4f4a00, a0Raw[17] = 0xda80ef5145dd0bb1, a0Raw[18] = 0xaf726834d04f6aa7, a0Raw[19] = 0x828196e2900a863b, a0Raw[20] = 0x32ff663b58f47533, a0Raw[21] = 0x5a10681cd1d3744b, a0Raw[22] = 0x1162462ee6fc4f38, a0Raw[23] = 0x2429c770f47b9f0e, a0Raw[24] = 0xf961e2b33ec29b66, a0Raw[25] = 0x10f4f67db0122341, a0Raw[26] = 0xcb313a848620ecd5, a0Raw[27] = 0x290a7f6930232119, a0Raw[28] = 0xa313b18a0ac28aef, a0Raw[29] = 0xa8ee62d7dc4cab4a, a0Raw[30] = 0x72b82477a20dc236, a0Raw[31] = 0x6c31c4cd91e2a70a, a0Raw[32] = 0xfd4d6b950d52e483, a0Raw[33] = 0xc2228c2d6df85f9a, a0Raw[34] = 0x682cfbe28fd6b6fd, a0Raw[35] = 0x5bf5b94169c4d88d, a0Raw[36] = 0x656efba16cc8786a, a0Raw[37] = 0x456af05bfaaab175, a0Raw[38] = 0x0763ac13d6cd8f76, a0Raw[39] = 0xc525e5dacb02b23f, a0Raw[40] = 0x82a123b3719e990a, a0Raw[41] = 0xb837b3a6ea7895dc, a0Raw[42] = 0x5be43ddad630d4d0, a0Raw[43] = 0x409f447c0ecdd4f7, a0Raw[44] = 0x969626ac17b0f462, a0Raw[45] = 0x7233df41e23b82c0, a0Raw[46] = 0xeb9956ed3b425341, a0Raw[47] = 0x1988da32a9e21ac2, a0Raw[48] = 0x93c800f6bf980710, a0Raw[49] = 0xf4e71b9c2de13c0a, a0Raw[50] = 0xf65e2f12be636e0b, a0Raw[51] = 0xbf457d925f4e3c9b, a0Raw[52] = 0xf42eabeeaa671209, a0Raw[53] = 0x52707f832854e8cf, a0Raw[54] = 0x0bc932677ac046c4, a0Raw[55] = 0x8b2b479ae2d3d3d3, a0Raw[56] = 0xa3e887fcf95ccd76, a0Raw[57] = 0x87f843b89c117d2c, a0Raw[58] = 0x5c5d5898c3f62b1f, a0Raw[59] = 0x64b3e3fc65f50250, a0Raw[60] = 0x313a5b25fce7b729, a0Raw[61] = 0x8d8e261709aae7d4, a0Raw[62] = 0x020a35f02cf5051d, a0Raw[63] = 0x8330cb6ecc56d46e;
    b0Raw[0] = 0x93bd45f562dfeb64, b0Raw[1] = 0x5fe95b922c3a6f09, b0Raw[2] = 0x9968132fee7a2255, b0Raw[3] = 0x141444bc70d7af68, b0Raw[4] = 0xc692dfda4f47f645, b0Raw[5] = 0xa305ab391febaafc, b0Raw[6] = 0xc1d04985a76f0867, b0Raw[7] = 0x38ecea35a29cb38d, b0Raw[8] = 0x1b96443f0ae42c7f, b0Raw[9] = 0x753bb39bb6521a1b, b0Raw[10] = 0xfe4898ff4ba31644, b0Raw[11] = 0xaac92614e484476e, b0Raw[12] = 0x698f9992a50af0ef, b0Raw[13] = 0xf81110c311ab61f5, b0Raw[14] = 0x0c6475de8af7ad43, b0Raw[15] = 0x250f0339e29c343c, b0Raw[16] = 0x6b7d604c5216fde1, b0Raw[17] = 0xd0e3d68732c33d54, b0Raw[18] = 0x28c1b94bed4557ad, b0Raw[19] = 0xa81f59a1411eae34, b0Raw[20] = 0x13aa6a6adf4eb4a5, b0Raw[21] = 0xabcbc083cea20234, b0Raw[22] = 0xe71de32565a2e434, b0Raw[23] = 0x638b6d8c5d8d438c, b0Raw[24] = 0x2ffedb2602acf1af, b0Raw[25] = 0x31dc79f410b77bd2, b0Raw[26] = 0x693c7f1bf02efc0f, b0Raw[27] = 0x53da2c94cd187b79, b0Raw[28] = 0xff459f72ea4dfb07, b0Raw[29] = 0xb367f3e7d8d65de7, b0Raw[30] = 0xcbdf44bcee143463, b0Raw[31] = 0x5f669ef2f18f9870, b0Raw[32] = 0xa8dc355b9b375629, b0Raw[33] = 0x0dd5c8116e900046, b0Raw[34] = 0x41662b8ec75a38b0, b0Raw[35] = 0x8000e6a85a0c3ec8, b0Raw[36] = 0xf0981d547cb78257, b0Raw[37] = 0xc2a3c9e3e3caf3c4, b0Raw[38] = 0x17d2ee0c994eefce, b0Raw[39] = 0xf78b527336bc23dc, b0Raw[40] = 0xd7ecfd4d56690819, b0Raw[41] = 0xf7696359079f0a4e, b0Raw[42] = 0x18ef32eaca9022ec, b0Raw[43] = 0x0de317d24b90acea, b0Raw[44] = 0x239416f947aa5761, b0Raw[45] = 0xd0cba8a8117cdf8c, b0Raw[46] = 0xead05ec6416319fe, b0Raw[47] = 0x9246a6d121897019, b0Raw[48] = 0xd56dbf49cd59818e, b0Raw[49] = 0xd3d599f78f001057, b0Raw[50] = 0x522b064940b709a4, b0Raw[51] = 0x617140570e1010b5, b0Raw[52] = 0x192b1cd3a94014a6, b0Raw[53] = 0x72b5fefad9115694, b0Raw[54] = 0x784adfa9945e9cb1, b0Raw[55] = 0x8658b4f4bfa53775, b0Raw[56] = 0xf10ee5cc85348c11, b0Raw[57] = 0x724e6ddeb7bcc685, b0Raw[58] = 0x8a9c36300720ed21, b0Raw[59] = 0x8753988c1a35bc19, b0Raw[60] = 0xa952ed15e12d328f, b0Raw[61] = 0x83c6f2c92c0f3730, b0Raw[62] = 0x40216016d29a5c47, b0Raw[63] = 0xd833b580314ddaaa;
    x0Raw[0] = 0xea77cb7ede73934f, x0Raw[1] = 0xcbb08b0dd7c36089, x0Raw[2] = 0xdf6fb871b6d9df5e, x0Raw[3] = 0x375b7faeaff2e3d4, x0Raw[4] = 0x8fed0583e69669b2, x0Raw[5] = 0xfcb44e2118f3de17, x0Raw[6] = 0x63eac8e0e2eb1013, x0Raw[7] = 0x0101d2b7e9e805d3, x0Raw[8] = 0x69da6ecb56d74616, x0Raw[9] = 0x728b712abaa2ef21, x0Raw[10] = 0xdf03a59babb1672e, x0Raw[11] = 0xcedca2750cad3142, x0Raw[12] = 0xc2c09f177e51999b, x0Raw[13] = 0xb9324cc2bb25aa43, x0Raw[14] = 0x82e3a339280b66ff, x0Raw[15] = 0xe6ebd1852120a0ba, x0Raw[16] = 0x53107519383bb28b, x0Raw[17] = 0xb1c76b94c3028056, x0Raw[18] = 0x9c0237ba809fce8f, x0Raw[19] = 0x3ac72b79b129eb70, x0Raw[20] = 0x45c622cd6cfe9c59, x0Raw[21] = 0x32244729796648b5, x0Raw[22] = 0x8f5e130fd1f84a71, x0Raw[23] = 0xc4dc44219f0d4c18, x0Raw[24] = 0x803a4773a2ab12f7, x0Raw[25] = 0x42c3e7faa6fd3462, x0Raw[26] = 0x90a534a159554ce9, x0Raw[27] = 0xba56b1b11e87ad0b, x0Raw[28] = 0xc1e911452d734de6, x0Raw[29] = 0xbfc502f6b6d53b6a, x0Raw[30] = 0x2f35e2b502fb0dcc, x0Raw[31] = 0x55b93ce375c61707, x0Raw[32] = 0xb60fe2fdf24cdc55, x0Raw[33] = 0xf07cd15aa86d13ac, x0Raw[34] = 0x32571c4fe3c0d770, x0Raw[35] = 0x3fce102dbe71d5ad, x0Raw[36] = 0x771f8c71bcc2d944, x0Raw[37] = 0x90add2bd5e589312, x0Raw[38] = 0xdaa7e9f8e8ad19b6, x0Raw[39] = 0x772f3d1d1e8ef8e6, x0Raw[40] = 0x5dcd349f730b1fda, x0Raw[41] = 0x5c9e78b7ca046bbd, x0Raw[42] = 0xaeaff2eacfe5182e, x0Raw[43] = 0x573a9034508e4621, x0Raw[44] = 0x5dd882eceeb74dc9, x0Raw[45] = 0xd2ee34bfc36c494a, x0Raw[46] = 0x6241fbaece1694f5, x0Raw[47] = 0x7f27411049a78936, x0Raw[48] = 0x86371446bfee9a7d, x0Raw[49] = 0x068eded946c1e8bd, x0Raw[50] = 0x7712bdecf775c8fc, x0Raw[51] = 0x3fd5492de973c207, x0Raw[52] = 0xa0032ff6c30dfc50, x0Raw[53] = 0x8558d672339b4dc6, x0Raw[54] = 0x75759d001631f136, x0Raw[55] = 0x022cc98b14a3504a, x0Raw[56] = 0x6e89630aaabf1478, x0Raw[57] = 0x6bba3806e0bd1488, x0Raw[58] = 0x8ea5788a9bd65ce2, x0Raw[59] = 0xd20261ee5541dec5, x0Raw[60] = 0x5e2ee612cf279ecc, x0Raw[61] = 0xa98f5def03ebde19, x0Raw[62] = 0xbed7515ec3f86ecf, x0Raw[63] = 0xf9f91870a79019a6;
    y0Raw[0] = 0xd801dd22998be419, y0Raw[1] = 0xe44afb86a56bfc1e, y0Raw[2] = 0xb62aa73b8831728c, y0Raw[3] = 0x6462900c0c7b5010, y0Raw[4] = 0xb474782752c2ee83, y0Raw[5] = 0x00ac7f2f230036e4, y0Raw[6] = 0xe0966bd1e9720303, y0Raw[7] = 0xc55695a56ab2ce4d, y0Raw[8] = 0xd9d322e10ec8991b, y0Raw[9] = 0xf86926693fce4f63, y0Raw[10] = 0x03b057143d30deb2, y0Raw[11] = 0x334851c6743ab3f9, y0Raw[12] = 0x4ccadcab4973feb2, y0Raw[13] = 0xa1f658b30ae890ab, y0Raw[14] = 0x03af2c470b7e417a, y0Raw[15] = 0xf8e2cf65c6b8a9bb, y0Raw[16] = 0xea9f0194ecab7929, y0Raw[17] = 0x1436d387c1f7841b, y0Raw[18] = 0xa8634150c6cc1c6e, y0Raw[19] = 0x675668a898164edd, y0Raw[20] = 0xfcd0e63a487494aa, y0Raw[21] = 0x6434076c345149ed, y0Raw[22] = 0x3db76b3f1b2e28ee, y0Raw[23] = 0x4818eac75e67d3d4, y0Raw[24] = 0x5fc665f1d92acb81, y0Raw[25] = 0x7deb25d9736c723b, y0Raw[26] = 0x83cd5042d84dcc4d, y0Raw[27] = 0xda389852c53d78b5, y0Raw[28] = 0x105863bed4220103, y0Raw[29] = 0x6c0be34d81d80f8a, y0Raw[30] = 0x7e1ce12e37676394, y0Raw[31] = 0x40f551ad929e1165, y0Raw[32] = 0xef50313b8e9dbe2c, y0Raw[33] = 0xa1275259c948262b, y0Raw[34] = 0x6c6d6f6ae33d6179, y0Raw[35] = 0x218cd751f4a24bc5, y0Raw[36] = 0x4576991d9eb49cc4, y0Raw[37] = 0x350961f8a4b65aa9, y0Raw[38] = 0x44ba29583a0b896c, y0Raw[39] = 0xa9706d45f2c11482, y0Raw[40] = 0xbffeda3bdba022c1, y0Raw[41] = 0x6b14aa1d894eeacf, y0Raw[42] = 0x2537b18362776815, y0Raw[43] = 0xdcff6ad8759a000a, y0Raw[44] = 0xf53ef68fe7fcb4a2, y0Raw[45] = 0xae06e65ac1589c85, y0Raw[46] = 0x4d07956e920a0a86, y0Raw[47] = 0xf38c6105666ce88a, y0Raw[48] = 0xa3e6709b21e2f1ed, y0Raw[49] = 0xa1b0fb2311cb869d, y0Raw[50] = 0x2eb741e213a85039, y0Raw[51] = 0xfd5249d9b3019727, y0Raw[52] = 0xf01039b4828a37fc, y0Raw[53] = 0xae900741741db61f, y0Raw[54] = 0x2f1649776bcf0b9c, y0Raw[55] = 0x7a408dea34ca4337, y0Raw[56] = 0xe7b1ea02cbbffcbd, y0Raw[57] = 0x97a0f0ce3048270b, y0Raw[58] = 0x8dd1e03c014194ef, y0Raw[59] = 0x802635d0d57b5f7e, y0Raw[60] = 0xb5661c2289951de1, y0Raw[61] = 0x006dcae30799cbcf, y0Raw[62] = 0xc7e386f33e0ed255, y0Raw[63] = 0x3a83aa1a85b5e1d;

    uint4096 a1, y1;
    uint4096 b1, x1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *x1Raw = (uint64 *) &x1, *y1Raw = (uint64 *) &y1;

    a1Raw[0] = 0xb84ef61f14809e76, a1Raw[1] = 0xd2b7272e5ae01ac4, a1Raw[2] = 0xcf2ec5bf5cb4f126, a1Raw[3] = 0x55d8863515678763, a1Raw[4] = 0xed0c14fe2f7a9bc8, a1Raw[5] = 0xc4188183ce4c35aa, a1Raw[6] = 0x2ca35cb2dc0ebb3d, a1Raw[7] = 0x9421acd5cc2ff5dc, a1Raw[8] = 0xf2cdfc4074f02167, a1Raw[9] = 0xe95fc2e82dc4d35a, a1Raw[10] = 0x7deb48fcd3499e28, a1Raw[11] = 0x09b26d673b104184, a1Raw[12] = 0x7c7ca63849515ff6, a1Raw[13] = 0xe23417d770ac8cc5, a1Raw[14] = 0x9eaff3c1a4fb3f4f, a1Raw[15] = 0x68646eead76d5c02, a1Raw[16] = 0xde3f6eaed4efd44b, a1Raw[17] = 0x8cc45cdda28f4e7e, a1Raw[18] = 0x32b0851c547becd1, a1Raw[19] = 0x1a978a545a00adaf, a1Raw[20] = 0xbdfce518d466355e, a1Raw[21] = 0x2339c6d50d0f6be0, a1Raw[22] = 0x23248ee225bb1523, a1Raw[23] = 0xd4c4e6cdc535af72, a1Raw[24] = 0x6ad6afc9bb6bf813, a1Raw[25] = 0xb8741fedce8ca8d7, a1Raw[26] = 0xa3abce16c8894993, a1Raw[27] = 0xf7a43ae060b77251, a1Raw[28] = 0xaed40eac4a26baad, a1Raw[29] = 0xdb8364e891049756, a1Raw[30] = 0xf06b23d9a25f53d8, a1Raw[31] = 0xccc704ab99b0371b, a1Raw[32] = 0x2a36915372eb769a, a1Raw[33] = 0x96c4b6f7b1c1a043, a1Raw[34] = 0xa58a68aab75f31ab, a1Raw[35] = 0x94ab38bcaacb1b63, a1Raw[36] = 0x6a94800190535939, a1Raw[37] = 0x3c8483acc87a3383, a1Raw[38] = 0x6823c497fb0db8cd, a1Raw[39] = 0x3d8f2a8d77cabf62, a1Raw[40] = 0x495a37c9255b3ed8, a1Raw[41] = 0x9debdb18160d9d8a, a1Raw[42] = 0x762b855e6d0eb441, a1Raw[43] = 0x4788ac68f2721ac1, a1Raw[44] = 0x9b679e91f400900d, a1Raw[45] = 0x50bfb982a616f929, a1Raw[46] = 0xd5b2f9c28b95070b, a1Raw[47] = 0x7bbe67e92a91061e, a1Raw[48] = 0x7efac7b464c5caec, a1Raw[49] = 0xbdd161e8e09f30f0, a1Raw[50] = 0x76b97a34f659c537, a1Raw[51] = 0xdd0655b139151437, a1Raw[52] = 0x68066286f363b1be, a1Raw[53] = 0x661cd5117dcde3e7, a1Raw[54] = 0x7bd924b3e67ee153, a1Raw[55] = 0x71c38c2170331f75, a1Raw[56] = 0x466da600c4aa4843, a1Raw[57] = 0x5ac2e0b042032bd0, a1Raw[58] = 0x6d793328d1d3d9ca, a1Raw[59] = 0xf632158682fec2b6, a1Raw[60] = 0xc6be5cc5aea54ab4, a1Raw[61] = 0xc419eb35faafead7, a1Raw[62] = 0x7ad11f4847b24312, a1Raw[63] = 0x7f4b6f94440eb03d;
    b1Raw[0] = 0xd5fdda1fb1a5cbcb, b1Raw[1] = 0x2f8bb7423aa56f8f, b1Raw[2] = 0x746f9d8cbad83a5e, b1Raw[3] = 0x3391cb7f5902a46d, b1Raw[4] = 0xa14081a2e579844e, b1Raw[5] = 0x423b698258c95ead, b1Raw[6] = 0x53359c48480d8442, b1Raw[7] = 0xcf8fc8dcb96d99d3, b1Raw[8] = 0xec033f80439427e0, b1Raw[9] = 0x5618616bd8434740, b1Raw[10] = 0x5ca74a73968d70e7, b1Raw[11] = 0x64c926ad303a392e, b1Raw[12] = 0x2bcf31d7bc546450, b1Raw[13] = 0xd8845a9a6688ba46, b1Raw[14] = 0x1a1d04f00f587478, b1Raw[15] = 0xa263c39ccc9f8d5f, b1Raw[16] = 0xc459ce717b99305e, b1Raw[17] = 0x7494699a80d62362, b1Raw[18] = 0x5a1c6dd544764fbb, b1Raw[19] = 0xb28ef5adaf5f10ec, b1Raw[20] = 0xda7ab9d588fb49b5, b1Raw[21] = 0xb8b223f0fd6a11da, b1Raw[22] = 0x746dc38eb04829d2, b1Raw[23] = 0x3f5b5a9970097ccc, b1Raw[24] = 0xf14abc45d315dcb8, b1Raw[25] = 0x3eaaac6aafcaef4c, b1Raw[26] = 0x08ebcf693df50e84, b1Raw[27] = 0x87a5d2bad19f9f48, b1Raw[28] = 0xdb42bb8486e8b2fc, b1Raw[29] = 0x6299d0b00e8afaff, b1Raw[30] = 0xc4393025a3400a53, b1Raw[31] = 0xd52e818900658571, b1Raw[32] = 0x1411608277f1f081, b1Raw[33] = 0x88ca4c581b11f930, b1Raw[34] = 0x807a6922de8e4285, b1Raw[35] = 0xa60704c4bfbada8c, b1Raw[36] = 0x4a7e063a8f12caa5, b1Raw[37] = 0x538b809392fc1e09, b1Raw[38] = 0x66bc418ffab5b0b3, b1Raw[39] = 0x345f6548a54948c4, b1Raw[40] = 0xb3583dbc5304cda0, b1Raw[41] = 0x2caa9efaa314a369, b1Raw[42] = 0xa29e75fd3e8db421, b1Raw[43] = 0x4ab9a6caa194a787, b1Raw[44] = 0xcef2027eb713eca4, b1Raw[45] = 0x991458794aad751d, b1Raw[46] = 0x4218376820e3f589, b1Raw[47] = 0xff1dc6cda65ee290, b1Raw[48] = 0x260921e14317173b, b1Raw[49] = 0xbfa7f58ff51fce14, b1Raw[50] = 0x2c8b86934dd8804f, b1Raw[51] = 0xc935fac6f8d9e64b, b1Raw[52] = 0x15ff382c7c3db14d, b1Raw[53] = 0x93fd1a9c7276c5c1, b1Raw[54] = 0x4359357d9a5adb62, b1Raw[55] = 0x981f8b2b78e5d2b4, b1Raw[56] = 0x1dcde35d8ee7c1a0, b1Raw[57] = 0x0482ca2cacf181f2, b1Raw[58] = 0x56a4ba9a4004b45f, b1Raw[59] = 0x63a680c2b09f98d0, b1Raw[60] = 0xa48707281723ee7b, b1Raw[61] = 0x3cea4a736d7488a8, b1Raw[62] = 0x77438a9fe22ae786, b1Raw[63] = 0xfcf144b7499f21fd;
    x1Raw[0] = 0x748c0764f4534fdc, x1Raw[1] = 0x7295b5e35feaabfd, x1Raw[2] = 0xcc398813a2e6b89b, x1Raw[3] = 0xe0b6b2ddb5e412cb, x1Raw[4] = 0x1b24980c7cee0112, x1Raw[5] = 0xcef107f79c06c72c, x1Raw[6] = 0x032d6668307dd74b, x1Raw[7] = 0xa52dae7201907781, x1Raw[8] = 0x1cf9896f0e84c623, x1Raw[9] = 0x936904668cea4e32, x1Raw[10] = 0x08b03217528f3235, x1Raw[11] = 0x61711bdb2e7ab379, x1Raw[12] = 0x8ec75c742a3ac796, x1Raw[13] = 0xe8261e9b6900206a, x1Raw[14] = 0x256b0bef5020c8c7, x1Raw[15] = 0xa9c05c72ee5629f4, x1Raw[16] = 0x28312ee9a1ca331e, x1Raw[17] = 0x1741e1f75b69c014, x1Raw[18] = 0x3a6964ef14d28398, x1Raw[19] = 0xa462d5084237c6d1, x1Raw[20] = 0x062898158036d3b9, x1Raw[21] = 0xc96c97c5caa88bfb, x1Raw[22] = 0xbb5e547b67ddce17, x1Raw[23] = 0x094572ae3556670e, x1Raw[24] = 0x754295b9e4821655, x1Raw[25] = 0x34afbfdffac6e54d, x1Raw[26] = 0x9f36b79449346ca9, x1Raw[27] = 0x29e112ef5c64a793, x1Raw[28] = 0x8935a1070db1730e, x1Raw[29] = 0x80e824c8c7857e59, x1Raw[30] = 0x1e11b2f38620554b, x1Raw[31] = 0xd773e31f2f48f370, x1Raw[32] = 0x1e4130fa9177b5f9, x1Raw[33] = 0x35cb575685c4af99, x1Raw[34] = 0xff943aef046cc77d, x1Raw[35] = 0x48bdf4ff23dbf1ca, x1Raw[36] = 0xee9ca79cc68ebbc4, x1Raw[37] = 0x9dd929197b4a1500, x1Raw[38] = 0xc77917caeef2a03f, x1Raw[39] = 0xf188254a3e9a9f28, x1Raw[40] = 0x27a0cc26c01a8a64, x1Raw[41] = 0x865c20ddc5ed7139, x1Raw[42] = 0x9cb4c02b0a0080ef, x1Raw[43] = 0x993b0b08d74c7026, x1Raw[44] = 0x15e728a41bfc97fe, x1Raw[45] = 0xa0253e4fbb6e26b1, x1Raw[46] = 0x873d394ac136cf9f, x1Raw[47] = 0x375b04e9a2983044, x1Raw[48] = 0x4ac17f60cda421f6, x1Raw[49] = 0x16fadc927df2013a, x1Raw[50] = 0xb0a0017381e73a4b, x1Raw[51] = 0xa32c8b364865f198, x1Raw[52] = 0xac212c69d11bb22e, x1Raw[53] = 0x6da9cad8273e5614, x1Raw[54] = 0x08d34e73e802321b, x1Raw[55] = 0x974ac317157e15a3, x1Raw[56] = 0x1e331d20252ae564, x1Raw[57] = 0x35ad96ef465c4c33, x1Raw[58] = 0xf13a3fef9f478120, x1Raw[59] = 0x6b71d06ce7a4e5c4, x1Raw[60] = 0x2cc7316c80d18f6a, x1Raw[61] = 0x83caf2657b752596, x1Raw[62] = 0xea9df0a6251343e0, x1Raw[63] = 0x83f3b93411210c02;
    y1Raw[0] = 0x1c81c5d14637d8ab, y1Raw[1] = 0x81513113c6268a73, y1Raw[2] = 0xd7280859e6ca1114, y1Raw[3] = 0x1b16c2a9720d399d, y1Raw[4] = 0xbf61fdaf7cb4355c, y1Raw[5] = 0x4da5a6561f58f032, y1Raw[6] = 0xf13e21580fdb444b, y1Raw[7] = 0x87882717094731b8, y1Raw[8] = 0xd94738c9d356aef8, y1Raw[9] = 0x291a6bd0dc670a1a, y1Raw[10] = 0xa8e293755ac4f3a7, y1Raw[11] = 0x33776ed18ea70da6, y1Raw[12] = 0x4271a184d42fa91d, y1Raw[13] = 0x9c748a4e86d69ab3, y1Raw[14] = 0xb9bbc1ac208e3506, y1Raw[15] = 0x26b9175a42501b98, y1Raw[16] = 0xace3973fb82e7904, y1Raw[17] = 0x6bbee5ca989c3a00, y1Raw[18] = 0x4da45ea3ceb7a12b, y1Raw[19] = 0x5a39a1351e7af020, y1Raw[20] = 0x630f55d26be8a9eb, y1Raw[21] = 0xf59761ce2e1b8d52, y1Raw[22] = 0x38c89535fe643e74, y1Raw[23] = 0x9598c35a380aa03e, y1Raw[24] = 0x97fce654952b2a25, y1Raw[25] = 0xc7f1190e70bba5a2, y1Raw[26] = 0xc4743a66704256a1, y1Raw[27] = 0xb1a8f8b476323084, y1Raw[28] = 0x90aa15127fee1ce9, y1Raw[29] = 0xef1297395226282e, y1Raw[30] = 0x965be24622a8b0e1, y1Raw[31] = 0xe5c83451aaeeba47, y1Raw[32] = 0xdb7174940faa21f7, y1Raw[33] = 0xe2477eeaef588b78, y1Raw[34] = 0xc25f0bcb741044ff, y1Raw[35] = 0x45ba85e5b6295012, y1Raw[36] = 0xf3f06d4f66aeefbd, y1Raw[37] = 0x396c1ac4aeb661e0, y1Raw[38] = 0xb9c0ac23ed87ecdc, y1Raw[39] = 0x77adf900445a160d, y1Raw[40] = 0x673540b9ab0565bd, y1Raw[41] = 0x86233e926bdc3482, y1Raw[42] = 0x45eb737b3a811305, y1Raw[43] = 0x7d4a73a750303ba6, y1Raw[44] = 0xd29202a54cad06b5, y1Raw[45] = 0xf18d4e6f90a4e9ae, y1Raw[46] = 0x76edfef6de8f4f75, y1Raw[47] = 0xf9e7ef40c24a4488, y1Raw[48] = 0x6ecf6317599a5480, y1Raw[49] = 0x7eae48a46e632bc0, y1Raw[50] = 0x0e2f8afdbd2c5d2e, y1Raw[51] = 0xdd24c3ea4417c661, y1Raw[52] = 0x23878714e900b9e0, y1Raw[53] = 0x3d9d001931d4129f, y1Raw[54] = 0xfa0c837f826453c2, y1Raw[55] = 0x4747b2a5413ede40, y1Raw[56] = 0x3692abb3db623fe1, y1Raw[57] = 0x9191a92468c86c54, y1Raw[58] = 0xfd26e3a17d524f24, y1Raw[59] = 0x40d76281430c01ce, y1Raw[60] = 0x90fd19103645e191, y1Raw[61] = 0x6790d8f81e167a2c, y1Raw[62] = 0x003ad22d0d96f8b0, y1Raw[63] = 0x3e6d850118cdc77e;

    uint4096 a2, y2;
    uint4096 b2, x2;
    uint64 *a2Raw = (uint64 *) &a2, *b2Raw = (uint64 *) &b2, *x2Raw = (uint64 *) &x2, *y2Raw = (uint64 *) &y2;

    a2Raw[0] = 0x59d72603d7430ceb, a2Raw[1] = 0x5b561e25ad1fb4e1, a2Raw[2] = 0x861460622e47fbaa, a2Raw[3] = 0x49231258e3021801, a2Raw[4] = 0xd8ca23837d7bde73, a2Raw[5] = 0xab8791d6036ce196, a2Raw[6] = 0x10f0b4d7801d7f98, a2Raw[7] = 0xb81781273bc5033d, a2Raw[8] = 0xd3a152ce4d2445ab, a2Raw[9] = 0xb212575fca7eaa9c, a2Raw[10] = 0xa81b169dc0c501ba, a2Raw[11] = 0x3ab6042bcdc89825, a2Raw[12] = 0xfdaf44e376077f9a, a2Raw[13] = 0xb3c0e16292196c31, a2Raw[14] = 0x9eb0f1d0e9708ccf, a2Raw[15] = 0x7e53db98caaab4aa, a2Raw[16] = 0xf7f815a8c8c550d0, a2Raw[17] = 0xa550d56ea4a28d6e, a2Raw[18] = 0x664e48aa6d6dccb9, a2Raw[19] = 0x8b03fc35a62ba6b5, a2Raw[20] = 0x889e71ff0541139f, a2Raw[21] = 0x8aa8e7acf9953e98, a2Raw[22] = 0x71720e75126cd7c1, a2Raw[23] = 0xa6b099e816ac33a9, a2Raw[24] = 0x403be0754e4dabd8, a2Raw[25] = 0x224a679ecae9dc15, a2Raw[26] = 0xec42749c0f55f547, a2Raw[27] = 0x171b55193d59b6d2, a2Raw[28] = 0x7da0bba258ba57e5, a2Raw[29] = 0x620ff9f17020b994, a2Raw[30] = 0x6b1b14afba106b80, a2Raw[31] = 0x9136fd08821aef2f, a2Raw[32] = 0xcdd8732504703255, a2Raw[33] = 0xb9358fdd2a855281, a2Raw[34] = 0x786d3538b03e1ee0, a2Raw[35] = 0x843b24d9475c7d36, a2Raw[36] = 0xce8d6d61a643852d, a2Raw[37] = 0x3623e5c8058686bc, a2Raw[38] = 0x89dce7cbb3594a21, a2Raw[39] = 0x5bc98505e214aa51, a2Raw[40] = 0x00e66654b6e38f14, a2Raw[41] = 0x71b33a2c43401198, a2Raw[42] = 0xac08cc633cef8482, a2Raw[43] = 0xf537e8d60b941a7e, a2Raw[44] = 0xded45c607978f27a, a2Raw[45] = 0x1cbd5ce9a874951e, a2Raw[46] = 0x3c12435ff7a34bfb, a2Raw[47] = 0x31f276726220c0a8, a2Raw[48] = 0x58320ed9ee3bd052, a2Raw[49] = 0x21845651b8557548, a2Raw[50] = 0x3ffd43c64f6fd5b1, a2Raw[51] = 0x6eefabf69ccc4e28, a2Raw[52] = 0xbb0aa0d057a098af, a2Raw[53] = 0x98e6126e2d400685, a2Raw[54] = 0x73f67fa075922aa2, a2Raw[55] = 0x7f13f79d0e707970, a2Raw[56] = 0xae4a09044f090966, a2Raw[57] = 0x60b2dc163d45f3f6, a2Raw[58] = 0x5ded182b08620529, a2Raw[59] = 0xb2551ba8fbbd47a4, a2Raw[60] = 0x0b2803fba3769820, a2Raw[61] = 0xe53ab6b9085e6b47, a2Raw[62] = 0xa4fda1b171c3f235, a2Raw[63] = 0x29df159193f95dfc;
    b2Raw[0] = 0x21274e0e7171ca8a, b2Raw[1] = 0x4ce6f24b82393242, b2Raw[2] = 0xe581319a969edffb, b2Raw[3] = 0xa0f8f6576ff7d90d, b2Raw[4] = 0xc0484afa6a323f30, b2Raw[5] = 0xa83837ec9dc1ffa0, b2Raw[6] = 0x788667ed8f00f92e, b2Raw[7] = 0x220e4dde25dd3dd6, b2Raw[8] = 0xda68e33ce37d8ce8, b2Raw[9] = 0xea635d64e84b5e17, b2Raw[10] = 0x00e5f322d22046c7, b2Raw[11] = 0x040737f343c5d488, b2Raw[12] = 0x33b09504fde227a3, b2Raw[13] = 0x69bc48fdda4dc714, b2Raw[14] = 0x73fa9ea4b37a1f85, b2Raw[15] = 0x527c1c1f22752340, b2Raw[16] = 0x4e197e3c68d914b0, b2Raw[17] = 0x97a51cb74bae4dac, b2Raw[18] = 0xedb3b72c0f43eac7, b2Raw[19] = 0x8910cb37acbb30ed, b2Raw[20] = 0xd91e92adab28d6d1, b2Raw[21] = 0x46b60652840e42f0, b2Raw[22] = 0x0248de52c6859798, b2Raw[23] = 0x6cfc8e584bd85d97, b2Raw[24] = 0x49eea310a3f17b26, b2Raw[25] = 0x70739a483636ae8d, b2Raw[26] = 0x8a35c8fdd21432f1, b2Raw[27] = 0xd0c834c2686419ea, b2Raw[28] = 0xfdbb056878ada0e3, b2Raw[29] = 0xfa8e77466b40f7f8, b2Raw[30] = 0x9427ee2388925673, b2Raw[31] = 0xc1c98e52106978f9, b2Raw[32] = 0x2a51f9d5a0922ecc, b2Raw[33] = 0x9ea23cc4eaac2b90, b2Raw[34] = 0x448a23bd3796eca3, b2Raw[35] = 0x90e88914ac5b3676, b2Raw[36] = 0xf98667ef7b6ebd88, b2Raw[37] = 0x3775e9a4b23bd73f, b2Raw[38] = 0x426e93487ae1c12c, b2Raw[39] = 0x520ef3620b83aa80, b2Raw[40] = 0x747e68a85abf8a76, b2Raw[41] = 0x38e10c30fdf28043, b2Raw[42] = 0x78e11d8f2ab869cc, b2Raw[43] = 0x1c6cab9d93294748, b2Raw[44] = 0xb59c2e1123ece3e2, b2Raw[45] = 0x6daf36efe0b72cae, b2Raw[46] = 0xc5f76613c87e7cf3, b2Raw[47] = 0x639bd8cfe435e78f, b2Raw[48] = 0x4c97acfdcc0815f0, b2Raw[49] = 0x81ab6a078a79b5ee, b2Raw[50] = 0xc3d56e9a6ca9cb26, b2Raw[51] = 0xbe5b5967c4803fcc, b2Raw[52] = 0x8f352d37b1088e91, b2Raw[53] = 0xc576e2f4d94ff3df, b2Raw[54] = 0xa82bca45874a4cbe, b2Raw[55] = 0x6fed9203035de57e, b2Raw[56] = 0x79a11fcbca55f021, b2Raw[57] = 0x474e6e67d549cf3b, b2Raw[58] = 0x16a2b0a222d6f59c, b2Raw[59] = 0x331dc24eef21ea3e, b2Raw[60] = 0x5dd2976579ea633d, b2Raw[61] = 0x0053142ef1c30bfe, b2Raw[62] = 0xf5663b20a18ed122, b2Raw[63] = 0x91689c3898e29ffd;
    x2Raw[0] = 0x273205fb03035c4d, x2Raw[1] = 0x8cff71ceabaf5bce, x2Raw[2] = 0xd5fb1e860cb5b44a, x2Raw[3] = 0x374a70c5b96ae4c0, x2Raw[4] = 0x7639b2dd4658cf5e, x2Raw[5] = 0x3368ba2f169a8873, x2Raw[6] = 0x94cf1a3eae5d81bb, x2Raw[7] = 0x3de0328c8331ee00, x2Raw[8] = 0x6d1490433a2daf16, x2Raw[9] = 0x684afdabf3b990f6, x2Raw[10] = 0xd5bdf5fe4a4c65da, x2Raw[11] = 0x20f7f407f4d10bd4, x2Raw[12] = 0xbb841059d1144d2d, x2Raw[13] = 0xa876ea4d41b1df1b, x2Raw[14] = 0x70b7096e45bb1e9b, x2Raw[15] = 0xc10e326ecb807947, x2Raw[16] = 0x38f4b428af88aefe, x2Raw[17] = 0x650890413d4091d4, x2Raw[18] = 0x6a9f0c04758fadf5, x2Raw[19] = 0x4314bd7d543ebae1, x2Raw[20] = 0xcacadf92da1cfe9f, x2Raw[21] = 0x66e7e0ac70696636, x2Raw[22] = 0x8c683532e53ec6c7, x2Raw[23] = 0xb4154b70875d5fde, x2Raw[24] = 0xf538edd5f7f15046, x2Raw[25] = 0x0729e4e097cdc158, x2Raw[26] = 0x285cf24d143fccb0, x2Raw[27] = 0x5615c60e7a585363, x2Raw[28] = 0x3fc40a8cc35c4dfe, x2Raw[29] = 0x9d153ee83f16f11f, x2Raw[30] = 0x7f25c2b42ecf02e9, x2Raw[31] = 0x93e7ebfaf6992b16, x2Raw[32] = 0x855a2ac16d3d90e9, x2Raw[33] = 0x7c7718f28197bf84, x2Raw[34] = 0x9d8307de3f571dd7, x2Raw[35] = 0x5a9157e80782666e, x2Raw[36] = 0xdedb50770678559b, x2Raw[37] = 0xdcbdf802f2ec695d, x2Raw[38] = 0x450174707e8e6367, x2Raw[39] = 0x5c7f240c7c7eaad2, x2Raw[40] = 0xea6c0f7886263603, x2Raw[41] = 0x07c362f04f6ff209, x2Raw[42] = 0xebe78a284f44ddb0, x2Raw[43] = 0x24099055949de611, x2Raw[44] = 0xda7177ed9e9ca3da, x2Raw[45] = 0x5f0f61d71611484b, x2Raw[46] = 0x93d70ccb32405b57, x2Raw[47] = 0x7453161c7ebac967, x2Raw[48] = 0xd6fae4a72e7679f0, x2Raw[49] = 0x9e2459abf932c9e5, x2Raw[50] = 0x59f0284c3a1f2578, x2Raw[51] = 0x6275a95721b150b7, x2Raw[52] = 0x149dba69610d02c3, x2Raw[53] = 0x63dfbba07e1721a2, x2Raw[54] = 0x732a933114364949, x2Raw[55] = 0x6a469749c3f4a207, x2Raw[56] = 0xf342ec7d9f58283e, x2Raw[57] = 0xf70b8db32a3a3ecc, x2Raw[58] = 0xded413ddd05e42b7, x2Raw[59] = 0xb1fe7eeeb605072d, x2Raw[60] = 0x406719913c31c0ed, x2Raw[61] = 0x61da31f17b599ae6, x2Raw[62] = 0x3496b9871bf01e2a, x2Raw[63] = 0x7332480144b8a3;
    y2Raw[0] = 0xb5cf481948f871ff, y2Raw[1] = 0x5a303adff27931fa, y2Raw[2] = 0x1b6550076f70ca6f, y2Raw[3] = 0x73f586b915efda7e, y2Raw[4] = 0xf427d04ea1b46b05, y2Raw[5] = 0xaa2efe9618ddde3e, y2Raw[6] = 0x2e314ce7cc4d6c49, y2Raw[7] = 0xab14c791efe5202e, y2Raw[8] = 0x107d3c4fdcc4592c, y2Raw[9] = 0xc001207fb3189944, y2Raw[10] = 0x8ca8e1779f6fc5c1, y2Raw[11] = 0x35aa2612ee89dcb7, y2Raw[12] = 0x5c237c1841b8997a, y2Raw[13] = 0x41f6af5d096076b7, y2Raw[14] = 0x809842e7ea5a5b88, y2Raw[15] = 0x6bfa75f1c835afeb, y2Raw[16] = 0x94d691bfa92b972e, y2Raw[17] = 0x3b584ba0919f6ba0, y2Raw[18] = 0x7ea530c69f878dcb, y2Raw[19] = 0xe3dbd249ec4de454, y2Raw[20] = 0x2bddf4be9cc11afe, y2Raw[21] = 0xf4d1316d34bc21a0, y2Raw[22] = 0x541ad8a21c4b5f75, y2Raw[23] = 0x17ab15bc74824d36, y2Raw[24] = 0x79a40452d25aa664, y2Raw[25] = 0xc3f1543d88fdb9f7, y2Raw[26] = 0xae33d5feeae37ca7, y2Raw[27] = 0x4bebe0bce247ecda, y2Raw[28] = 0xd93b3c4378a0accf, y2Raw[29] = 0x5cb74663eee36825, y2Raw[30] = 0x9c839f87b3bf780f, y2Raw[31] = 0xe6e537b1e97215c7, y2Raw[32] = 0x2f78b938727011f5, y2Raw[33] = 0xdce1acdaa229734a, y2Raw[34] = 0xc4d4f3fce9844972, y2Raw[35] = 0xabfbfdefbaeebca0, y2Raw[36] = 0x2e476065a04ca3ac, y2Raw[37] = 0x550ce73cd7b70b97, y2Raw[38] = 0xd5cd96334371b752, y2Raw[39] = 0xdfa5bc4843e7b060, y2Raw[40] = 0x74b25bede6092aff, y2Raw[41] = 0x257509258ac99bb6, y2Raw[42] = 0x9b9caf0a3683d918, y2Raw[43] = 0xde988cc27e9d90a0, y2Raw[44] = 0x3d3f659f076632a6, y2Raw[45] = 0x8bd909228683d25c, y2Raw[46] = 0x42a28bb4e0cf5e05, y2Raw[47] = 0xc0cdb8607b00d0dd, y2Raw[48] = 0x0215f65933715ace, y2Raw[49] = 0x0a8ba897e2c84943, y2Raw[50] = 0x6bc8058e3b84e803, y2Raw[51] = 0x55dc81c971f1450b, y2Raw[52] = 0xd78cc1730c093ec1, y2Raw[53] = 0xaa657b70b0f08688, y2Raw[54] = 0xcfd4081881bd9386, y2Raw[55] = 0x6acf4e8adfed5569, y2Raw[56] = 0x8e6b825c231d0ec8, y2Raw[57] = 0xb76fcb16a4e9e824, y2Raw[58] = 0x017d32e375671d8b, y2Raw[59] = 0x1e2678804bc1d683, y2Raw[60] = 0xec6258dae436a5c0, y2Raw[61] = 0x596030a99253a534, y2Raw[62] = 0x6c3386a1429421af, y2Raw[63] = 0xffded411bf44894b;

    uint4096 a3, y3;
    uint4096 b3, x3;
    uint64 *a3Raw = (uint64 *) &a3, *b3Raw = (uint64 *) &b3, *x3Raw = (uint64 *) &x3, *y3Raw = (uint64 *) &y3;

    a3Raw[0] = 0x67d9fb95092ef60e, a3Raw[1] = 0xe424393d253da5ea, a3Raw[2] = 0xa7e423d4deb4cf70, a3Raw[3] = 0x89350fda5780cf0f, a3Raw[4] = 0x474cca4812f99bbb, a3Raw[5] = 0xdbe2a05ea62b6167, a3Raw[6] = 0x6c6125ee4676e74d, a3Raw[7] = 0x03772be0adad6a07, a3Raw[8] = 0x070d74137dec7eeb, a3Raw[9] = 0xd6a5c8e467524bf8, a3Raw[10] = 0xf9670c51d6846830, a3Raw[11] = 0xb492875bb22765b9, a3Raw[12] = 0x502612d1293bfa18, a3Raw[13] = 0x76e6e90169340719, a3Raw[14] = 0x138effd597029797, a3Raw[15] = 0xe3e4f93f6af832c9, a3Raw[16] = 0xb3714b0b95ac915d, a3Raw[17] = 0x0303934afed4c043, a3Raw[18] = 0x82f878190fb68496, a3Raw[19] = 0x225028a33631b7fd, a3Raw[20] = 0x21c66f67b275f6b9, a3Raw[21] = 0x2b430d14ea6cf196, a3Raw[22] = 0x1f5e067ebd521700, a3Raw[23] = 0x0deebc279d541bd7, a3Raw[24] = 0x6f83077eb21fe532, a3Raw[25] = 0x83893850d63b0a14, a3Raw[26] = 0x63cc88b1a54ded2d, a3Raw[27] = 0xf0537e1bcadf06be, a3Raw[28] = 0xfc3318d90cce3730, a3Raw[29] = 0xf6fece60ce7ca7f7, a3Raw[30] = 0xb167e6e949bbaf83, a3Raw[31] = 0x0d9293f3a601d1bd, a3Raw[32] = 0xc66ca2888d21fc76, a3Raw[33] = 0x2d0313efb430011d, a3Raw[34] = 0x8438da7eae1cc484, a3Raw[35] = 0x905d9d91b51b38de, a3Raw[36] = 0xc5c6d2813db301b8, a3Raw[37] = 0x32d53ec3a93dad07, a3Raw[38] = 0x6bff165a019bf727, a3Raw[39] = 0x0a6396540674bcc5, a3Raw[40] = 0x2ea0848f9ec817f4, a3Raw[41] = 0x5c22613e6a25864c, a3Raw[42] = 0x33d84539d9c96a7b, a3Raw[43] = 0xcd80828ced39260b, a3Raw[44] = 0x97722db1282620b9, a3Raw[45] = 0x5920949687a5143b, a3Raw[46] = 0x2a33503933c61f40, a3Raw[47] = 0x7a4f398a238a07d3, a3Raw[48] = 0xd7f2eeb62028045c, a3Raw[49] = 0xe16904077f6ccca7, a3Raw[50] = 0xf8ba00f63cc83cb7, a3Raw[51] = 0x0f29861737f01f97, a3Raw[52] = 0x4f4380dd3bae2948, a3Raw[53] = 0xdc63114b790b249e, a3Raw[54] = 0xa4c18bc1a878e16f, a3Raw[55] = 0xc4dfa1bd1bb6d208, a3Raw[56] = 0x74a4f3d877e9817c, a3Raw[57] = 0x67f96b3a610f4d1a, a3Raw[58] = 0xcb0c85370e30d997, a3Raw[59] = 0x06fe98233edd2fd7, a3Raw[60] = 0x7071d90922d8f067, a3Raw[61] = 0x9c29881558f7598a, a3Raw[62] = 0xed304bc4d438761f, a3Raw[63] = 0x9becfb8621195696;
    b3Raw[0] = 0x53586f5cfcb4aefd, b3Raw[1] = 0x65bf063f4fa88dcb, b3Raw[2] = 0x5ca0699e7ae92f1e, b3Raw[3] = 0xae2fd69e7b41d054, b3Raw[4] = 0x7aaf3b8218ba24ea, b3Raw[5] = 0x93fd6a66c91770da, b3Raw[6] = 0x3bfc8d191077bbb7, b3Raw[7] = 0x2536a58b2ef5a4aa, b3Raw[8] = 0x74b9ad3c89f08e14, b3Raw[9] = 0x361c0e418fbf0251, b3Raw[10] = 0x10911418424de25e, b3Raw[11] = 0x7c51ec2351dbbbf8, b3Raw[12] = 0x5f972b6f8b2c999b, b3Raw[13] = 0x8f8423c28eb306e4, b3Raw[14] = 0x98acc9568200c945, b3Raw[15] = 0x036ee20870a87011, b3Raw[16] = 0x8886c52ef4eb7788, b3Raw[17] = 0x0edcc0566e3e012c, b3Raw[18] = 0x3d115d92677ee704, b3Raw[19] = 0x13460667053b4af4, b3Raw[20] = 0x0e0b4326e4fc4354, b3Raw[21] = 0x63323539ad921655, b3Raw[22] = 0x95b06e1047c5fa3d, b3Raw[23] = 0x815b16e8429788cd, b3Raw[24] = 0xb9b4e2eaaa32ca65, b3Raw[25] = 0xd1c4ff18dda88c7b, b3Raw[26] = 0x1bb4a7a89fc27127, b3Raw[27] = 0x2a2f70e9ac7f4c6c, b3Raw[28] = 0xfc3aee045f613919, b3Raw[29] = 0xaec68693f690c361, b3Raw[30] = 0x3e3160d6cad93300, b3Raw[31] = 0x30c89037e132d511, b3Raw[32] = 0xc63a921b94c0dea9, b3Raw[33] = 0x9694862601f9dee4, b3Raw[34] = 0x18b49de0415a8263, b3Raw[35] = 0x10fddeb7505d3799, b3Raw[36] = 0x728272186af735ba, b3Raw[37] = 0xb760bff3891b36fd, b3Raw[38] = 0xf2c651f3f5b2538e, b3Raw[39] = 0xbca31c5a21f03d68, b3Raw[40] = 0xe1da6b5d910cd5e6, b3Raw[41] = 0x58189e6760bd5aca, b3Raw[42] = 0xaf5de4a60fc9eb00, b3Raw[43] = 0x8620afc3d0860b4f, b3Raw[44] = 0x62124a0255dbebe8, b3Raw[45] = 0x8c150f993e53dd6f, b3Raw[46] = 0xcd049005bf2554c8, b3Raw[47] = 0x5fb344dd2c24e155, b3Raw[48] = 0x2989609202035259, b3Raw[49] = 0xf73c2a1721f0e668, b3Raw[50] = 0x62f17d602cd6e2be, b3Raw[51] = 0xdbbdf1d245452745, b3Raw[52] = 0x208df0ee7d878a76, b3Raw[53] = 0x6ece041e21cf0242, b3Raw[54] = 0x9fe047e998f09ef6, b3Raw[55] = 0xb44136a230c49fdb, b3Raw[56] = 0xc0653714b3734fd0, b3Raw[57] = 0x392bb1cddaa19ec5, b3Raw[58] = 0xbd6be8a7379b9124, b3Raw[59] = 0xc529e8a99c162510, b3Raw[60] = 0x3b7861f9149791ec, b3Raw[61] = 0xb367fba70d5f2e52, b3Raw[62] = 0x9e997b293baf316f, b3Raw[63] = 0x5d76b1eb820e09e1;
    x3Raw[0] = 0x017f09a5a96710b3, x3Raw[1] = 0x108d2b48bf4d2d42, x3Raw[2] = 0xd35576877197c193, x3Raw[3] = 0x34dc53733843f45c, x3Raw[4] = 0x2840a883de900398, x3Raw[5] = 0x219374f373a110e6, x3Raw[6] = 0x7f1e218802f95e08, x3Raw[7] = 0x8a73bef139b3f0c1, x3Raw[8] = 0x4421f6dc0e60332a, x3Raw[9] = 0x34a7ac5de62ea96d, x3Raw[10] = 0x24186cdaf6d3c0d4, x3Raw[11] = 0x25e31db59c312682, x3Raw[12] = 0x8584317f3c152d09, x3Raw[13] = 0x8b9c276333ab36e9, x3Raw[14] = 0x704b08e51c1b8a15, x3Raw[15] = 0x18e6c719b7ec6398, x3Raw[16] = 0x361ba7037497c0f0, x3Raw[17] = 0xface47ee4a64ac83, x3Raw[18] = 0x019200b78a4003be, x3Raw[19] = 0xc11bc89fba1b4150, x3Raw[20] = 0xfe2d60bd650c384d, x3Raw[21] = 0x9ac63e9663d025cf, x3Raw[22] = 0xa1d014c7df038ae3, x3Raw[23] = 0x1901f0c244ee2afa, x3Raw[24] = 0xd96962c6af2353ad, x3Raw[25] = 0x0049d74649031f55, x3Raw[26] = 0x266ef65f2761f38b, x3Raw[27] = 0xe424a2ee64dde1dc, x3Raw[28] = 0x09ce0bed3bdb2fd0, x3Raw[29] = 0x294a67876645d540, x3Raw[30] = 0x4c5eab1e2a559276, x3Raw[31] = 0xce76f541f8cd7ba6, x3Raw[32] = 0x068ef32a2331db72, x3Raw[33] = 0x5fa860e73673d6ca, x3Raw[34] = 0x11463ad23179fcea, x3Raw[35] = 0xed69752c12b3c0ad, x3Raw[36] = 0x7f9412fddbe2ca58, x3Raw[37] = 0xd38b4562a7f4ab9a, x3Raw[38] = 0x1974672ea34726f4, x3Raw[39] = 0x6b4cfa65de42a85f, x3Raw[40] = 0x4b7001330e611f9f, x3Raw[41] = 0xcb666ce45259a8d3, x3Raw[42] = 0x16c40fe42b4f41ca, x3Raw[43] = 0xbf1d0a46d7633849, x3Raw[44] = 0x809232e1a4f7845a, x3Raw[45] = 0x774ea643bce2b32d, x3Raw[46] = 0xb0336e81ca225995, x3Raw[47] = 0x5c11bdb7bef84c35, x3Raw[48] = 0xb53389794a8e61f4, x3Raw[49] = 0xe00132fef9b5903e, x3Raw[50] = 0xd2c75b749a82fe73, x3Raw[51] = 0x1ad6da6b729ddfdb, x3Raw[52] = 0x0092e61ed70c8310, x3Raw[53] = 0x2887317860ab792c, x3Raw[54] = 0xe48ebfe90b01067b, x3Raw[55] = 0xc138dabbfe351c3e, x3Raw[56] = 0x7eb46a0359e780f7, x3Raw[57] = 0x0cf4c016f2493ee4, x3Raw[58] = 0x0ee0eee4fb5b15f4, x3Raw[59] = 0x3171c073578fcc81, x3Raw[60] = 0x8890a476e16c11b9, x3Raw[61] = 0x5c6f71e0e3dfe492, x3Raw[62] = 0xc429a6dcfd1076c9, x3Raw[63] = 0x2551b75b333f8688;
    y3Raw[0] = 0x91651183b0e8e843, y3Raw[1] = 0xd7a8780b40524b37, y3Raw[2] = 0x7e5e499f092eb383, y3Raw[3] = 0x8c8ad651fa0e7d00, y3Raw[4] = 0xf1468e3ceb39e16a, y3Raw[5] = 0x681bf066aaec9585, y3Raw[6] = 0x48c8ff064d3f8364, y3Raw[7] = 0x8f40ddb8beb69ec4, y3Raw[8] = 0x0d31c253bf33dab4, y3Raw[9] = 0x71fba2925541609e, y3Raw[10] = 0xaf5972e1734c164f, y3Raw[11] = 0xe0e1a231aa49a14a, y3Raw[12] = 0xee08cfe219bad6c1, y3Raw[13] = 0x7e4118fdb3322759, y3Raw[14] = 0x674a9629902d1bc4, y3Raw[15] = 0xe274a6f9504c9cbb, y3Raw[16] = 0x6104d4bbd65d632b, y3Raw[17] = 0x76a6a87265e9b56b, y3Raw[18] = 0x5f3f18aab09a50e0, y3Raw[19] = 0xaeb3c27101d719e7, y3Raw[20] = 0x45a69531c45dcc81, y3Raw[21] = 0x654873019d8d5e50, y3Raw[22] = 0x124124e25bf629ca, y3Raw[23] = 0xcdc64b4471790952, y3Raw[24] = 0x31c8d90772cb8208, y3Raw[25] = 0xe73dd1d0977f0f6c, y3Raw[26] = 0xf6d248528403a7a9, y3Raw[27] = 0x96f4d173d09d6de5, y3Raw[28] = 0x42a4cb803ac1ef62, y3Raw[29] = 0x34624bf0d519eedf, y3Raw[30] = 0xc67fce5a9dfe64b7, y3Raw[31] = 0xfb2697933fb43f1b, y3Raw[32] = 0x6dc2575628ef2a85, y3Raw[33] = 0xddbf1c56c09dc8a3, y3Raw[34] = 0x4e2832c0c7bc15d6, y3Raw[35] = 0x7010032464cb7c67, y3Raw[36] = 0x16e889eb32c26086, y3Raw[37] = 0x18c9eb9aefbe388c, y3Raw[38] = 0x65324774e4452243, y3Raw[39] = 0x71620bbed4dbff87, y3Raw[40] = 0xb4c19e5379a2a3a8, y3Raw[41] = 0x91c9ba8fda5955f5, y3Raw[42] = 0x4077d1c52fb791bf, y3Raw[43] = 0xa9eb9feea43e4de1, y3Raw[44] = 0x49daff68f67df5cf, y3Raw[45] = 0x5f181325d0e28040, y3Raw[46] = 0xe1f49fbee1eadcb7, y3Raw[47] = 0xef9c76e0fb092a79, y3Raw[48] = 0x9ead803d121612ce, y3Raw[49] = 0x712f141274f37bcc, y3Raw[50] = 0x706975ff93d18752, y3Raw[51] = 0x668fdfa62e87b85c, y3Raw[52] = 0x437c93b95b3e857b, y3Raw[53] = 0xbb28afb213bbdce9, y3Raw[54] = 0x0f625472d5bcb30a, y3Raw[55] = 0xc64827966d8766eb, y3Raw[56] = 0xbc465a0396b34be9, y3Raw[57] = 0x2b530902206d1801, y3Raw[58] = 0xb76f06b902973696, y3Raw[59] = 0x280f9a3c746db2e6, y3Raw[60] = 0x0f4fe56f26e14523, y3Raw[61] = 0x0af980e95f9be48e, y3Raw[62] = 0x9e14bb93b0ed426b, y3Raw[63] = 0xc1bd811dc3fe5dff;

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
    uint32 rExp0 = 128;
    uint128 p0;
    uint64 *aM0Raw = (uint64 *) &aM0, *bM0Raw = (uint64 *) &bM0, *n0Raw = (uint64 *) &n0, *r0Raw = (uint64 *) &r0, *rMask0Raw = (uint64 *) &rMask0;
    uint64 *p0Raw = (uint64 *) &p0;

    aM0Raw[0] = 0x9d3f167f6c10943a, aM0Raw[1] = 0x365f672064cfc6f;
    bM0Raw[0] = 0x89aacf168a345056, bM0Raw[1] = 0x233329af150bf9d9;
    n0Raw[0] = 0xfd092da2b21377a1, n0Raw[1] = 0xc1d6e61a2cbfc474;
    r0Raw[0] = 0x0000000000000000, r0Raw[1] = 0x0000000000000000, r0Raw[2] = 0x1;
    rMask0Raw[0] = 0xffffffffffffffff, rMask0Raw[1] = 0xffffffffffffffff;
    p0Raw[0] = 0x69655849e663aec9, p0Raw[1] = 0x580333d826ff92c3;

    uint128 aM1, bM1, n1, rMask1;
    uint256 r1, nPrime1;
    uint32 rExp1 = 127;
    uint128 p1;
    uint64 *aM1Raw = (uint64 *) &aM1, *bM1Raw = (uint64 *) &bM1, *n1Raw = (uint64 *) &n1, *r1Raw = (uint64 *) &r1, *rMask1Raw = (uint64 *) &rMask1;
    uint64 *p1Raw = (uint64 *) &p1;

    aM1Raw[0] = 0xcb660e7da36c3a1c, aM1Raw[1] = 0x260778850201ea02;
    bM1Raw[0] = 0x4aedba694c662213, bM1Raw[1] = 0x4ba2606e613dc1c7;
    n1Raw[0] = 0x875dad2c4447d025, n1Raw[1] = 0x5aee9d0c11f03e41;
    r1Raw[0] = 0x0000000000000000, r1Raw[1] = 0x8000000000000000;
    rMask1Raw[0] = 0xffffffffffffffff, rMask1Raw[1] = 0x7fffffffffffffff;
    p1Raw[0] = 0xa6f34b947deadaa2, p1Raw[1] = 0x179a1542d75fb051;

    uint128 aM2, bM2, n2, rMask2;
    uint256 r2, nPrime2;
    uint32 rExp2 = 128;
    uint128 p2;
    uint64 *aM2Raw = (uint64 *) &aM2, *bM2Raw = (uint64 *) &bM2, *n2Raw = (uint64 *) &n2, *r2Raw = (uint64 *) &r2, *rMask2Raw = (uint64 *) &rMask2;
    uint64 *p2Raw = (uint64 *) &p2;

    aM2Raw[0] = 0x2cb5679ed0c9431a, aM2Raw[1] = 0x2e52363cfea391f1;
    bM2Raw[0] = 0xea7a667ac2b29ec7, bM2Raw[1] = 0xce04410bbc4b83a;
    n2Raw[0] = 0xcb6a35ebea717d73, n2Raw[1] = 0xacec667791280eab;
    r2Raw[0] = 0x0000000000000000, r2Raw[1] = 0x0000000000000000, r2Raw[2] = 0x1;
    rMask2Raw[0] = 0xffffffffffffffff, rMask2Raw[1] = 0xffffffffffffffff;
    p2Raw[0] = 0x9faf7615416644c7, p2Raw[1] = 0x8b3f8dfc6192268e;

    uint128 aM3, bM3, n3, rMask3;
    uint256 r3, nPrime3;
    uint32 rExp3 = 128;
    uint128 p3;
    uint64 *aM3Raw = (uint64 *) &aM3, *bM3Raw = (uint64 *) &bM3, *n3Raw = (uint64 *) &n3, *r3Raw = (uint64 *) &r3, *rMask3Raw = (uint64 *) &rMask3;
    uint64 *p3Raw = (uint64 *) &p3;

    aM3Raw[0] = 0x322db6d42bc77052, aM3Raw[1] = 0x8f0be3b9fd974ea1;
    bM3Raw[0] = 0x1fb37d2aa65b58c5, bM3Raw[1] = 0x745585b4b88d4def;
    n3Raw[0] = 0x4c77889e7f1b25df, n3Raw[1] = 0xdc1937becfa96905;
    r3Raw[0] = 0x0000000000000000, r3Raw[1] = 0x0000000000000000, r3Raw[2] = 0x1;
    rMask3Raw[0] = 0xffffffffffffffff, rMask3Raw[1] = 0xffffffffffffffff;
    p3Raw[0] = 0x2491c1e317a01147, p3Raw[1] = 0x72586b7495f15f2d;

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
    uint32 rExp0 = 254;
    uint256 p0;
    uint64 *aM0Raw = (uint64 *) &aM0, *bM0Raw = (uint64 *) &bM0, *n0Raw = (uint64 *) &n0, *r0Raw = (uint64 *) &r0, *rMask0Raw = (uint64 *) &rMask0;
    uint64 *p0Raw = (uint64 *) &p0;

    aM0Raw[0] = 0x96c4b324b58380f6, aM0Raw[1] = 0x6e7a5a65ba1875b7, aM0Raw[2] = 0x2485f054f25e041c, aM0Raw[3] = 0x5f8815e96c6ca99;
    bM0Raw[0] = 0x9833bc4f627ed16e, bM0Raw[1] = 0x9fb433d766da38ed, bM0Raw[2] = 0x0afc2cc6a5536f80, bM0Raw[3] = 0x2b3a92cac415d80d;
    n0Raw[0] = 0xe1b6e763bb959945, n0Raw[1] = 0x1d82352abc84a415, n0Raw[2] = 0x411423aea7693cc6, n0Raw[3] = 0x37f2604a488ac0d9;
    r0Raw[0] = 0x0000000000000000, r0Raw[1] = 0x0000000000000000, r0Raw[2] = 0x0000000000000000, r0Raw[3] = 0x4000000000000000;
    rMask0Raw[0] = 0xffffffffffffffff, rMask0Raw[1] = 0xffffffffffffffff, rMask0Raw[2] = 0xffffffffffffffff, rMask0Raw[3] = 0x3fffffffffffffff;
    p0Raw[0] = 0x812f99b0f15bd89b, p0Raw[1] = 0x5e733d73bafa93e6, p0Raw[2] = 0xf24d218d83975868, p0Raw[3] = 0x4d0cac6c3b48893;

    uint256 aM1, bM1, n1, rMask1;
    uint512 r1, nPrime1;
    uint32 rExp1 = 256;
    uint256 p1;
    uint64 *aM1Raw = (uint64 *) &aM1, *bM1Raw = (uint64 *) &bM1, *n1Raw = (uint64 *) &n1, *r1Raw = (uint64 *) &r1, *rMask1Raw = (uint64 *) &rMask1;
    uint64 *p1Raw = (uint64 *) &p1;

    aM1Raw[0] = 0x1517f17347c71631, aM1Raw[1] = 0xae6bbaae88b74c8b, aM1Raw[2] = 0xd5b5a68ebe78b18b, aM1Raw[3] = 0x3e919572d00255ea;
    bM1Raw[0] = 0xf6c5c370452c1fdc, bM1Raw[1] = 0xdce92e46545c8815, bM1Raw[2] = 0xd9728e52cb9b461d, bM1Raw[3] = 0xed1c4347be6223ed;
    n1Raw[0] = 0xaadc3dd956e7e001, n1Raw[1] = 0x7abd01a93737c597, n1Raw[2] = 0xba587c9c26edfdb8, n1Raw[3] = 0xed9b957184aa6747;
    r1Raw[0] = 0x0000000000000000, r1Raw[1] = 0x0000000000000000, r1Raw[2] = 0x0000000000000000, r1Raw[3] = 0x0000000000000000, r1Raw[4] = 0x1;
    rMask1Raw[0] = 0xffffffffffffffff, rMask1Raw[1] = 0xffffffffffffffff, rMask1Raw[2] = 0xffffffffffffffff, rMask1Raw[3] = 0xffffffffffffffff;
    p1Raw[0] = 0x1ef37433f3575293, p1Raw[1] = 0x12efe3f5658ca40c, p1Raw[2] = 0xa51fb28c72d5300e, p1Raw[3] = 0xdaa04208a0306ef5;

    uint256 aM2, bM2, n2, rMask2;
    uint512 r2, nPrime2;
    uint32 rExp2 = 254;
    uint256 p2;
    uint64 *aM2Raw = (uint64 *) &aM2, *bM2Raw = (uint64 *) &bM2, *n2Raw = (uint64 *) &n2, *r2Raw = (uint64 *) &r2, *rMask2Raw = (uint64 *) &rMask2;
    uint64 *p2Raw = (uint64 *) &p2;

    aM2Raw[0] = 0x4cddb3c11fb7db3f, aM2Raw[1] = 0xc162fb07f0e92715, aM2Raw[2] = 0x0f1dca950fc71fdf, aM2Raw[3] = 0x23467c4f6eb1bb44;
    bM2Raw[0] = 0x48ce29d924a186d8, bM2Raw[1] = 0x63c5a23bbf930a89, bM2Raw[2] = 0xd9251fc83799ad8b, bM2Raw[3] = 0x1ac5ea2728b677d;
    n2Raw[0] = 0x9659ddf72a34cf55, n2Raw[1] = 0x5e49d7e7e3a81094, n2Raw[2] = 0xfd63ad862c700752, n2Raw[3] = 0x3f2a45f6f38ca9aa;
    r2Raw[0] = 0x0000000000000000, r2Raw[1] = 0x0000000000000000, r2Raw[2] = 0x0000000000000000, r2Raw[3] = 0x4000000000000000;
    rMask2Raw[0] = 0xffffffffffffffff, rMask2Raw[1] = 0xffffffffffffffff, rMask2Raw[2] = 0xffffffffffffffff, rMask2Raw[3] = 0x3fffffffffffffff;
    p2Raw[0] = 0x3679a48eb8c883e6, p2Raw[1] = 0xeb3d1fa24afe962a, p2Raw[2] = 0x6f2e81e89a790caa, p2Raw[3] = 0xc78a76465315c1c;

    uint256 aM3, bM3, n3, rMask3;
    uint512 r3, nPrime3;
    uint32 rExp3 = 256;
    uint256 p3;
    uint64 *aM3Raw = (uint64 *) &aM3, *bM3Raw = (uint64 *) &bM3, *n3Raw = (uint64 *) &n3, *r3Raw = (uint64 *) &r3, *rMask3Raw = (uint64 *) &rMask3;
    uint64 *p3Raw = (uint64 *) &p3;

    aM3Raw[0] = 0x60cc3b5d904df92b, aM3Raw[1] = 0xf30290dda87c4b82, aM3Raw[2] = 0xffd970f494872c4d, aM3Raw[3] = 0x187e37161036c2b8;
    bM3Raw[0] = 0x7bd723a0bc063b1d, bM3Raw[1] = 0xf965fcdc78763138, bM3Raw[2] = 0xbc2917092a4d3501, bM3Raw[3] = 0xe21519e59f262b68;
    n3Raw[0] = 0x1331dbf347ccfa07, n3Raw[1] = 0x84c374be9aa9082e, n3Raw[2] = 0x9b363362c4652515, n3Raw[3] = 0xeeed1e885128c644;
    r3Raw[0] = 0x0000000000000000, r3Raw[1] = 0x0000000000000000, r3Raw[2] = 0x0000000000000000, r3Raw[3] = 0x0000000000000000, r3Raw[4] = 0x1;
    rMask3Raw[0] = 0xffffffffffffffff, rMask3Raw[1] = 0xffffffffffffffff, rMask3Raw[2] = 0xffffffffffffffff, rMask3Raw[3] = 0xffffffffffffffff;
    p3Raw[0] = 0xeaa71a835534e161, p3Raw[1] = 0x6156a4f557eefba0, p3Raw[2] = 0x97b919c8299cb5a4, p3Raw[3] = 0x13e0c78931a22d59;

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
    uint32 rExp0 = 512;
    uint512 p0;
    uint64 *aM0Raw = (uint64 *) &aM0, *bM0Raw = (uint64 *) &bM0, *n0Raw = (uint64 *) &n0, *r0Raw = (uint64 *) &r0, *rMask0Raw = (uint64 *) &rMask0;
    uint64 *p0Raw = (uint64 *) &p0;

    aM0Raw[0] = 0x7e5fb7f6f04b74ba, aM0Raw[1] = 0x0c8a361ed2073e84, aM0Raw[2] = 0xae31c25f447a5b0e, aM0Raw[3] = 0x3e14332aeb6b1dff, aM0Raw[4] = 0x64c056f94769d9b8, aM0Raw[5] = 0xf729aae377ea1ad7, aM0Raw[6] = 0xd40c04d4a3d11b53, aM0Raw[7] = 0x429203a044348bbb;
    bM0Raw[0] = 0x93a5ce6284b5f514, bM0Raw[1] = 0x39c24ce3bab2061c, bM0Raw[2] = 0x0cae033f7c332c1f, bM0Raw[3] = 0xe88429d27f99c9e9, bM0Raw[4] = 0x8fe409888033ba21, bM0Raw[5] = 0x74183fc096e0d9a3, bM0Raw[6] = 0xddc5dde3aa1d180f, bM0Raw[7] = 0x7c37013a3a6145b6;
    n0Raw[0] = 0xa0a064e22d4ff7f3, n0Raw[1] = 0x25607ff2d16c5adf, n0Raw[2] = 0xdeb57c5dfb81213e, n0Raw[3] = 0x90e02a92b93d8ff7, n0Raw[4] = 0x3866e08c45fd3e0c, n0Raw[5] = 0x09f2ff8a0fb81b14, n0Raw[6] = 0x3bc0be50e1f1c492, n0Raw[7] = 0x8b72d4917c6f030e;
    r0Raw[0] = 0x0000000000000000, r0Raw[1] = 0x0000000000000000, r0Raw[2] = 0x0000000000000000, r0Raw[3] = 0x0000000000000000, r0Raw[4] = 0x0000000000000000, r0Raw[5] = 0x0000000000000000, r0Raw[6] = 0x0000000000000000, r0Raw[7] = 0x0000000000000000, r0Raw[8] = 0x1;
    rMask0Raw[0] = 0xffffffffffffffff, rMask0Raw[1] = 0xffffffffffffffff, rMask0Raw[2] = 0xffffffffffffffff, rMask0Raw[3] = 0xffffffffffffffff, rMask0Raw[4] = 0xffffffffffffffff, rMask0Raw[5] = 0xffffffffffffffff, rMask0Raw[6] = 0xffffffffffffffff, rMask0Raw[7] = 0xffffffffffffffff;
    p0Raw[0] = 0xc69416732e83bb66, p0Raw[1] = 0x9b1006c86090376e, p0Raw[2] = 0xd2811ba9c6dadeec, p0Raw[3] = 0xcbc2b4376e182270, p0Raw[4] = 0x91c587c882293eab, p0Raw[5] = 0xf6b8a5c6962da85f, p0Raw[6] = 0xdab0216f58ba3d25, p0Raw[7] = 0x6526d810cc84a690;

    uint512 aM1, bM1, n1, rMask1;
    uint1024 r1, nPrime1;
    uint32 rExp1 = 512;
    uint512 p1;
    uint64 *aM1Raw = (uint64 *) &aM1, *bM1Raw = (uint64 *) &bM1, *n1Raw = (uint64 *) &n1, *r1Raw = (uint64 *) &r1, *rMask1Raw = (uint64 *) &rMask1;
    uint64 *p1Raw = (uint64 *) &p1;

    aM1Raw[0] = 0x43ec360f8b26b7d7, aM1Raw[1] = 0xb58c1e9b32b33582, aM1Raw[2] = 0xdc7f03d5f63505ec, aM1Raw[3] = 0x6d3ad1279622b6b0, aM1Raw[4] = 0x0d3d2389609758c9, aM1Raw[5] = 0x89d6620989192730, aM1Raw[6] = 0xe760d0ffefe9943d, aM1Raw[7] = 0x13cf96bf31fc57f0;
    bM1Raw[0] = 0x97d320cb82b74d6d, bM1Raw[1] = 0x7404d5cace392e00, bM1Raw[2] = 0x2eeb64272b004527, bM1Raw[3] = 0xf0a224c7c199e3f8, bM1Raw[4] = 0xefc739cbb82a5471, bM1Raw[5] = 0x8c71bb8b5610e15f, bM1Raw[6] = 0xe6d6bcc4ad806f79, bM1Raw[7] = 0xd71bfc2b07980324;
    n1Raw[0] = 0x809b71ac4076d249, n1Raw[1] = 0x0463e7808d596358, n1Raw[2] = 0xccb3dae7f24293a5, n1Raw[3] = 0x4e72de8369b57702, n1Raw[4] = 0x6e3bc33064587869, n1Raw[5] = 0x432a050931be4e10, n1Raw[6] = 0x19fc04c8c0694d96, n1Raw[7] = 0xfa638c664d6ba7b7;
    r1Raw[0] = 0x0000000000000000, r1Raw[1] = 0x0000000000000000, r1Raw[2] = 0x0000000000000000, r1Raw[3] = 0x0000000000000000, r1Raw[4] = 0x0000000000000000, r1Raw[5] = 0x0000000000000000, r1Raw[6] = 0x0000000000000000, r1Raw[7] = 0x0000000000000000, r1Raw[8] = 0x1;
    rMask1Raw[0] = 0xffffffffffffffff, rMask1Raw[1] = 0xffffffffffffffff, rMask1Raw[2] = 0xffffffffffffffff, rMask1Raw[3] = 0xffffffffffffffff, rMask1Raw[4] = 0xffffffffffffffff, rMask1Raw[5] = 0xffffffffffffffff, rMask1Raw[6] = 0xffffffffffffffff, rMask1Raw[7] = 0xffffffffffffffff;
    p1Raw[0] = 0x016bd9d5a3ef29d2, p1Raw[1] = 0xcaab0b1878d0f201, p1Raw[2] = 0x8c21bad10b11e6e8, p1Raw[3] = 0x69fb8e4a3ba689e9, p1Raw[4] = 0x4bf9677b77fe93a8, p1Raw[5] = 0x228a38f0b01344fa, p1Raw[6] = 0x9f54af91d53736ae, p1Raw[7] = 0x5e10b51e7ae5817a;

    uint512 aM2, bM2, n2, rMask2;
    uint1024 r2, nPrime2;
    uint32 rExp2 = 511;
    uint512 p2;
    uint64 *aM2Raw = (uint64 *) &aM2, *bM2Raw = (uint64 *) &bM2, *n2Raw = (uint64 *) &n2, *r2Raw = (uint64 *) &r2, *rMask2Raw = (uint64 *) &rMask2;
    uint64 *p2Raw = (uint64 *) &p2;

    aM2Raw[0] = 0x5142f6d9b596d3b4, aM2Raw[1] = 0x81cf3072308f3235, aM2Raw[2] = 0x1e6fd08d2af6d2fc, aM2Raw[3] = 0x76b20f8991034b27, aM2Raw[4] = 0x9ec9fbe4929f6d57, aM2Raw[5] = 0xb23778724d6afd84, aM2Raw[6] = 0x31fcddf268d4e7d1, aM2Raw[7] = 0x44162f6e6f62cc2b;
    bM2Raw[0] = 0x938bec28056b52f8, bM2Raw[1] = 0x44d8293afbafa650, bM2Raw[2] = 0x91bc7f6845c08e25, bM2Raw[3] = 0x4085367d197d4e7f, bM2Raw[4] = 0x3850cb499db8acfe, bM2Raw[5] = 0xa4d48353cdae0f2b, bM2Raw[6] = 0xa10a5091dedc2cc5, bM2Raw[7] = 0x2aa979fb4d544574;
    n2Raw[0] = 0xea80fd628045e96d, n2Raw[1] = 0x287a2560c3ca0f2c, n2Raw[2] = 0x838ad5db33073cac, n2Raw[3] = 0xd62cb82d2cd0295a, n2Raw[4] = 0xa4284383ae0139fa, n2Raw[5] = 0xf9d89c23221b4067, n2Raw[6] = 0x0a7e3e1cd28801ab, n2Raw[7] = 0x4c09393f422e8e54;
    r2Raw[0] = 0x0000000000000000, r2Raw[1] = 0x0000000000000000, r2Raw[2] = 0x0000000000000000, r2Raw[3] = 0x0000000000000000, r2Raw[4] = 0x0000000000000000, r2Raw[5] = 0x0000000000000000, r2Raw[6] = 0x0000000000000000, r2Raw[7] = 0x8000000000000000;
    rMask2Raw[0] = 0xffffffffffffffff, rMask2Raw[1] = 0xffffffffffffffff, rMask2Raw[2] = 0xffffffffffffffff, rMask2Raw[3] = 0xffffffffffffffff, rMask2Raw[4] = 0xffffffffffffffff, rMask2Raw[5] = 0xffffffffffffffff, rMask2Raw[6] = 0xffffffffffffffff, rMask2Raw[7] = 0x7fffffffffffffff;
    p2Raw[0] = 0x0cd39a30a6ffef15, p2Raw[1] = 0x393888d8c68aea0c, p2Raw[2] = 0x0621f52115e4d99d, p2Raw[3] = 0xffc966da278f21cf, p2Raw[4] = 0xff0c5b6fba778814, p2Raw[5] = 0xc2e7f27dcda796c6, p2Raw[6] = 0x2e59aa17338a5ea0, p2Raw[7] = 0x2e01b9c12c534b54;

    uint512 aM3, bM3, n3, rMask3;
    uint1024 r3, nPrime3;
    uint32 rExp3 = 510;
    uint512 p3;
    uint64 *aM3Raw = (uint64 *) &aM3, *bM3Raw = (uint64 *) &bM3, *n3Raw = (uint64 *) &n3, *r3Raw = (uint64 *) &r3, *rMask3Raw = (uint64 *) &rMask3;
    uint64 *p3Raw = (uint64 *) &p3;

    aM3Raw[0] = 0x785a29ca69eb55ed, aM3Raw[1] = 0x543d9213353c31bd, aM3Raw[2] = 0x04967c3f4b0093fe, aM3Raw[3] = 0x04b6580e8c8fa21b, aM3Raw[4] = 0xd80e7b315afe6108, aM3Raw[5] = 0x9a33e4003186acfb, aM3Raw[6] = 0x6c1dc74a70422ab9, aM3Raw[7] = 0x1b183e19b79330f7;
    bM3Raw[0] = 0x86a35869dda547e5, bM3Raw[1] = 0xc79391ee5ebb9164, bM3Raw[2] = 0xe237002ba929785f, bM3Raw[3] = 0x4b7afbd85f178a0a, bM3Raw[4] = 0x23f8da05d46d6087, bM3Raw[5] = 0xabb92134254ebb8d, bM3Raw[6] = 0x0dfb98fa881cb637, bM3Raw[7] = 0xaaa95b94ccb4356;
    n3Raw[0] = 0x7d26ffc2227b6207, n3Raw[1] = 0x3710ef6e1182b9df, n3Raw[2] = 0x5ca469b93734c4d6, n3Raw[3] = 0xa8a33993bc05ea0e, n3Raw[4] = 0xbaf04ae245e460ad, n3Raw[5] = 0x8ea0f16b1a340d70, n3Raw[6] = 0x04a4bf9f1419e390, n3Raw[7] = 0x2a777300bb60793c;
    r3Raw[0] = 0x0000000000000000, r3Raw[1] = 0x0000000000000000, r3Raw[2] = 0x0000000000000000, r3Raw[3] = 0x0000000000000000, r3Raw[4] = 0x0000000000000000, r3Raw[5] = 0x0000000000000000, r3Raw[6] = 0x0000000000000000, r3Raw[7] = 0x4000000000000000;
    rMask3Raw[0] = 0xffffffffffffffff, rMask3Raw[1] = 0xffffffffffffffff, rMask3Raw[2] = 0xffffffffffffffff, rMask3Raw[3] = 0xffffffffffffffff, rMask3Raw[4] = 0xffffffffffffffff, rMask3Raw[5] = 0xffffffffffffffff, rMask3Raw[6] = 0xffffffffffffffff, rMask3Raw[7] = 0x3fffffffffffffff;
    p3Raw[0] = 0xf9714f52f5f4cb39, p3Raw[1] = 0x3e7d71562263fd69, p3Raw[2] = 0x5d3cd3445afe0336, p3Raw[3] = 0x07b0cf16c7ad2a0a, p3Raw[4] = 0x9b775c358966f6cf, p3Raw[5] = 0xc458db7682c23ae6, p3Raw[6] = 0xf14bf443ef252155, p3Raw[7] = 0x15f2e230e11d52b8;

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
    uint32 rExp0 = 1023;
    uint1024 p0;
    uint64 *aM0Raw = (uint64 *) &aM0, *bM0Raw = (uint64 *) &bM0, *n0Raw = (uint64 *) &n0, *r0Raw = (uint64 *) &r0, *rMask0Raw = (uint64 *) &rMask0;
    uint64 *p0Raw = (uint64 *) &p0;

    aM0Raw[0] = 0x649a78b9823cc0e5, aM0Raw[1] = 0x8d5e761a1c93b26f, aM0Raw[2] = 0xc04435b72ed0ada4, aM0Raw[3] = 0x86bf10d3353ae32b, aM0Raw[4] = 0xfe1666f059f2817b, aM0Raw[5] = 0xfc10c19b3de82493, aM0Raw[6] = 0x6d54279309461883, aM0Raw[7] = 0x0d8305a76caf07df, aM0Raw[8] = 0x9c30cb6268b853d8, aM0Raw[9] = 0x354d281bb5b6999e, aM0Raw[10] = 0x59a3c51a5eb2db51, aM0Raw[11] = 0x66ca729a468cfc69, aM0Raw[12] = 0x4effdbdf663c0cf6, aM0Raw[13] = 0xc28371fc054df57c, aM0Raw[14] = 0xac49f7d4d97634a5, aM0Raw[15] = 0x3a7bf008e81bcdee;
    bM0Raw[0] = 0x7a38af012460a71a, bM0Raw[1] = 0x109df790c3f347ea, bM0Raw[2] = 0x0924910442ad393b, bM0Raw[3] = 0xf67dacf6e91fd93f, bM0Raw[4] = 0x3caa816babb217ad, bM0Raw[5] = 0x2b6d7c240f4da42e, bM0Raw[6] = 0x56f9fa9e2c3c9f9a, bM0Raw[7] = 0xd47e6234d5a559c4, bM0Raw[8] = 0xa3dd4c33d3cceb6b, bM0Raw[9] = 0xf220b985fa4a443d, bM0Raw[10] = 0x38809a1ae40e9399, bM0Raw[11] = 0x500fa3b0193ccd94, bM0Raw[12] = 0x16133b7c29202e93, bM0Raw[13] = 0xd8c0ceb21a30f172, bM0Raw[14] = 0xb2938a1f900b4bc1, bM0Raw[15] = 0x805f8b8a3b7a4a2;
    n0Raw[0] = 0xe2042a1dcfd8b441, n0Raw[1] = 0x01763e5cf2c53a85, n0Raw[2] = 0x25c66e6c932f52ea, n0Raw[3] = 0x4832d4dbef218dd6, n0Raw[4] = 0x55bba473d91d4048, n0Raw[5] = 0xbbfc80c2af7cc198, n0Raw[6] = 0xe7b69c8c828768de, n0Raw[7] = 0x9fc452eaae8643ee, n0Raw[8] = 0xaa80564dd79d0f77, n0Raw[9] = 0x655c4d141c063b21, n0Raw[10] = 0x4a62fab2d2272ea5, n0Raw[11] = 0x623889f4e99b009c, n0Raw[12] = 0x3f28a7ff3e53be99, n0Raw[13] = 0xb470b91055d014e9, n0Raw[14] = 0x6b095ae7cb2d9574, n0Raw[15] = 0x5350fd9a996589ef;
    r0Raw[0] = 0x0000000000000000, r0Raw[1] = 0x0000000000000000, r0Raw[2] = 0x0000000000000000, r0Raw[3] = 0x0000000000000000, r0Raw[4] = 0x0000000000000000, r0Raw[5] = 0x0000000000000000, r0Raw[6] = 0x0000000000000000, r0Raw[7] = 0x0000000000000000, r0Raw[8] = 0x0000000000000000, r0Raw[9] = 0x0000000000000000, r0Raw[10] = 0x0000000000000000, r0Raw[11] = 0x0000000000000000, r0Raw[12] = 0x0000000000000000, r0Raw[13] = 0x0000000000000000, r0Raw[14] = 0x0000000000000000, r0Raw[15] = 0x8000000000000000;
    rMask0Raw[0] = 0xffffffffffffffff, rMask0Raw[1] = 0xffffffffffffffff, rMask0Raw[2] = 0xffffffffffffffff, rMask0Raw[3] = 0xffffffffffffffff, rMask0Raw[4] = 0xffffffffffffffff, rMask0Raw[5] = 0xffffffffffffffff, rMask0Raw[6] = 0xffffffffffffffff, rMask0Raw[7] = 0xffffffffffffffff, rMask0Raw[8] = 0xffffffffffffffff, rMask0Raw[9] = 0xffffffffffffffff, rMask0Raw[10] = 0xffffffffffffffff, rMask0Raw[11] = 0xffffffffffffffff, rMask0Raw[12] = 0xffffffffffffffff, rMask0Raw[13] = 0xffffffffffffffff, rMask0Raw[14] = 0xffffffffffffffff, rMask0Raw[15] = 0x7fffffffffffffff;
    p0Raw[0] = 0xcad6ebc6f86482dc, p0Raw[1] = 0xbe6495ab7c3c85e8, p0Raw[2] = 0x6551643a8fd479ce, p0Raw[3] = 0x2296009a8669f19f, p0Raw[4] = 0xa2a8bc04db2c7977, p0Raw[5] = 0x42b994dd424ed592, p0Raw[6] = 0x84bd353c8c947151, p0Raw[7] = 0x981a4366b260a436, p0Raw[8] = 0xa271c6e4de80bda4, p0Raw[9] = 0xdff3ff2b5896c51c, p0Raw[10] = 0x78c068e9fe1e4bc6, p0Raw[11] = 0x128e8a4bb089862e, p0Raw[12] = 0x7f4fa5c7d14a249c, p0Raw[13] = 0x2efeb93c580602f8, p0Raw[14] = 0xcc55df0bedef8476, p0Raw[15] = 0x679f99984f8816c;

    uint1024 aM1, bM1, n1, rMask1;
    uint2048 r1, nPrime1;
    uint32 rExp1 = 1024;
    uint1024 p1;
    uint64 *aM1Raw = (uint64 *) &aM1, *bM1Raw = (uint64 *) &bM1, *n1Raw = (uint64 *) &n1, *r1Raw = (uint64 *) &r1, *rMask1Raw = (uint64 *) &rMask1;
    uint64 *p1Raw = (uint64 *) &p1;

    aM1Raw[0] = 0x5a905a9cb59f4392, aM1Raw[1] = 0x4efd051100cf77e3, aM1Raw[2] = 0x78dbd1630b93c962, aM1Raw[3] = 0x2afecfb149399379, aM1Raw[4] = 0x6805590268f441bc, aM1Raw[5] = 0x63b3afb83249c199, aM1Raw[6] = 0xd9c41f8dd64bb65a, aM1Raw[7] = 0x62d855bbaa2a7582, aM1Raw[8] = 0xb734e73ecd415fc9, aM1Raw[9] = 0xb5307426f4d227ac, aM1Raw[10] = 0x4d2d4f958b7f3988, aM1Raw[11] = 0xaafcd40d8f3fd360, aM1Raw[12] = 0x09267c5b61922af1, aM1Raw[13] = 0x141c3ef67e8f75a8, aM1Raw[14] = 0xfed0b9b61ceb58e5, aM1Raw[15] = 0xa18d76a128253ab7;
    bM1Raw[0] = 0x2b36b6f4607235b2, bM1Raw[1] = 0x0832e1f79770e06e, bM1Raw[2] = 0xf74fb5a6b5520560, bM1Raw[3] = 0x2d15a207bf254701, bM1Raw[4] = 0x2876773bece029a9, bM1Raw[5] = 0x945472400a196fc9, bM1Raw[6] = 0xe0aea4040d4ea12d, bM1Raw[7] = 0xe603f0d68c9f1026, bM1Raw[8] = 0x833330eadef2e4ad, bM1Raw[9] = 0x4a0b145ecb352a46, bM1Raw[10] = 0x1135835b66526081, bM1Raw[11] = 0x78348edac3502032, bM1Raw[12] = 0x28dbfc71974976ca, bM1Raw[13] = 0x6a70d82bcfcfc0b7, bM1Raw[14] = 0xf15df386632c885b, bM1Raw[15] = 0xa23865cb77500769;
    n1Raw[0] = 0x137057cc9b960daf, n1Raw[1] = 0x2f995a8ff498608f, n1Raw[2] = 0x4aa0a9f4ffafca14, n1Raw[3] = 0x486fbdae3c19e69c, n1Raw[4] = 0xaebccaf9affdd734, n1Raw[5] = 0xbe38dfd309ece61e, n1Raw[6] = 0x7471adcbe5a713f2, n1Raw[7] = 0xa82d350888845d78, n1Raw[8] = 0x11bd111d3c29b999, n1Raw[9] = 0xad9a810df89a9779, n1Raw[10] = 0xf1b119852a49ac5b, n1Raw[11] = 0x8aec71c9b413516f, n1Raw[12] = 0x814b2b2a1cff91ea, n1Raw[13] = 0x8aabe5bdfc835aba, n1Raw[14] = 0xe2a99460b9e244c3, n1Raw[15] = 0xa317109dc882d073;
    r1Raw[0] = 0x0000000000000000, r1Raw[1] = 0x0000000000000000, r1Raw[2] = 0x0000000000000000, r1Raw[3] = 0x0000000000000000, r1Raw[4] = 0x0000000000000000, r1Raw[5] = 0x0000000000000000, r1Raw[6] = 0x0000000000000000, r1Raw[7] = 0x0000000000000000, r1Raw[8] = 0x0000000000000000, r1Raw[9] = 0x0000000000000000, r1Raw[10] = 0x0000000000000000, r1Raw[11] = 0x0000000000000000, r1Raw[12] = 0x0000000000000000, r1Raw[13] = 0x0000000000000000, r1Raw[14] = 0x0000000000000000, r1Raw[15] = 0x0000000000000000, r1Raw[16] = 0x1;
    rMask1Raw[0] = 0xffffffffffffffff, rMask1Raw[1] = 0xffffffffffffffff, rMask1Raw[2] = 0xffffffffffffffff, rMask1Raw[3] = 0xffffffffffffffff, rMask1Raw[4] = 0xffffffffffffffff, rMask1Raw[5] = 0xffffffffffffffff, rMask1Raw[6] = 0xffffffffffffffff, rMask1Raw[7] = 0xffffffffffffffff, rMask1Raw[8] = 0xffffffffffffffff, rMask1Raw[9] = 0xffffffffffffffff, rMask1Raw[10] = 0xffffffffffffffff, rMask1Raw[11] = 0xffffffffffffffff, rMask1Raw[12] = 0xffffffffffffffff, rMask1Raw[13] = 0xffffffffffffffff, rMask1Raw[14] = 0xffffffffffffffff, rMask1Raw[15] = 0xffffffffffffffff;
    p1Raw[0] = 0xac505e24e6c0f333, p1Raw[1] = 0xf5fd067e6d1287ea, p1Raw[2] = 0xdcc510ef5a97da19, p1Raw[3] = 0xbda516e38bcfbd3e, p1Raw[4] = 0xb1c71c2a7bc84e78, p1Raw[5] = 0xd0a0cb84c1ed0235, p1Raw[6] = 0xe731040818e3b234, p1Raw[7] = 0x46fd05f5fb2a35da, p1Raw[8] = 0x08ba881eaee80b0c, p1Raw[9] = 0xded82305b691fd5b, p1Raw[10] = 0x9e978d3ace0ade33, p1Raw[11] = 0xab976597193b8363, p1Raw[12] = 0xa9d5afbc67b5e28a, p1Raw[13] = 0x19c52d489a1106ed, p1Raw[14] = 0x1b395bbab2128aae, p1Raw[15] = 0x8fa6b0be8e02d3c6;

    uint1024 aM2, bM2, n2, rMask2;
    uint2048 r2, nPrime2;
    uint32 rExp2 = 1024;
    uint1024 p2;
    uint64 *aM2Raw = (uint64 *) &aM2, *bM2Raw = (uint64 *) &bM2, *n2Raw = (uint64 *) &n2, *r2Raw = (uint64 *) &r2, *rMask2Raw = (uint64 *) &rMask2;
    uint64 *p2Raw = (uint64 *) &p2;

    aM2Raw[0] = 0xff54c103df01da6f, aM2Raw[1] = 0x92363e98bb00a34a, aM2Raw[2] = 0x0824e47f7fc98114, aM2Raw[3] = 0x1b63068a2573bfa6, aM2Raw[4] = 0x4ecd69665ce64bbe, aM2Raw[5] = 0x43d5b1f7ccf36cd3, aM2Raw[6] = 0x7967a7ce7b4fb8a9, aM2Raw[7] = 0xe2feaebd4ad337d7, aM2Raw[8] = 0x16a697ce9c6b7155, aM2Raw[9] = 0x509028daad68ef7f, aM2Raw[10] = 0xc9e72b76d2685dfa, aM2Raw[11] = 0x2a51b490f052cef2, aM2Raw[12] = 0xc059c3e491045ef2, aM2Raw[13] = 0xab34e02d5b1d8980, aM2Raw[14] = 0xf9027f20163e705c, aM2Raw[15] = 0x435bd61a8ebdc290;
    bM2Raw[0] = 0xfaee893948eec4f0, bM2Raw[1] = 0xb47247da4df654b3, bM2Raw[2] = 0x1c664d0d6150b46e, bM2Raw[3] = 0x0fae66a20bc7e31d, bM2Raw[4] = 0xdc8c7749f1de7590, bM2Raw[5] = 0x2dc5e6eb7f0cd0c4, bM2Raw[6] = 0x7d15cad2f1207e71, bM2Raw[7] = 0xb60a96a01f43e65f, bM2Raw[8] = 0x0807ba7513beb299, bM2Raw[9] = 0x97e2541c08cc2ae3, bM2Raw[10] = 0xde90889d45701bf5, bM2Raw[11] = 0x8612c4983cbc54bf, bM2Raw[12] = 0x52ca64ccf0fdc29b, bM2Raw[13] = 0x71e2c3b9b5c806bd, bM2Raw[14] = 0xcce94af9b1c8b22b, bM2Raw[15] = 0x621b99c7c4ff776b;
    n2Raw[0] = 0x5b36bd71378b83e7, n2Raw[1] = 0x586b340440077134, n2Raw[2] = 0x916ec59f87f5cc7e, n2Raw[3] = 0x8ddac211cbc770ae, n2Raw[4] = 0x9504eed0d435a353, n2Raw[5] = 0xc1cce46dd261ce52, n2Raw[6] = 0x1e0bbe9e1e5183b1, n2Raw[7] = 0x3ac7b7a99bc9c41b, n2Raw[8] = 0xb35bfdd79e6ed8a8, n2Raw[9] = 0xf4bbd43feba22252, n2Raw[10] = 0x3cbf37fc92a19986, n2Raw[11] = 0xdd9833b26175cb79, n2Raw[12] = 0x6e972cc25b0a40ee, n2Raw[13] = 0xab10d1ab3a0c2ff2, n2Raw[14] = 0x232bc02f763c4ea6, n2Raw[15] = 0x814f13fd308ca79a;
    r2Raw[0] = 0x0000000000000000, r2Raw[1] = 0x0000000000000000, r2Raw[2] = 0x0000000000000000, r2Raw[3] = 0x0000000000000000, r2Raw[4] = 0x0000000000000000, r2Raw[5] = 0x0000000000000000, r2Raw[6] = 0x0000000000000000, r2Raw[7] = 0x0000000000000000, r2Raw[8] = 0x0000000000000000, r2Raw[9] = 0x0000000000000000, r2Raw[10] = 0x0000000000000000, r2Raw[11] = 0x0000000000000000, r2Raw[12] = 0x0000000000000000, r2Raw[13] = 0x0000000000000000, r2Raw[14] = 0x0000000000000000, r2Raw[15] = 0x0000000000000000, r2Raw[16] = 0x1;
    rMask2Raw[0] = 0xffffffffffffffff, rMask2Raw[1] = 0xffffffffffffffff, rMask2Raw[2] = 0xffffffffffffffff, rMask2Raw[3] = 0xffffffffffffffff, rMask2Raw[4] = 0xffffffffffffffff, rMask2Raw[5] = 0xffffffffffffffff, rMask2Raw[6] = 0xffffffffffffffff, rMask2Raw[7] = 0xffffffffffffffff, rMask2Raw[8] = 0xffffffffffffffff, rMask2Raw[9] = 0xffffffffffffffff, rMask2Raw[10] = 0xffffffffffffffff, rMask2Raw[11] = 0xffffffffffffffff, rMask2Raw[12] = 0xffffffffffffffff, rMask2Raw[13] = 0xffffffffffffffff, rMask2Raw[14] = 0xffffffffffffffff, rMask2Raw[15] = 0xffffffffffffffff;
    p2Raw[0] = 0x234d9967cb796381, p2Raw[1] = 0x3922ffdbc967d3ef, p2Raw[2] = 0x81ed0b6ed94f8355, p2Raw[3] = 0xa2ebdc3f6ff6f42d, p2Raw[4] = 0xb786417a76081b2b, p2Raw[5] = 0xdfb1dcf7d63fdbb9, p2Raw[6] = 0xffa3fa6b65b1e2cc, p2Raw[7] = 0x4812b6458515c0e5, p2Raw[8] = 0x1f1cd98d6edf550c, p2Raw[9] = 0xef112767e767e64f, p2Raw[10] = 0x491af1678013acbf, p2Raw[11] = 0xb9637f1de4ac9b0e, p2Raw[12] = 0xd93171c71e929ca1, p2Raw[13] = 0x4430a569ada0fea2, p2Raw[14] = 0xaeccf583530c54d7, p2Raw[15] = 0x7e80060205de21d6;

    uint1024 aM3, bM3, n3, rMask3;
    uint2048 r3, nPrime3;
    uint32 rExp3 = 1024;
    uint1024 p3;
    uint64 *aM3Raw = (uint64 *) &aM3, *bM3Raw = (uint64 *) &bM3, *n3Raw = (uint64 *) &n3, *r3Raw = (uint64 *) &r3, *rMask3Raw = (uint64 *) &rMask3;
    uint64 *p3Raw = (uint64 *) &p3;

    aM3Raw[0] = 0x4fe4e6b8604cffae, aM3Raw[1] = 0x58b391f027026005, aM3Raw[2] = 0x8e2975c222ab8268, aM3Raw[3] = 0x9be9a7d56c044de7, aM3Raw[4] = 0x101742d13c8287f2, aM3Raw[5] = 0x3470587ea65b67c8, aM3Raw[6] = 0x15cfeb13c872e4db, aM3Raw[7] = 0xf6e33ce9161a1d85, aM3Raw[8] = 0x67c31f5f93d06057, aM3Raw[9] = 0xf0c9fb5172d29b44, aM3Raw[10] = 0xa7e89f3afb9e3bc2, aM3Raw[11] = 0x7e7ae72260e59a36, aM3Raw[12] = 0xb1d00d01e78ef263, aM3Raw[13] = 0x02bfd97cdc6fa597, aM3Raw[14] = 0xda0766d14229061e, aM3Raw[15] = 0xa974289346593085;
    bM3Raw[0] = 0xe585245defb0f86d, bM3Raw[1] = 0xc020527f19d2163e, bM3Raw[2] = 0x6d9a25fdb6184e6a, bM3Raw[3] = 0x120978046b02a614, bM3Raw[4] = 0xa513743246c03832, bM3Raw[5] = 0x6263c3d47bcddc2c, bM3Raw[6] = 0xbd2a42a863d8f276, bM3Raw[7] = 0x9b9870e618201218, bM3Raw[8] = 0xde6247e9376b4496, bM3Raw[9] = 0x9b0891f875724791, bM3Raw[10] = 0x7e081245bdf0c338, bM3Raw[11] = 0x7aeec1f02b97be18, bM3Raw[12] = 0x8f09807881688de3, bM3Raw[13] = 0x7c6ef58a124bb56c, bM3Raw[14] = 0x50c2902447d1217c, bM3Raw[15] = 0x1d653dabd99a8215;
    n3Raw[0] = 0xd86c77ff3fe8949d, n3Raw[1] = 0x0871679df671b05b, n3Raw[2] = 0x6f2c7032511dc7aa, n3Raw[3] = 0xe337638990d8beaa, n3Raw[4] = 0x66164c64fc15e02b, n3Raw[5] = 0xa252d7be5a898081, n3Raw[6] = 0x34047cf4816e3f25, n3Raw[7] = 0x22ddabd96ef3cda6, n3Raw[8] = 0xb6e71ac5d1ef0c2d, n3Raw[9] = 0x576be49591f80b20, n3Raw[10] = 0xdd74b09f9282d76d, n3Raw[11] = 0x7372e99239b7bb22, n3Raw[12] = 0xf76ed14b307726e3, n3Raw[13] = 0x20119d80661ab092, n3Raw[14] = 0x89eb9aac660e0319, n3Raw[15] = 0xd5ca4b2c185584ef;
    r3Raw[0] = 0x0000000000000000, r3Raw[1] = 0x0000000000000000, r3Raw[2] = 0x0000000000000000, r3Raw[3] = 0x0000000000000000, r3Raw[4] = 0x0000000000000000, r3Raw[5] = 0x0000000000000000, r3Raw[6] = 0x0000000000000000, r3Raw[7] = 0x0000000000000000, r3Raw[8] = 0x0000000000000000, r3Raw[9] = 0x0000000000000000, r3Raw[10] = 0x0000000000000000, r3Raw[11] = 0x0000000000000000, r3Raw[12] = 0x0000000000000000, r3Raw[13] = 0x0000000000000000, r3Raw[14] = 0x0000000000000000, r3Raw[15] = 0x0000000000000000, r3Raw[16] = 0x1;
    rMask3Raw[0] = 0xffffffffffffffff, rMask3Raw[1] = 0xffffffffffffffff, rMask3Raw[2] = 0xffffffffffffffff, rMask3Raw[3] = 0xffffffffffffffff, rMask3Raw[4] = 0xffffffffffffffff, rMask3Raw[5] = 0xffffffffffffffff, rMask3Raw[6] = 0xffffffffffffffff, rMask3Raw[7] = 0xffffffffffffffff, rMask3Raw[8] = 0xffffffffffffffff, rMask3Raw[9] = 0xffffffffffffffff, rMask3Raw[10] = 0xffffffffffffffff, rMask3Raw[11] = 0xffffffffffffffff, rMask3Raw[12] = 0xffffffffffffffff, rMask3Raw[13] = 0xffffffffffffffff, rMask3Raw[14] = 0xffffffffffffffff, rMask3Raw[15] = 0xffffffffffffffff;
    p3Raw[0] = 0x2896de4d108ce280, p3Raw[1] = 0xdf126bc0534b7ad6, p3Raw[2] = 0x619d6df49c8dc19c, p3Raw[3] = 0x837c02775522e089, p3Raw[4] = 0x869096f5717b1362, p3Raw[5] = 0xb2e996d91368fd42, p3Raw[6] = 0xdcebad63bf508ef1, p3Raw[7] = 0x656e3e79681a1dab, p3Raw[8] = 0x1af8082d7bc2c7a4, p3Raw[9] = 0x963811a770085271, p3Raw[10] = 0x7eadcbdae24ff6fe, p3Raw[11] = 0x74d46a6215ed146e, p3Raw[12] = 0x33534d969ee0022e, p3Raw[13] = 0x652df7c3173190f5, p3Raw[14] = 0x0317b530c1210a27, p3Raw[15] = 0x36693aee0e6c8c5d;

    // ACT
    extendedEuclidean(r0, n0, unused, nPrime0);

    t = redc(rMask0, rExp0, n0, -(uint1024)nPrime0, aM0 * bM0);
    uint1024 c0 = redc(rMask0, rExp0, n0, -(uint1024)nPrime0, t);

    extendedEuclidean(r1, n1, unused, nPrime1);

    t = redc(rMask1, rExp1, n1, -(uint1024)nPrime1, aM1 * bM1);

    // nPrime equal, aM1 * bM1 equal

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
    uint32 rExp0 = 2048;
    uint2048 p0;
    uint64 *aM0Raw = (uint64 *) &aM0, *bM0Raw = (uint64 *) &bM0, *n0Raw = (uint64 *) &n0, *r0Raw = (uint64 *) &r0, *rMask0Raw = (uint64 *) &rMask0;
    uint64 *p0Raw = (uint64 *) &p0;

    aM0Raw[0] = 0xc9b1ae4e4c8f2947, aM0Raw[1] = 0x6432380e5822e090, aM0Raw[2] = 0x60033253e13e9039, aM0Raw[3] = 0xd703875146d449bc, aM0Raw[4] = 0x3816b7fd458d9136, aM0Raw[5] = 0xfa76b576e658f613, aM0Raw[6] = 0x15dbb86d600a8310, aM0Raw[7] = 0xe7d0371686a3e454, aM0Raw[8] = 0x02d373e7e249720b, aM0Raw[9] = 0xb50c74bf7d0295f8, aM0Raw[10] = 0x7586664dfe2826a7, aM0Raw[11] = 0xd140e2da4dc3467d, aM0Raw[12] = 0x07b0ba5f3ff08e84, aM0Raw[13] = 0x6a6088bb1a4db4cd, aM0Raw[14] = 0xa3d48b99472dd8b3, aM0Raw[15] = 0x239ef06f72539029, aM0Raw[16] = 0x0b28792651b75c4f, aM0Raw[17] = 0x2c693cc1f2a55726, aM0Raw[18] = 0x661c88b2bc5b1e2a, aM0Raw[19] = 0x51b11d85e7a8f586, aM0Raw[20] = 0x2bb93242775388ba, aM0Raw[21] = 0x2e0f6dac169a38e8, aM0Raw[22] = 0x03d45f4b64673002, aM0Raw[23] = 0xbfcecb13fb4348e9, aM0Raw[24] = 0x4c778a1b56ad8c78, aM0Raw[25] = 0x85d8a8ca6fbddef4, aM0Raw[26] = 0x159c2fb33e1c96c7, aM0Raw[27] = 0x8e39d6ec42d455a5, aM0Raw[28] = 0x2747b8dd42fab095, aM0Raw[29] = 0xc29d1305cac029b6, aM0Raw[30] = 0x3cff20d4a64c64b6, aM0Raw[31] = 0x92c928ce4215e6f2;
    bM0Raw[0] = 0x35611db54a7061d0, bM0Raw[1] = 0xc67f14c59061ba20, bM0Raw[2] = 0x6ddb8f3a0b1be0e8, bM0Raw[3] = 0xd751ff416d98007f, bM0Raw[4] = 0x060e61974e097be4, bM0Raw[5] = 0x52aab9cc647c57b0, bM0Raw[6] = 0xc28cb2aba655cec3, bM0Raw[7] = 0x4832dd871cf344c9, bM0Raw[8] = 0xf55e821240aa9a14, bM0Raw[9] = 0x25c496763b5c9097, bM0Raw[10] = 0xbc5e1e4c17271598, bM0Raw[11] = 0x5195152cd049b340, bM0Raw[12] = 0x12f39ef93c93f151, bM0Raw[13] = 0x28922349337fb79a, bM0Raw[14] = 0xd01229124c7bdc97, bM0Raw[15] = 0xbf288b514b6ffed3, bM0Raw[16] = 0x6bf472e52f08bf44, bM0Raw[17] = 0x2477b810dce7268a, bM0Raw[18] = 0x6d6b4594e8fc6bd2, bM0Raw[19] = 0x44aada7c9e85a50b, bM0Raw[20] = 0x6e4249ffc851faae, bM0Raw[21] = 0x4442854c738f03dc, bM0Raw[22] = 0xac6069e745b59905, bM0Raw[23] = 0xe1a38cadad05b87b, bM0Raw[24] = 0x1933442b81c4a6ca, bM0Raw[25] = 0xc96bb5fe9b6be105, bM0Raw[26] = 0x3d96ee5bd72b1b88, bM0Raw[27] = 0x9f46222fd5d99c31, bM0Raw[28] = 0xc837ee161c6429c3, bM0Raw[29] = 0x3b32d91dff2ef5c5, bM0Raw[30] = 0x51533c76228bf94a, bM0Raw[31] = 0x655e13f83a66b013;
    n0Raw[0] = 0xdedfb85b8adb0125, n0Raw[1] = 0x1cc42b275086117a, n0Raw[2] = 0x095db12b73726e37, n0Raw[3] = 0x468fe3d7a0e890f0, n0Raw[4] = 0xd069999b4894ce5b, n0Raw[5] = 0x2c5ac63be2fdb24e, n0Raw[6] = 0xe7da8bd2540df910, n0Raw[7] = 0x24ae1ccf3f1397ab, n0Raw[8] = 0xe05dad42c880f087, n0Raw[9] = 0x754258508fba5203, n0Raw[10] = 0x595c335e7749bc18, n0Raw[11] = 0x622642043775767f, n0Raw[12] = 0x8963253c0b6f31b0, n0Raw[13] = 0x4d2e80061b27b2aa, n0Raw[14] = 0x63dee8781ebe04e8, n0Raw[15] = 0x24070e8bc03c8d6a, n0Raw[16] = 0xabd6b9b9e5b38918, n0Raw[17] = 0xb54674c45199fafb, n0Raw[18] = 0x6a0cf6d3391ec1c2, n0Raw[19] = 0x3836aa44f0ff4350, n0Raw[20] = 0x3a77310c8136332c, n0Raw[21] = 0xeb35d2cbac288d78, n0Raw[22] = 0x07e5a78ff2d516fd, n0Raw[23] = 0xbe6cb3a2c4c7dd8a, n0Raw[24] = 0x6a39f9503a69b98f, n0Raw[25] = 0x515c8555c5ce5e3d, n0Raw[26] = 0xb7220c5a25224a35, n0Raw[27] = 0x9dc83b3e7df9ade2, n0Raw[28] = 0x2e645ac888213aa1, n0Raw[29] = 0x5ac8a56b230474e0, n0Raw[30] = 0x680c1870accb3556, n0Raw[31] = 0xd20df58c08ce2fbe;
    r0Raw[0] = 0x0000000000000000, r0Raw[1] = 0x0000000000000000, r0Raw[2] = 0x0000000000000000, r0Raw[3] = 0x0000000000000000, r0Raw[4] = 0x0000000000000000, r0Raw[5] = 0x0000000000000000, r0Raw[6] = 0x0000000000000000, r0Raw[7] = 0x0000000000000000, r0Raw[8] = 0x0000000000000000, r0Raw[9] = 0x0000000000000000, r0Raw[10] = 0x0000000000000000, r0Raw[11] = 0x0000000000000000, r0Raw[12] = 0x0000000000000000, r0Raw[13] = 0x0000000000000000, r0Raw[14] = 0x0000000000000000, r0Raw[15] = 0x0000000000000000, r0Raw[16] = 0x0000000000000000, r0Raw[17] = 0x0000000000000000, r0Raw[18] = 0x0000000000000000, r0Raw[19] = 0x0000000000000000, r0Raw[20] = 0x0000000000000000, r0Raw[21] = 0x0000000000000000, r0Raw[22] = 0x0000000000000000, r0Raw[23] = 0x0000000000000000, r0Raw[24] = 0x0000000000000000, r0Raw[25] = 0x0000000000000000, r0Raw[26] = 0x0000000000000000, r0Raw[27] = 0x0000000000000000, r0Raw[28] = 0x0000000000000000, r0Raw[29] = 0x0000000000000000, r0Raw[30] = 0x0000000000000000, r0Raw[31] = 0x0000000000000000, r0Raw[32] = 0x1;
    rMask0Raw[0] = 0xffffffffffffffff, rMask0Raw[1] = 0xffffffffffffffff, rMask0Raw[2] = 0xffffffffffffffff, rMask0Raw[3] = 0xffffffffffffffff, rMask0Raw[4] = 0xffffffffffffffff, rMask0Raw[5] = 0xffffffffffffffff, rMask0Raw[6] = 0xffffffffffffffff, rMask0Raw[7] = 0xffffffffffffffff, rMask0Raw[8] = 0xffffffffffffffff, rMask0Raw[9] = 0xffffffffffffffff, rMask0Raw[10] = 0xffffffffffffffff, rMask0Raw[11] = 0xffffffffffffffff, rMask0Raw[12] = 0xffffffffffffffff, rMask0Raw[13] = 0xffffffffffffffff, rMask0Raw[14] = 0xffffffffffffffff, rMask0Raw[15] = 0xffffffffffffffff, rMask0Raw[16] = 0xffffffffffffffff, rMask0Raw[17] = 0xffffffffffffffff, rMask0Raw[18] = 0xffffffffffffffff, rMask0Raw[19] = 0xffffffffffffffff, rMask0Raw[20] = 0xffffffffffffffff, rMask0Raw[21] = 0xffffffffffffffff, rMask0Raw[22] = 0xffffffffffffffff, rMask0Raw[23] = 0xffffffffffffffff, rMask0Raw[24] = 0xffffffffffffffff, rMask0Raw[25] = 0xffffffffffffffff, rMask0Raw[26] = 0xffffffffffffffff, rMask0Raw[27] = 0xffffffffffffffff, rMask0Raw[28] = 0xffffffffffffffff, rMask0Raw[29] = 0xffffffffffffffff, rMask0Raw[30] = 0xffffffffffffffff, rMask0Raw[31] = 0xffffffffffffffff;
    p0Raw[0] = 0x58e869aef18d2545, p0Raw[1] = 0x769574d23c1e10d6, p0Raw[2] = 0xc6bb066300cf4047, p0Raw[3] = 0x3fc14d4078e8a065, p0Raw[4] = 0x0ccb9e07362d427e, p0Raw[5] = 0x26a046d0f0c4f6ea, p0Raw[6] = 0x978c0e4827db8254, p0Raw[7] = 0x709113448a9d07f3, p0Raw[8] = 0xa83dd766da9e9d53, p0Raw[9] = 0xe0faa7f5bb80f8e1, p0Raw[10] = 0x9604c2f6954f1709, p0Raw[11] = 0x68baaf4e438fc8a4, p0Raw[12] = 0xd864d2129c052d06, p0Raw[13] = 0x7adcca6a31b52ee6, p0Raw[14] = 0x20a6243a46b0d900, p0Raw[15] = 0x49902568f5d970b0, p0Raw[16] = 0x41f53f638ac6afdc, p0Raw[17] = 0xcab32e2711bf2d48, p0Raw[18] = 0x228307bc92302abc, p0Raw[19] = 0x4f6b9df08f07301e, p0Raw[20] = 0x944e536d59d80d5f, p0Raw[21] = 0x62db6a801109685e, p0Raw[22] = 0xb2c35ba36e00c37f, p0Raw[23] = 0xaa4193c81e8fc059, p0Raw[24] = 0x72449fcf167a8c8e, p0Raw[25] = 0xc952ecd0e8f461e5, p0Raw[26] = 0x5e26f348740e3bf8, p0Raw[27] = 0x3f5b0cde61bca6cd, p0Raw[28] = 0xbbdb25bede62eb05, p0Raw[29] = 0xf4cd931754971678, p0Raw[30] = 0x2759b9ff3feae6e2, p0Raw[31] = 0x14b8eebce8c5708a;

    uint2048 aM1, bM1, n1, rMask1;
    uint4096 r1, nPrime1;
    uint32 rExp1 = 2048;
    uint2048 p1;
    uint64 *aM1Raw = (uint64 *) &aM1, *bM1Raw = (uint64 *) &bM1, *n1Raw = (uint64 *) &n1, *r1Raw = (uint64 *) &r1, *rMask1Raw = (uint64 *) &rMask1;
    uint64 *p1Raw = (uint64 *) &p1;

    aM1Raw[0] = 0x5f1c79858094ce07, aM1Raw[1] = 0xf1337e29568b54b8, aM1Raw[2] = 0x5b20a9fbaf005c8d, aM1Raw[3] = 0xd50b6bd2b376fe3e, aM1Raw[4] = 0x1562d7909cca5ace, aM1Raw[5] = 0x6fb9e1b89b140994, aM1Raw[6] = 0xc82cba7f5ac13064, aM1Raw[7] = 0x80a496c8890fb975, aM1Raw[8] = 0x363c9b77d1bbd3be, aM1Raw[9] = 0x0d09d5bb6c09c570, aM1Raw[10] = 0xa22117c5833d9158, aM1Raw[11] = 0x832f8c394ab28dfe, aM1Raw[12] = 0x6b69e61d56addbf8, aM1Raw[13] = 0x1cd561e22c66439d, aM1Raw[14] = 0x681916a2640bad88, aM1Raw[15] = 0x16dc0e1f174c6ad2, aM1Raw[16] = 0xefe389694503523c, aM1Raw[17] = 0xe970608346daba8c, aM1Raw[18] = 0x50b74c84a0d9f271, aM1Raw[19] = 0x2d136d243a355cf6, aM1Raw[20] = 0xc8da7a62f02e6fa4, aM1Raw[21] = 0xab9ee20bef201391, aM1Raw[22] = 0xc4001e282f81d8d2, aM1Raw[23] = 0xf1fb5ac03f40e9e1, aM1Raw[24] = 0xe022e1eea7752fb4, aM1Raw[25] = 0x9b31ab99621fc215, aM1Raw[26] = 0x651e4610c7975181, aM1Raw[27] = 0xdf79fea6bd291b2a, aM1Raw[28] = 0x89e439ac40980696, aM1Raw[29] = 0x9423fb0a39e508db, aM1Raw[30] = 0xc292f9e98c5aad24, aM1Raw[31] = 0x6062589473107006;
    bM1Raw[0] = 0xbf565c94e61542b8, bM1Raw[1] = 0xb488455bc189ec43, bM1Raw[2] = 0xb3767dc3fba3c0d3, bM1Raw[3] = 0x9d241bc42196f3af, bM1Raw[4] = 0x74953490d5856393, bM1Raw[5] = 0x193b8cd2f1d110b9, bM1Raw[6] = 0x5b914e17c877d29a, bM1Raw[7] = 0x2e2e92b595ff982c, bM1Raw[8] = 0x8547830cba640fb3, bM1Raw[9] = 0x57983b8e27150b27, bM1Raw[10] = 0x75eb76cabc9ed84a, bM1Raw[11] = 0x5209cb89f625e013, bM1Raw[12] = 0x37dbdd3721edffde, bM1Raw[13] = 0x2512713b9b280367, bM1Raw[14] = 0x03e8a647b063ab49, bM1Raw[15] = 0x03e50e03c7f5203e, bM1Raw[16] = 0xaca92277e7eb33fd, bM1Raw[17] = 0xefdd6ded80fdedb8, bM1Raw[18] = 0xc0272b89892f8266, bM1Raw[19] = 0xd8f38b505d848720, bM1Raw[20] = 0xf64dd26e61aed4cc, bM1Raw[21] = 0xb70f92bfeee4e5ad, bM1Raw[22] = 0x763a75382e13c8c5, bM1Raw[23] = 0x2c65b09c397d663e, bM1Raw[24] = 0xbf00abae70394734, bM1Raw[25] = 0x12cf8e4a9181be01, bM1Raw[26] = 0xb63eb9f502432aa9, bM1Raw[27] = 0x47eff3b8cf1d67ee, bM1Raw[28] = 0xedfdeb90f11a468f, bM1Raw[29] = 0xf2c5d52f03e78910, bM1Raw[30] = 0xae14c75b7488be12, bM1Raw[31] = 0xc283f8af1d7b3f36;
    n1Raw[0] = 0x27b9c5df5cf79e2f, n1Raw[1] = 0x5df11c7a2b761139, n1Raw[2] = 0xd647263a96a19398, n1Raw[3] = 0xcceb772eca4b2e06, n1Raw[4] = 0xe8c410897cbc2dfd, n1Raw[5] = 0xe73fd9fc406621fe, n1Raw[6] = 0x20004297f490817a, n1Raw[7] = 0x1d13f23767153555, n1Raw[8] = 0xf0f3353d8f3a639e, n1Raw[9] = 0x2cce137e98d1ff9d, n1Raw[10] = 0x811b503572db680f, n1Raw[11] = 0x38ecfc71539c5800, n1Raw[12] = 0xefcd547f44346357, n1Raw[13] = 0x17509b61a6b22967, n1Raw[14] = 0x18c2860be5557850, n1Raw[15] = 0xf2a374dd23b9d4cf, n1Raw[16] = 0x43ca863fe049e653, n1Raw[17] = 0x4fa517e8bd808dd0, n1Raw[18] = 0x66932172ae5c6c79, n1Raw[19] = 0x0856eab93d216be8, n1Raw[20] = 0x4e066cd7dce40058, n1Raw[21] = 0x3e73ee77ad31805d, n1Raw[22] = 0x4ec087aee6fd09c0, n1Raw[23] = 0x031de029155abdff, n1Raw[24] = 0x85c0c88f8ea4ab94, n1Raw[25] = 0xb3198e12b154c929, n1Raw[26] = 0xd0288e853d1381c8, n1Raw[27] = 0x83f3e9e7811aadfc, n1Raw[28] = 0x62a19076722a7baa, n1Raw[29] = 0x32ff71a02dc34fb3, n1Raw[30] = 0x7d5e2e26340afea5, n1Raw[31] = 0xc6974b504be7939d;
    r1Raw[0] = 0x0000000000000000, r1Raw[1] = 0x0000000000000000, r1Raw[2] = 0x0000000000000000, r1Raw[3] = 0x0000000000000000, r1Raw[4] = 0x0000000000000000, r1Raw[5] = 0x0000000000000000, r1Raw[6] = 0x0000000000000000, r1Raw[7] = 0x0000000000000000, r1Raw[8] = 0x0000000000000000, r1Raw[9] = 0x0000000000000000, r1Raw[10] = 0x0000000000000000, r1Raw[11] = 0x0000000000000000, r1Raw[12] = 0x0000000000000000, r1Raw[13] = 0x0000000000000000, r1Raw[14] = 0x0000000000000000, r1Raw[15] = 0x0000000000000000, r1Raw[16] = 0x0000000000000000, r1Raw[17] = 0x0000000000000000, r1Raw[18] = 0x0000000000000000, r1Raw[19] = 0x0000000000000000, r1Raw[20] = 0x0000000000000000, r1Raw[21] = 0x0000000000000000, r1Raw[22] = 0x0000000000000000, r1Raw[23] = 0x0000000000000000, r1Raw[24] = 0x0000000000000000, r1Raw[25] = 0x0000000000000000, r1Raw[26] = 0x0000000000000000, r1Raw[27] = 0x0000000000000000, r1Raw[28] = 0x0000000000000000, r1Raw[29] = 0x0000000000000000, r1Raw[30] = 0x0000000000000000, r1Raw[31] = 0x0000000000000000, r1Raw[32] = 0x1;
    rMask1Raw[0] = 0xffffffffffffffff, rMask1Raw[1] = 0xffffffffffffffff, rMask1Raw[2] = 0xffffffffffffffff, rMask1Raw[3] = 0xffffffffffffffff, rMask1Raw[4] = 0xffffffffffffffff, rMask1Raw[5] = 0xffffffffffffffff, rMask1Raw[6] = 0xffffffffffffffff, rMask1Raw[7] = 0xffffffffffffffff, rMask1Raw[8] = 0xffffffffffffffff, rMask1Raw[9] = 0xffffffffffffffff, rMask1Raw[10] = 0xffffffffffffffff, rMask1Raw[11] = 0xffffffffffffffff, rMask1Raw[12] = 0xffffffffffffffff, rMask1Raw[13] = 0xffffffffffffffff, rMask1Raw[14] = 0xffffffffffffffff, rMask1Raw[15] = 0xffffffffffffffff, rMask1Raw[16] = 0xffffffffffffffff, rMask1Raw[17] = 0xffffffffffffffff, rMask1Raw[18] = 0xffffffffffffffff, rMask1Raw[19] = 0xffffffffffffffff, rMask1Raw[20] = 0xffffffffffffffff, rMask1Raw[21] = 0xffffffffffffffff, rMask1Raw[22] = 0xffffffffffffffff, rMask1Raw[23] = 0xffffffffffffffff, rMask1Raw[24] = 0xffffffffffffffff, rMask1Raw[25] = 0xffffffffffffffff, rMask1Raw[26] = 0xffffffffffffffff, rMask1Raw[27] = 0xffffffffffffffff, rMask1Raw[28] = 0xffffffffffffffff, rMask1Raw[29] = 0xffffffffffffffff, rMask1Raw[30] = 0xffffffffffffffff, rMask1Raw[31] = 0xffffffffffffffff;
    p1Raw[0] = 0xc6277754d4127916, p1Raw[1] = 0x433b57c36888bb20, p1Raw[2] = 0xf43e8984a67e420c, p1Raw[3] = 0x73fa8bd091dddc3f, p1Raw[4] = 0x2293e1f9c1942e4b, p1Raw[5] = 0x2da0175cd2517512, p1Raw[6] = 0x188da8dd4a172766, p1Raw[7] = 0xfc528633c1fb798e, p1Raw[8] = 0x56a5642b542e71be, p1Raw[9] = 0x1a56134ac48d862a, p1Raw[10] = 0x3bf28235b942a523, p1Raw[11] = 0xffef4b389182097a, p1Raw[12] = 0x4b769fd12274408a, p1Raw[13] = 0xbc3407853f1c3eaf, p1Raw[14] = 0x536a549f4fdf17af, p1Raw[15] = 0xa81f56c27deb6d5f, p1Raw[16] = 0x3f76e84d4a1c72fe, p1Raw[17] = 0x1959f9c539e18cd0, p1Raw[18] = 0x7fe4cf97c3aa6580, p1Raw[19] = 0xdbd2cf1883096b84, p1Raw[20] = 0x16e1f03e74362183, p1Raw[21] = 0xfafb350ef3973c5f, p1Raw[22] = 0xe51b382e42113a39, p1Raw[23] = 0xda4d9e026ffce69a, p1Raw[24] = 0xaf652dc22ca6fad4, p1Raw[25] = 0x2fab20895b18ce92, p1Raw[26] = 0x48119aa10dea223b, p1Raw[27] = 0x36ced9962910cf3d, p1Raw[28] = 0x33db7a037e6a8adb, p1Raw[29] = 0x6cc6b7b358b8a095, p1Raw[30] = 0x588ce659f1864e68, p1Raw[31] = 0xba10db86dd263141;

    uint2048 aM2, bM2, n2, rMask2;
    uint4096 r2, nPrime2;
    uint32 rExp2 = 2048;
    uint2048 p2;
    uint64 *aM2Raw = (uint64 *) &aM2, *bM2Raw = (uint64 *) &bM2, *n2Raw = (uint64 *) &n2, *r2Raw = (uint64 *) &r2, *rMask2Raw = (uint64 *) &rMask2;
    uint64 *p2Raw = (uint64 *) &p2;

    aM2Raw[0] = 0xe7cdd65fd582382f, aM2Raw[1] = 0x9109b1763861b702, aM2Raw[2] = 0x6ceb4bfe7db4c602, aM2Raw[3] = 0x4a1cd9dec4974b20, aM2Raw[4] = 0xa827723e0e2f4266, aM2Raw[5] = 0x7e2cb9c863cb6298, aM2Raw[6] = 0x5a76663036a0115c, aM2Raw[7] = 0xcf73d0a58b783881, aM2Raw[8] = 0xc3c4e3801403b5fc, aM2Raw[9] = 0x6ce51b1d75f6db04, aM2Raw[10] = 0x5bee28f5375835fb, aM2Raw[11] = 0x0a064de7d6813309, aM2Raw[12] = 0xfb0eab51e9d76c92, aM2Raw[13] = 0x264e691a612d26d2, aM2Raw[14] = 0xf0cc774b6889e603, aM2Raw[15] = 0xe4a5a67394119e2e, aM2Raw[16] = 0x4342f4018b77fdcf, aM2Raw[17] = 0xb836d89bed4ae052, aM2Raw[18] = 0x5efcc6209a464f83, aM2Raw[19] = 0xc508d45a12b7bf34, aM2Raw[20] = 0x2dde0f227783b616, aM2Raw[21] = 0x027a1de1d2f2fae8, aM2Raw[22] = 0x15928a325da38e27, aM2Raw[23] = 0xc50c3919ef658436, aM2Raw[24] = 0x3131f36c8baa597c, aM2Raw[25] = 0xda05bd203921c7c8, aM2Raw[26] = 0x85b17dd013641665, aM2Raw[27] = 0xc7a8a67cdc7a5518, aM2Raw[28] = 0x087a659a0030dd3c, aM2Raw[29] = 0xd18edf9bda58cc0b, aM2Raw[30] = 0xe8f695cb45f193ee, aM2Raw[31] = 0x4e5466e50835257;
    bM2Raw[0] = 0xa2ec3f1936a37839, bM2Raw[1] = 0xcb6c0a4d575a0ce3, bM2Raw[2] = 0xa02aafb3a682ae10, bM2Raw[3] = 0xd544c364d87acff1, bM2Raw[4] = 0xdb5a6b6e4667772d, bM2Raw[5] = 0x27136047ae90530f, bM2Raw[6] = 0x100b497effd1c08e, bM2Raw[7] = 0xf68a96c076fdf604, bM2Raw[8] = 0x88b0522a7264d9ad, bM2Raw[9] = 0x596b6bc998142ec5, bM2Raw[10] = 0x9313e353ce657c6a, bM2Raw[11] = 0x991be54adfbde552, bM2Raw[12] = 0x51f09d9c539e36ad, bM2Raw[13] = 0x38ada90db491917e, bM2Raw[14] = 0x0161e3b04979c18b, bM2Raw[15] = 0xec3d7848cedede4d, bM2Raw[16] = 0x5f33ebca1f8f8500, bM2Raw[17] = 0x272aa12e15137e4d, bM2Raw[18] = 0xa5cdeb3d3f8f5dba, bM2Raw[19] = 0x7d6d5abac6f0c501, bM2Raw[20] = 0xdefba651b6b2b052, bM2Raw[21] = 0x3d140d528a9c4047, bM2Raw[22] = 0x8167162958998eb0, bM2Raw[23] = 0xd0ede3a7294a536f, bM2Raw[24] = 0x7554c8b36bcdac52, bM2Raw[25] = 0x649ee8cabde651d2, bM2Raw[26] = 0x4ad19bae88259189, bM2Raw[27] = 0xcf23e55fe87c040e, bM2Raw[28] = 0x46d5dbdd2b37ad11, bM2Raw[29] = 0x0122c960b67a814a, bM2Raw[30] = 0x0a9470d7d188fb7c, bM2Raw[31] = 0xcd7ac39a76ff53bf;
    n2Raw[0] = 0xb69337a1af6457ad, n2Raw[1] = 0x160670d5a8880798, n2Raw[2] = 0xec39ab019bb4271a, n2Raw[3] = 0x24fedd2b752a2fe8, n2Raw[4] = 0x4fe0a6c013ea60ff, n2Raw[5] = 0x8a97d8273631fabb, n2Raw[6] = 0x313376a63f703345, n2Raw[7] = 0x1339605d9977cb4f, n2Raw[8] = 0x9dac567c3997b171, n2Raw[9] = 0xd4fe9e2250c8e2f2, n2Raw[10] = 0xd75e652b2aa5ccd9, n2Raw[11] = 0x0bbf2786a2a6fbb9, n2Raw[12] = 0x564cbf6aa22e0281, n2Raw[13] = 0x644ce3c66d806602, n2Raw[14] = 0x14c5c794ce5d00d8, n2Raw[15] = 0x58724ab91aa3bb7c, n2Raw[16] = 0x3e6187cc2ffb7064, n2Raw[17] = 0x0eb8a83784fdc795, n2Raw[18] = 0x68b87d2fa0a3f1e6, n2Raw[19] = 0x5e690d1c50cdfcc9, n2Raw[20] = 0xea9a94281852d966, n2Raw[21] = 0x029b860a50727ed7, n2Raw[22] = 0x04616f1f23e626c5, n2Raw[23] = 0xd395c5aba955c36a, n2Raw[24] = 0xf31ba8f0f9fc088c, n2Raw[25] = 0xd4a0ea67523a764d, n2Raw[26] = 0x9a426e481500a59a, n2Raw[27] = 0x9bf7c3ec7e3ace39, n2Raw[28] = 0x2cdb23556e90a68c, n2Raw[29] = 0xe089e982d72f9cc9, n2Raw[30] = 0x58eaa6a4f6164463, n2Raw[31] = 0xd4f6633cd44fe0ac;
    r2Raw[0] = 0x0000000000000000, r2Raw[1] = 0x0000000000000000, r2Raw[2] = 0x0000000000000000, r2Raw[3] = 0x0000000000000000, r2Raw[4] = 0x0000000000000000, r2Raw[5] = 0x0000000000000000, r2Raw[6] = 0x0000000000000000, r2Raw[7] = 0x0000000000000000, r2Raw[8] = 0x0000000000000000, r2Raw[9] = 0x0000000000000000, r2Raw[10] = 0x0000000000000000, r2Raw[11] = 0x0000000000000000, r2Raw[12] = 0x0000000000000000, r2Raw[13] = 0x0000000000000000, r2Raw[14] = 0x0000000000000000, r2Raw[15] = 0x0000000000000000, r2Raw[16] = 0x0000000000000000, r2Raw[17] = 0x0000000000000000, r2Raw[18] = 0x0000000000000000, r2Raw[19] = 0x0000000000000000, r2Raw[20] = 0x0000000000000000, r2Raw[21] = 0x0000000000000000, r2Raw[22] = 0x0000000000000000, r2Raw[23] = 0x0000000000000000, r2Raw[24] = 0x0000000000000000, r2Raw[25] = 0x0000000000000000, r2Raw[26] = 0x0000000000000000, r2Raw[27] = 0x0000000000000000, r2Raw[28] = 0x0000000000000000, r2Raw[29] = 0x0000000000000000, r2Raw[30] = 0x0000000000000000, r2Raw[31] = 0x0000000000000000, r2Raw[32] = 0x1;
    rMask2Raw[0] = 0xffffffffffffffff, rMask2Raw[1] = 0xffffffffffffffff, rMask2Raw[2] = 0xffffffffffffffff, rMask2Raw[3] = 0xffffffffffffffff, rMask2Raw[4] = 0xffffffffffffffff, rMask2Raw[5] = 0xffffffffffffffff, rMask2Raw[6] = 0xffffffffffffffff, rMask2Raw[7] = 0xffffffffffffffff, rMask2Raw[8] = 0xffffffffffffffff, rMask2Raw[9] = 0xffffffffffffffff, rMask2Raw[10] = 0xffffffffffffffff, rMask2Raw[11] = 0xffffffffffffffff, rMask2Raw[12] = 0xffffffffffffffff, rMask2Raw[13] = 0xffffffffffffffff, rMask2Raw[14] = 0xffffffffffffffff, rMask2Raw[15] = 0xffffffffffffffff, rMask2Raw[16] = 0xffffffffffffffff, rMask2Raw[17] = 0xffffffffffffffff, rMask2Raw[18] = 0xffffffffffffffff, rMask2Raw[19] = 0xffffffffffffffff, rMask2Raw[20] = 0xffffffffffffffff, rMask2Raw[21] = 0xffffffffffffffff, rMask2Raw[22] = 0xffffffffffffffff, rMask2Raw[23] = 0xffffffffffffffff, rMask2Raw[24] = 0xffffffffffffffff, rMask2Raw[25] = 0xffffffffffffffff, rMask2Raw[26] = 0xffffffffffffffff, rMask2Raw[27] = 0xffffffffffffffff, rMask2Raw[28] = 0xffffffffffffffff, rMask2Raw[29] = 0xffffffffffffffff, rMask2Raw[30] = 0xffffffffffffffff, rMask2Raw[31] = 0xffffffffffffffff;
    p2Raw[0] = 0x0f3e96cd83352197, p2Raw[1] = 0x59482985f0c20579, p2Raw[2] = 0x04689dd66196b5e8, p2Raw[3] = 0x692128960da6fa0f, p2Raw[4] = 0x9f8c59a88a1ff520, p2Raw[5] = 0x98bfb87b7013a694, p2Raw[6] = 0xb4fdb55a0d18edfe, p2Raw[7] = 0x6a726b6d7446f86a, p2Raw[8] = 0xa3f4b734e420b465, p2Raw[9] = 0x8ad641fc97e2d659, p2Raw[10] = 0x66c6adce0eb2cbfc, p2Raw[11] = 0x33192fdb03fca06f, p2Raw[12] = 0xfbc208a3375218ee, p2Raw[13] = 0x5c4ec2c511b4d26b, p2Raw[14] = 0xadf7a9a9cb53013a, p2Raw[15] = 0x67b1b9b83ac78423, p2Raw[16] = 0xc7b843919fc232f4, p2Raw[17] = 0x675b99ed950fb512, p2Raw[18] = 0x32edf2d7fe46b07a, p2Raw[19] = 0xc8f1f51442ac2845, p2Raw[20] = 0x0d89ea5f55664e40, p2Raw[21] = 0x24d994d38606f54e, p2Raw[22] = 0xa0e7df7c47894f4f, p2Raw[23] = 0xea7c614584c2953a, p2Raw[24] = 0xb0fd772b465b7d2b, p2Raw[25] = 0x8f454c53cdc69974, p2Raw[26] = 0x689b6b1eab355113, p2Raw[27] = 0x20766001b6ef86ff, p2Raw[28] = 0xe55cf449cba84e80, p2Raw[29] = 0x47e6f816d2b53c93, p2Raw[30] = 0xe6c9e002f937b957, p2Raw[31] = 0x5892dc2ce49bce9a;

    uint2048 aM3, bM3, n3, rMask3;
    uint4096 r3, nPrime3;
    uint32 rExp3 = 2046;
    uint2048 p3;
    uint64 *aM3Raw = (uint64 *) &aM3, *bM3Raw = (uint64 *) &bM3, *n3Raw = (uint64 *) &n3, *r3Raw = (uint64 *) &r3, *rMask3Raw = (uint64 *) &rMask3;
    uint64 *p3Raw = (uint64 *) &p3;

    aM3Raw[0] = 0xa8c7d8d6607d17fa, aM3Raw[1] = 0x9ff18a1e7c277f02, aM3Raw[2] = 0x02f26ec46c4602d7, aM3Raw[3] = 0x11b0d1aac6b1d808, aM3Raw[4] = 0x22651abbf371527a, aM3Raw[5] = 0xed1afe011a5641bf, aM3Raw[6] = 0x68f184a0273f2895, aM3Raw[7] = 0x6eae90601a84278f, aM3Raw[8] = 0xd40468ca484652b1, aM3Raw[9] = 0xe67ff7b37bb6e4ee, aM3Raw[10] = 0xbd0bcf90871f117a, aM3Raw[11] = 0x9b7d74550233cb3a, aM3Raw[12] = 0x470fbd47b371fe28, aM3Raw[13] = 0x864c0a402c1c2871, aM3Raw[14] = 0x2e65848c368d4a30, aM3Raw[15] = 0x6ac361dfdaeef973, aM3Raw[16] = 0x5947f3deb8daffa6, aM3Raw[17] = 0x7f92da6fe128a746, aM3Raw[18] = 0x5cc3b064640e3860, aM3Raw[19] = 0x381f4d7679d1d7e2, aM3Raw[20] = 0xcd3a9a958b93922b, aM3Raw[21] = 0x9fd67f78c72bd34d, aM3Raw[22] = 0x09d7883d5dd943a5, aM3Raw[23] = 0xd28d9b54e66f8b1f, aM3Raw[24] = 0xaa5cbbf98c1c482f, aM3Raw[25] = 0xc00cf6ff546f8e10, aM3Raw[26] = 0x3a237a3371d05515, aM3Raw[27] = 0xdacd7716a3962b55, aM3Raw[28] = 0xa668a7450776931a, aM3Raw[29] = 0xcef4b8f1c266a9f6, aM3Raw[30] = 0xefdfed02a3498584, aM3Raw[31] = 0x20ab8a57b2b9b0b2;
    bM3Raw[0] = 0xef35a0e1ddad5653, bM3Raw[1] = 0x714e54a8b0785c31, bM3Raw[2] = 0x925829f300bb7b0f, bM3Raw[3] = 0x31e74a4ea7a4380e, bM3Raw[4] = 0xc5a5be76dceae843, bM3Raw[5] = 0xe13d278c2b294183, bM3Raw[6] = 0x6ac9356ffcde95f2, bM3Raw[7] = 0xcfe3945b6de17206, bM3Raw[8] = 0x4c236fc1d45fa09d, bM3Raw[9] = 0x6b575eb92e94955c, bM3Raw[10] = 0x372baed01f93e00c, bM3Raw[11] = 0xd0005be42cd34877, bM3Raw[12] = 0x127d03269f50f00c, bM3Raw[13] = 0x455c537e0a969235, bM3Raw[14] = 0x37a17e1f1a009825, bM3Raw[15] = 0x46c82750417929bb, bM3Raw[16] = 0xd778615bbe6eb121, bM3Raw[17] = 0xcd06a1a65d7d2784, bM3Raw[18] = 0xb7065cb597178a4b, bM3Raw[19] = 0x5ff6c4b9af2a7e2d, bM3Raw[20] = 0x6d3514d2b9e0de20, bM3Raw[21] = 0x69e75d1b36e01782, bM3Raw[22] = 0xdd0516a831011c76, bM3Raw[23] = 0xc603ff6b3137d10c, bM3Raw[24] = 0x21803dcc207af164, bM3Raw[25] = 0x3fb720db65dbee2e, bM3Raw[26] = 0x9162722a76efc322, bM3Raw[27] = 0x6536268b919c0bac, bM3Raw[28] = 0x4ee36f27ec65b3ec, bM3Raw[29] = 0x01dc9e700f62c08c, bM3Raw[30] = 0xa0e271f4d65d2ea0, bM3Raw[31] = 0x1a9c7ab329f5c34;
    n3Raw[0] = 0x005b4e14b4bd59eb, n3Raw[1] = 0x50e7b2f7f997d14e, n3Raw[2] = 0x1ff84918853a7381, n3Raw[3] = 0x471ec34c37e4dfb9, n3Raw[4] = 0xb87bdd5bab4efe38, n3Raw[5] = 0x038002b39a9a5c85, n3Raw[6] = 0xfdf763d55e29f7e4, n3Raw[7] = 0xc0dbfe9e86f1a822, n3Raw[8] = 0x5aafef5cfbffd349, n3Raw[9] = 0x071d06361f90a971, n3Raw[10] = 0x6f0fc0291b8fb847, n3Raw[11] = 0xbaa88a1352db30a4, n3Raw[12] = 0x37d36343b65ffce2, n3Raw[13] = 0x1bb87d45c499193c, n3Raw[14] = 0xd9e7d0c1178a8c6a, n3Raw[15] = 0x8da128fc3cbe9dbc, n3Raw[16] = 0x9c550f01567caafa, n3Raw[17] = 0x43d7a66d5da7aef5, n3Raw[18] = 0x926bd82467ee0345, n3Raw[19] = 0xe9bd5e674af87dd4, n3Raw[20] = 0x0135d8c3b16997fb, n3Raw[21] = 0x2cf1c183a02f7d0b, n3Raw[22] = 0xaa6dbd640ecd2372, n3Raw[23] = 0xde8f757b37a1bcce, n3Raw[24] = 0x4ed1482bfeb6e8e2, n3Raw[25] = 0x97706b04c11a7629, n3Raw[26] = 0x74d71d34d35c6062, n3Raw[27] = 0x9eabb09342b9dfdb, n3Raw[28] = 0xd7b7aec73bf1c55a, n3Raw[29] = 0x3c700011deb0e660, n3Raw[30] = 0xa197ab3e91f3c52a, n3Raw[31] = 0x23871aa0616271c6;
    r3Raw[0] = 0x0000000000000000, r3Raw[1] = 0x0000000000000000, r3Raw[2] = 0x0000000000000000, r3Raw[3] = 0x0000000000000000, r3Raw[4] = 0x0000000000000000, r3Raw[5] = 0x0000000000000000, r3Raw[6] = 0x0000000000000000, r3Raw[7] = 0x0000000000000000, r3Raw[8] = 0x0000000000000000, r3Raw[9] = 0x0000000000000000, r3Raw[10] = 0x0000000000000000, r3Raw[11] = 0x0000000000000000, r3Raw[12] = 0x0000000000000000, r3Raw[13] = 0x0000000000000000, r3Raw[14] = 0x0000000000000000, r3Raw[15] = 0x0000000000000000, r3Raw[16] = 0x0000000000000000, r3Raw[17] = 0x0000000000000000, r3Raw[18] = 0x0000000000000000, r3Raw[19] = 0x0000000000000000, r3Raw[20] = 0x0000000000000000, r3Raw[21] = 0x0000000000000000, r3Raw[22] = 0x0000000000000000, r3Raw[23] = 0x0000000000000000, r3Raw[24] = 0x0000000000000000, r3Raw[25] = 0x0000000000000000, r3Raw[26] = 0x0000000000000000, r3Raw[27] = 0x0000000000000000, r3Raw[28] = 0x0000000000000000, r3Raw[29] = 0x0000000000000000, r3Raw[30] = 0x0000000000000000, r3Raw[31] = 0x4000000000000000;
    rMask3Raw[0] = 0xffffffffffffffff, rMask3Raw[1] = 0xffffffffffffffff, rMask3Raw[2] = 0xffffffffffffffff, rMask3Raw[3] = 0xffffffffffffffff, rMask3Raw[4] = 0xffffffffffffffff, rMask3Raw[5] = 0xffffffffffffffff, rMask3Raw[6] = 0xffffffffffffffff, rMask3Raw[7] = 0xffffffffffffffff, rMask3Raw[8] = 0xffffffffffffffff, rMask3Raw[9] = 0xffffffffffffffff, rMask3Raw[10] = 0xffffffffffffffff, rMask3Raw[11] = 0xffffffffffffffff, rMask3Raw[12] = 0xffffffffffffffff, rMask3Raw[13] = 0xffffffffffffffff, rMask3Raw[14] = 0xffffffffffffffff, rMask3Raw[15] = 0xffffffffffffffff, rMask3Raw[16] = 0xffffffffffffffff, rMask3Raw[17] = 0xffffffffffffffff, rMask3Raw[18] = 0xffffffffffffffff, rMask3Raw[19] = 0xffffffffffffffff, rMask3Raw[20] = 0xffffffffffffffff, rMask3Raw[21] = 0xffffffffffffffff, rMask3Raw[22] = 0xffffffffffffffff, rMask3Raw[23] = 0xffffffffffffffff, rMask3Raw[24] = 0xffffffffffffffff, rMask3Raw[25] = 0xffffffffffffffff, rMask3Raw[26] = 0xffffffffffffffff, rMask3Raw[27] = 0xffffffffffffffff, rMask3Raw[28] = 0xffffffffffffffff, rMask3Raw[29] = 0xffffffffffffffff, rMask3Raw[30] = 0xffffffffffffffff, rMask3Raw[31] = 0x3fffffffffffffff;
    p3Raw[0] = 0xebabcf6bcc8dc822, p3Raw[1] = 0xaed02c4e9d57041e, p3Raw[2] = 0x9b93e1b9f4e352d4, p3Raw[3] = 0x9d5b41b3786af306, p3Raw[4] = 0xc38fff6b28b279ea, p3Raw[5] = 0x5a73919099cb22c4, p3Raw[6] = 0x276165590b8dc08d, p3Raw[7] = 0x34197384efaf3f09, p3Raw[8] = 0x2e1553647c860d23, p3Raw[9] = 0x31679ae6be735683, p3Raw[10] = 0x38bcf93c0db5fce0, p3Raw[11] = 0x84742130cb42bb38, p3Raw[12] = 0xa4be299a68b0af25, p3Raw[13] = 0x4cde80a66ef08da6, p3Raw[14] = 0xcc7485f332c09906, p3Raw[15] = 0x880a9bca1fd2c97d, p3Raw[16] = 0xd8935fbf65aea62b, p3Raw[17] = 0x69e2cd0b1d998fb9, p3Raw[18] = 0x9275a2cc5b9d77f4, p3Raw[19] = 0x55de760700fa400a, p3Raw[20] = 0x1fb3d578add5688d, p3Raw[21] = 0x86eeef2784781d25, p3Raw[22] = 0x2945d59f6194383e, p3Raw[23] = 0x40d6fc074acb838b, p3Raw[24] = 0xf88f75fb9ab84e94, p3Raw[25] = 0x365e6d0ae57957fc, p3Raw[26] = 0x8c1e547a9fa574db, p3Raw[27] = 0xc2dbae6bd2d8b760, p3Raw[28] = 0xe86c34ec71eb6dd6, p3Raw[29] = 0x26f8962c91f80b5c, p3Raw[30] = 0x2b6be7de8908a506, p3Raw[31] = 0x973069aefa2e361;

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
