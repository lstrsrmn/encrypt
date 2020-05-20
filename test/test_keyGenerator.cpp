//
// Created by matthew on 19/05/2020.
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "../include/keyGenerator.h"

/* KeyGenerator Miller Rabin Tests */
TEST(KeyGeneratorAlgorithmTests, MillerRabinTestPrime128Bit) {
    // ARRANGE
    uint128 a0; bool r0 = false;
    uint64 *a0Raw = (uint64 *) &a0;
    a0Raw[0] = 0x860c55fc0f2d42d3, a0Raw[1] = 0x4391d1f5b359f4da;

    uint128 a1; bool r1 = false;
    uint64 *a1Raw = (uint64 *) &a1;
    a1Raw[0] = 0xe19ed4630dc47f1f, a1Raw[1] = 0x3179140e87d234ab;

    uint128 a2; bool r2 = false;
    uint64 *a2Raw = (uint64 *) &a2;
    a2Raw[0] = 0xb3dc27fb1714ac97, a2Raw[1] = 0x8325d365ed944bc9;

    uint128 a3; bool r3 = false;
    uint64 *a3Raw = (uint64 *) &a3;
    a3Raw[0] = 0x3a92f1cbaf08e6b7, a3Raw[1] = 0x63d5bcf38cd3b13;

    uint128 a4; bool r4 = true;
    uint64 *a4Raw = (uint64 *) &a4;
    a4Raw[0] = 0x4694b0934ba46f7d, a4Raw[1] = 0xd13d9f873d1aa7;

    uint128 a5; bool r5 = true;
    uint64 *a5Raw = (uint64 *) &a5;
    a5Raw[0] = 0xbf71e50c86693e33, a5Raw[1] = 0x51f9eb9e70ad3cdd;

    uint128 a6; bool r6 = true;
    uint64 *a6Raw = (uint64 *) &a6;
    a6Raw[0] = 0x4e0d0f869c9ec667, a6Raw[1] = 0x7985902958979ac3;

    uint128 a7; bool r7 = true;
    uint64 *a7Raw = (uint64 *) &a7;
    a7Raw[0] = 0xe88b4f1ff454854f, a7Raw[1] = 0xe5bfd39f60251bd;

    // ACT
    bool c0 = testPrime(a0, 8);
    bool c1 = testPrime(a1, 8);
    bool c2 = testPrime(a2, 8);
    bool c3 = testPrime(a3, 8);
    bool c4 = testPrime(a4, 8);
    bool c5 = testPrime(a5, 8);
    bool c6 = testPrime(a6, 8);
    bool c7 = testPrime(a7, 8);

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
    ASSERT_EQ(c2, r2);
    ASSERT_EQ(c3, r3);
    ASSERT_EQ(c4, r4);
    ASSERT_EQ(c5, r5);
    ASSERT_EQ(c6, r6);
    ASSERT_EQ(c7, r7);
}

TEST(KeyGeneratorAlgorithmTests, MillerRabinTestPrime256Bit) {
    // ARRANGE
    uint256 a0; bool r0 = false;
    uint64 *a0Raw = (uint64 *) &a0;
    a0Raw[0] = 0x8c1bb325f7320c47, a0Raw[1] = 0x463bd77aea15de15, a0Raw[2] = 0x69dee70d34745952, a0Raw[3] = 0x6386420ae9c7b553;

    uint256 a1; bool r1 = false;
    uint64 *a1Raw = (uint64 *) &a1;
    a1Raw[0] = 0xf38879089cea8f0b, a1Raw[1] = 0x4deeb201af0c13e6, a1Raw[2] = 0x19993e227ceb0d9a, a1Raw[3] = 0xf0872273b128853c;

    uint256 a2; bool r2 = false;
    uint64 *a2Raw = (uint64 *) &a2;
    a2Raw[0] = 0xd507ad86546709e5, a2Raw[1] = 0x703b09df663f6109, a2Raw[2] = 0xcef792b9d0c7e0df, a2Raw[3] = 0xd5fbfdd5000a27f1;

    uint256 a3; bool r3 = false;
    uint64 *a3Raw = (uint64 *) &a3;
    a3Raw[0] = 0x47806f534714660d, a3Raw[1] = 0x51482d28c9cd2316, a3Raw[2] = 0xb690fcbe965229ee, a3Raw[3] = 0x354f0145c82cee1c;

    uint256 a4; bool r4 = true;
    uint64 *a4Raw = (uint64 *) &a4;
    a4Raw[0] = 0xff5de2c280227da5, a4Raw[1] = 0x7e6b4cbf9fca18d0, a4Raw[2] = 0xf0f6d45b4a941f01, a4Raw[3] = 0xd4efcc75d18bc9b5;

    uint256 a5; bool r5 = true;
    uint64 *a5Raw = (uint64 *) &a5;
    a5Raw[0] = 0xbfe83f6cd439b3f3, a5Raw[1] = 0xf1f81ab37b101fea, a5Raw[2] = 0xc72089b37eec02a9, a5Raw[3] = 0x553774e480d19760;

    uint256 a6; bool r6 = true;
    uint64 *a6Raw = (uint64 *) &a6;
    a6Raw[0] = 0xb34919425da198f3, a6Raw[1] = 0x2566e5f31a3e79be, a6Raw[2] = 0xed9c3a5d8417a6cf, a6Raw[3] = 0x14ebfc1440e1545f;

    uint256 a7; bool r7 = true;
    uint64 *a7Raw = (uint64 *) &a7;
    a7Raw[0] = 0x01cefa4d0b7fda3d, a7Raw[1] = 0x16d8b43dac363b8b, a7Raw[2] = 0x245a4b19a07e48a9, a7Raw[3] = 0x33c9b8dcb7b74f65;

    // ACT
    bool c0 = testPrime(a0, 8);
    bool c1 = testPrime(a1, 8);
    bool c2 = testPrime(a2, 8);
    bool c3 = testPrime(a3, 8);
    bool c4 = testPrime(a4, 8);
    bool c5 = testPrime(a5, 8);
    bool c6 = testPrime(a6, 8);
    bool c7 = testPrime(a7, 8);

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
    ASSERT_EQ(c2, r2);
    ASSERT_EQ(c3, r3);
    ASSERT_EQ(c4, r4);
    ASSERT_EQ(c5, r5);
    ASSERT_EQ(c6, r6);
    ASSERT_EQ(c7, r7);
}

TEST(KeyGeneratorAlgorithmTests, MillerRabinTestPrime512Bit) {
    // ARRANGE
    uint512 a0; bool r0 = false;
    uint64 *a0Raw = (uint64 *) &a0;
    a0Raw[0] = 0xd2829dc6e4af049f, a0Raw[1] = 0x473b1485f32e1df7, a0Raw[2] = 0x13bb4cb8d9d5d606, a0Raw[3] = 0x2430fc6e74f168a5, a0Raw[4] = 0x8a7c220a77e16836, a0Raw[5] = 0x3d3fbb01c917df18, a0Raw[6] = 0xf403a792081f5b10, a0Raw[7] = 0xcddceec87e48064d;

    uint512 a1; bool r1 = false;
    uint64 *a1Raw = (uint64 *) &a1;
    a1Raw[0] = 0x50fa2864553ce113, a1Raw[1] = 0xe2baa4f68de60b7d, a1Raw[2] = 0xada67a7f6cc2d13c, a1Raw[3] = 0x39e77ee2f1fe6cfe, a1Raw[4] = 0x165720708888ab84, a1Raw[5] = 0x16b30982c2fad518, a1Raw[6] = 0xcbc7506dcf377a30, a1Raw[7] = 0x8a806e78cf63057;

    uint512 a2; bool r2 = false;
    uint64 *a2Raw = (uint64 *) &a2;
    a2Raw[0] = 0x03f4d9b80c86181f, a2Raw[1] = 0x93d172beaf110ff4, a2Raw[2] = 0xd57963c6d6dc1c07, a2Raw[3] = 0xbc0237f53a40e105, a2Raw[4] = 0x682f7ff30b8e7452, a2Raw[5] = 0x8285e2263c9f01cc, a2Raw[6] = 0xbf24540d93ab6b34, a2Raw[7] = 0xe653f633e56cde3f;

    uint512 a3; bool r3 = false;
    uint64 *a3Raw = (uint64 *) &a3;
    a3Raw[0] = 0xbef3eec96f83f233, a3Raw[1] = 0x7ab6024676c8b7dc, a3Raw[2] = 0x6776db5df7457e24, a3Raw[3] = 0xd9c90409b4dbb58a, a3Raw[4] = 0xf204e9eae928f697, a3Raw[5] = 0x443f4298f02258e1, a3Raw[6] = 0xf286e8ffb10c2e3f, a3Raw[7] = 0xe798bb0c92a50dc4;

    uint512 a4; bool r4 = true;
    uint64 *a4Raw = (uint64 *) &a4;
    a4Raw[0] = 0x6c45d373e8c741c7, a4Raw[1] = 0x2c5a2418272008e9, a4Raw[2] = 0x0b4047460e5300e3, a4Raw[3] = 0x215ae486b6cd2ba6, a4Raw[4] = 0xced5814104d03feb, a4Raw[5] = 0x24737667229fd122, a4Raw[6] = 0x93476512999e13c2, a4Raw[7] = 0x1f58d3b46b534e16;

    uint512 a5; bool r5 = true;
    uint64 *a5Raw = (uint64 *) &a5;
    a5Raw[0] = 0x77e8747a6d62f3f9, a5Raw[1] = 0x1eed9b2849420761, a5Raw[2] = 0x8ad1161bb8c2fbff, a5Raw[3] = 0x3e081fede480f3bb, a5Raw[4] = 0x866996ab36f0a92f, a5Raw[5] = 0x18e96adb7da4d9da, a5Raw[6] = 0x8b339defc339825d, a5Raw[7] = 0x60fec40afee59bea;

    uint512 a6; bool r6 = true;
    uint64 *a6Raw = (uint64 *) &a6;
    a6Raw[0] = 0x9e684868f3d697e3, a6Raw[1] = 0xceb3f5aeb2743bde, a6Raw[2] = 0x605fccb1718f8ac4, a6Raw[3] = 0xba7e2bcfe06931f8, a6Raw[4] = 0x9905cb25c04a7f12, a6Raw[5] = 0xdd1f1e9647b68e45, a6Raw[6] = 0xc1588f3d7d97cb3e, a6Raw[7] = 0x75f6a5afe458d5c7;

    uint512 a7; bool r7 = true;
    uint64 *a7Raw = (uint64 *) &a7;
    a7Raw[0] = 0xed0f1acfdd5573c5, a7Raw[1] = 0xe5f4cbde9dfa264e, a7Raw[2] = 0xe1f076632e360039, a7Raw[3] = 0x248f82aa8b294b06, a7Raw[4] = 0x1d51c3bab7ffc315, a7Raw[5] = 0x75427adaf59e5f53, a7Raw[6] = 0x98dcb117e3318809, a7Raw[7] = 0xcb3d819f1124db37;

    // ACT
    bool c0 = testPrime(a0, 8);
    bool c1 = testPrime(a1, 8);
    bool c2 = testPrime(a2, 8);
    bool c3 = testPrime(a3, 8);
    bool c4 = testPrime(a4, 8);
    bool c5 = testPrime(a5, 8);
    bool c6 = testPrime(a6, 8);
    bool c7 = testPrime(a7, 8);

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
    ASSERT_EQ(c2, r2);
    ASSERT_EQ(c3, r3);
    ASSERT_EQ(c4, r4);
    ASSERT_EQ(c5, r5);
    ASSERT_EQ(c6, r6);
    ASSERT_EQ(c7, r7);
}

TEST(KeyGeneratorAlgorithmTests, MillerRabinTestPrime1024Bit) {
    // ARRANGE
    uint1024 a0; bool r0 = false;
    uint64 *a0Raw = (uint64 *) &a0;
    a0Raw[0] = 0x393392f1748bbaa7, a0Raw[1] = 0xffd8502ff008661d, a0Raw[2] = 0x48e0a4deabec21bd, a0Raw[3] = 0x0df6e3aa8ad65e92, a0Raw[4] = 0x2160390ff3c05fec, a0Raw[5] = 0xfeb2d12b45b78006, a0Raw[6] = 0x7076c68b697271f7, a0Raw[7] = 0x16cd4c313171516b, a0Raw[8] = 0x36170ad2dca3270a, a0Raw[9] = 0x528980d3d3a7b53b, a0Raw[10] = 0x6aa9f21c34a32b99, a0Raw[11] = 0x2bfb5c3226efad66, a0Raw[12] = 0x97641014bcef92ae, a0Raw[13] = 0x6af714b5822e288d, a0Raw[14] = 0x4e1a09ff0de8429b, a0Raw[15] = 0x9e48a28c629c36d5;

    uint1024 a1; bool r1 = false;
    uint64 *a1Raw = (uint64 *) &a1;
    a1Raw[0] = 0xa679b1a97293b251, a1Raw[1] = 0x259711abd485791e, a1Raw[2] = 0x2c93be59c0b6c7bb, a1Raw[3] = 0x435e6abfe0b30fd0, a1Raw[4] = 0xb6a4216c6b007287, a1Raw[5] = 0x1021e5873f5ec36c, a1Raw[6] = 0x60d0d3d593817711, a1Raw[7] = 0xf08398a5f4f129e7, a1Raw[8] = 0x2f1003f16c0363ae, a1Raw[9] = 0xd46ca7bb6eeca7a6, a1Raw[10] = 0xb7767aa88d5b6ae1, a1Raw[11] = 0x059b93f8b46412e5, a1Raw[12] = 0x196abe56ed3e6032, a1Raw[13] = 0xf99614943d671344, a1Raw[14] = 0x1fddf6d2a52ee4d3, a1Raw[15] = 0x2b12363cd9665769;

    uint1024 a2; bool r2 = false;
    uint64 *a2Raw = (uint64 *) &a2;
    a2Raw[0] = 0x4a6235802c44e581, a2Raw[1] = 0x9947285bb9d83a1b, a2Raw[2] = 0x29641727a9d932bd, a2Raw[3] = 0x2cf4db9abf537caf, a2Raw[4] = 0x74473c3a145b627e, a2Raw[5] = 0x0562841c8e9fcd18, a2Raw[6] = 0x2699699c98a488e6, a2Raw[7] = 0x89f115cbe88b6527, a2Raw[8] = 0x41497d46a033fe47, a2Raw[9] = 0x9b2acd0947e05c48, a2Raw[10] = 0x1003a5afc025a523, a2Raw[11] = 0x93a2e2cc4d491785, a2Raw[12] = 0xf378333da7eae79c, a2Raw[13] = 0x571a88f4b6e6cde6, a2Raw[14] = 0x13c853aa625d7fec, a2Raw[15] = 0xa6b3a093b281dfe9;

    uint1024 a3; bool r3 = false;
    uint64 *a3Raw = (uint64 *) &a3;
    a3Raw[0] = 0xfa64d10b51129a97, a3Raw[1] = 0xcc59b0f939d29d68, a3Raw[2] = 0x4f91a7b15e127aa6, a3Raw[3] = 0xc82fbd06a3760797, a3Raw[4] = 0xd0741fc47716bd8d, a3Raw[5] = 0xdb8674b0494d4e6a, a3Raw[6] = 0x501efad1d8823e23, a3Raw[7] = 0xe111de2934e9a0f7, a3Raw[8] = 0x96dc37c2c66af9d1, a3Raw[9] = 0xd803529153837cee, a3Raw[10] = 0x965e54cfcfbea2a0, a3Raw[11] = 0x92a0e46ec9d91882, a3Raw[12] = 0x47be4237b12c77a1, a3Raw[13] = 0xa5df38b9a042c761, a3Raw[14] = 0x42d5be0287e067d6, a3Raw[15] = 0x5535b3a07b4a49be;

    uint1024 a4; bool r4 = true;
    uint64 *a4Raw = (uint64 *) &a4;
    a4Raw[0] = 0xf03a87bb6bbd7bcb, a4Raw[1] = 0xca0e0bd6ab2f51db, a4Raw[2] = 0x2e93aaf747826dcf, a4Raw[3] = 0xe74f326d1a4afe3f, a4Raw[4] = 0x8a3f39da63b8b3c8, a4Raw[5] = 0xe06bd84e7843a806, a4Raw[6] = 0xd1a2517b520c478f, a4Raw[7] = 0x700fa4a2324f5b14, a4Raw[8] = 0xfcbd924025fc598a, a4Raw[9] = 0xb58c7d6603df7eff, a4Raw[10] = 0x8117f5ee3a6128f9, a4Raw[11] = 0x0f0368c611814c6d, a4Raw[12] = 0x625c42ece468ffe7, a4Raw[13] = 0x0dfa17314bd1eb5c, a4Raw[14] = 0x84e751e9b19c3b51, a4Raw[15] = 0xdccf0577010b4992;

    uint1024 a5; bool r5 = true;
    uint64 *a5Raw = (uint64 *) &a5;
    a5Raw[0] = 0xb534664515060403, a5Raw[1] = 0x72f7d98066cd3eac, a5Raw[2] = 0x9ad03ab1d302a294, a5Raw[3] = 0x226c2510edc615f8, a5Raw[4] = 0x1c9d8062b0c2a13d, a5Raw[5] = 0xd2b4b67c17b64f09, a5Raw[6] = 0x2530aeffe6cb771f, a5Raw[7] = 0xcf4fb1756f14b8ad, a5Raw[8] = 0x755fa31cc6c1df28, a5Raw[9] = 0x3f25b0d8e8f44447, a5Raw[10] = 0xfac2195056728479, a5Raw[11] = 0x17b3377418c9ce35, a5Raw[12] = 0x5351b6ed07381767, a5Raw[13] = 0xcaf2cde8edd07c43, a5Raw[14] = 0x4be66b0f3473ef43, a5Raw[15] = 0xeaecfb472907e763;

    uint1024 a6; bool r6 = true;
    uint64 *a6Raw = (uint64 *) &a6;
    a6Raw[0] = 0xc1c66656ce081f35, a6Raw[1] = 0x57a9da6d76bda0a9, a6Raw[2] = 0xb01136647aca6ea0, a6Raw[3] = 0xf04e57f1cd57484c, a6Raw[4] = 0xa72910401345aa5c, a6Raw[5] = 0x8236908a7dec4101, a6Raw[6] = 0x5b91adf673d45ed3, a6Raw[7] = 0x60497b333e81fa0f, a6Raw[8] = 0x42e1a97b98d08264, a6Raw[9] = 0x754d8044c231729f, a6Raw[10] = 0xb1b96d7c55337933, a6Raw[11] = 0xded62de0ab3ec258, a6Raw[12] = 0xeb0316d38d236c8b, a6Raw[13] = 0x3f6e2d0cd6ba9a9d, a6Raw[14] = 0x8015cfb3037995cb, a6Raw[15] = 0x17fbc13fecf84b28;

    uint1024 a7; bool r7 = true;
    uint64 *a7Raw = (uint64 *) &a7;
    a7Raw[0] = 0x5c9cdb944fdf6d43, a7Raw[1] = 0xa6306e104facf18a, a7Raw[2] = 0x48b147761fea3e56, a7Raw[3] = 0xfda9bc88718e6b8c, a7Raw[4] = 0x0c5e6fc56f0fd260, a7Raw[5] = 0x052e4285fe04c9d8, a7Raw[6] = 0xd5812d1b6a0f6fe1, a7Raw[7] = 0xb70ce5918d394edc, a7Raw[8] = 0x22c8ff6b561fbbf7, a7Raw[9] = 0x956941ea45862a21, a7Raw[10] = 0xc76f2e03de58b27d, a7Raw[11] = 0xeef1b73cccd7dc77, a7Raw[12] = 0x0a9ffb0e7f3b1f30, a7Raw[13] = 0xa3237d78ac8dd512, a7Raw[14] = 0x03afacb2cdd723c7, a7Raw[15] = 0x330f681a2e3b2a2f;

    // ACT

    bool c0, c1, c2, c3, c4, c5, c6, c7;

    for (int i = 0; i < 16; i++) {
        c0 = testPrime(a0, 8);
        c1 = testPrime(a1, 8);
        c2 = testPrime(a2, 8);
        c3 = testPrime(a3, 8);
        c4 = testPrime(a4, 8);
        c5 = testPrime(a5, 8);
        c6 = testPrime(a6, 8);
        c7 = testPrime(a7, 8);
    }

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
    ASSERT_EQ(c2, r2);
    ASSERT_EQ(c3, r3);
    ASSERT_EQ(c4, r4);
    ASSERT_EQ(c5, r5);
    ASSERT_EQ(c6, r6);
    ASSERT_EQ(c7, r7);
}
