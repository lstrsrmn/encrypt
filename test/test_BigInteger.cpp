//
// Created by matthew on 15/05/2020.
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "../include/BigInteger.h"

/* BigInteger Addition Tests */

TEST(BigIntegerArithmeticTests, Addition128Bit) {
    // ARRANGE
    uint128 a0, b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x62589d14fb9c4a15, a0Raw[1] = 0x24bec42e6a01f2a3;
    b0Raw[0] = 0xa0411c18a6d4f957, b0Raw[1] = 0xb030956bd5903414;
    r0Raw[0] = 0x0299b92da271436c, r0Raw[1] = 0xd4ef599a3f9226b8;

    uint128 a1, b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0x18f75872c71a6078, a1Raw[1] = 0x3062b32231762663;
    b1Raw[0] = 0x1135c6ae11782c47, b1Raw[1] = 0x9a3d0e8ef8ed4251;
    r1Raw[0] = 0x2a2d1f20d8928cbf, r1Raw[1] = 0xca9fc1b12a6368b4;

    // ACT
    uint128 c0 = a0 + b0;
    uint128 c1 = a1 + b1;

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
}

TEST(BigIntegerArithmeticTests, Addition256Bit) {
    // ARRANGE
    uint256 a0, b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x8ddc06f5ec4b02b9, a0Raw[1] = 0x1b9ebf327dc61832, a0Raw[2] = 0xd63da16d248f9e9f, a0Raw[3] = 0x3ff88e40e6848f01;
    b0Raw[0] = 0xe82311ba30c657df, b0Raw[1] = 0x3312db36c00a54d3, b0Raw[2] = 0x0bc3313f49366793, b0Raw[3] = 0x194ad522fedb0dbb;
    r0Raw[0] = 0x75ff18b01d115a98, r0Raw[1] = 0x4eb19a693dd06d06, r0Raw[2] = 0xe200d2ac6dc60632, r0Raw[3] = 0x59436363e55f9cbc;

    uint256 a1, b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0xc0663b9e968687e3, a1Raw[1] = 0x235cb6f956f39a96, a1Raw[2] = 0x95161d3183768c17, a1Raw[3] = 0x9d6ca7f1e83e7596;
    b1Raw[0] = 0x34ebe54f64c54fc4, b1Raw[1] = 0xac857fa670881c41, b1Raw[2] = 0x6cad973571b88df2, b1Raw[3] = 0xd41f8b569b080095;
    r1Raw[0] = 0xf55220edfb4bd7a7, r1Raw[1] = 0xcfe2369fc77bb6d7, r1Raw[2] = 0x01c3b466f52f1a09, r1Raw[3] = 0x718c33488346762c;

    // ACT
    uint256 c0 = a0 + b0;
    uint256 c1 = a1 + b1;

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
}

TEST(BigIntegerArithmeticTests, Addition512Bit) {
    // ARRANGE
    uint512 a0, b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x49650825b4402fe9, a0Raw[1] = 0x817c249d341a26c4, a0Raw[2] = 0xc874e1144ebc4491, a0Raw[3] = 0xe5686b7f864396c0, a0Raw[4] = 0x976dfc8a0af12238, a0Raw[5] = 0xab57afa7fd93a21d, a0Raw[6] = 0xf8a04b31e63b6dd8, a0Raw[7] = 0x4525d6cfdb751f52;
    b0Raw[0] = 0x0540d6e87a26cb14, b0Raw[1] = 0x6f7a3d287bcb932e, b0Raw[2] = 0x274959ebf63ed3b8, b0Raw[3] = 0x3e45715a7d64103a, b0Raw[4] = 0x727c94d749f629ee, b0Raw[5] = 0x6a8d4535a81c42ff, b0Raw[6] = 0xed65cf1c37350e58, b0Raw[7] = 0xc581a2861212e712;
    r0Raw[0] = 0x4ea5df0e2e66fafd, r0Raw[1] = 0xf0f661c5afe5b9f2, r0Raw[2] = 0xefbe3b0044fb1849, r0Raw[3] = 0x23addcda03a7a6fa, r0Raw[4] = 0x09ea916154e74c27, r0Raw[5] = 0x15e4f4dda5afe51d, r0Raw[6] = 0xe6061a4e1d707c31, r0Raw[7] = 0x0aa77955ed880665;

    uint512 a1, b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0x155b518083bc0881, a1Raw[1] = 0xee65f2c95647df75, a1Raw[2] = 0x4c100759c7eed5bf, a1Raw[3] = 0x159356ffd33bd181, a1Raw[4] = 0x1e3327ed4cb01c72, a1Raw[5] = 0x7d1c2c33b2a72b25, a1Raw[6] = 0x2909297cf9fb1333, a1Raw[7] = 0xc39affc9d6a99a4e;
    b1Raw[0] = 0x00ca9ed2d1b0b90d, b1Raw[1] = 0x9f8d7ab4014b96a8, b1Raw[2] = 0x63ab0a648ef798d1, b1Raw[3] = 0x6730ee2af30600a0, b1Raw[4] = 0x2ed1efa47a92dd3d, b1Raw[5] = 0x2b5dc3dbe592c1fc, b1Raw[6] = 0x0bcfdd65bcd57a37, b1Raw[7] = 0x69c61facfd73d729;
    r1Raw[0] = 0x1625f053556cc18e, r1Raw[1] = 0x8df36d7d5793761d, r1Raw[2] = 0xafbb11be56e66e91, r1Raw[3] = 0x7cc4452ac641d221, r1Raw[4] = 0x4d051791c742f9af, r1Raw[5] = 0xa879f00f9839ed21, r1Raw[6] = 0x34d906e2b6d08d6a, r1Raw[7] = 0x2d611f76d41d7177;

    // ACT
    uint512 c0 = a0 + b0;
    uint512 c1 = a1 + b1;

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
}

TEST(BigIntegerArithmeticTests, Addition1024Bit) {
    // ARRANGE
    uint1024 a0, b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x7ada32ff0b4b97bb, a0Raw[1] = 0xf6cc031b501fdaaa, a0Raw[2] = 0x8d0f538ea2d55274, a0Raw[3] = 0xfe5dda98f3895581, a0Raw[4] = 0xbd4f100ce63b531e, a0Raw[5] = 0xada554063fb2b3a2, a0Raw[6] = 0x531e9ab244be7cc9, a0Raw[7] = 0x8527f62311f007a7, a0Raw[8] = 0xc543be543c402346, a0Raw[9] = 0x11571e5a996e8c48, a0Raw[10] = 0x1118ff93f860f9a7, a0Raw[11] = 0x435450b83cb920a2, a0Raw[12] = 0x8b99bd43c2ab4448, a0Raw[13] = 0x6610288740b28190, a0Raw[14] = 0x5c4e4d8e3f820f3a, a0Raw[15] = 0xc05202df9f69081f;
    b0Raw[0] = 0xcf508236a76e43dc, b0Raw[1] = 0xd5c9e3d9e4eb1c72, b0Raw[2] = 0x032819ad143ee357, b0Raw[3] = 0x21e2a35f39fca16d, b0Raw[4] = 0x3c55203f8e11eb40, b0Raw[5] = 0x29abdf6fe6bd222e, b0Raw[6] = 0x037fd94181062e55, b0Raw[7] = 0x4115efa230f948f9, b0Raw[8] = 0xe8fd526e0ecdc6cd, b0Raw[9] = 0x0fa093e74f009203, b0Raw[10] = 0xee602adb38d78201, b0Raw[11] = 0xeb98515ef77172e8, b0Raw[12] = 0xca01c2346549c8fa, b0Raw[13] = 0xa0862f162beab5b0, b0Raw[14] = 0x223a3fbd4a4ca1be, b0Raw[15] = 0xd6fc888e66ea14a1;
    r0Raw[0] = 0x4a2ab535b2b9db97, r0Raw[1] = 0xcc95e6f5350af71d, r0Raw[2] = 0x90376d3bb71435cc, r0Raw[3] = 0x20407df82d85f6ee, r0Raw[4] = 0xf9a4304c744d3e5f, r0Raw[5] = 0xd7513376266fd5d0, r0Raw[6] = 0x569e73f3c5c4ab1e, r0Raw[7] = 0xc63de5c542e950a0, r0Raw[8] = 0xae4110c24b0dea13, r0Raw[9] = 0x20f7b241e86f1e4c, r0Raw[10] = 0xff792a6f31387ba8, r0Raw[11] = 0x2eeca217342a938a, r0Raw[12] = 0x559b7f7827f50d43, r0Raw[13] = 0x0696579d6c9d3741, r0Raw[14] = 0x7e888d4b89ceb0f9, r0Raw[15] = 0x974e8b6e06531cc0;

    uint1024 a1, b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0x2f43221a02bad9f9, a1Raw[1] = 0x4d6e48be24ba5ce0, a1Raw[2] = 0xa43a9a9739ceb474, a1Raw[3] = 0x09f1014efdfe4502, a1Raw[4] = 0x3abb1c09f88d38f8, a1Raw[5] = 0xdb40df28244ed7fc, a1Raw[6] = 0x5b8f4be9b4d07d6a, a1Raw[7] = 0x61ded75660ecc89f, a1Raw[8] = 0xae4117e92fabda96, a1Raw[9] = 0xb3010e4ce16633ed, a1Raw[10] = 0xbcd7d78761ee33e4, a1Raw[11] = 0xfe0d400c96b18e91, a1Raw[12] = 0xe00f51174394acfb, a1Raw[13] = 0xb69de19a84e0b221, a1Raw[14] = 0x759a1cb984b725c6, a1Raw[15] = 0x503aca3825f4b1cc;
    b1Raw[0] = 0x82eb5e9ce9bc9143, b1Raw[1] = 0x827c5f291c7531f4, b1Raw[2] = 0x3dfb6f7b7e117994, b1Raw[3] = 0x1a756eac3e64164d, b1Raw[4] = 0xdf1a5358226cc17d, b1Raw[5] = 0x6e19eddc5d03609e, b1Raw[6] = 0x70e4b64a759ecd14, b1Raw[7] = 0xe8fec87cff609058, b1Raw[8] = 0xf632addb2ebefd31, b1Raw[9] = 0x13e55147d6a153f0, b1Raw[10] = 0x0928248669f4eef7, b1Raw[11] = 0xe14f1aa91e47ba39, b1Raw[12] = 0x0f67484037e595fe, b1Raw[13] = 0x39f00687133fa96a, b1Raw[14] = 0x4b23d1e184a9ab81, b1Raw[15] = 0x495255be507ac217;
    r1Raw[0] = 0xb22e80b6ec776b3c, r1Raw[1] = 0xcfeaa7e7412f8ed4, r1Raw[2] = 0xe2360a12b7e02e08, r1Raw[3] = 0x24666ffb3c625b4f, r1Raw[4] = 0x19d56f621af9fa75, r1Raw[5] = 0x495acd048152389b, r1Raw[6] = 0xcc7402342a6f4a7f, r1Raw[7] = 0x4add9fd3604d58f7, r1Raw[8] = 0xa473c5c45e6ad7c8, r1Raw[9] = 0xc6e65f94b80787de, r1Raw[10] = 0xc5fffc0dcbe322db, r1Raw[11] = 0xdf5c5ab5b4f948ca, r1Raw[12] = 0xef7699577b7a42fa, r1Raw[13] = 0xf08de82198205b8b, r1Raw[14] = 0xc0bdee9b0960d147, r1Raw[15] = 0x998d1ff6766f73e3;

    // ACT
    uint1024 c0 = a0 + b0;
    uint1024 c1 = a1 + b1;

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
}

TEST(BigIntegerArithmeticTests, Addition2048Bit) {
    // ARRANGE
    uint2048 a0, b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x6cd4a5a52ff6b333, a0Raw[1] = 0xcecccacce7771976, a0Raw[2] = 0x847e71c4b9f8bb91, a0Raw[3] = 0xdbb8dd40854a0a74, a0Raw[4] = 0x8b75dc35f1a1adbe, a0Raw[5] = 0x4f0cfb260c42b0b7, a0Raw[6] = 0x7143e6739f71b743, a0Raw[7] = 0xcf6a6e40d57b1cc0, a0Raw[8] = 0xd8ac7348a8f7e62a, a0Raw[9] = 0x02b35c52b4231b59, a0Raw[10] = 0x6f72b0b49e5fda41, a0Raw[11] = 0x987ee4ad914a3386, a0Raw[12] = 0x2543984717c2a6fa, a0Raw[13] = 0x0b58b1a3c652cf05, a0Raw[14] = 0x24352a3b46a40d28, a0Raw[15] = 0xd03cc6bca8cf23c8, a0Raw[16] = 0x192e4eae96d9b436, a0Raw[17] = 0xf6f3c12c8d05ee49, a0Raw[18] = 0xc47aa7d3a08901c5, a0Raw[19] = 0x213ace3e039459ec, a0Raw[20] = 0xf20abaedfd9fc582, a0Raw[21] = 0x115b9bbfd1ad3990, a0Raw[22] = 0x92c8d0bd67128a5d, a0Raw[23] = 0x639ed0a94c79fb5b, a0Raw[24] = 0xf410fd12ed05c3ac, a0Raw[25] = 0x2217dd9db06bb157, a0Raw[26] = 0x67e8ecd441fb73a8, a0Raw[27] = 0x5a0a2451764512a7, a0Raw[28] = 0x4b2e617f1d25f0fa, a0Raw[29] = 0x5302296304aae935, a0Raw[30] = 0x79fe18b7336c6105, a0Raw[31] = 0xbdf29f86b3f1bada;
    b0Raw[0] = 0xd822767ae08f86d3, b0Raw[1] = 0x8f2b408b62d1170c, b0Raw[2] = 0xb8450a54dba4d820, b0Raw[3] = 0xbebb6fdbdcd62894, b0Raw[4] = 0x13a933a570fe7d00, b0Raw[5] = 0xd0618df35f421dd5, b0Raw[6] = 0xf5de13e8fb20a9a2, b0Raw[7] = 0x4b43729085462c7f, b0Raw[8] = 0xc275784af809523f, b0Raw[9] = 0xefe7ec6a0eafe5e5, b0Raw[10] = 0x4dc352cfc58d63d5, b0Raw[11] = 0x77d7eaa9b9450697, b0Raw[12] = 0xe3eacaeb1979280d, b0Raw[13] = 0x6edfdee7481c4381, b0Raw[14] = 0xb1e53fea096b818f, b0Raw[15] = 0xfca386b2ed157fa1, b0Raw[16] = 0x6674f754f6593e80, b0Raw[17] = 0x5bbd564e6c4ddb60, b0Raw[18] = 0xdc55fd28adb0a120, b0Raw[19] = 0x1a56b12a8957d7d1, b0Raw[20] = 0x2cd86a573a23db82, b0Raw[21] = 0x2a287010d7f6a969, b0Raw[22] = 0x71894880731109c8, b0Raw[23] = 0x66b24ac075b7f3d9, b0Raw[24] = 0xf31fd301350e0615, b0Raw[25] = 0xcc056e52263a4206, b0Raw[26] = 0x967e0ca65e79d29a, b0Raw[27] = 0x372bcdbad2dbc8db, b0Raw[28] = 0xa0a15141ee09f96b, b0Raw[29] = 0xb84e1a883782f2b3, b0Raw[30] = 0x2a99344891ce0ab9, b0Raw[31] = 0x568de4e6f6d84e47;
    r0Raw[0] = 0x44f71c2010863a06, r0Raw[1] = 0x5df80b584a483083, r0Raw[2] = 0x3cc37c19959d93b2, r0Raw[3] = 0x9a744d1c62203309, r0Raw[4] = 0x9f1f0fdb62a02abf, r0Raw[5] = 0x1f6e89196b84ce8c, r0Raw[6] = 0x6721fa5c9a9260e6, r0Raw[7] = 0x1aade0d15ac14940, r0Raw[8] = 0x9b21eb93a101386a, r0Raw[9] = 0xf29b48bcc2d3013f, r0Raw[10] = 0xbd36038463ed3e16, r0Raw[11] = 0x1056cf574a8f3a1d, r0Raw[12] = 0x092e6332313bcf08, r0Raw[13] = 0x7a38908b0e6f1287, r0Raw[14] = 0xd61a6a25500f8eb7, r0Raw[15] = 0xcce04d6f95e4a369, r0Raw[16] = 0x7fa346038d32f2b7, r0Raw[17] = 0x52b1177af953c9a9, r0Raw[18] = 0xa0d0a4fc4e39a2e6, r0Raw[19] = 0x3b917f688cec31be, r0Raw[20] = 0x1ee3254537c3a104, r0Raw[21] = 0x3b840bd0a9a3e2fa, r0Raw[22] = 0x0452193dda239425, r0Raw[23] = 0xca511b69c231ef35, r0Raw[24] = 0xe730d0142213c9c1, r0Raw[25] = 0xee1d4befd6a5f35e, r0Raw[26] = 0xfe66f97aa0754642, r0Raw[27] = 0x9135f20c4920db82, r0Raw[28] = 0xebcfb2c10b2fea65, r0Raw[29] = 0x0b5043eb3c2ddbe8, r0Raw[30] = 0xa4974cffc53a6bbf, r0Raw[31] = 0x1480846daaca0921;

    uint2048 a1, b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0x18f5a72a62a00ae5, a1Raw[1] = 0xbf34b5456b285dba, a1Raw[2] = 0x3b46bcfdd4ccdf41, a1Raw[3] = 0x39c768a52caa9986, a1Raw[4] = 0x350796305d2101d3, a1Raw[5] = 0x84ec5dca56c0dba8, a1Raw[6] = 0x063b12e6b44ac617, a1Raw[7] = 0x1c445586c32275ee, a1Raw[8] = 0x410b2f3673fae218, a1Raw[9] = 0xb47a95a36f66393c, a1Raw[10] = 0x28f67885913055d4, a1Raw[11] = 0x34632d91a7133d67, a1Raw[12] = 0xa361e38611fb5246, a1Raw[13] = 0x05f1c924a9454fbe, a1Raw[14] = 0x3e4ec6b73e5b3616, a1Raw[15] = 0x3aab63b07873b2d5, a1Raw[16] = 0x98e9495f9c71d5de, a1Raw[17] = 0x60eca51ee21fe30d, a1Raw[18] = 0x1d231f9afb9b3954, a1Raw[19] = 0x5bf14a4890f7d1ea, a1Raw[20] = 0xa07ca24c43d1c329, a1Raw[21] = 0x21eb4a0be5126864, a1Raw[22] = 0xd7ed9ef426dd5244, a1Raw[23] = 0x80866489ce7c1e86, a1Raw[24] = 0xd88d77e68bbaaf1a, a1Raw[25] = 0x241837e255e8a2fe, a1Raw[26] = 0x1889e4c97042dbfc, a1Raw[27] = 0x8d050903504b7031, a1Raw[28] = 0xe8ccc183028931eb, a1Raw[29] = 0x69b35e2e34d42ca8, a1Raw[30] = 0x3671f25509cd61bd, a1Raw[31] = 0xe20f4cbfbb5ab748;
    b1Raw[0] = 0x705361fab7fe3456, b1Raw[1] = 0x1ae4c21a407d5cab, b1Raw[2] = 0xfe325ae950641015, b1Raw[3] = 0x4eca2de33b6e325e, b1Raw[4] = 0x7787a2da76b752c2, b1Raw[5] = 0x55c52c307731cc44, b1Raw[6] = 0x89ccfca3e67ab693, b1Raw[7] = 0x9c837c66bc023870, b1Raw[8] = 0x82249c369ad11873, b1Raw[9] = 0xa8edad03455d2617, b1Raw[10] = 0xfa8e3098c2fa6859, b1Raw[11] = 0x2bf0e5c84f17f063, b1Raw[12] = 0x622c1f44aad342f1, b1Raw[13] = 0x9ffdedabbe0a85cf, b1Raw[14] = 0xad552b2e804ebf37, b1Raw[15] = 0xcf8d0073cbc2e316, b1Raw[16] = 0xfc1ce71c3bedc359, b1Raw[17] = 0xdeb0268bfc784beb, b1Raw[18] = 0x34bab44e1915d23e, b1Raw[19] = 0xf399639983299611, b1Raw[20] = 0x375a323619cfadf7, b1Raw[21] = 0x36fbbdb87d85551d, b1Raw[22] = 0xc892e593f6045b00, b1Raw[23] = 0xd8dc0af0b96beeda, b1Raw[24] = 0x3abccd512e9bf656, b1Raw[25] = 0x16bdd65fb243f530, b1Raw[26] = 0xd1f63deab3b41e99, b1Raw[27] = 0xbe839d565e318630, b1Raw[28] = 0x13c61ad77983a13b, b1Raw[29] = 0x117ce086617bc143, b1Raw[30] = 0x65a19fa0f5532593, b1Raw[31] = 0xc2a31d49611cada4;
    r1Raw[0] = 0x894909251a9e3f3b, r1Raw[1] = 0xda19775faba5ba65, r1Raw[2] = 0x397917e72530ef56, r1Raw[3] = 0x889196886818cbe5, r1Raw[4] = 0xac8f390ad3d85495, r1Raw[5] = 0xdab189facdf2a7ec, r1Raw[6] = 0x90080f8a9ac57caa, r1Raw[7] = 0xb8c7d1ed7f24ae5e, r1Raw[8] = 0xc32fcb6d0ecbfa8b, r1Raw[9] = 0x5d6842a6b4c35f53, r1Raw[10] = 0x2384a91e542abe2e, r1Raw[11] = 0x60541359f62b2dcb, r1Raw[12] = 0x058e02cabcce9537, r1Raw[13] = 0xa5efb6d0674fd58e, r1Raw[14] = 0xeba3f1e5bea9f54d, r1Raw[15] = 0x0a386424443695eb, r1Raw[16] = 0x9506307bd85f9938, r1Raw[17] = 0x3f9ccbaade982ef9, r1Raw[18] = 0x51ddd3e914b10b93, r1Raw[19] = 0x4f8aade2142167fb, r1Raw[20] = 0xd7d6d4825da17121, r1Raw[21] = 0x58e707c46297bd81, r1Raw[22] = 0xa08084881ce1ad44, r1Raw[23] = 0x59626f7a87e80d61, r1Raw[24] = 0x134a4537ba56a571, r1Raw[25] = 0x3ad60e42082c982f, r1Raw[26] = 0xea8022b423f6fa95, r1Raw[27] = 0x4b88a659ae7cf661, r1Raw[28] = 0xfc92dc5a7c0cd327, r1Raw[29] = 0x7b303eb4964fedeb, r1Raw[30] = 0x9c1391f5ff208750, r1Raw[31] = 0xa4b26a091c7764ec;

    // ACT
    uint2048 c0 = a0 + b0;
    uint2048 c1 = a1 + b1;

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
}

TEST(BigIntegerArithmeticTests, Addition4096Bit) {
    // ARRANGE
    uint4096 a0, b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x003468989e790de5, a0Raw[1] = 0x90a5afa80bb8d3b3, a0Raw[2] = 0xf9e11b4cd06d91da, a0Raw[3] = 0x8c2ebde1f6e8c646, a0Raw[4] = 0x80360089e2a5ef27, a0Raw[5] = 0xf07cfdbabe45ab44, a0Raw[6] = 0x6569f9b5f8e10aa3, a0Raw[7] = 0x2fc50b29ea9d0bc9, a0Raw[8] = 0x7cd84df5e08ddc1f, a0Raw[9] = 0x43cd2fc73bed9b55, a0Raw[10] = 0xb6feb5f9d0502618, a0Raw[11] = 0x179a6ea6b11bb980, a0Raw[12] = 0x6ad9d49ccf69b164, a0Raw[13] = 0xe243347ef6fc5b07, a0Raw[14] = 0x01c567da7d75e1d4, a0Raw[15] = 0x33b35f1d11976e4e, a0Raw[16] = 0xd25cbcc226c934aa, a0Raw[17] = 0x4afb051d20195883, a0Raw[18] = 0x19c98598e788439e, a0Raw[19] = 0x00610b822d82b87a, a0Raw[20] = 0xeaa78474b8e9fc9e, a0Raw[21] = 0xbd09960cfcd6a1cf, a0Raw[22] = 0xf4c796d489774826, a0Raw[23] = 0x99ec4a110de91484, a0Raw[24] = 0x820cd6a1855e0524, a0Raw[25] = 0x7fa5bc60fe24b762, a0Raw[26] = 0x8dbfb79455066a29, a0Raw[27] = 0xb69e399774142309, a0Raw[28] = 0x92150599bf2e4aa6, a0Raw[29] = 0x7eb59720d58b10d8, a0Raw[30] = 0x00e334c112f7a7e0, a0Raw[31] = 0xa99856d9ce9c5f95, a0Raw[32] = 0x7a73dc1c0437abdc, a0Raw[33] = 0x12ba6a7e49b2db30, a0Raw[34] = 0xae15c7fe87fd0044, a0Raw[35] = 0xe66044e5e5b9afa8, a0Raw[36] = 0xda2325ca8eec2354, a0Raw[37] = 0x47c6e849783e9daa, a0Raw[38] = 0xc6436e9e127bc891, a0Raw[39] = 0x0dbb5cdd834a7faf, a0Raw[40] = 0xa9b2378d5daa5199, a0Raw[41] = 0x4a71b10235a47eb6, a0Raw[42] = 0x616e5e08de1e9faa, a0Raw[43] = 0x29d0c411e2b0a921, a0Raw[44] = 0xac08e03c936462b2, a0Raw[45] = 0x0936c82e9556ec22, a0Raw[46] = 0x35e01f64ee3943cd, a0Raw[47] = 0x14c2793d439244a0, a0Raw[48] = 0x45aa28f5cfd9fbe3, a0Raw[49] = 0x2d249fdf75ad8113, a0Raw[50] = 0xe3ada36c76f0b1e7, a0Raw[51] = 0x6602f34c058e6e95, a0Raw[52] = 0x7494c4b2a12c8adc, a0Raw[53] = 0xd5356df55481df0b, a0Raw[54] = 0x72a78fb022339770, a0Raw[55] = 0x79ecd5954c526c0a, a0Raw[56] = 0x3db4381d120a038e, a0Raw[57] = 0xe0765dc490ae8114, a0Raw[58] = 0x6c6b964cbcf06588, a0Raw[59] = 0x01bf4ccf6aa167c3, a0Raw[60] = 0x815429e380b1d35d, a0Raw[61] = 0xab9b7ec5cf5a4439, a0Raw[62] = 0xb1ede93fe87950c1, a0Raw[63] = 0xdcbcd062adb01d96;
    b0Raw[0] = 0xfd4164a352558811, b0Raw[1] = 0xd53f0189bfdbecf9, b0Raw[2] = 0x16460dee004946f2, b0Raw[3] = 0xf5c71f9ed9b20353, b0Raw[4] = 0x087efb6befe692f3, b0Raw[5] = 0xade6f8de6e48625a, b0Raw[6] = 0x11f3e83ffa6f2ae4, b0Raw[7] = 0xeae4ca896b977cce, b0Raw[8] = 0x1eef38b222646f3b, b0Raw[9] = 0x335a1b3e38b3a8d2, b0Raw[10] = 0xa53de87e105d4fb2, b0Raw[11] = 0x8b78e4d86bde5da6, b0Raw[12] = 0xbcde3dd924ba2656, b0Raw[13] = 0x0bda1249a669a5ba, b0Raw[14] = 0xf7645f76b5539124, b0Raw[15] = 0xf39d7b03b16374e0, b0Raw[16] = 0xfa8d4d3efde341eb, b0Raw[17] = 0xa24812e193c1679a, b0Raw[18] = 0xa21cdc24f4865289, b0Raw[19] = 0x8dd9112c54236955, b0Raw[20] = 0x9dc484921a2a84b9, b0Raw[21] = 0x606288572e04d65d, b0Raw[22] = 0x6c3da54f1f996d75, b0Raw[23] = 0x3df8e74aea407933, b0Raw[24] = 0xb745d1ec51c05e2d, b0Raw[25] = 0x2b1f6b2081c75e83, b0Raw[26] = 0xec5ddde93d5751f3, b0Raw[27] = 0xe8cc8565381b915a, b0Raw[28] = 0x44b0448e214febe0, b0Raw[29] = 0x477550beda3e7cb5, b0Raw[30] = 0x371df502ba5a44f5, b0Raw[31] = 0x3e98c0029830eddc, b0Raw[32] = 0xa92a4d1485be7149, b0Raw[33] = 0x6439f904a5c5c134, b0Raw[34] = 0x1f0378ac86a92917, b0Raw[35] = 0x4bced306370ba340, b0Raw[36] = 0x006d7acec8aad580, b0Raw[37] = 0x1ec4760133c24d9d, b0Raw[38] = 0x261ea05e56000660, b0Raw[39] = 0x627df87fa3480471, b0Raw[40] = 0xd9526c401a8bf213, b0Raw[41] = 0x83858cc21f9e0cd9, b0Raw[42] = 0x196b837a983f122f, b0Raw[43] = 0xa02a79b479991b09, b0Raw[44] = 0x69e408fadf08293e, b0Raw[45] = 0x1fc1090f768f3635, b0Raw[46] = 0xb13455897250c646, b0Raw[47] = 0xec38cfb03aa118ba, b0Raw[48] = 0x4d9386b0b1b1af5e, b0Raw[49] = 0x6cf7ce9a3dae5fbf, b0Raw[50] = 0x95184e71b1e5f68d, b0Raw[51] = 0xd89bbd9dae8b2791, b0Raw[52] = 0xbe1755e5eae53927, b0Raw[53] = 0x11a2ddf2171db005, b0Raw[54] = 0x60e145f5de72fd7f, b0Raw[55] = 0x0541db4a866dba83, b0Raw[56] = 0x2234c292fb3519c8, b0Raw[57] = 0x9aaa84605ca2810d, b0Raw[58] = 0x004eb6283e3888d1, b0Raw[59] = 0x53ee4985df678d41, b0Raw[60] = 0xe9cbad2c00649901, b0Raw[61] = 0x74bfe74d9dbe026c, b0Raw[62] = 0xbe453a654a1946bf, b0Raw[63] = 0x2b5e36814507c79d;
    r0Raw[0] = 0xfd75cd3bf0ce95f6, r0Raw[1] = 0x65e4b131cb94c0ac, r0Raw[2] = 0x1027293ad0b6d8cd, r0Raw[3] = 0x81f5dd80d09ac99a, r0Raw[4] = 0x88b4fbf5d28c821b, r0Raw[5] = 0x9e63f6992c8e0d9e, r0Raw[6] = 0x775de1f5f3503588, r0Raw[7] = 0x1aa9d5b356348897, r0Raw[8] = 0x9bc786a802f24b5b, r0Raw[9] = 0x77274b0574a14427, r0Raw[10] = 0x5c3c9e77e0ad75ca, r0Raw[11] = 0xa313537f1cfa1727, r0Raw[12] = 0x27b81275f423d7ba, r0Raw[13] = 0xee1d46c89d6600c2, r0Raw[14] = 0xf929c75132c972f8, r0Raw[15] = 0x2750da20c2fae32e, r0Raw[16] = 0xccea0a0124ac7696, r0Raw[17] = 0xed4317feb3dac01e, r0Raw[18] = 0xbbe661bddc0e9627, r0Raw[19] = 0x8e3a1cae81a621cf, r0Raw[20] = 0x886c0906d3148157, r0Raw[21] = 0x1d6c1e642adb782d, r0Raw[22] = 0x61053c23a910b59c, r0Raw[23] = 0xd7e5315bf8298db8, r0Raw[24] = 0x3952a88dd71e6351, r0Raw[25] = 0xaac527817fec15e6, r0Raw[26] = 0x7a1d957d925dbc1c, r0Raw[27] = 0x9f6abefcac2fb464, r0Raw[28] = 0xd6c54a27e07e3687, r0Raw[29] = 0xc62ae7dfafc98d8d, r0Raw[30] = 0x380129c3cd51ecd5, r0Raw[31] = 0xe83116dc66cd4d71, r0Raw[32] = 0x239e293089f61d25, r0Raw[33] = 0x76f46382ef789c65, r0Raw[34] = 0xcd1940ab0ea6295b, r0Raw[35] = 0x322f17ec1cc552e8, r0Raw[36] = 0xda90a0995796f8d5, r0Raw[37] = 0x668b5e4aac00eb47, r0Raw[38] = 0xec620efc687bcef1, r0Raw[39] = 0x7039555d26928420, r0Raw[40] = 0x8304a3cd783643ac, r0Raw[41] = 0xcdf73dc455428b90, r0Raw[42] = 0x7ad9e183765db1d9, r0Raw[43] = 0xc9fb3dc65c49c42a, r0Raw[44] = 0x15ece937726c8bf0, r0Raw[45] = 0x28f7d13e0be62258, r0Raw[46] = 0xe71474ee608a0a13, r0Raw[47] = 0x00fb48ed7e335d5a, r0Raw[48] = 0x933dafa6818bab42, r0Raw[49] = 0x9a1c6e79b35be0d2, r0Raw[50] = 0x78c5f1de28d6a874, r0Raw[51] = 0x3e9eb0e9b4199627, r0Raw[52] = 0x32ac1a988c11c404, r0Raw[53] = 0xe6d84be76b9f8f11, r0Raw[54] = 0xd388d5a600a694ef, r0Raw[55] = 0x7f2eb0dfd2c0268d, r0Raw[56] = 0x5fe8fab00d3f1d56, r0Raw[57] = 0x7b20e224ed510221, r0Raw[58] = 0x6cba4c74fb28ee5a, r0Raw[59] = 0x55ad96554a08f504, r0Raw[60] = 0x6b1fd70f81166c5e, r0Raw[61] = 0x205b66136d1846a6, r0Raw[62] = 0x703323a532929781, r0Raw[63] = 0x081b06e3f2b7e534;

    uint4096 a1, b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0xf7d68441d633d846, a1Raw[1] = 0x08bbe9140856576e, a1Raw[2] = 0x69b1f0fb857f937c, a1Raw[3] = 0xce1f419713391a49, a1Raw[4] = 0x5a7125b64729cded, a1Raw[5] = 0x9f1af3edcd5f8887, a1Raw[6] = 0x3e28608d816d7fb2, a1Raw[7] = 0x37dbd795c66e93ea, a1Raw[8] = 0xd8ba4802a5c2bbbb, a1Raw[9] = 0x01634d52e1e3af53, a1Raw[10] = 0x8e0886e89c1eefa9, a1Raw[11] = 0x6ff90df51150c00b, a1Raw[12] = 0x3709fcff02c03aa8, a1Raw[13] = 0x1cc5d00b34b54988, a1Raw[14] = 0x0832c22b27519b1d, a1Raw[15] = 0x63830dfdbbfc2ce8, a1Raw[16] = 0x31b6af2506989653, a1Raw[17] = 0x1a8a8de29689d481, a1Raw[18] = 0x65f8d4129f9f19b8, a1Raw[19] = 0x76c339434a00f781, a1Raw[20] = 0x087fab637a4a8727, a1Raw[21] = 0x0a6b9301a67e7e49, a1Raw[22] = 0xf6ce4e648b40857b, a1Raw[23] = 0x344dccd504ef887a, a1Raw[24] = 0x53ceac2158a75698, a1Raw[25] = 0xe199f8e4ed2af8dc, a1Raw[26] = 0x78718f986c7ee50c, a1Raw[27] = 0x86cf3e1f9e779241, a1Raw[28] = 0x5861791959558f88, a1Raw[29] = 0xf59c72c626034c1d, a1Raw[30] = 0xb2fc0e29200fdc89, a1Raw[31] = 0xb90351d9cb6e1574, a1Raw[32] = 0x371eff4862172992, a1Raw[33] = 0xfedaf1e92bd76341, a1Raw[34] = 0x3531513db09adcd6, a1Raw[35] = 0x4b78c1d51121995d, a1Raw[36] = 0x8341aac6bb2ad575, a1Raw[37] = 0x7de19d9ee3b7ba62, a1Raw[38] = 0xd7ad1e0d45abbba1, a1Raw[39] = 0x0b3aac295ede871a, a1Raw[40] = 0xd389e1916f3c1f8c, a1Raw[41] = 0x922e330de55f6fac, a1Raw[42] = 0x85fb6700b93c26e1, a1Raw[43] = 0xe83d617f1a59b8c0, a1Raw[44] = 0xacb4d7ffcf8abf02, a1Raw[45] = 0x02d6be6c739797ab, a1Raw[46] = 0xb4bc07413da70ad3, a1Raw[47] = 0xa7ac5e1aaf3aeab0, a1Raw[48] = 0x2f697e457a268953, a1Raw[49] = 0xd167f01fc311697e, a1Raw[50] = 0x0ceeabbaa9cbd27a, a1Raw[51] = 0x8729f90ccb70f926, a1Raw[52] = 0xf6e04ede3234a869, a1Raw[53] = 0x02f816f669cab008, a1Raw[54] = 0x01ebb933a76f8f8b, a1Raw[55] = 0xfc11207962763e11, a1Raw[56] = 0x5be243bc05c8103f, a1Raw[57] = 0x2a61974ce18d85b0, a1Raw[58] = 0xfb1757789b5b68eb, a1Raw[59] = 0x801e2f79745cb598, a1Raw[60] = 0xf285a891d41ce112, a1Raw[61] = 0x2e75477f4f5ad0d5, a1Raw[62] = 0x3cde8276295c41db, a1Raw[63] = 0xc9e5c4416d451390;
    b1Raw[0] = 0x6d7a105ca7bc4a38, b1Raw[1] = 0x86808d30bf64b1d1, b1Raw[2] = 0x082573f985158b09, b1Raw[3] = 0x49ecf04b09c6a736, b1Raw[4] = 0x4296de745494ae68, b1Raw[5] = 0xa6b198af4a163b4e, b1Raw[6] = 0x29b471097c005aee, b1Raw[7] = 0x332ec4becc49c847, b1Raw[8] = 0x7885ba8f767cca81, b1Raw[9] = 0x55fc9463a215a872, b1Raw[10] = 0x3d9150eee5664d46, b1Raw[11] = 0xa1aaa9b55c9baa6a, b1Raw[12] = 0xa1398ef3db8f012b, b1Raw[13] = 0xf69ecc5f1997c1df, b1Raw[14] = 0x27e3d72444ed98f0, b1Raw[15] = 0xc06dc93cfaea2812, b1Raw[16] = 0xcb1b12d7c175f16d, b1Raw[17] = 0x59ff69433a96cfb6, b1Raw[18] = 0xd287a510ea6678d0, b1Raw[19] = 0x6f41b7aaa1959ac8, b1Raw[20] = 0x7bbce1c80a4cc33c, b1Raw[21] = 0x143f3e41d07a9f0c, b1Raw[22] = 0xa4b2b3aee52fde75, b1Raw[23] = 0xa2520227a03f5bc9, b1Raw[24] = 0x4f4b02adf6c32332, b1Raw[25] = 0x8f48d822979d2da0, b1Raw[26] = 0x3190fca9c94d585a, b1Raw[27] = 0xdb893f6a73c8e56d, b1Raw[28] = 0x87523429640f5338, b1Raw[29] = 0xef67a2776f7e5878, b1Raw[30] = 0xaec33128c99ebf92, b1Raw[31] = 0x5eea28f1bb19dd82, b1Raw[32] = 0x0750e3c6c2948160, b1Raw[33] = 0xc022c07a8c032c56, b1Raw[34] = 0x933be5555799f19c, b1Raw[35] = 0x8aa307966322633d, b1Raw[36] = 0xf6f786f4a9b26cc7, b1Raw[37] = 0x780f6af32d28df75, b1Raw[38] = 0x00d47fde6dd4e669, b1Raw[39] = 0x42d5ef35bd8d4e90, b1Raw[40] = 0xb6cb69f422b0e9f2, b1Raw[41] = 0x96d57d608909d01e, b1Raw[42] = 0xca0df674bb5e2fd7, b1Raw[43] = 0x7abf7bd4caafcd4a, b1Raw[44] = 0x17007ed0a32cef87, b1Raw[45] = 0xbc3913904e218b7f, b1Raw[46] = 0xf614dcefa59ca9ef, b1Raw[47] = 0xc781032c567a0af1, b1Raw[48] = 0xc581b77761e288cc, b1Raw[49] = 0xe70bde239ab6ea98, b1Raw[50] = 0xacad487511187037, b1Raw[51] = 0x9b164851e40adf4d, b1Raw[52] = 0x5727e089a289ef29, b1Raw[53] = 0xa038bdd1205aaa4a, b1Raw[54] = 0x991b732fad6973f1, b1Raw[55] = 0x4df5351b9a2a134e, b1Raw[56] = 0xec075852957224c2, b1Raw[57] = 0x0d817f619ec2a4d4, b1Raw[58] = 0x05e0a045d850cfdb, b1Raw[59] = 0x62b02afebab34eea, b1Raw[60] = 0x922ee1af72404920, b1Raw[61] = 0x9f9fd30946ab01cf, b1Raw[62] = 0x57b81172ee96aef4, b1Raw[63] = 0x543800118486fc3c;
    r1Raw[0] = 0x6550949e7df0227e, r1Raw[1] = 0x8f3c7644c7bb0940, r1Raw[2] = 0x71d764f50a951e85, r1Raw[3] = 0x180c31e21cffc17f, r1Raw[4] = 0x9d08042a9bbe7c56, r1Raw[5] = 0x45cc8c9d1775c3d5, r1Raw[6] = 0x67dcd196fd6ddaa1, r1Raw[7] = 0x6b0a9c5492b85c31, r1Raw[8] = 0x514002921c3f863c, r1Raw[9] = 0x575fe1b683f957c6, r1Raw[10] = 0xcb99d7d781853cef, r1Raw[11] = 0x11a3b7aa6dec6a75, r1Raw[12] = 0xd8438bf2de4f3bd4, r1Raw[13] = 0x13649c6a4e4d0b67, r1Raw[14] = 0x3016994f6c3f340e, r1Raw[15] = 0x23f0d73ab6e654fa, r1Raw[16] = 0xfcd1c1fcc80e87c1, r1Raw[17] = 0x7489f725d120a437, r1Raw[18] = 0x388079238a059288, r1Raw[19] = 0xe604f0edeb96924a, r1Raw[20] = 0x843c8d2b84974a63, r1Raw[21] = 0x1eaad14376f91d55, r1Raw[22] = 0x9b810213707063f0, r1Raw[23] = 0xd69fcefca52ee444, r1Raw[24] = 0xa319aecf4f6a79ca, r1Raw[25] = 0x70e2d10784c8267c, r1Raw[26] = 0xaa028c4235cc3d67, r1Raw[27] = 0x62587d8a124077ae, r1Raw[28] = 0xdfb3ad42bd64e2c1, r1Raw[29] = 0xe504153d9581a495, r1Raw[30] = 0x61bf3f51e9ae9c1c, r1Raw[31] = 0x17ed7acb8687f2f7, r1Raw[32] = 0x3e6fe30f24abaaf3, r1Raw[33] = 0xbefdb263b7da8f97, r1Raw[34] = 0xc86d36930834ce73, r1Raw[35] = 0xd61bc96b7443fc9a, r1Raw[36] = 0x7a3931bb64dd423c, r1Raw[37] = 0xf5f1089210e099d8, r1Raw[38] = 0xd8819debb380a20a, r1Raw[39] = 0x4e109b5f1c6bd5aa, r1Raw[40] = 0x8a554b8591ed097e, r1Raw[41] = 0x2903b06e6e693fcb, r1Raw[42] = 0x50095d75749a56b9, r1Raw[43] = 0x62fcdd53e509860b, r1Raw[44] = 0xc3b556d072b7ae8a, r1Raw[45] = 0xbf0fd1fcc1b9232a, r1Raw[46] = 0xaad0e430e343b4c2, r1Raw[47] = 0x6f2d614705b4f5a2, r1Raw[48] = 0xf4eb35bcdc091220, r1Raw[49] = 0xb873ce435dc85416, r1Raw[50] = 0xb99bf42fbae442b2, r1Raw[51] = 0x2240415eaf7bd873, r1Raw[52] = 0x4e082f67d4be9793, r1Raw[53] = 0xa330d4c78a255a53, r1Raw[54] = 0x9b072c6354d9037c, r1Raw[55] = 0x4a065594fca0515f, r1Raw[56] = 0x47e99c0e9b3a3502, r1Raw[57] = 0x37e316ae80502a85, r1Raw[58] = 0x00f7f7be73ac38c6, r1Raw[59] = 0xe2ce5a782f100483, r1Raw[60] = 0x84b48a41465d2a32, r1Raw[61] = 0xce151a889605d2a5, r1Raw[62] = 0x949693e917f2f0cf, r1Raw[63] = 0x1e1dc452f1cc0fcc;

    // ACT
    uint4096 c0 = a0 + b0;
    uint4096 c1 = a1 + b1;

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
}


/* BigInteger Multiplication Tests*/

TEST(BigIntegerArithmeticTests, Multiplication128Bit) {
    // ARRANGE
    uint128 a0, b0;
    uint256 r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x3a8daebd62bcad82, a0Raw[1] = 0x69697884e153bd77;
    b0Raw[0] = 0x325b63b85ca7021d, b0Raw[1] = 0x6f2c11cdd212846c;
    r0Raw[0] = 0xca5d79199088abba, r0Raw[1] = 0x4bf735de6301854a, r0Raw[2] = 0xac1343204eab2b12, r0Raw[3] = 0x2dc6e0b7158083b8;

    uint128 a1, b1;
    uint256 r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0xf73984999ae00a91, a1Raw[1] = 0x71e54f8f720d1ae6;
    b1Raw[0] = 0x0ad54c01c92758a9, b1Raw[1] = 0x40c8f0c185dbe88f;
    r1Raw[0] = 0x5b35eda2b69fd1b9, r1Raw[1] = 0x45412dfa876804ba, r1Raw[2] = 0x1154016090f08c0d, r1Raw[3] = 0x1cd2ba271899d000;

//    TEST_printHex(a0);
//    TEST_printHex(b0);

    // ACT
    uint256 c0 = a0 * b0;
    uint256 c1 = a1 * b1;

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
}

TEST(BigIntegerArithmeticTests, Multiplication256Bit) {
    // ARRANGE
    uint256 a0, b0;
    uint512 r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x2b6a521778784ac0, a0Raw[1] = 0x274c48ab1ce21d91, a0Raw[2] = 0xa8c93e92346762fc, a0Raw[3] = 0x2246d0bda338d4e5;
    b0Raw[0] = 0xcfaf0adcd07b3ddb, b0Raw[1] = 0xd7aea2f18270669e, b0Raw[2] = 0x7e41bdd51772ea46, b0Raw[3] = 0x1c6f44b8791ac4d5;
    r0Raw[0] = 0x90382d50a2f7b240, r0Raw[1] = 0x91e3f142c98fd95d, r0Raw[2] = 0xb36f4bc45a9d64e4, r0Raw[3] = 0x1e38e55ab3f55cb7, r0Raw[4] = 0x7551cf2eb506891f, r0Raw[5] = 0xa9345b15e4cd2a81, r0Raw[6] = 0x7a7d2f4a886eeb24, r0Raw[7] = 0x3cea4bcc2a372cb;

    uint256 a1, b1;
    uint512 r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0x52d91db4ca4e24b9, a1Raw[1] = 0x3fb58078d66327cc, a1Raw[2] = 0xcc14c65d6f163a43, a1Raw[3] = 0xe2257abb8196cc6a;
    b1Raw[0] = 0x6b52e769c8fab695, b1Raw[1] = 0x861d89b9c39cd364, b1Raw[2] = 0x9129c8edf8c4d53e, b1Raw[3] = 0xc68f1bf2351f3a37;
    r1Raw[0] = 0x67896deeb240e5ad, r1Raw[1] = 0xacc572d7781d8f67, r1Raw[2] = 0x858f670c39ee4248, r1Raw[3] = 0xd46f9d7361d28bcf, r1Raw[4] = 0x1e4fc944fe0163ec, r1Raw[5] = 0xdf7cdbe65b8d2e0e, r1Raw[6] = 0x743d78c06a563604, r1Raw[7] = 0xaf67688c7f4529a2;

    // ACT
    uint512 c0 = a0 * b0;
    uint512 c1 = a1 * b1;

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
}

TEST(BigIntegerArithmeticTests, Multiplication512Bit) {
    // ARRANGE
    uint512 a0, b0;
    uint1024 r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x648e76edb7977f48, a0Raw[1] = 0x98863abc6c2f8800, a0Raw[2] = 0xa3d1420187a88f22, a0Raw[3] = 0xe2a8b92e12753d80, a0Raw[4] = 0xfce70f24409cc409, a0Raw[5] = 0x09f22c4bf0b0a1f0, a0Raw[6] = 0xa48fd20b63ea904b, a0Raw[7] = 0x6c01b1b6c4f5d8a0;
    b0Raw[0] = 0x653043ca288d9e3b, b0Raw[1] = 0x5cdf956d314c9cf6, b0Raw[2] = 0xf3a6313682fd5b03, b0Raw[3] = 0x77f2435fb49e3adb, b0Raw[4] = 0x772952f47963c04f, b0Raw[5] = 0x631a70a83d6aa53a, b0Raw[6] = 0xfa76922590b6b766, b0Raw[7] = 0xa4c953886fdc6394;
    r0Raw[0] = 0x8934313d2b20c598, r0Raw[1] = 0x981b103042e1aaa2, r0Raw[2] = 0x058b1118dd65851d, r0Raw[3] = 0x082192ef4f199abc, r0Raw[4] = 0x48a9408ba73e298c, r0Raw[5] = 0x5b52860a5601d66c, r0Raw[6] = 0xe431fbb9411d015a, r0Raw[7] = 0x0b3ae5fcb1bc33fc, r0Raw[8] = 0xa9520b2384213aca, r0Raw[9] = 0x92c54b14077ba88f, r0Raw[10] = 0x4c9a6b5ec7dc5842, r0Raw[11] = 0xc806f15e9bad4598, r0Raw[12] = 0x0373e552b895380f, r0Raw[13] = 0xa940282407875aac, r0Raw[14] = 0xd23c78333e01f864, r0Raw[15] = 0x4586066bbb648648;

    uint512 a1, b1;
    uint1024 r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0xe8a20a453d5f2880, a1Raw[1] = 0x41edfd41bef063cc, a1Raw[2] = 0xd7e9251ff7d97884, a1Raw[3] = 0xe39a9d7de005b9f8, a1Raw[4] = 0xe1e706e8512b2707, a1Raw[5] = 0xdddb5f5741cd508e, a1Raw[6] = 0x6eb5a2488568fa02, a1Raw[7] = 0x3a84846bad0d0b3;
    b1Raw[0] = 0x2f7a5f947813ed8f, b1Raw[1] = 0xfd1e9e57e264d082, b1Raw[2] = 0x33c794a39bce1424, b1Raw[3] = 0xc485e53a4bffeb0c, b1Raw[4] = 0x69ceeb57910a37d0, b1Raw[5] = 0xd151a8ec4ded4fcd, b1Raw[6] = 0x6cf54557a516f282, b1Raw[7] = 0x7bf1d24127e5367b;
    r1Raw[0] = 0xc5f8e98a62261f80, r1Raw[1] = 0x4e58c17731e99641, r1Raw[2] = 0xccc8cacbed05660f, r1Raw[3] = 0xa6485037c7cd0648, r1Raw[4] = 0xf02cfd0bda938a73, r1Raw[5] = 0x87f3172a7147c627, r1Raw[6] = 0x019cfe7f637e7335, r1Raw[7] = 0x3beb31e39255ffd6, r1Raw[8] = 0x78a5da63c7f8ebb2, r1Raw[9] = 0xe8274ea7c9e054e6, r1Raw[10] = 0xb9091125ee52e3fb, r1Raw[11] = 0xbe056b3663e4a7be, r1Raw[12] = 0x9dfb4a019349e353, r1Raw[13] = 0x65a251c70b0a7882, r1Raw[14] = 0x19b7bdd92cdeda5a, r1Raw[15] = 0x1c54f26ffee7b62;

    // ACT
    uint1024 c0 = a0 * b0;
    uint1024 c1 = a1 * b1;

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
}

TEST(BigIntegerArithmeticTests, Multiplication1024Bit) {
    // ARRANGE
    uint1024 a0, b0;
    uint2048 r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0xa500066e0f73df3b, a0Raw[1] = 0xe016bc6744eb773c, a0Raw[2] = 0x2d568bc69ea60ecf, a0Raw[3] = 0x96b1718703c3a2bf, a0Raw[4] = 0x7b5c20cd756a8fad, a0Raw[5] = 0x0d1319129cc8e414, a0Raw[6] = 0x51f5514d2e7c418d, a0Raw[7] = 0xa2a355c11dc80557, a0Raw[8] = 0x7d23c5768d9826c6, a0Raw[9] = 0xf0757845c7a42652, a0Raw[10] = 0x68b84cfcbc8368bf, a0Raw[11] = 0xfc6b2f995bb57f80, a0Raw[12] = 0x496197a226aa9980, a0Raw[13] = 0x1360da4a0c421b40, a0Raw[14] = 0xb58abe1702b543ba, a0Raw[15] = 0x2361c5e5dfd857c2;
    b0Raw[0] = 0x378dea0601467eaf, b0Raw[1] = 0xa69e07fed9175664, b0Raw[2] = 0x8565a0f9cd396e37, b0Raw[3] = 0x5e5a8fa7c93f4b04, b0Raw[4] = 0x195824404abab7a9, b0Raw[5] = 0x9688b3a7c4c1aba2, b0Raw[6] = 0x2ca719480a71003d, b0Raw[7] = 0xc91c5daf0a9277e6, b0Raw[8] = 0x131497de1bcc6797, b0Raw[9] = 0xacad2c51e57a5fe7, b0Raw[10] = 0xe38669b7fb0cf6a7, b0Raw[11] = 0xa9c309a800ed94f3, b0Raw[12] = 0xabb9430ca8307f53, b0Raw[13] = 0x4127cfbd24870d73, b0Raw[14] = 0xf8c8d0ab2e3adb00, b0Raw[15] = 0x8753b7996c05e8e7;
    r0Raw[0] = 0xe59867c7dd36a355, r0Raw[1] = 0xb5c7b05bf43fa73a, r0Raw[2] = 0x7b48cbd848665435, r0Raw[3] = 0xf8b3318733d88325, r0Raw[4] = 0x0e4e97cc30c10b74, r0Raw[5] = 0x249e4e9818d7575b, r0Raw[6] = 0xb16a58408d6a5956, r0Raw[7] = 0x6191e147fc46727d, r0Raw[8] = 0x13fbeee9d8baff9d, r0Raw[9] = 0xa4e0c9cbef00da0f, r0Raw[10] = 0x410c9a21730d0046, r0Raw[11] = 0x95ae02201ff7b8e4, r0Raw[12] = 0x4b1989d14d66f35e, r0Raw[13] = 0xc5e572fb6236f47f, r0Raw[14] = 0x69c47ba3820559eb, r0Raw[15] = 0x0719275421f4ecba, r0Raw[16] = 0x71fc75d411c28aae, r0Raw[17] = 0xb21501f0a35c54b4, r0Raw[18] = 0x4bf7859bb93f3ada, r0Raw[19] = 0x64c1ecea96344e99, r0Raw[20] = 0x3fb0da9620402b26, r0Raw[21] = 0x2e5d5a266be10db4, r0Raw[22] = 0x1210fc0a1259a8b9, r0Raw[23] = 0xe49eaee1b8ec8191, r0Raw[24] = 0xad44bcd48705c560, r0Raw[25] = 0x1786224e0af0d038, r0Raw[26] = 0x22bc38454829e4fd, r0Raw[27] = 0xcaae31c5a9155ce7, r0Raw[28] = 0xdec80909ca0b941a, r0Raw[29] = 0x8dc16124a0caa728, r0Raw[30] = 0x13c6abd7bec35fbb, r0Raw[31] = 0x12b4216f7b675369;

    uint1024 a1, b1;
    uint2048 r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0xf395cc4bd44aabca, a1Raw[1] = 0xf4c529acc750bdf8, a1Raw[2] = 0xa9c7f91ef0b058fb, a1Raw[3] = 0x6f4d1e17860c3f97, a1Raw[4] = 0x127bfc2ed18471c1, a1Raw[5] = 0xa48347d3d33782ba, a1Raw[6] = 0x43c0ffd0dc305927, a1Raw[7] = 0x0e1b3f789c97f7ac, a1Raw[8] = 0xc70bfecf8dd69a23, a1Raw[9] = 0x8851e66e1f9f37ca, a1Raw[10] = 0x24707710a77aa54a, a1Raw[11] = 0xef66cf3daeabca74, a1Raw[12] = 0xf8b5e906cb9e88c6, a1Raw[13] = 0x96a0d276b610eeae, a1Raw[14] = 0xe62b0a0757d0618b, a1Raw[15] = 0x4139542b91699987;
    b1Raw[0] = 0xd7e7f888c45794d3, b1Raw[1] = 0x5377c2601adf2b71, b1Raw[2] = 0x5b97425c09d61d9b, b1Raw[3] = 0x702e7007732517cc, b1Raw[4] = 0xa03e3564561e5aa6, b1Raw[5] = 0xc2b71190c9539aa8, b1Raw[6] = 0xc825984eda9fd748, b1Raw[7] = 0x58625a0d43e5786a, b1Raw[8] = 0x66f3b0c888601836, b1Raw[9] = 0xfebdc6a1afadcb0a, b1Raw[10] = 0x0f14c6f04cbea48e, b1Raw[11] = 0xb37a46e05c3db844, b1Raw[12] = 0xa951cefc0e43a3a1, b1Raw[13] = 0x6741a7d2436a5ceb, b1Raw[14] = 0xc322a1233c04b703, b1Raw[15] = 0x6624a3e124197f8a;
    r1Raw[0] = 0xa23e7d722e825f7e, r1Raw[1] = 0xab3269df1575ff18, r1Raw[2] = 0x0920f5cba5fc416e, r1Raw[3] = 0x56327aeaff819f60, r1Raw[4] = 0x70c9b74cee2a2305, r1Raw[5] = 0x59ec25a17f759a5a, r1Raw[6] = 0x9630cd811864f36a, r1Raw[7] = 0x77173670912f16c1, r1Raw[8] = 0xb1eb83ee9623d77e, r1Raw[9] = 0xbc44e69f4df15df5, r1Raw[10] = 0xfad4896c40a08900, r1Raw[11] = 0xb3630663bd3bcc93, r1Raw[12] = 0x48df0b462eab94a4, r1Raw[13] = 0xa38c88d0ac3097d3, r1Raw[14] = 0xdc22d3c8a470d738, r1Raw[15] = 0x2270a9fa3b8d8001, r1Raw[16] = 0xd2df4bec4e2c1a5a, r1Raw[17] = 0xa6feaecc7e12a565, r1Raw[18] = 0xca6e76fe5732fff8, r1Raw[19] = 0xf02d60832ba69e0b, r1Raw[20] = 0x2ce386d3c0a95dae, r1Raw[21] = 0x813d2c9ade25ae81, r1Raw[22] = 0x5e2e973563853a80, r1Raw[23] = 0xb10579d791d40030, r1Raw[24] = 0x4ebe9dea5552d4b1, r1Raw[25] = 0x2e20d2990822d316, r1Raw[26] = 0x9a6be577bcf20db1, r1Raw[27] = 0x09a45450e19c25db, r1Raw[28] = 0xb8572bc266a341ef, r1Raw[29] = 0x356b8e9d52eb0eff, r1Raw[30] = 0xeb77835a4f93df39, r1Raw[31] = 0x1a062d5a0f3dccd4;

    // ACT
    uint2048 c0 = a0 * b0;
    uint2048 c1 = a1 * b1;

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
}

TEST(BigIntegerArithmeticTests, Multiplication2048Bit) {
    // ARRANGE
    uint2048 a0, b0;
    uint4096 r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x15e18cb7c911a511, a0Raw[1] = 0x32ea4ffeab8f5d40, a0Raw[2] = 0xc59cf4f355361325, a0Raw[3] = 0x478d05f7078805c9, a0Raw[4] = 0x873fa808ef121290, a0Raw[5] = 0xf1e8bf8ad4536869, a0Raw[6] = 0xc7dea7823b20823c, a0Raw[7] = 0x52879a2f79209e1a, a0Raw[8] = 0x4bc266b3f44d745b, a0Raw[9] = 0xc9f34455651b7116, a0Raw[10] = 0x70095767d7931948, a0Raw[11] = 0x8b5b6e3c05e36e05, a0Raw[12] = 0x57dd6b21eac82425, a0Raw[13] = 0xde1f72f1c4710c2f, a0Raw[14] = 0xf5eab3f4a7a6c2e9, a0Raw[15] = 0xc3af4e1d98e042ae, a0Raw[16] = 0x7b2ef39a0cb29d2a, a0Raw[17] = 0x754af897c944431b, a0Raw[18] = 0x4e17533d4dca2b22, a0Raw[19] = 0x1c6a40a744e15c7c, a0Raw[20] = 0xdacf4118f469d426, a0Raw[21] = 0x87b47989b6eb633f, a0Raw[22] = 0x4cbad3c774a59ac8, a0Raw[23] = 0x7c9561aed64ff2a9, a0Raw[24] = 0x2ba16945de1299b9, a0Raw[25] = 0x538c3235eb80946f, a0Raw[26] = 0x0f1bc1db31d2ff72, a0Raw[27] = 0x6dcb88843d53499a, a0Raw[28] = 0x29d32c7c3287bffe, a0Raw[29] = 0x5918d62ae5e3fe69, a0Raw[30] = 0x78d7caa845b5433b, a0Raw[31] = 0xaab3bfe8ba050e91;
    b0Raw[0] = 0x707132606d210cb4, b0Raw[1] = 0x9083f00fa70810a8, b0Raw[2] = 0x3b99d3ddccb03b0a, b0Raw[3] = 0xfbd6fc2c60603f66, b0Raw[4] = 0xa8b2fa88c2b8e1f3, b0Raw[5] = 0xd69995db8d227164, b0Raw[6] = 0xbd8709be930e3a48, b0Raw[7] = 0x05ee687ccfdae557, b0Raw[8] = 0xb97f7741ada63e03, b0Raw[9] = 0x024da58f79ec5c21, b0Raw[10] = 0xf52ec33fcea4388c, b0Raw[11] = 0xb408a77e722c1d1d, b0Raw[12] = 0xa5d44b80f45cbb46, b0Raw[13] = 0xc872c608136f14db, b0Raw[14] = 0x1254b8fc53f3c984, b0Raw[15] = 0x12ec29b0bcd85397, b0Raw[16] = 0x67f5af27a980df01, b0Raw[17] = 0x45c17ecb4dd1fcd7, b0Raw[18] = 0xef3fa91c2ad11153, b0Raw[19] = 0xc46131483a2dcea3, b0Raw[20] = 0xd2c57c6dff9135a0, b0Raw[21] = 0x547e6667d02d3ba4, b0Raw[22] = 0xddabd8a8afbc45f2, b0Raw[23] = 0xa145169484e79116, b0Raw[24] = 0x7903235d15b013b4, b0Raw[25] = 0xd0594360392fe0f5, b0Raw[26] = 0x8e0cb2dd431ad35a, b0Raw[27] = 0x4bfa70c11eae4ebb, b0Raw[28] = 0x5de1710041d10c73, b0Raw[29] = 0x42af932a81616a8a, b0Raw[30] = 0xaba27cfd86784415, b0Raw[31] = 0x6f45959fa51ee833;
    r0Raw[0] = 0x7ed93594b855dbf4, r0Raw[1] = 0x296a661fbc55f36d, r0Raw[2] = 0x5e08a564ae3f77fa, r0Raw[3] = 0x9357b0da928c06f7, r0Raw[4] = 0x2982270d5e324635, r0Raw[5] = 0x0041b01b8e0e2805, r0Raw[6] = 0x920c4e0873fc694b, r0Raw[7] = 0x496e9e151fcc0283, r0Raw[8] = 0xe9a662aaf350cffb, r0Raw[9] = 0x89da5143bd469e8f, r0Raw[10] = 0xaede499afc07644e, r0Raw[11] = 0x131e3a7258270bc2, r0Raw[12] = 0xd98ae30a4b8fe296, r0Raw[13] = 0xca08100bb1c78543, r0Raw[14] = 0x2a9bcd96fa789712, r0Raw[15] = 0x5c959886e9c90e4f, r0Raw[16] = 0xe76a1783ba3ce54c, r0Raw[17] = 0xe0315906d9b2989e, r0Raw[18] = 0x4d43a944c20e3637, r0Raw[19] = 0x161abe621c18acf3, r0Raw[20] = 0x1b04667442e10751, r0Raw[21] = 0xa59c5b39f48c7719, r0Raw[22] = 0x57a94e9638adcbd6, r0Raw[23] = 0x7e3785bca3173a9b, r0Raw[24] = 0xbfd8b5398d20dd0e, r0Raw[25] = 0x3478c3578489a002, r0Raw[26] = 0xf2619696ecfe8a57, r0Raw[27] = 0x7259b38b153c56c3, r0Raw[28] = 0x1429df480fe0791f, r0Raw[29] = 0x9509ae863df0c115, r0Raw[30] = 0x917e476cca5ffad5, r0Raw[31] = 0x3f6ee1c43b1b7977, r0Raw[32] = 0x849b08941eab39be, r0Raw[33] = 0xcc01f9874a03f422, r0Raw[34] = 0xc8a6919ec1fcfddb, r0Raw[35] = 0x57aa74ea7d2a6755, r0Raw[36] = 0x03ead35501047581, r0Raw[37] = 0x70ec3a705136e580, r0Raw[38] = 0x8106569b777b9e75, r0Raw[39] = 0x9191679eb275e596, r0Raw[40] = 0xabe913daffd6f2fd, r0Raw[41] = 0xf3192f3c1458a25a, r0Raw[42] = 0xe354d6e3e4d44030, r0Raw[43] = 0x00d7cfb9855d9728, r0Raw[44] = 0xae3a20294bf4c221, r0Raw[45] = 0x1843f594dcf3560a, r0Raw[46] = 0x66537323d95b6e94, r0Raw[47] = 0xf34f3bf11969fbc6, r0Raw[48] = 0x76f8f72ad102a665, r0Raw[49] = 0x8b5e90067bd39407, r0Raw[50] = 0x905ea26d479f775e, r0Raw[51] = 0x5666ef5ea944736b, r0Raw[52] = 0x9895f2459166893c, r0Raw[53] = 0x8ab09f9ec81fa11f, r0Raw[54] = 0x4fb756570e0a5f36, r0Raw[55] = 0xda900d56839406ab, r0Raw[56] = 0xe00d55a1067ba828, r0Raw[57] = 0xe56a85cb5002d59a, r0Raw[58] = 0x196a18f9290971f8, r0Raw[59] = 0xddfccc374f24eca8, r0Raw[60] = 0x68bd2a4f08229bbe, r0Raw[61] = 0xde1d3ec052f2f7bb, r0Raw[62] = 0x529177ed5c7eefa2, r0Raw[63] = 0x4a32566db4d37115;

    uint2048 a1, b1;
    uint4096 r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0x80f1c9fb9e9f3c0a, a1Raw[1] = 0x5e945f881e54984b, a1Raw[2] = 0xa5130ced2f7afb6d, a1Raw[3] = 0xb650cf2cad06108a, a1Raw[4] = 0xedd4cb8157af73c2, a1Raw[5] = 0x7e8cfc3e41d319f0, a1Raw[6] = 0x3a5ea7febdc50385, a1Raw[7] = 0x53ea4737c6a49596, a1Raw[8] = 0x88ed8174b4db3e62, a1Raw[9] = 0x599fe31c23788074, a1Raw[10] = 0x6cf0750f05f360de, a1Raw[11] = 0x83041e240d4fcee2, a1Raw[12] = 0x8a7c92d2b7e72bf3, a1Raw[13] = 0x3b9263446d3ae4d9, a1Raw[14] = 0x9feea7bf0c2263b8, a1Raw[15] = 0x693b2ac7ef178ea0, a1Raw[16] = 0x8a15ef5da5c0a4d6, a1Raw[17] = 0xde0ea986867202c2, a1Raw[18] = 0xd8d6775a73b63432, a1Raw[19] = 0x9e723de5b5b9920e, a1Raw[20] = 0xbf9f3037965bc052, a1Raw[21] = 0x0edaa8d2ae19000e, a1Raw[22] = 0xe161e63716572754, a1Raw[23] = 0x0ca38feaa255ff1d, a1Raw[24] = 0x62ad2075d307ca95, a1Raw[25] = 0x3748adb46bb6e928, a1Raw[26] = 0x6d1b2bec8e6bbf13, a1Raw[27] = 0x810685de41b51b26, a1Raw[28] = 0xbb7071d759d08254, a1Raw[29] = 0x9e34bbc5571514f2, a1Raw[30] = 0xb802cfae955ee30d, a1Raw[31] = 0xbd76d2d276d06975;
    b1Raw[0] = 0xce0eee47302ebfcd, b1Raw[1] = 0xec9c5ffcf194e0ef, b1Raw[2] = 0xded34c3cc68a1052, b1Raw[3] = 0x6d1d37edd4ea3218, b1Raw[4] = 0xed286266a7d08800, b1Raw[5] = 0xa95e4d08a7b82b10, b1Raw[6] = 0x58ad268f4a9c6c39, b1Raw[7] = 0xd335f54c25e5c8f4, b1Raw[8] = 0x823b95ef2852f5b0, b1Raw[9] = 0x5b4487d014bb5d08, b1Raw[10] = 0x0e5d304e7dcde203, b1Raw[11] = 0xe9d3913da35a12fb, b1Raw[12] = 0x887ab4e3cb9b7a91, b1Raw[13] = 0xd8d128ced6aa4f64, b1Raw[14] = 0x32523e6777a8a4e1, b1Raw[15] = 0xa0e2994e6874ebae, b1Raw[16] = 0x925d048769aaac65, b1Raw[17] = 0xc0b0d6245dd966cf, b1Raw[18] = 0x14906f9be066cc34, b1Raw[19] = 0xc87df70c69d67bf9, b1Raw[20] = 0x964a0a252fadfdb5, b1Raw[21] = 0x4bf16ef8dd44cd37, b1Raw[22] = 0xaaafb07017e12c1d, b1Raw[23] = 0xe3b874f66f8cc12c, b1Raw[24] = 0x403e5b44ba010244, b1Raw[25] = 0x2b93f6b4308a2777, b1Raw[26] = 0x53311ee054d5f251, b1Raw[27] = 0x6fb993083a84e8e4, b1Raw[28] = 0x8273c0f7afc413fd, b1Raw[29] = 0x10e71cc94f00af25, b1Raw[30] = 0x779eb4b63e87390d, b1Raw[31] = 0x81961713bf9541a6;
    r1Raw[0] = 0x7cccc87b7d1a8a02, r1Raw[1] = 0xe78e93168a545998, r1Raw[2] = 0x212ce2976a38743a, r1Raw[3] = 0xf0b040d88874d8e3, r1Raw[4] = 0xefb157c4c5e5eac4, r1Raw[5] = 0x19232508f982a561, r1Raw[6] = 0x97b1b8262edb74d4, r1Raw[7] = 0x480a891fd5b0d16d, r1Raw[8] = 0x36cea2b81b5736de, r1Raw[9] = 0xfe416c11f81ba301, r1Raw[10] = 0x33ab06631a8d31cf, r1Raw[11] = 0xd07a29f4571eab3a, r1Raw[12] = 0x6e0aa34c3ab911b7, r1Raw[13] = 0x86abb8edac2901a2, r1Raw[14] = 0x64781e0982e21094, r1Raw[15] = 0x1b18872f7feda33d, r1Raw[16] = 0x34754565596a082b, r1Raw[17] = 0x8ba27f6ce12a26f5, r1Raw[18] = 0xf72f54c2067f53df, r1Raw[19] = 0x0036d86c19b4fe6a, r1Raw[20] = 0x7b0d9195be9e6796, r1Raw[21] = 0x45aba8a65f5e0515, r1Raw[22] = 0x800b825e01f6ca1b, r1Raw[23] = 0x4e66cf0968b3f3f0, r1Raw[24] = 0x766e4ae16df9169f, r1Raw[25] = 0xc1e064bd7432690b, r1Raw[26] = 0x8ba49588112edfc7, r1Raw[27] = 0xe87436decb595588, r1Raw[28] = 0xd95fd46eec6b5a35, r1Raw[29] = 0xb94dffe3987751ee, r1Raw[30] = 0x0ba19c9d6d0a542f, r1Raw[31] = 0xd08ae0bf29a29b68, r1Raw[32] = 0x25103ba0bd6a1eaa, r1Raw[33] = 0x3568503f1bd4042c, r1Raw[34] = 0x9dec6240b8b026cb, r1Raw[35] = 0x94cc6903f55b0fae, r1Raw[36] = 0xcc7837ee5ac00b80, r1Raw[37] = 0xa37fe324ade45b7a, r1Raw[38] = 0xd45278239475cfa1, r1Raw[39] = 0x090664bb384930fd, r1Raw[40] = 0x19e9c53011da834a, r1Raw[41] = 0x74cc56bf2070ca6d, r1Raw[42] = 0xa22e1e976c50cd7c, r1Raw[43] = 0x49010b091827112e, r1Raw[44] = 0xbde8c95be5d8aaf8, r1Raw[45] = 0x61c19aee9d21498f, r1Raw[46] = 0x0847f8cf527ef7e4, r1Raw[47] = 0x43d8150d21d4da3f, r1Raw[48] = 0xb7b2ab4f699c55c7, r1Raw[49] = 0x42ec20cd8a05171a, r1Raw[50] = 0x2b031637bd2e77ac, r1Raw[51] = 0x2dbac6cb14e190c6, r1Raw[52] = 0xd40e162cd1f50aa9, r1Raw[53] = 0xeb4dbb1865f4e614, r1Raw[54] = 0x0b2c50e3766a3e4c, r1Raw[55] = 0xbd93b4c3d122523d, r1Raw[56] = 0x7a183e38a4cddcf5, r1Raw[57] = 0x920e7fa97aa442fe, r1Raw[58] = 0x45e23c06851d9ba8, r1Raw[59] = 0x00cb5f135bbc1fcb, r1Raw[60] = 0x20e6027c584e841a, r1Raw[61] = 0xc582de2444835eb9, r1Raw[62] = 0xc1e51f461e44d5ca, r1Raw[63] = 0x5fe7f4efdfbd4f97;

    // ACT
    uint4096 c0 = a0 * b0;
    uint4096 c1 = a1 * b1;

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
}


/* BigInteger Modulus Tests */

TEST(BigIntegerArithmeticTests, Modulus128By128Bit) {
    // ARRANGE
    uint128 a0;
    uint128 b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x00706d79a4a66f5f, a0Raw[1] = 0x1c273383d04925e4;
    b0Raw[0] = 0xd0ecc45c5e453ca9, b0Raw[1] = 0x89781049e241deda;
    r0Raw[0] = 0x00706d79a4a66f5f, r0Raw[1] = 0x1c273383d04925e4;

    uint128 a1;
    uint128 b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0x43c73b52f5f53008, a1Raw[1] = 0x78befd4ca7a26e2;
    b1Raw[0] = 0x99688f9e4e347728, b1Raw[1] = 0x58c3ebc18c792bd2;
    r1Raw[0] = 0x43c73b52f5f53008, r1Raw[1] = 0x78befd4ca7a26e2;

    // ACT
    uint128 c0 = a0 % b0;
    uint128 c1 = a1 % b1;

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
}

TEST(BigIntegerArithmeticTests, Modulus256By128Bit) {
    // ARRANGE
    uint256 a0;
    uint128 b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x9a905356efa68c26, a0Raw[1] = 0xe4e1745e2a37b7f9, a0Raw[2] = 0x9c2878f9e0e9ac1a, a0Raw[3] = 0xb8e892f15c02e761;
    b0Raw[0] = 0x237e3efaa2e63ce3, b0Raw[1] = 0xe2dc3adedbf57ba;
    r0Raw[0] = 0xf12acea773ba0a46, r0Raw[1] = 0x74d90b88794de7b;

    uint256 a1;
    uint128 b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0xa1af9a9c7d7a8a71, a1Raw[1] = 0xc4976721364a19c6, a1Raw[2] = 0x5d1ab65a82fcfeff, a1Raw[3] = 0x1470becd83174dab;
    b1Raw[0] = 0x168268f11cd5d971, b1Raw[1] = 0x5776d8ecc7145036;
    r1Raw[0] = 0xde59db79fbdae5b5, r1Raw[1] = 0x79076eaf217f47;

    // ACT
    uint128 c0 = a0 % b0;
    uint128 c1 = a1 % b1;

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
}

TEST(BigIntegerArithmeticTests, Modulus256By256Bit) {
    // ARRANGE
    uint256 a0;
    uint256 b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x51bfde0a977d1aed, a0Raw[1] = 0xa201c58cae09d01b, a0Raw[2] = 0x387f307e0f337c7d, a0Raw[3] = 0x6b1c231f762388e4;
    b0Raw[0] = 0x60f94c325cec7b7c, b0Raw[1] = 0x092e299fe9cdf6cc, b0Raw[2] = 0x2ebc5f68ce258204, b0Raw[3] = 0x3d7a0a31d8322385;
    r0Raw[0] = 0xf0c691d83a909f71, r0Raw[1] = 0x98d39becc43bd94e, r0Raw[2] = 0x09c2d115410dfa79, r0Raw[3] = 0x2da218ed9df1655f;

    uint256 a1;
    uint256 b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0xf019612b1a3bc5a4, a1Raw[1] = 0xa4ee57c59940bc70, a1Raw[2] = 0x79a9c552bf6388c4, a1Raw[3] = 0x602c85ee6999e465;
    b1Raw[0] = 0xdbb62115367e019f, b1Raw[1] = 0xa5765a7f159e4046, b1Raw[2] = 0x9440ffa5846f1a4c, b1Raw[3] = 0xf6bdc4fc4e25b9d;
    r1Raw[0] = 0xc9d49aabd347bbea, r1Raw[1] = 0xc42838cb178b3ac7, r1Raw[2] = 0x0023c771a4c8eaf8, r1Raw[3] = 0x3a55c0fcc4bbeb4;

    // ACT
    uint256 c0 = a0 % b0;
    uint256 c1 = a1 % b1;

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
}

TEST(BigIntegerArithmeticTests, Modulus512By128Bit) {
    // ARRANGE
    uint512 a0;
    uint128 b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0xb9046a9838e32791, a0Raw[1] = 0xbad737a03f4edfa1, a0Raw[2] = 0x7a550c05dbb3a863, a0Raw[3] = 0xdf2c1b7271eb577e, a0Raw[4] = 0x6e85637e3eb0ba96, a0Raw[5] = 0x171f7daa63be676b, a0Raw[6] = 0xe59acf60218c3af2, a0Raw[7] = 0xf10dcc01b5d0b804;
    b0Raw[0] = 0x58a732a0f2019558, b0Raw[1] = 0xce1cdbe566509f8f;
    r0Raw[0] = 0xa0c8ded4804d90b9, r0Raw[1] = 0x506d10967d6bcce9;

    uint512 a1;
    uint128 b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0xbcacfa07f5ccb5d3, a1Raw[1] = 0x625cddced733145e, a1Raw[2] = 0x20bc8a77520f5aaa, a1Raw[3] = 0xbed66d329c21b17b, a1Raw[4] = 0xf8bb50920a643783, a1Raw[5] = 0xe978a4b4b4c059cf, a1Raw[6] = 0x78fb764fa5acd80d, a1Raw[7] = 0x51fb8c9582158fc6;
    b1Raw[0] = 0xdbfe4426d81d4be9, b1Raw[1] = 0xb2de4f3777a0ed85;
    r1Raw[0] = 0x95b3db7244ffd4e4, r1Raw[1] = 0x223021530e78ca16;

    // ACT
    uint128 c0 = a0 % b0;
    uint128 c1 = a1 % b1;

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
}

TEST(BigIntegerArithmeticTests, Modulus512By256Bit) {
    // ARRANGE
    uint512 a0;
    uint256 b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x5521fb2f6af5f9ca, a0Raw[1] = 0xe5b85ef5905741f0, a0Raw[2] = 0x4646a54ff0f33fad, a0Raw[3] = 0xc71cf309929ad3b9, a0Raw[4] = 0xda086858b5e11ea0, a0Raw[5] = 0xd98a6fc4b37f3d9d, a0Raw[6] = 0x8a1f1b6bad4f3c34, a0Raw[7] = 0xc1eb6180e73c861;
    b0Raw[0] = 0x82d28e82395be42b, b0Raw[1] = 0xcb60cf2cf256c680, b0Raw[2] = 0x02c1224ba1abb826, b0Raw[3] = 0x8c47a5388fd89d38;
    r0Raw[0] = 0xae1fe771670f9853, r0Raw[1] = 0xa72b53bb52399039, r0Raw[2] = 0x3123397e37882479, r0Raw[3] = 0x62ee1994caa6d667;

    uint512 a1;
    uint256 b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0x420a83601b388be8, a1Raw[1] = 0xc7defa338878c414, a1Raw[2] = 0x13ecfa641abebb5d, a1Raw[3] = 0x456e145ead3e0904, a1Raw[4] = 0x35af969e66a29a4d, a1Raw[5] = 0x69f14da898307a36, a1Raw[6] = 0x911cf0f38e94b4ad, a1Raw[7] = 0xfae3854d3d43247c;
    b1Raw[0] = 0xf501ccebea4929e1, b1Raw[1] = 0x2dbc79d58b98e29c, b1Raw[2] = 0x28ac46f49bad12f3, b1Raw[3] = 0x541bdf608e7ae511;
    r1Raw[0] = 0x79840fda3f935eb1, r1Raw[1] = 0xde70411043bad568, r1Raw[2] = 0xe39bc60edaa6d2aa, r1Raw[3] = 0x3957f8b2badfbe5a;

    // ACT
    uint256 c0 = a0 % b0;
    uint256 c1 = a1 % b1;

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
}

TEST(BigIntegerArithmeticTests, Modulus512By512Bit) {
    // ARRANGE
    uint512 a0;
    uint512 b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0xa17491e6645428c0, a0Raw[1] = 0x900345653749bd88, a0Raw[2] = 0xc71d585df1ed61d8, a0Raw[3] = 0x949783197f7142af, a0Raw[4] = 0xac98387c99aa635c, a0Raw[5] = 0x9c065461e6661524, a0Raw[6] = 0x85cc54d3b9a9929f, a0Raw[7] = 0xa0cc919bc2476d10;
    b0Raw[0] = 0x16fb2f8d80362e34, b0Raw[1] = 0x9109803bb7bfc3c6, b0Raw[2] = 0xc2268c7de51147ca, b0Raw[3] = 0xe85ad6fb943293fc, b0Raw[4] = 0x29b65651f2e378c6, b0Raw[5] = 0xf29915a5212bec96, b0Raw[6] = 0x6841c52c1cad9c09, b0Raw[7] = 0xdc37f9504706bb71;
    r0Raw[0] = 0xa17491e6645428c0, r0Raw[1] = 0x900345653749bd88, r0Raw[2] = 0xc71d585df1ed61d8, r0Raw[3] = 0x949783197f7142af, r0Raw[4] = 0xac98387c99aa635c, r0Raw[5] = 0x9c065461e6661524, r0Raw[6] = 0x85cc54d3b9a9929f, r0Raw[7] = 0xa0cc919bc2476d10;

    uint512 a1;
    uint512 b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0xe6422c16c1aa0d48, a1Raw[1] = 0x5efd98676dc777fc, a1Raw[2] = 0xa03d65c86f96a28a, a1Raw[3] = 0x1f3fed2f75d4a1d2, a1Raw[4] = 0x4a6535a0d4ad43aa, a1Raw[5] = 0xe4635875c26f9515, a1Raw[6] = 0xf16be82be8a59c42, a1Raw[7] = 0xc4e66d620db8ed72;
    b1Raw[0] = 0x13a42716319f139c, b1Raw[1] = 0x3113c0a38a122367, b1Raw[2] = 0x38a8fe5827aaabc4, b1Raw[3] = 0xd658560e36b338b2, b1Raw[4] = 0xc85cfc0f713c5e03, b1Raw[5] = 0x37f21961595ee325, b1Raw[6] = 0xb823d3735fad398a, b1Raw[7] = 0x5f66b6a895aae225;
    r1Raw[0] = 0xbef9ddea5e6be610, r1Raw[1] = 0xfcd6172059a3312e, r1Raw[2] = 0x2eeb691820414b01, r1Raw[3] = 0x728f4113086e306e, r1Raw[4] = 0xb9ab3d81f23487a2, r1Raw[5] = 0x747f25b30fb1cec9, r1Raw[6] = 0x81244145294b292e, r1Raw[7] = 0x6190010e2632927;

    // ACT
    uint512 c0 = a0 % b0;
    uint512 c1 = a1 % b1;

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
}

TEST(BigIntegerArithmeticTests, Modulus1024By128Bit) {
    // ARRANGE
    uint1024 a0;
    uint128 b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x6a52426bbf2f3fa4, a0Raw[1] = 0x257aec8974e0f108, a0Raw[2] = 0x935f6f78e5d3ec47, a0Raw[3] = 0xd27f381bf51e6ee4, a0Raw[4] = 0xa632118404b07e27, a0Raw[5] = 0x2e52c85303d6ff1a, a0Raw[6] = 0xdc1ad1d6b86f49c2, a0Raw[7] = 0xe32474cefe9647c5, a0Raw[8] = 0xf2207dca48d8e01c, a0Raw[9] = 0xc3496b30e80dee54, a0Raw[10] = 0xa62b5a66b138f2ab, a0Raw[11] = 0x04664cd11c3c82e7, a0Raw[12] = 0x985c2f9e179f983d, a0Raw[13] = 0xb65b368866fb804c, a0Raw[14] = 0x6aec82cc716df129, a0Raw[15] = 0x4ce6a8bfe1fb942d;
    b0Raw[0] = 0x8af4701ae3a63656, b0Raw[1] = 0x66e267acc5d47e62;
    r0Raw[0] = 0xd0863e27d14c5e06, r0Raw[1] = 0x28920267649aed3c;

    uint1024 a1;
    uint128 b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0x2bcaca175efa036d, a1Raw[1] = 0x45b21381beae44da, a1Raw[2] = 0xf7dc3bb6c4c606f5, a1Raw[3] = 0xc9f4c8a5e90d18e9, a1Raw[4] = 0xe0f11cde4a0b6812, a1Raw[5] = 0x09bc5990e2e4cd82, a1Raw[6] = 0x56f079f509b603a7, a1Raw[7] = 0x69360570084fb1c4, a1Raw[8] = 0xef59ead0dada5f33, a1Raw[9] = 0x623a4bd30f98cbab, a1Raw[10] = 0x55e2d14431447cd5, a1Raw[11] = 0x2588a3fd3ffed831, a1Raw[12] = 0xe1ababdf6abc298e, a1Raw[13] = 0xf947aa66edf400f7, a1Raw[14] = 0x3445248ce84de843, a1Raw[15] = 0xf51dc7ef63fa4090;
    b1Raw[0] = 0x2ae2f66f843238b1, b1Raw[1] = 0x31975e1086e7ccf7;
    r1Raw[0] = 0xa641ff77796a2505, r1Raw[1] = 0x261a5c91f433b8e8;

    // ACT
    uint128 c0 = a0 % b0;
    uint128 c1 = a1 % b1;

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
}

TEST(BigIntegerArithmeticTests, Modulus1024By256Bit) {
    // ARRANGE
    uint1024 a0;
    uint256 b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x144311033c70b903, a0Raw[1] = 0xbed0cbb2d925f4d3, a0Raw[2] = 0xea5ae10b771fb53a, a0Raw[3] = 0xc4fe270e4936ff27, a0Raw[4] = 0xf82e5670e09e66c9, a0Raw[5] = 0xe3ac652430fb5f8a, a0Raw[6] = 0xf16f63e00ee207cb, a0Raw[7] = 0x55d1d973d3523630, a0Raw[8] = 0x28bb006728274441, a0Raw[9] = 0xf73bdd0ca7fbf54e, a0Raw[10] = 0x21db79c8a759378b, a0Raw[11] = 0x81d0ef36967e5148, a0Raw[12] = 0xbb6052e8844032a1, a0Raw[13] = 0x210980f7893c4aad, a0Raw[14] = 0x3888998ef067912a, a0Raw[15] = 0x622c56249e1b26d4;
    b0Raw[0] = 0x625a89707519994a, b0Raw[1] = 0x43e9643120dd40c2, b0Raw[2] = 0x78bb4d0e5d8861d1, b0Raw[3] = 0xc94eec8ce60086e;
    r0Raw[0] = 0xf4a3b31816e44893, r0Raw[1] = 0x7adf08d305d966bf, r0Raw[2] = 0x90bf704f6e261469, r0Raw[3] = 0xbd3a9a06ae0fcb5;

    uint1024 a1;
    uint256 b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0x866ab6c0e8b04ff0, a1Raw[1] = 0x8c957fac1f33a56e, a1Raw[2] = 0xaa8ec16b35678171, a1Raw[3] = 0x4ed778676dfcae5e, a1Raw[4] = 0x79dc32da7051adad, a1Raw[5] = 0x9ba49d1d49086ed4, a1Raw[6] = 0x7773c360788c7eaf, a1Raw[7] = 0x4560c42d5cb0dfd8, a1Raw[8] = 0x913624cc3083238b, a1Raw[9] = 0x91cd4dbc6c64f50f, a1Raw[10] = 0x103663aae8ecf286, a1Raw[11] = 0x5ffaea1b1569d671, a1Raw[12] = 0x82e66be8478ef809, a1Raw[13] = 0x529c23644e560013, a1Raw[14] = 0xef8595cd231e3436, a1Raw[15] = 0x97a3ef825b906ce1;
    b1Raw[0] = 0x69fdc119ab8c5682, b1Raw[1] = 0xff4dff9ed878b972, b1Raw[2] = 0x294ff99d620f4735, b1Raw[3] = 0xc631d11a1a2c22a7;
    r1Raw[0] = 0xfc2aae2aa7db4694, r1Raw[1] = 0xc31dd0e9f5915e3a, r1Raw[2] = 0x2dd91a69c68efa8d, r1Raw[3] = 0x3e1ccbd43665b2d0;

    // ACT
    uint256 c0 = a0 % b0;
    uint256 c1 = a1 % b1;

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
}

TEST(BigIntegerArithmeticTests, Modulus1024By512Bit) {
    // ARRANGE
    uint1024 a0;
    uint512 b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x7901b1ce248e5641, a0Raw[1] = 0x7205d7b33d89e77c, a0Raw[2] = 0x81406eb78ec8bda1, a0Raw[3] = 0x5d31081126ae9873, a0Raw[4] = 0x39459844f6bc06ec, a0Raw[5] = 0x195ff635687ccb8a, a0Raw[6] = 0x44113f4c907ffccb, a0Raw[7] = 0x00c71b7f1702d128, a0Raw[8] = 0x29f7d87d8f8bd9fe, a0Raw[9] = 0x4aace7b7ce4baeb9, a0Raw[10] = 0xe9f2265de41b911f, a0Raw[11] = 0xa9f1a6c01430285e, a0Raw[12] = 0x3dde8fc66dd737bd, a0Raw[13] = 0x7363059be2d90549, a0Raw[14] = 0x3fcdd92696f17c2d, a0Raw[15] = 0x5cdbe34b9d9e5935;
    b0Raw[0] = 0xaa373a5a806d4200, b0Raw[1] = 0xeec66c3b0b51cfce, b0Raw[2] = 0x08460961683d1dae, b0Raw[3] = 0x1eacdb341203d497, b0Raw[4] = 0xf004a90cb71f8d02, b0Raw[5] = 0x9850f41665124989, b0Raw[6] = 0x5340f5af33335150, b0Raw[7] = 0xcbb3e27e2af2b655;
    r0Raw[0] = 0x122ed64269e72e41, r0Raw[1] = 0xaa0b1c7ad71e8585, r0Raw[2] = 0x76d4c807c8776a36, r0Raw[3] = 0xfcebf2751f978eaa, r0Raw[4] = 0x1d0ab8cf461e2d04, r0Raw[5] = 0x8cb7fcb6ffec0bb5, r0Raw[6] = 0xf349104b7c761bf2, r0Raw[7] = 0x2f690ecad99f4279;

    uint1024 a1;
    uint512 b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0x60ab14af8ed49721, a1Raw[1] = 0x06e49eda92d144b3, a1Raw[2] = 0x0ad1ec2e7617c43a, a1Raw[3] = 0xbe3f5cd620098f4b, a1Raw[4] = 0x4c29313ea7ccb113, a1Raw[5] = 0xcf935b3928d9f678, a1Raw[6] = 0x8271b77d914f8a3c, a1Raw[7] = 0x20fe36cd3fd6e5d0, a1Raw[8] = 0x58a1223760d23975, a1Raw[9] = 0x9b308fdc8ae25d47, a1Raw[10] = 0x0e9d6670a453e578, a1Raw[11] = 0x2e001003f774976d, a1Raw[12] = 0xa02c2dfc6757d0dc, a1Raw[13] = 0x34b51a14eb8344e3, a1Raw[14] = 0x170699ae0bb61dbd, a1Raw[15] = 0xb8b6ef22ca26a2d3;
    b1Raw[0] = 0x61c986282d4ee93f, b1Raw[1] = 0x81abb86bb4de2413, b1Raw[2] = 0x1f3f7981f1c35575, b1Raw[3] = 0x37a5b877f32e3e70, b1Raw[4] = 0xb00d99b9bdde82e8, b1Raw[5] = 0x40ee8432dbb708b7, b1Raw[6] = 0xfab17110f30e961f, b1Raw[7] = 0xf0bd4a9b68c0c1e8;
    r1Raw[0] = 0xfa72c05767418f06, r1Raw[1] = 0x1c019dd40a797664, r1Raw[2] = 0xdf090ec80995fa79, r1Raw[3] = 0x6aa769d75b376048, r1Raw[4] = 0xd844ff7915d20634, r1Raw[5] = 0xf94dbdf08a658dfd, r1Raw[6] = 0xca9af11e543269fd, r1Raw[7] = 0xa4a72576e624b8f8;

    // ACT
    uint512 c0 = a0 % b0;
    uint512 c1 = a1 % b1;

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
}

TEST(BigIntegerArithmeticTests, Modulus1024By1024Bit) {
    // ARRANGE
    uint1024 a0;
    uint1024 b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0xb7cfd2fcd97cf744, a0Raw[1] = 0xdc9370ec445ecd3f, a0Raw[2] = 0x265b9562c6e11ab4, a0Raw[3] = 0xfecf35a59a2ef083, a0Raw[4] = 0x39b6034cfa6e1e9d, a0Raw[5] = 0x0dbfb08cb39f56fb, a0Raw[6] = 0xefd3d7335a12e4b4, a0Raw[7] = 0x32b415e7c08795e4, a0Raw[8] = 0xdeef5b83a6628f92, a0Raw[9] = 0xd5bf71dc06758a7c, a0Raw[10] = 0xdf06bcd906758d59, a0Raw[11] = 0x93f4fec768602fce, a0Raw[12] = 0x4ac5b81673df2a08, a0Raw[13] = 0xba4c447682476d8c, a0Raw[14] = 0xaf15a5c9266ae0be, a0Raw[15] = 0xc21b49b9f6980287;
    b0Raw[0] = 0x77ecd591a973ac14, b0Raw[1] = 0x1153b8523e718606, b0Raw[2] = 0x161113fcc4680080, b0Raw[3] = 0x3b92456029ec573a, b0Raw[4] = 0x749d18cad305e27f, b0Raw[5] = 0x41321ce17606507b, b0Raw[6] = 0xbbe5d18870c231ff, b0Raw[7] = 0xa1e0d6a5363f6fae, b0Raw[8] = 0x045dc99c549e77bb, b0Raw[9] = 0x26f9dbeee81186ea, b0Raw[10] = 0x1908e949b1719ed1, b0Raw[11] = 0x3a5bfd68f890588a, b0Raw[12] = 0x1a88376af534cb26, b0Raw[13] = 0xb232b9712f467946, b0Raw[14] = 0x4c646f697a664d4e, b0Raw[15] = 0xc81912071857754a;
    r0Raw[0] = 0xb7cfd2fcd97cf744, r0Raw[1] = 0xdc9370ec445ecd3f, r0Raw[2] = 0x265b9562c6e11ab4, r0Raw[3] = 0xfecf35a59a2ef083, r0Raw[4] = 0x39b6034cfa6e1e9d, r0Raw[5] = 0x0dbfb08cb39f56fb, r0Raw[6] = 0xefd3d7335a12e4b4, r0Raw[7] = 0x32b415e7c08795e4, r0Raw[8] = 0xdeef5b83a6628f92, r0Raw[9] = 0xd5bf71dc06758a7c, r0Raw[10] = 0xdf06bcd906758d59, r0Raw[11] = 0x93f4fec768602fce, r0Raw[12] = 0x4ac5b81673df2a08, r0Raw[13] = 0xba4c447682476d8c, r0Raw[14] = 0xaf15a5c9266ae0be, r0Raw[15] = 0xc21b49b9f6980287;

    uint1024 a1;
    uint1024 b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0xa8748dfd9aece8c3, a1Raw[1] = 0xbbab710f87e361a0, a1Raw[2] = 0x4b80956493f62237, a1Raw[3] = 0x9ddf4393e17d02b4, a1Raw[4] = 0x92e0ba337d280e2e, a1Raw[5] = 0xe5539fe7074f692b, a1Raw[6] = 0x04723143b2bdd46b, a1Raw[7] = 0x090aa2a550fb29c3, a1Raw[8] = 0x5938f354bf6d132f, a1Raw[9] = 0x9e7bf34161896d4f, a1Raw[10] = 0x0114d6f133c876f7, a1Raw[11] = 0x9967ec8f51af2421, a1Raw[12] = 0xe9de859ef4ed75d5, a1Raw[13] = 0x81c2623d86792f4a, a1Raw[14] = 0x6a21bf30af65ecb6, a1Raw[15] = 0x8eac6dbab0fc2a5f;
    b1Raw[0] = 0x0bce7a83c4da16e9, b1Raw[1] = 0xc4025c34ee05b36f, b1Raw[2] = 0xc0c1b524ad56b641, b1Raw[3] = 0x22c5f091aa744e3f, b1Raw[4] = 0x3fe765096af57b10, b1Raw[5] = 0x3bf4fcf7070b13f6, b1Raw[6] = 0xb3bfe3bc55c46959, b1Raw[7] = 0x673f4650a6fbe713, b1Raw[8] = 0x2ef21fa50ca5e32e, b1Raw[9] = 0x66d20ce603ace87d, b1Raw[10] = 0x8438f8ee78af617a, b1Raw[11] = 0x447e2d9078d731b0, b1Raw[12] = 0xa14c68947500c883, b1Raw[13] = 0xb3195e5731e5787c, b1Raw[14] = 0x57567ca21a46a42e, b1Raw[15] = 0x13aaa52ffedc2ad3;
    r1Raw[0] = 0x55cf346338f64864, r1Raw[1] = 0x5f9aeb9d05bb7997, r1Raw[2] = 0x0634a163d697266b, r1Raw[3] = 0xaa75af98384edef6, r1Raw[4] = 0xd38cf6f19071b0bd, r1Raw[5] = 0x41a0b525d601dd6f, r1Raw[6] = 0x1a32f71d5a5ef2fb, r1Raw[7] = 0x364fb670c017d839, r1Raw[8] = 0x109a15d166e3dcea, r1Raw[9] = 0xcebd98f747cf11e3, r1Raw[10] = 0x6386086be6fccc9e, r1Raw[11] = 0xb9f4ad9c03ccc84d, r1Raw[12] = 0x80c7a98fc1e7fa3e, r1Raw[13] = 0x9c10cddb2932e3e2, r1Raw[14] = 0x06c456c1f7776f6f, r1Raw[15] = 0x501e96ab8f6fe98;

    // ACT
    uint1024 c0 = a0 % b0;
    uint1024 c1 = a1 % b1;

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
}

TEST(BigIntegerArithmeticTests, Modulus2048By128Bit) {
    // ARRANGE
    uint2048 a0;
    uint128 b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x7fcc60bc6a2492fd, a0Raw[1] = 0xe4d18c6b8bd998d8, a0Raw[2] = 0x0419e4d6b8d2a047, a0Raw[3] = 0x3c41a3147022ea8e, a0Raw[4] = 0xdf285322eb9573a7, a0Raw[5] = 0xa89f7c58b7a2848c, a0Raw[6] = 0x6d5246d760956ae8, a0Raw[7] = 0xa93ba18f95828ba0, a0Raw[8] = 0xd85dc5446f19fb2b, a0Raw[9] = 0x46054ca089972e4c, a0Raw[10] = 0x28eaa0303f15d749, a0Raw[11] = 0xb7632e70dc6876c0, a0Raw[12] = 0x4b9d49b448516b08, a0Raw[13] = 0x46ed77c20ca1958f, a0Raw[14] = 0x59bdbec35dea6972, a0Raw[15] = 0x0b3efbb6311f3b9c, a0Raw[16] = 0x133d872c9936b827, a0Raw[17] = 0xa845bd47690f03a1, a0Raw[18] = 0x3d856163217e924a, a0Raw[19] = 0xa5276084509f2696, a0Raw[20] = 0x95982bc12b4bc369, a0Raw[21] = 0xa4aa0e690708c308, a0Raw[22] = 0x8d26d2ea104161a9, a0Raw[23] = 0xde8f0d65cf48ed3e, a0Raw[24] = 0x1a757d0f1ee47ad2, a0Raw[25] = 0x0651a9ef90e28f9f, a0Raw[26] = 0x0926d81b0b5a9c55, a0Raw[27] = 0xfb499d4c9d6bc97e, a0Raw[28] = 0x6c34a23c01c3262a, a0Raw[29] = 0x9185972e9c86c716, a0Raw[30] = 0xe274b2561b250854, a0Raw[31] = 0x72d6a40463041056;
    b0Raw[0] = 0xcef2111b9c997ff4, b0Raw[1] = 0x88d3fd50e46a680d;
    r0Raw[0] = 0xabfce19c4851cb99, r0Raw[1] = 0x648454591083ac88;

    uint2048 a1;
    uint128 b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0x0d5ad2c2d867597e, a1Raw[1] = 0x31629b108c9f59e9, a1Raw[2] = 0xd23122a519fa836a, a1Raw[3] = 0xc9943ad6d9582b51, a1Raw[4] = 0x2adf99d69c0d37e0, a1Raw[5] = 0x17c175ad6392cd5c, a1Raw[6] = 0x6221be6662d55347, a1Raw[7] = 0x331b3bb03f191b78, a1Raw[8] = 0x756fe98f2c841467, a1Raw[9] = 0xb3fe748f8d661ef7, a1Raw[10] = 0xa323363ebd953583, a1Raw[11] = 0xfb1b94e98a27a73c, a1Raw[12] = 0xff20aa5d03f477a3, a1Raw[13] = 0x858079200dc1c4d3, a1Raw[14] = 0x7e2c0004f041a653, a1Raw[15] = 0xf9142959f5cf1d1c, a1Raw[16] = 0xb210ad3b8960b56b, a1Raw[17] = 0xe43f46ac46aa704d, a1Raw[18] = 0x3d2cd485f93ad456, a1Raw[19] = 0x11f538bab2d4a048, a1Raw[20] = 0xdd8d54a8077d0f16, a1Raw[21] = 0x4cee9a4a085439ab, a1Raw[22] = 0xf02088d05aa0d77d, a1Raw[23] = 0xf44e835db548b55e, a1Raw[24] = 0xf275e171475a66ab, a1Raw[25] = 0xd3ea23a96422a351, a1Raw[26] = 0xe6b2e24113d35c3c, a1Raw[27] = 0x883e92554cba7564, a1Raw[28] = 0x986bf6a299789bcc, a1Raw[29] = 0x714c2095f2508095, a1Raw[30] = 0x7a103fe34540ba4b, a1Raw[31] = 0xe6e269d55054b6a7;
    b1Raw[0] = 0x352bf66380ee3642, b1Raw[1] = 0xff5de749f173a7ad;
    r1Raw[0] = 0x71d86417ac1f7302, r1Raw[1] = 0x7b328e2ecf55dc59;

    // ACT
    uint128 c0 = a0 % b0;
    uint128 c1 = a1 % b1;

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
}

TEST(BigIntegerArithmeticTests, Modulus2048By256Bit) {
    // ARRANGE
    uint2048 a0;
    uint256 b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x036d9c9fe5f69278, a0Raw[1] = 0x4aae53c7ae07bc20, a0Raw[2] = 0x6c668f4e8bef9a65, a0Raw[3] = 0x12e7942f9f46d5d2, a0Raw[4] = 0xff022d477918eab6, a0Raw[5] = 0x5bd1ffe4647e1bb2, a0Raw[6] = 0xfd411aaf8eb10868, a0Raw[7] = 0xb15051ea2070daf1, a0Raw[8] = 0xb8670809b5e9658f, a0Raw[9] = 0x0c657b9c3c48657d, a0Raw[10] = 0xec198a90bad95853, a0Raw[11] = 0xccfa175a2f1b42e7, a0Raw[12] = 0x9c53356fbaac6107, a0Raw[13] = 0x17a4cc139326ac44, a0Raw[14] = 0xf1773090386b897e, a0Raw[15] = 0xde877659b9367d7a, a0Raw[16] = 0x41c0b10811f516c5, a0Raw[17] = 0x6fceb48c913f28d1, a0Raw[18] = 0x6b02e2558c290ad5, a0Raw[19] = 0xfec446837b86449c, a0Raw[20] = 0xee6f8646483220b9, a0Raw[21] = 0xa380b8bfa5a673f0, a0Raw[22] = 0xc3778819c21f9814, a0Raw[23] = 0x883c13b63b941bca, a0Raw[24] = 0xa207e4c3011d3328, a0Raw[25] = 0x9999d8eaa4752026, a0Raw[26] = 0xa7ff7fb64be1bcba, a0Raw[27] = 0xf274c82aa2281acc, a0Raw[28] = 0xf18710347d913f4a, a0Raw[29] = 0xa1ca7e16b355f5a3, a0Raw[30] = 0x1731fe0ab601a371, a0Raw[31] = 0x68e85da6b5b23ed7;
    b0Raw[0] = 0x800d27e7690c23ea, b0Raw[1] = 0xcab549ef093b16e1, b0Raw[2] = 0xfc539d8fd1f53531, b0Raw[3] = 0xbf603942e3d53628;
    r0Raw[0] = 0x76a225817b3085b0, r0Raw[1] = 0x1ce2c416a46542d7, r0Raw[2] = 0xa3856e39a3d67a98, r0Raw[3] = 0xa868b9bcc2ad82a0;

    uint2048 a1;
    uint256 b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0xf7554b9f287b003a, a1Raw[1] = 0x34d86342fd621cd1, a1Raw[2] = 0xb085fb263c384f3b, a1Raw[3] = 0x1a0e68c8757983ef, a1Raw[4] = 0xb95a8ba07160f680, a1Raw[5] = 0x0494a84422001cfd, a1Raw[6] = 0x4a3af89448910a8b, a1Raw[7] = 0xd2807974b642db39, a1Raw[8] = 0x26d0b993b5c44a31, a1Raw[9] = 0x93594335e092f725, a1Raw[10] = 0xbbf3ed854f41c3c4, a1Raw[11] = 0x1984e7a1e71736cc, a1Raw[12] = 0x1c57dfc01031fcb9, a1Raw[13] = 0x706e135a48d50480, a1Raw[14] = 0x002abe9e8d7c1b66, a1Raw[15] = 0xb9a08ebf97753ef8, a1Raw[16] = 0x2fc3309e79cff802, a1Raw[17] = 0x3213ffd12494b1a7, a1Raw[18] = 0x24c35db3809cb85f, a1Raw[19] = 0x0809f16f83bc17ee, a1Raw[20] = 0x3479c1417679d1f4, a1Raw[21] = 0xab7932c16a4ec1dd, a1Raw[22] = 0x5c5e3ec149f833ea, a1Raw[23] = 0xfa2ad6380bd0a6db, a1Raw[24] = 0x3e0f4ba1cca70234, a1Raw[25] = 0x2424401d3bd3c816, a1Raw[26] = 0xbb69d361caa12710, a1Raw[27] = 0x9695779cce1831b7, a1Raw[28] = 0x79b45c67508a03c1, a1Raw[29] = 0xc50a6df62bc6ee82, a1Raw[30] = 0x7c84940716c7ae77, a1Raw[31] = 0x61d68760eaf94228;
    b1Raw[0] = 0xfdfb9ea1b0079138, b1Raw[1] = 0x95ef30a64877a14a, b1Raw[2] = 0x04f4045e4e5016f4, b1Raw[3] = 0xb0808ad8d9f76863;
    r1Raw[0] = 0x14366fa32d81441a, r1Raw[1] = 0x469ab7b99fe39d06, r1Raw[2] = 0x5d7388107dac5828, r1Raw[3] = 0x4c7f08fa2c6bb0c9;

    // ACT
    uint256 c0 = a0 % b0;
    uint256 c1 = a1 % b1;

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
}

TEST(BigIntegerArithmeticTests, Modulus2048By512Bit) {
    // ARRANGE
    uint2048 a0;
    uint512 b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x9805827f2e9a3195, a0Raw[1] = 0x647d1103263fc23e, a0Raw[2] = 0x620351f78c26cd7a, a0Raw[3] = 0xe259968c55e56b32, a0Raw[4] = 0x01b4bda75aa3798d, a0Raw[5] = 0xae5160298658b140, a0Raw[6] = 0xe00c66aa3d783228, a0Raw[7] = 0x3b2ecd11096d4840, a0Raw[8] = 0x7fe889e2bbd0724a, a0Raw[9] = 0x31aba0688d85ef12, a0Raw[10] = 0x90d10ca167c4ae8c, a0Raw[11] = 0xd718aa6705e714cf, a0Raw[12] = 0x1f5ee974ecfc4080, a0Raw[13] = 0xf201a518bf8d687e, a0Raw[14] = 0xe6e1a021b7274f1b, a0Raw[15] = 0xb7c191900aaac7e3, a0Raw[16] = 0xc74f60b227a9d134, a0Raw[17] = 0x2207c52317ec6e95, a0Raw[18] = 0xa947683ab11c956f, a0Raw[19] = 0x8aaaa27d84a84cd1, a0Raw[20] = 0x72feec9aa6e961be, a0Raw[21] = 0xbb4d9534ed9274f8, a0Raw[22] = 0x520be7eeb61ae031, a0Raw[23] = 0x6120c4b939216d93, a0Raw[24] = 0xb9c50e8a6bb1eb52, a0Raw[25] = 0x1ea66539f98d0b68, a0Raw[26] = 0xc8332155d91924fc, a0Raw[27] = 0xdebb70fb6cf822b3, a0Raw[28] = 0xfba32a9bf2e587e3, a0Raw[29] = 0x35b4f23b6a9554d1, a0Raw[30] = 0x97247e130c9e6c8f, a0Raw[31] = 0x4375cb964c161b0b;
    b0Raw[0] = 0x7ccc005030488424, b0Raw[1] = 0xdab8e7752def2ce0, b0Raw[2] = 0x91550fbb1a4818ed, b0Raw[3] = 0x1b62fd710cf7c317, b0Raw[4] = 0x53181b4453081024, b0Raw[5] = 0x03c201ed3e7ec82a, b0Raw[6] = 0x0d2c4cd9d31bde95, b0Raw[7] = 0xd89fa4c3c547d35a;
    r0Raw[0] = 0xb31a3572535887c9, r0Raw[1] = 0xfe7d1289b4a9d1f1, r0Raw[2] = 0x01e210dd051a14f5, r0Raw[3] = 0xed3b81ad2d7f6544, r0Raw[4] = 0x9673f764c2130885, r0Raw[5] = 0x8c9e7b0443b36f22, r0Raw[6] = 0xba01b495db980ffb, r0Raw[7] = 0x76b6354e5218cb39;

    uint2048 a1;
    uint512 b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0x19379c926bfd11df, a1Raw[1] = 0xd6fa1075d91193f8, a1Raw[2] = 0x22fb339e52481fa2, a1Raw[3] = 0xd6feaad897d7c742, a1Raw[4] = 0xe256f617a4a3370d, a1Raw[5] = 0x488cacf9e29eac00, a1Raw[6] = 0x6f4982eba848b761, a1Raw[7] = 0x143c6fbd5c8da7df, a1Raw[8] = 0x574da29330fde9a0, a1Raw[9] = 0x34d4012884b438f1, a1Raw[10] = 0x841fd7e50bf0f65a, a1Raw[11] = 0x0f1694c29a971fce, a1Raw[12] = 0xc6312367f13a6d57, a1Raw[13] = 0xc9e78f149d8b8c60, a1Raw[14] = 0x811782a470a25f37, a1Raw[15] = 0x27a724149f89ec45, a1Raw[16] = 0x4959fd490f0c95c1, a1Raw[17] = 0x5d586dd925fe3f1b, a1Raw[18] = 0xbba1d359fb277377, a1Raw[19] = 0xe2a7bd357970acf9, a1Raw[20] = 0x612949c1a3c224ce, a1Raw[21] = 0x1aef57906f1b49fb, a1Raw[22] = 0xcab4be83f0796bc2, a1Raw[23] = 0x96ee3249c773bde9, a1Raw[24] = 0xc8ab3f5c9286000f, a1Raw[25] = 0xb0491bb6e5051ad0, a1Raw[26] = 0x08bfb3ecbbfeb6cc, a1Raw[27] = 0xb4734af697f5e6ec, a1Raw[28] = 0xf9ca9c35ecba83c8, a1Raw[29] = 0x6b945c5f4f52b5c2, a1Raw[30] = 0x7f27ffe611ace529, a1Raw[31] = 0x5c0fd4883e1de648;
    b1Raw[0] = 0x337cab8acdff34d6, b1Raw[1] = 0xe749ca30a083bd75, b1Raw[2] = 0xd5848b88d4d9348f, b1Raw[3] = 0x5e562c4c2ccab008, b1Raw[4] = 0x92dfd70b37dff75e, b1Raw[5] = 0x05dde8e696686d14, b1Raw[6] = 0x8509c7dc55698121, b1Raw[7] = 0xf01ef3493bee14e5;
    r1Raw[0] = 0xdeca40772bf850cd, r1Raw[1] = 0x3d13ce486b8bca79, r1Raw[2] = 0x246fcb564d2b29b5, r1Raw[3] = 0x80fd6938b8b471f1, r1Raw[4] = 0x3ffcbd4ee3cd0de2, r1Raw[5] = 0x4d7c630da15d4c05, r1Raw[6] = 0x5c86e5bf0555a8fc, r1Raw[7] = 0x4c8879067dc4ea0b;

    // ACT
    uint512 c0 = a0 % b0;
    uint512 c1 = a1 % b1;

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
}

TEST(BigIntegerArithmeticTests, Modulus2048By1024Bit) {
    // ARRANGE
    uint2048 a0;
    uint1024 b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0xfcfcfa665d5af236, a0Raw[1] = 0xdf986826c512e6d1, a0Raw[2] = 0x50f4968923551da1, a0Raw[3] = 0x534871dd79759dc8, a0Raw[4] = 0xcee7b1c7d1d50dc2, a0Raw[5] = 0x6e898475daecc7c8, a0Raw[6] = 0xc22cfbeaade829d4, a0Raw[7] = 0xeb3cf16c514812ce, a0Raw[8] = 0xaf1606818e4bfbba, a0Raw[9] = 0x76acd9033584cbe1, a0Raw[10] = 0x3d4aa650a6b0666d, a0Raw[11] = 0x99e14d5ac3a02e4b, a0Raw[12] = 0xf0af947e692ae043, a0Raw[13] = 0xf5460de05ff5bc64, a0Raw[14] = 0x359aafc11c6275f8, a0Raw[15] = 0x8100af5e2bff8304, a0Raw[16] = 0x049a724e75a602e9, a0Raw[17] = 0x7bc8c0a0d4fec294, a0Raw[18] = 0x03170b535cd76990, a0Raw[19] = 0xd70e0e2cc895a422, a0Raw[20] = 0xa3ae2daff7e32088, a0Raw[21] = 0xb35146d9df8bd293, a0Raw[22] = 0x4b08e97e3aacae91, a0Raw[23] = 0xd896343d8e323442, a0Raw[24] = 0xa8c3d3fb1d913d02, a0Raw[25] = 0xa8945245f8d609f2, a0Raw[26] = 0x751e3c8e43a95b9a, a0Raw[27] = 0x43f16e799b24a6c1, a0Raw[28] = 0x2301bef5652542e7, a0Raw[29] = 0xd971eb96fd547e6a, a0Raw[30] = 0xc8166666d8ceacdc, a0Raw[31] = 0x2532107111cc435e;
    b0Raw[0] = 0x5268c055e7b70e2c, b0Raw[1] = 0x6815ea67e7071270, b0Raw[2] = 0x484d99045d55ed42, b0Raw[3] = 0x5b454d16c673ec94, b0Raw[4] = 0x041080a31e6b3444, b0Raw[5] = 0x001825884b0dfcf8, b0Raw[6] = 0xa5cc8e375314b81e, b0Raw[7] = 0x73f9ffd5fc884ed3, b0Raw[8] = 0x066e881d8f877c81, b0Raw[9] = 0x7dce42dfa2168fd9, b0Raw[10] = 0x7c0dcf4cd77bb686, b0Raw[11] = 0x38e4d68c21cba182, b0Raw[12] = 0x259da0d8850176fe, b0Raw[13] = 0xac46ce3cf50dd248, b0Raw[14] = 0xc839647a78f9c3f4, b0Raw[15] = 0x210e39ef61df7384;
    r0Raw[0] = 0x6fe331728d54abf2, r0Raw[1] = 0x111639bbef0cbcba, r0Raw[2] = 0x5ede9d69d5c58fc8, r0Raw[3] = 0x0c003b9e947822b0, r0Raw[4] = 0x6f0a1158dd9cded0, r0Raw[5] = 0x95ee047b7a65562b, r0Raw[6] = 0xfe469658d2386cf1, r0Raw[7] = 0x23e7658fbcbae110, r0Raw[8] = 0x20b04ca24f06e4dc, r0Raw[9] = 0xf3d51d44b509e6f9, r0Raw[10] = 0xc1ca599d5662234e, r0Raw[11] = 0xdd3af45ea380c2d9, r0Raw[12] = 0xe76057be6afff9b9, r0Raw[13] = 0xc0377886f21ddd05, r0Raw[14] = 0x9d14a77ebddac047, r0Raw[15] = 0x123f4fc236d16d3a;

    uint2048 a1;
    uint1024 b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0x0a66fe03371c639e, a1Raw[1] = 0x2d036469f2b6aa36, a1Raw[2] = 0x39bda37d0d333df8, a1Raw[3] = 0x0d0060945db8c01f, a1Raw[4] = 0x57da560930c786a3, a1Raw[5] = 0xe1ebd89f81d4539a, a1Raw[6] = 0xba803b8671301d8b, a1Raw[7] = 0x3bd681b1643bc6c3, a1Raw[8] = 0x6ba7b3232183b965, a1Raw[9] = 0x1b2bff790e620165, a1Raw[10] = 0xfc67e328ac97a505, a1Raw[11] = 0x105827b2b714e6c4, a1Raw[12] = 0x8c6447ddd7812116, a1Raw[13] = 0x865d0dd3523f3a2f, a1Raw[14] = 0x84dec0285c13e3a5, a1Raw[15] = 0x8dbeef9cf0a4514c, a1Raw[16] = 0x0993186500f841a0, a1Raw[17] = 0xb739ba6b79866e42, a1Raw[18] = 0x2f2ccc3f30ed7a9a, a1Raw[19] = 0xdd96b15ac29ec03a, a1Raw[20] = 0xc9c0e2a7fde44b43, a1Raw[21] = 0x35794ef0c4c28930, a1Raw[22] = 0x8fa7b96eb92e5671, a1Raw[23] = 0xbbd74abb27c7fa74, a1Raw[24] = 0xb284a7fccba23726, a1Raw[25] = 0x69f9d60e8af2ded6, a1Raw[26] = 0x87198f7a1c5983b1, a1Raw[27] = 0xc385e61b7b570fe9, a1Raw[28] = 0x2b50b1f4ac9a02a4, a1Raw[29] = 0x5096097da57379f9, a1Raw[30] = 0xf2e9f13dc34dc746, a1Raw[31] = 0x84c1f14cb63f89cb;
    b1Raw[0] = 0xf8867c92215f0ef7, b1Raw[1] = 0xa66939d3209d13ff, b1Raw[2] = 0x0af88a2132c8d1f8, b1Raw[3] = 0xe573c7949611e168, b1Raw[4] = 0xb800400fbcfb3eb2, b1Raw[5] = 0x94b80c31ff51cfd3, b1Raw[6] = 0xa7d2160c66405677, b1Raw[7] = 0xab4a739ac1cf7ea1, b1Raw[8] = 0xb92d578d28e039cf, b1Raw[9] = 0x868e836b6b079d2d, b1Raw[10] = 0xaaa04b01a113f7dd, b1Raw[11] = 0x1446e0b42100a1cf, b1Raw[12] = 0x118aa5df700c5c3a, b1Raw[13] = 0x5c7c3afb5925289b, b1Raw[14] = 0x3a75a896ead5140c, b1Raw[15] = 0xac2d71106b663005;
    r1Raw[0] = 0x8360e6e15ffb43ac, r1Raw[1] = 0xbe5e8c4b3241f3ed, r1Raw[2] = 0xff11ba8a3e53c1c7, r1Raw[3] = 0x1726833ec5dad5b7, r1Raw[4] = 0x5bb409a1ec5ca895, r1Raw[5] = 0x163fab5eb2f0b0f0, r1Raw[6] = 0xd42f72da0d1d4bb3, r1Raw[7] = 0x61ca6117ee27dfb5, r1Raw[8] = 0x39b9dcb5e1f2a361, r1Raw[9] = 0xfa02b6732ecc054f, r1Raw[10] = 0xc40542d8fc83bf8c, r1Raw[11] = 0xc9aa817d570a0a8f, r1Raw[12] = 0xc8d811b89ffbd4f7, r1Raw[13] = 0x73d3cadc75578894, r1Raw[14] = 0xaa090e9a1f77f25a, r1Raw[15] = 0x6276207805c6a77a;

    // ACT
    uint1024 c0 = a0 % b0;
    uint1024 c1 = a1 % b1;

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
}

TEST(BigIntegerArithmeticTests, Modulus2048By2048Bit) {
    // ARRANGE
    uint2048 a0;
    uint2048 b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x304075c789aff253, a0Raw[1] = 0xd0579e3513ad6a46, a0Raw[2] = 0x0e9056bb4c2e3b25, a0Raw[3] = 0x66047cf0a34b8fb4, a0Raw[4] = 0xfdb6e6ffc2037c08, a0Raw[5] = 0xdc3f4b98c5f2ea09, a0Raw[6] = 0x7e162dd773e2c58c, a0Raw[7] = 0xb64e5bf6cedd6da0, a0Raw[8] = 0x7a7be37f9a8953d6, a0Raw[9] = 0x1d64feffb2f5b248, a0Raw[10] = 0x4e25b32c34a19d72, a0Raw[11] = 0xaede34172859a5cd, a0Raw[12] = 0x5a8ee6ead0486345, a0Raw[13] = 0xe68bc50709a695c9, a0Raw[14] = 0xb5385b5b8f2bfefc, a0Raw[15] = 0xbd4a018a2d1bf968, a0Raw[16] = 0x87ce42409f147f30, a0Raw[17] = 0x7c0b5c263ac8376f, a0Raw[18] = 0xc7e97d537c71aee6, a0Raw[19] = 0xa4d56783014750ae, a0Raw[20] = 0x3664a12f507b9caa, a0Raw[21] = 0x96ca9643fea4b003, a0Raw[22] = 0xed04486f97d7814b, a0Raw[23] = 0xe9b3156151c36214, a0Raw[24] = 0x21dcf95300c0c0f5, a0Raw[25] = 0xe85d5ce84269f9f7, a0Raw[26] = 0x1954287be1aaece7, a0Raw[27] = 0x225f2b73c5f30cf6, a0Raw[28] = 0x1f244a877d4311ba, a0Raw[29] = 0x12bd7052840f1726, a0Raw[30] = 0x3b68e98e42c420f8, a0Raw[31] = 0x6012819237e5e98b;
    b0Raw[0] = 0x99454f4bffdc4c27, b0Raw[1] = 0xd20906602821707f, b0Raw[2] = 0x2b5953a138afceec, b0Raw[3] = 0x86f51ad97a079a5b, b0Raw[4] = 0xc5970ed2b3c4158f, b0Raw[5] = 0xa6bf33b5aae58910, b0Raw[6] = 0x50e93451b3008a75, b0Raw[7] = 0xd44277cb22f7f999, b0Raw[8] = 0xc5a65997f641c156, b0Raw[9] = 0xaf9ddca9056a1b15, b0Raw[10] = 0xc669ea991d36ccee, b0Raw[11] = 0x575af52a7258be71, b0Raw[12] = 0x97914983e2fcaeaf, b0Raw[13] = 0x8f097a4f1b0ca6a4, b0Raw[14] = 0x3dbf15d9c666182c, b0Raw[15] = 0x2dc57fe566cf1ff9, b0Raw[16] = 0xfa784fc638f9dd80, b0Raw[17] = 0x723b87306ec69672, b0Raw[18] = 0x9cc264c3fca4e8fe, b0Raw[19] = 0x20ea32ab615791b9, b0Raw[20] = 0x14d1b0fc923b6af5, b0Raw[21] = 0x5ed23864e4dab380, b0Raw[22] = 0x7f1f2463b5672536, b0Raw[23] = 0xc4da083106c75bdf, b0Raw[24] = 0xe74fd9c24d044ee2, b0Raw[25] = 0x323f0d719f6c9f60, b0Raw[26] = 0xc3ba02a035367903, b0Raw[27] = 0x6f1f9b7a4d0c2a91, b0Raw[28] = 0xffc1dbb814b5f093, b0Raw[29] = 0xc12931fec78b749a, b0Raw[30] = 0x89d8b509271c89b5, b0Raw[31] = 0xb6d2c23dede758db;
    r0Raw[0] = 0x304075c789aff253, r0Raw[1] = 0xd0579e3513ad6a46, r0Raw[2] = 0x0e9056bb4c2e3b25, r0Raw[3] = 0x66047cf0a34b8fb4, r0Raw[4] = 0xfdb6e6ffc2037c08, r0Raw[5] = 0xdc3f4b98c5f2ea09, r0Raw[6] = 0x7e162dd773e2c58c, r0Raw[7] = 0xb64e5bf6cedd6da0, r0Raw[8] = 0x7a7be37f9a8953d6, r0Raw[9] = 0x1d64feffb2f5b248, r0Raw[10] = 0x4e25b32c34a19d72, r0Raw[11] = 0xaede34172859a5cd, r0Raw[12] = 0x5a8ee6ead0486345, r0Raw[13] = 0xe68bc50709a695c9, r0Raw[14] = 0xb5385b5b8f2bfefc, r0Raw[15] = 0xbd4a018a2d1bf968, r0Raw[16] = 0x87ce42409f147f30, r0Raw[17] = 0x7c0b5c263ac8376f, r0Raw[18] = 0xc7e97d537c71aee6, r0Raw[19] = 0xa4d56783014750ae, r0Raw[20] = 0x3664a12f507b9caa, r0Raw[21] = 0x96ca9643fea4b003, r0Raw[22] = 0xed04486f97d7814b, r0Raw[23] = 0xe9b3156151c36214, r0Raw[24] = 0x21dcf95300c0c0f5, r0Raw[25] = 0xe85d5ce84269f9f7, r0Raw[26] = 0x1954287be1aaece7, r0Raw[27] = 0x225f2b73c5f30cf6, r0Raw[28] = 0x1f244a877d4311ba, r0Raw[29] = 0x12bd7052840f1726, r0Raw[30] = 0x3b68e98e42c420f8, r0Raw[31] = 0x6012819237e5e98b;

    uint2048 a1;
    uint2048 b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0xc50bed3a83b5df85, a1Raw[1] = 0x81d49f3b6372b23a, a1Raw[2] = 0x224e7736b671dd5b, a1Raw[3] = 0x63a1c8ca039ec58c, a1Raw[4] = 0x8594d1536935c0eb, a1Raw[5] = 0xeee2742d81b7bebb, a1Raw[6] = 0x581cc88436285bcc, a1Raw[7] = 0x1191b05488447f94, a1Raw[8] = 0x80ccaa3938d1ba62, a1Raw[9] = 0xd7117d316d84d33e, a1Raw[10] = 0x0ff77fe2308a2413, a1Raw[11] = 0x9b1785c678efd24c, a1Raw[12] = 0x465bbdccc240377f, a1Raw[13] = 0x1dcd42273af260cb, a1Raw[14] = 0x126b5bd32db04a57, a1Raw[15] = 0x4a1af5cba8e14014, a1Raw[16] = 0xbb2793bc270c4f7e, a1Raw[17] = 0x22d5b330414e0539, a1Raw[18] = 0x5aaa526eee707e89, a1Raw[19] = 0xe4bb1d22883b3915, a1Raw[20] = 0x9a6f31e8c2773184, a1Raw[21] = 0x8c4234ada17b8e2d, a1Raw[22] = 0x5db539c71cbdd643, a1Raw[23] = 0x3d5bc43817329154, a1Raw[24] = 0xbd9aecafb4e12f00, a1Raw[25] = 0x8eca1e33c5e1bb1b, a1Raw[26] = 0x25baec6a4d70ed7f, a1Raw[27] = 0x2d4feb667a087740, a1Raw[28] = 0x3ea25327ca853a26, a1Raw[29] = 0x5d6c78bd9df05fe3, a1Raw[30] = 0x3a3ed1a54dd8979e, a1Raw[31] = 0x6721520f04e205f6;
    b1Raw[0] = 0x44f9b0de81ca1b52, b1Raw[1] = 0x7018c23ce473ad7e, b1Raw[2] = 0xef7f8d7c36342090, b1Raw[3] = 0xa2ab160cd64f008c, b1Raw[4] = 0x2300b8e0c1107cb9, b1Raw[5] = 0x17a873ecf0391e81, b1Raw[6] = 0x763d305ad7521558, b1Raw[7] = 0xd7f2a9a4428f7ea1, b1Raw[8] = 0xc41e77442c5feaed, b1Raw[9] = 0x90b6a15a429a7355, b1Raw[10] = 0xe0ee9adbfbe7bcf2, b1Raw[11] = 0x1d16255ed890e4b9, b1Raw[12] = 0x09bd744ed30b3928, b1Raw[13] = 0x9535d153e87ef0e0, b1Raw[14] = 0xa902836d1a42c2d7, b1Raw[15] = 0x0e398752087fd0a5, b1Raw[16] = 0xede4add744e929ea, b1Raw[17] = 0x2fcd2729177ccee7, b1Raw[18] = 0x442ce12abcf1dc97, b1Raw[19] = 0x4fa21c1eea01b066, b1Raw[20] = 0xcbbb8598b41b45fa, b1Raw[21] = 0xb0d0f202edd86711, b1Raw[22] = 0x769b6a53520a7644, b1Raw[23] = 0x8f62ab93c240d86b, b1Raw[24] = 0x39cdc76afc20da7d, b1Raw[25] = 0xf25962c1499db1d7, b1Raw[26] = 0x4ff6cb87b46569a3, b1Raw[27] = 0x45cbd7214cec163b, b1Raw[28] = 0xc4518a5f283617bb, b1Raw[29] = 0xfdd002f2d15a5fe1, b1Raw[30] = 0x05705d7726922a2d, b1Raw[31] = 0xdb3f56a0594cc32f;
    r1Raw[0] = 0xc50bed3a83b5df85, r1Raw[1] = 0x81d49f3b6372b23a, r1Raw[2] = 0x224e7736b671dd5b, r1Raw[3] = 0x63a1c8ca039ec58c, r1Raw[4] = 0x8594d1536935c0eb, r1Raw[5] = 0xeee2742d81b7bebb, r1Raw[6] = 0x581cc88436285bcc, r1Raw[7] = 0x1191b05488447f94, r1Raw[8] = 0x80ccaa3938d1ba62, r1Raw[9] = 0xd7117d316d84d33e, r1Raw[10] = 0x0ff77fe2308a2413, r1Raw[11] = 0x9b1785c678efd24c, r1Raw[12] = 0x465bbdccc240377f, r1Raw[13] = 0x1dcd42273af260cb, r1Raw[14] = 0x126b5bd32db04a57, r1Raw[15] = 0x4a1af5cba8e14014, r1Raw[16] = 0xbb2793bc270c4f7e, r1Raw[17] = 0x22d5b330414e0539, r1Raw[18] = 0x5aaa526eee707e89, r1Raw[19] = 0xe4bb1d22883b3915, r1Raw[20] = 0x9a6f31e8c2773184, r1Raw[21] = 0x8c4234ada17b8e2d, r1Raw[22] = 0x5db539c71cbdd643, r1Raw[23] = 0x3d5bc43817329154, r1Raw[24] = 0xbd9aecafb4e12f00, r1Raw[25] = 0x8eca1e33c5e1bb1b, r1Raw[26] = 0x25baec6a4d70ed7f, r1Raw[27] = 0x2d4feb667a087740, r1Raw[28] = 0x3ea25327ca853a26, r1Raw[29] = 0x5d6c78bd9df05fe3, r1Raw[30] = 0x3a3ed1a54dd8979e, r1Raw[31] = 0x6721520f04e205f6;

    // ACT
    uint2048 c0 = a0 % b0;
    uint2048 c1 = a1 % b1;

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
}

TEST(BigIntegerArithmeticTests, Modulus4096By128Bit) {
    // ARRANGE
    uint4096 a0;
    uint128 b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x80d11a40847be976, a0Raw[1] = 0xb42a5f8d52c72f48, a0Raw[2] = 0x516c7a3a28057949, a0Raw[3] = 0x9d55305d70403eac, a0Raw[4] = 0xdef53a11bd4b98c5, a0Raw[5] = 0x5fe179a7d5cc81e0, a0Raw[6] = 0xa1bb09e7cff935ae, a0Raw[7] = 0xc4991ee63d03bce8, a0Raw[8] = 0x454c800d7ccd9b53, a0Raw[9] = 0x79ffa934133fc247, a0Raw[10] = 0xbe8d6149b7a81f04, a0Raw[11] = 0x93e26926458eb9c3, a0Raw[12] = 0x50894447a538b34f, a0Raw[13] = 0x3b4177f0090339fd, a0Raw[14] = 0xc2f5491935484d6e, a0Raw[15] = 0x8592d3733d72b5eb, a0Raw[16] = 0x35588ccdfd69cd36, a0Raw[17] = 0xe5395ee97cbd25d3, a0Raw[18] = 0x776cb90b3883253d, a0Raw[19] = 0x39f335de6d5622f5, a0Raw[20] = 0x95aefed4fb2ac1eb, a0Raw[21] = 0x21ac90076b796cbf, a0Raw[22] = 0xeb67e92bd05fa366, a0Raw[23] = 0xa1ff7a7aefe93a2c, a0Raw[24] = 0xdcd20913e2bf835d, a0Raw[25] = 0x8a9579e38a8096e2, a0Raw[26] = 0x3bb48a87a1b66f1e, a0Raw[27] = 0x5ebaf8e6372e81a7, a0Raw[28] = 0x428aa28daea78f5c, a0Raw[29] = 0xe4f1b47db2fe9b9d, a0Raw[30] = 0xd35457d715d6f008, a0Raw[31] = 0x0c2a143caa4a332f, a0Raw[32] = 0x51770d00f74ac3cb, a0Raw[33] = 0x134f63683d4b02e5, a0Raw[34] = 0xb867559c0e37a5e4, a0Raw[35] = 0xa5c077999e0ae47c, a0Raw[36] = 0x71ea62a90ea2faa1, a0Raw[37] = 0x21ad384272ef4820, a0Raw[38] = 0xe8d4be5763360a14, a0Raw[39] = 0x4e160686a6080a2d, a0Raw[40] = 0x7ee1792940155fbd, a0Raw[41] = 0xecdcf33895d8ca1a, a0Raw[42] = 0x5db1c082e5a2c192, a0Raw[43] = 0xe662959134b9cb60, a0Raw[44] = 0x0b5d9ee3ac138936, a0Raw[45] = 0x71f6c7a4f81eb47c, a0Raw[46] = 0x3e5e195f9b77f233, a0Raw[47] = 0x27ad248fdddb0a2a, a0Raw[48] = 0x37de5bada63667a0, a0Raw[49] = 0x061eff44f1a56fc5, a0Raw[50] = 0x7dab41a9884d3104, a0Raw[51] = 0xe8ef04ab44812f55, a0Raw[52] = 0xa3ef2a2dfa90cb52, a0Raw[53] = 0x39613561457f466c, a0Raw[54] = 0xdbeefd9db6f3f25a, a0Raw[55] = 0xf20785cf766d2f69, a0Raw[56] = 0xa659b59e4da55096, a0Raw[57] = 0xb2afa96b3cee3e8a, a0Raw[58] = 0x1d1220804c20ae36, a0Raw[59] = 0x571bc3823a0a4690, a0Raw[60] = 0xf07712e08e21b921, a0Raw[61] = 0xc10ea55c152b1a23, a0Raw[62] = 0x19f9e1f9f6be2842, a0Raw[63] = 0x868edaf555001b1b;
    b0Raw[0] = 0x659640eb82bcffe1, b0Raw[1] = 0xcc6df8698e2166da;
    r0Raw[0] = 0x25f1f9de0ef4113c, r0Raw[1] = 0xfaf3615892b74a1;

    uint4096 a1;
    uint128 b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0x4aa22269b5445038, a1Raw[1] = 0xa5d93169d7716bf5, a1Raw[2] = 0x67a338587832e0bf, a1Raw[3] = 0x816dce54e90f2285, a1Raw[4] = 0xc0066cdaec402eac, a1Raw[5] = 0x1410efe731565096, a1Raw[6] = 0x093c5315f099e380, a1Raw[7] = 0x163d975f0dac39d4, a1Raw[8] = 0x5654591ef6588b5f, a1Raw[9] = 0x919b03f39e9bf678, a1Raw[10] = 0x541eeda17afaf44e, a1Raw[11] = 0x417820051b2639a6, a1Raw[12] = 0x5ff282adaf599ccb, a1Raw[13] = 0x1c31eeaec19faaf0, a1Raw[14] = 0xb9bae891b1b423b4, a1Raw[15] = 0xf340f8370932252f, a1Raw[16] = 0x507710ca83946719, a1Raw[17] = 0x9901b0cdc3f8102c, a1Raw[18] = 0x1e4553a4f8b323e3, a1Raw[19] = 0x3a7eec0b33e7449b, a1Raw[20] = 0x07f540fbb3d074dd, a1Raw[21] = 0xcd6e9c8d0ad3b5c5, a1Raw[22] = 0x28a5384f97109222, a1Raw[23] = 0x53c32eb64cf5431f, a1Raw[24] = 0x3d14afbff77bbb1c, a1Raw[25] = 0x1d56060691157051, a1Raw[26] = 0xe6431141e349767b, a1Raw[27] = 0x54287cb28e4a93d6, a1Raw[28] = 0xfcf3d8e82320bbe6, a1Raw[29] = 0x7bc654d22607b3e4, a1Raw[30] = 0x1d0e065da70f96e4, a1Raw[31] = 0x3602e26a5c969a67, a1Raw[32] = 0xdeacc7c5e23a8f68, a1Raw[33] = 0x4e154a7bf66ca1d6, a1Raw[34] = 0x6c31524f036cde61, a1Raw[35] = 0x362404bc56ba0595, a1Raw[36] = 0x881c7b39e687339d, a1Raw[37] = 0xaea156da86bf0e71, a1Raw[38] = 0xc3a044ee4e5eea77, a1Raw[39] = 0x8b6b1d03df6e1553, a1Raw[40] = 0xaa5961738cc6ef96, a1Raw[41] = 0x603bd161fceb631c, a1Raw[42] = 0x91c8088bfd953110, a1Raw[43] = 0xccf820f29bac2db5, a1Raw[44] = 0xf2c8d9e10323edc2, a1Raw[45] = 0x926a6246733effa7, a1Raw[46] = 0x273e74bfbab49bf9, a1Raw[47] = 0x3c0fdbe2297ccda0, a1Raw[48] = 0x144eaadfcf1d124d, a1Raw[49] = 0x2382da69521cfb54, a1Raw[50] = 0xa61929996c70aa1b, a1Raw[51] = 0x581eef33bb57e492, a1Raw[52] = 0x404c1b12fdb0330a, a1Raw[53] = 0xd96a2c48a52a1714, a1Raw[54] = 0xddfc3bd26244d053, a1Raw[55] = 0x8ac59c43b686f378, a1Raw[56] = 0xde9844f8ecf28768, a1Raw[57] = 0x527945f407e81a52, a1Raw[58] = 0x8a0e16b8a7bd306c, a1Raw[59] = 0x92935eee92ef2570, a1Raw[60] = 0x579ae14fdf3c6251, a1Raw[61] = 0x890bdc275e71cf57, a1Raw[62] = 0xf6e408cf91a8be2a, a1Raw[63] = 0x89d80d87bd10830b;
    b1Raw[0] = 0xb8afb396d7e59e46, b1Raw[1] = 0x12b26bc7d8106dba;
    r1Raw[0] = 0x14a41dd4802ff3ea, r1Raw[1] = 0xa05426ad10525ac;

    // ACT
    uint128 c0 = a0 % b0;
    uint128 c1 = a1 % b1;

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
}

TEST(BigIntegerArithmeticTests, Modulus4096By256Bit) {
    // ARRANGE
    uint4096 a0;
    uint256 b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x8a330dbe252b131e, a0Raw[1] = 0x1b14ed29178f83bf, a0Raw[2] = 0x07ac351bc89944e9, a0Raw[3] = 0x897fa97d6691dd48, a0Raw[4] = 0xb20615af234c3ca0, a0Raw[5] = 0x757eee723344bb0f, a0Raw[6] = 0x3d9b338b5328dea1, a0Raw[7] = 0xbf7e1a59468234d2, a0Raw[8] = 0xf55e315303e9493e, a0Raw[9] = 0x65d1c2c1ba21e29a, a0Raw[10] = 0x94fe13b4fa5ce92d, a0Raw[11] = 0xa39a3c2e47aee736, a0Raw[12] = 0x1bbca2580a09ed4c, a0Raw[13] = 0x69c842e317fbfc6b, a0Raw[14] = 0xaccba7929fc2af6b, a0Raw[15] = 0x5772c113b00f6fd1, a0Raw[16] = 0x139635f5c229eda2, a0Raw[17] = 0x1fa7660b414e0fcd, a0Raw[18] = 0xc3ac0969c54ca500, a0Raw[19] = 0xc2348c6a1a49e658, a0Raw[20] = 0x594d52c39b270a87, a0Raw[21] = 0x15d7b4a70a3d6de8, a0Raw[22] = 0x410ba3e9514ee0f9, a0Raw[23] = 0x577af6bada6458ef, a0Raw[24] = 0x9c03a7fb80114186, a0Raw[25] = 0xa7ae66d81fd96243, a0Raw[26] = 0x6d3b953592131252, a0Raw[27] = 0x7c976bd426b07ba8, a0Raw[28] = 0xe9d6e33417da2350, a0Raw[29] = 0x4f3a350426d23a17, a0Raw[30] = 0xfad59fffffe8df87, a0Raw[31] = 0xf69445590c10243e, a0Raw[32] = 0x13e830f15baa6546, a0Raw[33] = 0x5e9730b7c9274cb9, a0Raw[34] = 0x7483332520b957f6, a0Raw[35] = 0x30cf4ac34350cd97, a0Raw[36] = 0x3aad86db9c0ce2b2, a0Raw[37] = 0x406b04221b672c4f, a0Raw[38] = 0x0f2b4808bda659a3, a0Raw[39] = 0x9492ae58036fba0e, a0Raw[40] = 0x7fe3389fc16fa203, a0Raw[41] = 0x6732cc000806c4a2, a0Raw[42] = 0x39fd89dbddbc6992, a0Raw[43] = 0x815e210254360d48, a0Raw[44] = 0x7ad6e6ef61b38866, a0Raw[45] = 0x9397166e97acf8d5, a0Raw[46] = 0x884347e42af9f14c, a0Raw[47] = 0xe1512a36f3b54554, a0Raw[48] = 0xa298f4bbfa4aaf8d, a0Raw[49] = 0x99db07ccbdb5c99a, a0Raw[50] = 0x40a66fe6a8818ee8, a0Raw[51] = 0xdf8d41bc91ca2448, a0Raw[52] = 0x1ac28c7dc0ba7584, a0Raw[53] = 0x6fe04e8cbaa2e0c0, a0Raw[54] = 0x414a0093a98e28b0, a0Raw[55] = 0xa8a6aeaeb967eecc, a0Raw[56] = 0xadaf6992f5d1d394, a0Raw[57] = 0x90d2929a9b82efe0, a0Raw[58] = 0x0af5b78e75681789, a0Raw[59] = 0x3b2549d41a93fec7, a0Raw[60] = 0x16d45482bf5f10ff, a0Raw[61] = 0xd128203ee611a1bc, a0Raw[62] = 0xfffb8c1adb67f7d0, a0Raw[63] = 0xf994f73d8049a8ac;
    b0Raw[0] = 0x915d646deeab2f18, b0Raw[1] = 0xf6243ce2b8127f80, b0Raw[2] = 0x941c4d53a4ca37c1, b0Raw[3] = 0x6f18653273a9884f;
    r0Raw[0] = 0x7767a97727375726, r0Raw[1] = 0x72e7c2fcee528daf, r0Raw[2] = 0x20c76e9bac845244, r0Raw[3] = 0x9a7eb25c562e84b;

    uint4096 a1;
    uint256 b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0xbd7c6cc6a270726c, a1Raw[1] = 0x328e25eccf44a28c, a1Raw[2] = 0x122aa980a6e4883f, a1Raw[3] = 0x7879406d073fe771, a1Raw[4] = 0xa536063a946c8e2a, a1Raw[5] = 0xee45adb2aa3cba05, a1Raw[6] = 0xfbad02c9f58626f6, a1Raw[7] = 0xec9ebb62815c706e, a1Raw[8] = 0x6048a944950c2dbf, a1Raw[9] = 0x015cf6e4d6ce30c8, a1Raw[10] = 0xf0fda56a9f32d88e, a1Raw[11] = 0x046863937d290de6, a1Raw[12] = 0x9f822b733819b174, a1Raw[13] = 0x3dc503e1f129e331, a1Raw[14] = 0x91fce9a25fc14769, a1Raw[15] = 0x84cd2c6750858dad, a1Raw[16] = 0x34816468f801e63b, a1Raw[17] = 0x384f7c4cc9990e86, a1Raw[18] = 0xdb2c750cd7675292, a1Raw[19] = 0xb76f4e6df9aa075f, a1Raw[20] = 0xbddcb0eecc44cfc9, a1Raw[21] = 0x162bd33feade4c52, a1Raw[22] = 0x5aa7f827268f1180, a1Raw[23] = 0x840e42943343b4d2, a1Raw[24] = 0xcad60736496ad9ed, a1Raw[25] = 0x534b78888e32b541, a1Raw[26] = 0x790ef8a2cc8192e0, a1Raw[27] = 0x8f2c4971e04572dd, a1Raw[28] = 0x641c25610a5974d0, a1Raw[29] = 0x8f1ebb569a9f46a0, a1Raw[30] = 0xfc3ff962e1e4988e, a1Raw[31] = 0xd7585fcf2494db33, a1Raw[32] = 0xbe586771d378ed78, a1Raw[33] = 0x032d2dd881a919d4, a1Raw[34] = 0x4ea2cd7a8c05c52c, a1Raw[35] = 0xc67806acf5aff7b4, a1Raw[36] = 0x2c385c1c62efebe8, a1Raw[37] = 0x14f86a5f8f878357, a1Raw[38] = 0xe0de3d4e1e1e67fd, a1Raw[39] = 0xdba6f863c0de67fd, a1Raw[40] = 0x5167c27f0a9f80ef, a1Raw[41] = 0xea760fc0c704ca84, a1Raw[42] = 0xdcf996c9d2dc2b21, a1Raw[43] = 0xfce8b04dd6931f4a, a1Raw[44] = 0x93dc620ac66c4aa3, a1Raw[45] = 0x55703a6ea6d4571d, a1Raw[46] = 0x171c660b32f3dba1, a1Raw[47] = 0x6148d43c9db57bb6, a1Raw[48] = 0x35e942bfab6c67b6, a1Raw[49] = 0xa633aa3312077263, a1Raw[50] = 0x323624a44fa1f557, a1Raw[51] = 0x8a15dc1ad43fa997, a1Raw[52] = 0xf4b7788700e9b606, a1Raw[53] = 0x37b5b8ccecc9892e, a1Raw[54] = 0xd2f9780c475a923d, a1Raw[55] = 0x7435e1645bf003b6, a1Raw[56] = 0x0fa091ab0e26319b, a1Raw[57] = 0x22a772665ad5a884, a1Raw[58] = 0xd7cb8563360d103e, a1Raw[59] = 0x31cdbea6ad8759dc, a1Raw[60] = 0x94b777e562341e70, a1Raw[61] = 0x121ebc91e8333d82, a1Raw[62] = 0xb92a14c99e9b9ecb, a1Raw[63] = 0x63f19557876cd1c3;
    b1Raw[0] = 0x90c098cd9b58c568, b1Raw[1] = 0xd45580a6dafba5bf, b1Raw[2] = 0x341308902c52924c, b1Raw[3] = 0xda5c303a55ac2ee5;
    r1Raw[0] = 0x1c9241805219c644, r1Raw[1] = 0xce2d7299e6cb5a7a, r1Raw[2] = 0x36f53c3f0c61c177, r1Raw[3] = 0x59e74f99f3db7917;

    // ACT
    uint256 c0 = a0 % b0;
    uint256 c1 = a1 % b1;

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
}

TEST(BigIntegerArithmeticTests, Modulus4096By512Bit) {
    // ARRANGE
    uint4096 a0;
    uint512 b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0xe6c4afb73fed69cb, a0Raw[1] = 0xb34ef6d7508101ac, a0Raw[2] = 0xd51cb4551a56b1f5, a0Raw[3] = 0xdf3ce3e49d5ef3ba, a0Raw[4] = 0xd4c4532c208e8a0d, a0Raw[5] = 0x37c20e70a5054934, a0Raw[6] = 0x9890f00783dbdd61, a0Raw[7] = 0x3f07abfa299ea1cd, a0Raw[8] = 0xa95ecf7785791709, a0Raw[9] = 0xe7b0242214dfad97, a0Raw[10] = 0x584081737b4464a8, a0Raw[11] = 0xdccf29a64805ce46, a0Raw[12] = 0xc2e3f15a513ac9e1, a0Raw[13] = 0x68b8a3b636c27b4d, a0Raw[14] = 0x5a8958301bf58544, a0Raw[15] = 0xa7109bcdfc91fd03, a0Raw[16] = 0x16ace335851c307c, a0Raw[17] = 0x61bc8a934c1cdf2c, a0Raw[18] = 0x38c397d78f243860, a0Raw[19] = 0xa404fc3034c3ed19, a0Raw[20] = 0x4773973436b86da4, a0Raw[21] = 0x64882c16047a647c, a0Raw[22] = 0x4fbace1da7ec06aa, a0Raw[23] = 0x569f696c1b96e7f0, a0Raw[24] = 0xc488558930acd42f, a0Raw[25] = 0x553c2e9db8ec2992, a0Raw[26] = 0x708dd26bff6b31f0, a0Raw[27] = 0x53109626bb70f402, a0Raw[28] = 0x516751a4124bed81, a0Raw[29] = 0x409aa692ed83315f, a0Raw[30] = 0xa3ba2d4af8606507, a0Raw[31] = 0xac3ff584766bd5f8, a0Raw[32] = 0x797fcf50b7f78ca1, a0Raw[33] = 0xc44af1532a5e9779, a0Raw[34] = 0x6ae7131f9e6ee279, a0Raw[35] = 0x82af276f46fea6bf, a0Raw[36] = 0x5cc1d0c672a5f073, a0Raw[37] = 0x0f85878ac51eb94d, a0Raw[38] = 0xf2c4bfeaec2e7d08, a0Raw[39] = 0x789029501c65a4ca, a0Raw[40] = 0xbf2a5f61c32f813e, a0Raw[41] = 0x7e1266c580badfd8, a0Raw[42] = 0x49f2c8ec05f6c79c, a0Raw[43] = 0xa566008041905af0, a0Raw[44] = 0x425c006991585ac9, a0Raw[45] = 0xe599c6de09dfc104, a0Raw[46] = 0x8a1630e4c7848307, a0Raw[47] = 0x4a13811567e7ab76, a0Raw[48] = 0x7df185663554b83d, a0Raw[49] = 0xbf7a1534351373e1, a0Raw[50] = 0xe0d5a6732cbe005b, a0Raw[51] = 0x5fa9289a9bcb8caa, a0Raw[52] = 0x511978320620e255, a0Raw[53] = 0x95a8a2508792d47c, a0Raw[54] = 0xc0dd5250414c7dae, a0Raw[55] = 0xe05ec8ae2b35053a, a0Raw[56] = 0xa74ef3cb0a42e46b, a0Raw[57] = 0x7c9639fba52a612c, a0Raw[58] = 0x57bf6b1dd89a5c1a, a0Raw[59] = 0x21e03be8c25fc610, a0Raw[60] = 0x5dc8cb79fdef84ce, a0Raw[61] = 0xa079593046b18bca, a0Raw[62] = 0x5b5cbe455ab4262d, a0Raw[63] = 0xecec549ffa173075;
    b0Raw[0] = 0x5e59e52d452486d6, b0Raw[1] = 0x3bd39c6bfd04afa2, b0Raw[2] = 0xf9ecb012ef23a65b, b0Raw[3] = 0x1f8f38fdb5be5869, b0Raw[4] = 0x66e6fede786bf4de, b0Raw[5] = 0xb347c13bbdcf873a, b0Raw[6] = 0x134f9b2ab7d5c6a1, b0Raw[7] = 0x9adc946a976136ff;
    r0Raw[0] = 0x224667c94f464bb7, r0Raw[1] = 0x0682c10bd2ab1466, r0Raw[2] = 0x15265b265e05b73d, r0Raw[3] = 0xba3e99078befd9b0, r0Raw[4] = 0x90ed2db8e5f297e9, r0Raw[5] = 0xae9b277374b74bf7, r0Raw[6] = 0xa6478e8345d201d8, r0Raw[7] = 0x7f99ece4478a1baa;

    uint4096 a1;
    uint512 b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0x91216956bf3093ae, a1Raw[1] = 0x55100700e912ba1f, a1Raw[2] = 0x2be8708611bb9d35, a1Raw[3] = 0xf8e2d1c96b1c8d61, a1Raw[4] = 0x37149f85c83045b0, a1Raw[5] = 0xaa72ca405835747d, a1Raw[6] = 0x490603bb3122f533, a1Raw[7] = 0x0cd0213d612a003f, a1Raw[8] = 0x91f3b70619f0f632, a1Raw[9] = 0xfd972ba5f2df17c3, a1Raw[10] = 0x7b6cd94c7a4b73cd, a1Raw[11] = 0x02baea1c5cfd77b5, a1Raw[12] = 0x3968680eb150aa25, a1Raw[13] = 0x11906687cb3fc6a6, a1Raw[14] = 0x3a4cd20f60846ede, a1Raw[15] = 0x1dbbd1eed1ff88dd, a1Raw[16] = 0x66b9e46389ba10b5, a1Raw[17] = 0x56a9dc3cb95b5a6a, a1Raw[18] = 0x562dc5f6f5a171f9, a1Raw[19] = 0x6e2c41859621c836, a1Raw[20] = 0xa2b1855dc056f1c2, a1Raw[21] = 0x62a18b6d5ceaf141, a1Raw[22] = 0x83e0cd459d2573a7, a1Raw[23] = 0xad5ce09acacf501c, a1Raw[24] = 0xd09d44fab1f36d08, a1Raw[25] = 0x3bf6204262b7d18d, a1Raw[26] = 0x59c1835bac4b16f8, a1Raw[27] = 0x4e11abf6028fe679, a1Raw[28] = 0x84597f6b53e4728d, a1Raw[29] = 0xaafab5315f75e8f2, a1Raw[30] = 0xb2dcd6385de04fd1, a1Raw[31] = 0x594d49696cf80592, a1Raw[32] = 0x17a5111208a96fd9, a1Raw[33] = 0xe5f47c6647b20cc0, a1Raw[34] = 0x4fc96bef099f7fff, a1Raw[35] = 0xcb3268d834545359, a1Raw[36] = 0xc7197c07af18a1bf, a1Raw[37] = 0xd0377d4c5752b03c, a1Raw[38] = 0x39d246c014e651e4, a1Raw[39] = 0x42ca117a1eff9fd7, a1Raw[40] = 0x3ed7d2bcae51a625, a1Raw[41] = 0x5a5ec636d24448ee, a1Raw[42] = 0x1cf425ef97516e73, a1Raw[43] = 0x707d8fc35d7c1907, a1Raw[44] = 0x776972a6e3ac0789, a1Raw[45] = 0x25b8600d54e9cbe4, a1Raw[46] = 0x09b875298ca8920a, a1Raw[47] = 0x22ea6ac0c1804c16, a1Raw[48] = 0x8143aa9e08c9a215, a1Raw[49] = 0xb5b887041ac62a92, a1Raw[50] = 0x9db19c4ad6f12beb, a1Raw[51] = 0x0037803cee11812b, a1Raw[52] = 0x430e7cae0a52e2fc, a1Raw[53] = 0xc9545f0c9c723dec, a1Raw[54] = 0x7e09ddfe3ce6a945, a1Raw[55] = 0x2d668816e90483c0, a1Raw[56] = 0xbb6a8976c7d97c71, a1Raw[57] = 0x02e796878eae3fdd, a1Raw[58] = 0x543a096f621c505e, a1Raw[59] = 0x89050e88f069c79b, a1Raw[60] = 0x7e68c08c57ab6628, a1Raw[61] = 0xc14853b355802b70, a1Raw[62] = 0x061c607ccb0558b8, a1Raw[63] = 0xfdc257aafcec0351;
    b1Raw[0] = 0x63b4f4b458509c8c, b1Raw[1] = 0xfb84494b36fec5ef, b1Raw[2] = 0x3c38f4ac662524e5, b1Raw[3] = 0x4b6254ab85c1c90e, b1Raw[4] = 0x7078a7457d11f88b, b1Raw[5] = 0x55cd47f6524c9547, b1Raw[6] = 0xbf6bcb40ab5bb8af, b1Raw[7] = 0x2a74a49ff163adee;
    r1Raw[0] = 0xbd0f3af251d88aee, r1Raw[1] = 0x29ce427e15c65fa7, r1Raw[2] = 0x0ae294b665a67eb3, r1Raw[3] = 0x15f92902b82501ba, r1Raw[4] = 0x1f1de2c4a74c108d, r1Raw[5] = 0xe28fbf4a2087b8fa, r1Raw[6] = 0xb19efe789bb9d515, r1Raw[7] = 0x291cd9c9a505afb7;

    // ACT
    uint512 c0 = a0 % b0;
    uint512 c1 = a1 % b1;

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
}

TEST(BigIntegerArithmeticTests, Modulus4096By1024Bit) {
    // ARRANGE
    uint4096 a0;
    uint1024 b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0xd4e5b8a0673324f0, a0Raw[1] = 0xe5a753a6c00fc8a5, a0Raw[2] = 0x283930e3ce19b9db, a0Raw[3] = 0xc54227d489aeb73d, a0Raw[4] = 0xbd158593239a41c9, a0Raw[5] = 0x67c09a71505182b7, a0Raw[6] = 0x7f69d2590707a973, a0Raw[7] = 0xb3c0c3c3c13b372b, a0Raw[8] = 0x6750b40f8bcd8224, a0Raw[9] = 0x9a2f25b0b2a954ff, a0Raw[10] = 0xdc4285e814c808e0, a0Raw[11] = 0x8b8554f1e498ef82, a0Raw[12] = 0x4aeb2e2ddd6a813f, a0Raw[13] = 0xef806fadf93b6484, a0Raw[14] = 0x55c8d0419c98b03f, a0Raw[15] = 0x0b3d3030505189c7, a0Raw[16] = 0x8f715521787ba7e5, a0Raw[17] = 0x8dcae65c8dc1b36f, a0Raw[18] = 0x1ba69d4165f6405f, a0Raw[19] = 0x25256e446e3a017c, a0Raw[20] = 0x6d38de9305ea74a3, a0Raw[21] = 0xb550cff8cc16fd93, a0Raw[22] = 0x005b265427dbc1e2, a0Raw[23] = 0xc6e5623e44c76d43, a0Raw[24] = 0x7e9ce4acf3fee215, a0Raw[25] = 0xc773cde42baaba83, a0Raw[26] = 0xcf64eb301c72961c, a0Raw[27] = 0x0738610644f1b9d7, a0Raw[28] = 0x89e260aa07470db9, a0Raw[29] = 0x708dde61233efe4a, a0Raw[30] = 0x11d167c5dacab58a, a0Raw[31] = 0x6cb2a8755c22031d, a0Raw[32] = 0x4408be9aee8ceed9, a0Raw[33] = 0x83415335d0acb979, a0Raw[34] = 0xb49cd0fe2b6823f2, a0Raw[35] = 0x38cec363d0edfd3c, a0Raw[36] = 0xf01e76217fc62246, a0Raw[37] = 0x150741bd903b0bbb, a0Raw[38] = 0x0ff7b714a48d1ee0, a0Raw[39] = 0x1b3e273f42cb5046, a0Raw[40] = 0x1ed57cef2e630ae1, a0Raw[41] = 0x9ee593b45e447d67, a0Raw[42] = 0x54b42e1a6b3d6807, a0Raw[43] = 0xac12c3b7f75266eb, a0Raw[44] = 0x49d7b4a134593f2b, a0Raw[45] = 0xd84c582030db7757, a0Raw[46] = 0x5468d0f0a37414d1, a0Raw[47] = 0x38b3b747d70bf668, a0Raw[48] = 0x6c133e2f120c1b99, a0Raw[49] = 0xa9113d1900800136, a0Raw[50] = 0x9effaf6be2b5c90b, a0Raw[51] = 0x61285b5e8cb7524a, a0Raw[52] = 0xe8f64c154daaf067, a0Raw[53] = 0x071067f4724a1fbf, a0Raw[54] = 0x7c5259784143c8e8, a0Raw[55] = 0x349f1d27fe2a2ff9, a0Raw[56] = 0xd765bde4318ddbaf, a0Raw[57] = 0xe47e59fe97609576, a0Raw[58] = 0xa355e6c1ffc3be73, a0Raw[59] = 0xf86b13e4185f4bfb, a0Raw[60] = 0x1ca3b5b44726b60f, a0Raw[61] = 0x9d4a2ee452d74ecb, a0Raw[62] = 0x4af5dccc56065b3d, a0Raw[63] = 0x6c82aed58d8c1026;
    b0Raw[0] = 0x80575d8222cd8ec8, b0Raw[1] = 0x41b6b43a86f981b5, b0Raw[2] = 0xe280489c0611c0c6, b0Raw[3] = 0x00e29cb37c93cc3a, b0Raw[4] = 0x31ebef501c84b98e, b0Raw[5] = 0xfffe51a54d817f26, b0Raw[6] = 0xa2ccfc294162486d, b0Raw[7] = 0x2a13b2fc3a88392a, b0Raw[8] = 0x0298698b42e6e78c, b0Raw[9] = 0x352a81d4486eccbf, b0Raw[10] = 0x41d46db057acdfd1, b0Raw[11] = 0xc2477f08fdb0766d, b0Raw[12] = 0x780b4c5e442ddf31, b0Raw[13] = 0x8888fbfd02d7522c, b0Raw[14] = 0x1aed4353ca33993f, b0Raw[15] = 0xed01c9c948cf624b;
    r0Raw[0] = 0x147ba91d68377390, r0Raw[1] = 0xca5c4428b218fc4b, r0Raw[2] = 0x7c1a4b27f99a6467, r0Raw[3] = 0x0682dc343f8ace57, r0Raw[4] = 0x7c0bd74647385502, r0Raw[5] = 0x665e6533f4a0007d, r0Raw[6] = 0x50655c617aca5587, r0Raw[7] = 0x204048524ecb35f3, r0Raw[8] = 0x1934dbb3603d0cc9, r0Raw[9] = 0xe58d500ef9046260, r0Raw[10] = 0x1bfdd3b35f59d66a, r0Raw[11] = 0x01bf2efd75a70e06, r0Raw[12] = 0xc4dba821df62e36a, r0Raw[13] = 0x582456eaec6cb75f, r0Raw[14] = 0x9d8a1c53a6dd148f, r0Raw[15] = 0x1e3c28a4f95f1edd;

    uint4096 a1;
    uint1024 b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0x9942c2f52c1ec5e4, a1Raw[1] = 0x4985252594c050c8, a1Raw[2] = 0x9272fe2bd13767ec, a1Raw[3] = 0x05d6ebe78c2d5913, a1Raw[4] = 0x9450e3853f3c95a0, a1Raw[5] = 0xa4da3bd2460d7594, a1Raw[6] = 0x422e795621f24b1e, a1Raw[7] = 0x75aa8647a2a67abc, a1Raw[8] = 0x9366bdf728612b32, a1Raw[9] = 0xbac64d39fee7883d, a1Raw[10] = 0x8d1765eb1e79907a, a1Raw[11] = 0x1cf24b71fc025ada, a1Raw[12] = 0x928d539b17d6684b, a1Raw[13] = 0x0ce9f9ed96bc4f72, a1Raw[14] = 0x1b818e3121a7955a, a1Raw[15] = 0x6807f0f5415fa060, a1Raw[16] = 0x22382ec99538f530, a1Raw[17] = 0xb948e88af71c78bb, a1Raw[18] = 0x77bc49fc9b08b887, a1Raw[19] = 0x68da28f31323fcbc, a1Raw[20] = 0x8feb22fb5528c9b3, a1Raw[21] = 0xf120ae1e74a2c922, a1Raw[22] = 0xb6aadbaf20d2a85a, a1Raw[23] = 0xdac07f5e50cabdb7, a1Raw[24] = 0x5ff304b36f1cd4b0, a1Raw[25] = 0xa9d70a542b8daaef, a1Raw[26] = 0x450db063281f2313, a1Raw[27] = 0x595953ea35bb758b, a1Raw[28] = 0xab4daf7e61b791fd, a1Raw[29] = 0xbf8418f987db02a2, a1Raw[30] = 0x59b61619935ebd46, a1Raw[31] = 0x5e2940699ded1bb0, a1Raw[32] = 0x351c4d3a7ecf9c3d, a1Raw[33] = 0x4e4065640f3bd0ee, a1Raw[34] = 0xfc72a087b9800f3f, a1Raw[35] = 0x3f589028250f2a59, a1Raw[36] = 0x9865bc1bf38f171a, a1Raw[37] = 0x63caf52a3c5673cc, a1Raw[38] = 0xa0977d57ab8b099b, a1Raw[39] = 0x1941bc9e14f57e43, a1Raw[40] = 0x18bf45a102ca883f, a1Raw[41] = 0xa63f2bf7ab7a4eaa, a1Raw[42] = 0x97fd61c39c220d6b, a1Raw[43] = 0x10481413bba866d6, a1Raw[44] = 0x1a6ad70c175509ab, a1Raw[45] = 0xaca2365b4577e18d, a1Raw[46] = 0x1fc855fb1f4a63a2, a1Raw[47] = 0x7d16db3bea4cc10f, a1Raw[48] = 0xef32cb83a604d446, a1Raw[49] = 0xdc38945c084302ee, a1Raw[50] = 0xc5bda18ee8957846, a1Raw[51] = 0xd3b7c3b06aa1aa15, a1Raw[52] = 0x67147c820fadb274, a1Raw[53] = 0xd97a74d247f6c090, a1Raw[54] = 0x292a51da0bbaa85b, a1Raw[55] = 0xdd1bc0d96fc0fd72, a1Raw[56] = 0x5dce5626c838dcb1, a1Raw[57] = 0xd6ec2804bb536bf8, a1Raw[58] = 0xec90a4709d576d57, a1Raw[59] = 0x0788714e3354ed53, a1Raw[60] = 0x4fc7881d10519774, a1Raw[61] = 0xa8b30c61adad4cb6, a1Raw[62] = 0xc5bc592d40d55f65, a1Raw[63] = 0xf2258fdb1326054c;
    b1Raw[0] = 0x52b5b811f833632f, b1Raw[1] = 0x52014b95e23aa0c0, b1Raw[2] = 0xe3446bd0ebc81895, b1Raw[3] = 0x39f354d20214704c, b1Raw[4] = 0x78c1659ea99138bc, b1Raw[5] = 0x94f4f91a5388057a, b1Raw[6] = 0x896c3a2e7d9a724e, b1Raw[7] = 0x54504dc5c255d881, b1Raw[8] = 0x88701c7c772057b7, b1Raw[9] = 0x58f857d60a5ed26b, b1Raw[10] = 0x4245cb09254f26dd, b1Raw[11] = 0x775754b1224da7f4, b1Raw[12] = 0xf7c8a6f2e7a0609e, b1Raw[13] = 0xb8bec4a42730988c, b1Raw[14] = 0x458367699aea8ea1, b1Raw[15] = 0x185fbda9ef6b3b8d;
    r1Raw[0] = 0xb8fa4eda993ae85c, r1Raw[1] = 0x107bf3255d5c1c73, r1Raw[2] = 0xe003a755062eaafa, r1Raw[3] = 0x735b41f6b64c83fc, r1Raw[4] = 0x2e32870c5b6b1b78, r1Raw[5] = 0x25371d00a4d724a6, r1Raw[6] = 0x1536092457033f2f, r1Raw[7] = 0x04b94a9785345c0d, r1Raw[8] = 0xa3a990e9de8f9863, r1Raw[9] = 0x17dd81338ae99fbd, r1Raw[10] = 0x4340564a90a71be6, r1Raw[11] = 0x0d9ba1874f753529, r1Raw[12] = 0x52ae8dfdca004c3c, r1Raw[13] = 0x0b818c7a952f729c, r1Raw[14] = 0x2ab4a39ad820c810, r1Raw[15] = 0x148d6602a1ab85bc;

    // ACT
    uint1024 c0 = a0 % b0;
    uint1024 c1 = a1 % b1;

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
}

TEST(BigIntegerArithmeticTests, Modulus4096By2048Bit) {
    // ARRANGE
    uint4096 a0;
    uint2048 b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x32ced71b1d2f5bd8, a0Raw[1] = 0x484af2fa66c22a6e, a0Raw[2] = 0x9743e7c0f08b743a, a0Raw[3] = 0xdc4d6d639388bccd, a0Raw[4] = 0xc5c8f665eb836d05, a0Raw[5] = 0xe532b726876cdc14, a0Raw[6] = 0x1afcbcaf286ca0b3, a0Raw[7] = 0xbcfdb680f0db2717, a0Raw[8] = 0xa508dc73ca297e82, a0Raw[9] = 0x8ec7fc7eeabaaf83, a0Raw[10] = 0x525060ca54fb7baa, a0Raw[11] = 0x815aef35cf8682ce, a0Raw[12] = 0xa46ee167f6240515, a0Raw[13] = 0x6159693aae58fe98, a0Raw[14] = 0x0dc62d1f71fc20fb, a0Raw[15] = 0x912241ae5984f1ba, a0Raw[16] = 0xd737a2d0caa6df3c, a0Raw[17] = 0x01458cba1ecd4163, a0Raw[18] = 0x9c4086203af69ff2, a0Raw[19] = 0x690c870afdcd6723, a0Raw[20] = 0xc648e54593f35cee, a0Raw[21] = 0xda6e8108944e1aef, a0Raw[22] = 0x4c74a4daa6e2ae8c, a0Raw[23] = 0xe245424310968fb0, a0Raw[24] = 0xe6d8d147d204d5d2, a0Raw[25] = 0x42d53755bc7926f1, a0Raw[26] = 0xe2bd640ca18f82a1, a0Raw[27] = 0x4b214d2bdb1793e8, a0Raw[28] = 0xe6d3dde7888b2edf, a0Raw[29] = 0x6770814f44aad930, a0Raw[30] = 0x1e31ada58c0b6aca, a0Raw[31] = 0x96b9390c269f0c43, a0Raw[32] = 0x386ba99e52db46f1, a0Raw[33] = 0x15664612106b1172, a0Raw[34] = 0xe7c2b63056ffcd06, a0Raw[35] = 0xdaff9ca636e1d756, a0Raw[36] = 0x12809f950ab3b67a, a0Raw[37] = 0x314148d6f87dcab3, a0Raw[38] = 0x1ad86b48aa303b81, a0Raw[39] = 0x703453d738fa1414, a0Raw[40] = 0xf3b5087559905bc2, a0Raw[41] = 0x17d5226b440d2487, a0Raw[42] = 0xd7a66a9fece691f8, a0Raw[43] = 0x6a64769642e04ae0, a0Raw[44] = 0x550c826791a584b0, a0Raw[45] = 0x30bfec4c03fa13ba, a0Raw[46] = 0x24e09afa67418b3a, a0Raw[47] = 0xe122b78b651fe09b, a0Raw[48] = 0x9902fad7a8808638, a0Raw[49] = 0xadc14d3d5bcac386, a0Raw[50] = 0x0464d59aeeedcd41, a0Raw[51] = 0xa2777eda15df7d42, a0Raw[52] = 0x578e1cbd21c4e5d0, a0Raw[53] = 0x6c1cd1c5b7ce28f3, a0Raw[54] = 0xb17da246b184f829, a0Raw[55] = 0x732c2c50c95c7c6e, a0Raw[56] = 0x477c4113dff32775, a0Raw[57] = 0x2e6fc0d457adc497, a0Raw[58] = 0xfc291297d65bc77e, a0Raw[59] = 0x3588a62cece5ec7d, a0Raw[60] = 0x513d65963aa6c44e, a0Raw[61] = 0x726a15a526bfdf80, a0Raw[62] = 0xdf896b3cb82f3428, a0Raw[63] = 0xe73a2bb0469b643a;
    b0Raw[0] = 0x2547da1970fe6dd2, b0Raw[1] = 0xa9c33071bdad3bbe, b0Raw[2] = 0xa892c78f72d88726, b0Raw[3] = 0x1e620a1a6ce148ff, b0Raw[4] = 0xf63a0396ea52c3a3, b0Raw[5] = 0x1a79f9b64f422691, b0Raw[6] = 0xf92886ca4807920f, b0Raw[7] = 0xd3249d5bd9bb8a5b, b0Raw[8] = 0x1aa1dfb7709e7691, b0Raw[9] = 0xfd2f8bf755bb1d87, b0Raw[10] = 0xba34abca133d2a1f, b0Raw[11] = 0xbe051c57b242f914, b0Raw[12] = 0xb293bc6769c53fa2, b0Raw[13] = 0xa7d25b7007e1d416, b0Raw[14] = 0x8bcf0977f691bb57, b0Raw[15] = 0x01fd029b43a71564, b0Raw[16] = 0xce24606387d8392b, b0Raw[17] = 0x3f9bebb52b076131, b0Raw[18] = 0x6dc6d4a8089dd234, b0Raw[19] = 0x0ad10340d0a49105, b0Raw[20] = 0x5eb9f09d40d947c8, b0Raw[21] = 0x013ffcb7f4cd90d9, b0Raw[22] = 0xb6e30409d2c4d37b, b0Raw[23] = 0xdc875527f3327a4d, b0Raw[24] = 0x8f8bc0332dc48356, b0Raw[25] = 0x3db405f0cf07b462, b0Raw[26] = 0xa83b26c4f595a2b1, b0Raw[27] = 0x94f7009aeb2f3296, b0Raw[28] = 0x0ee3656e6b8da094, b0Raw[29] = 0x847b3bc787d5eead, b0Raw[30] = 0x5d436520a6deaf2b, b0Raw[31] = 0x7130f5ca22b84de4;
    r0Raw[0] = 0x700ce94bdd5ed3a0, r0Raw[1] = 0x58b9739c86c1aeb5, r0Raw[2] = 0xd048817d018104bf, r0Raw[3] = 0xf49071d52bc8d2ec, r0Raw[4] = 0x2a2092da1d4008b2, r0Raw[5] = 0x2096626060c57339, r0Raw[6] = 0x3468e4ed08eba2a1, r0Raw[7] = 0x52890de29fd012ca, r0Raw[8] = 0xff35658865d41783, r0Raw[9] = 0xdb7dfe490cf9091a, r0Raw[10] = 0x717d21dafe9fe615, r0Raw[11] = 0x5fb80d22437872de, r0Raw[12] = 0x18868973b08d865c, r0Raw[13] = 0x38ac3fe9f0df82e0, r0Raw[14] = 0xa01bb4f4c23f8583, r0Raw[15] = 0x5ca88c67b8384940, r0Raw[16] = 0x3251fd5b9cf601c7, r0Raw[17] = 0xc6755eef5d92efc9, r0Raw[18] = 0xe9dbe72e2233a0b7, r0Raw[19] = 0x7c3b10e2cefa398b, r0Raw[20] = 0xbe4e15306b691018, r0Raw[21] = 0xbd9a0f8d3f271125, r0Raw[22] = 0xa16dfe9875f27737, r0Raw[23] = 0x8290ac34b82b1dc8, r0Raw[24] = 0x7b1179c5dc7d380b, r0Raw[25] = 0xe56094c5d1058d79, r0Raw[26] = 0xe83fb210a112afeb, r0Raw[27] = 0x0209e188154ffc30, r0Raw[28] = 0xb4d4556df4fa1189, r0Raw[29] = 0x556097b9ac59e656, r0Raw[30] = 0xb1137aab20c3b3df, r0Raw[31] = 0x41403102d596ac8f;

    uint4096 a1;
    uint2048 b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0x1965e5fdbb8e415b, a1Raw[1] = 0x9e0166ea8e7f0929, a1Raw[2] = 0x9ab41d1a0af7f62c, a1Raw[3] = 0x44890f8ef0ef3350, a1Raw[4] = 0x5ad08f366acf4d58, a1Raw[5] = 0x33d95f4f1caeb367, a1Raw[6] = 0xf60fce40fcdc0c24, a1Raw[7] = 0x144acc056ed71e33, a1Raw[8] = 0x96b26887fe997506, a1Raw[9] = 0xc238e062dcef6b2d, a1Raw[10] = 0x3068ab845eb3149a, a1Raw[11] = 0x8bf53d121ae55f0d, a1Raw[12] = 0x29a6b4662eea059d, a1Raw[13] = 0xa7d072ca9c269cc4, a1Raw[14] = 0x4090d7fa1f1d5d7b, a1Raw[15] = 0x9269d4192b6b576f, a1Raw[16] = 0x64fee9210392f4ed, a1Raw[17] = 0x6d39fbfd5432b7e9, a1Raw[18] = 0xc51e9c4165ea924b, a1Raw[19] = 0xb772888cce184bec, a1Raw[20] = 0xca0cf8371f5ffaa2, a1Raw[21] = 0x9ccce7ecc0857094, a1Raw[22] = 0xb2259af1ff1aa62b, a1Raw[23] = 0x155375fb2bb587d3, a1Raw[24] = 0xa087f97984c93243, a1Raw[25] = 0x47e331fe0edeb824, a1Raw[26] = 0x6107a8fbfa419130, a1Raw[27] = 0x5d0f9c1d438eb7f2, a1Raw[28] = 0x17baa1f4e51fed18, a1Raw[29] = 0xa00b4b3d5eaa181e, a1Raw[30] = 0xe50c0b616f3e3472, a1Raw[31] = 0x68e8f2056fd8d6eb, a1Raw[32] = 0xc3a9947ad2e4e4f6, a1Raw[33] = 0xd4566ec4f85cffba, a1Raw[34] = 0x335b5a6ba8adbf57, a1Raw[35] = 0x64f2c0997e78032a, a1Raw[36] = 0x64c644b6137a54e3, a1Raw[37] = 0x098dd26e0971000f, a1Raw[38] = 0x417ad8e3257824aa, a1Raw[39] = 0x86c945a7af2d6853, a1Raw[40] = 0x57353df148d8f508, a1Raw[41] = 0xfa880fe168e3bccd, a1Raw[42] = 0x55bda2815a0be463, a1Raw[43] = 0x01522d636c002393, a1Raw[44] = 0xb765cacf68132c76, a1Raw[45] = 0xd7e31f802649021c, a1Raw[46] = 0x6aca9b2e2e562aea, a1Raw[47] = 0xb1a4959d24715889, a1Raw[48] = 0x07d18ae69ab546aa, a1Raw[49] = 0xe397e4b28a90b011, a1Raw[50] = 0x79c91cf8bd60cb68, a1Raw[51] = 0xf86d8486088b092c, a1Raw[52] = 0x5f9b62c52936268e, a1Raw[53] = 0x5b1e9aa7fe595dee, a1Raw[54] = 0x7e981cea96fde30b, a1Raw[55] = 0xbf5166136b13a894, a1Raw[56] = 0x66e03225a4b4c8e5, a1Raw[57] = 0xf489ac492f095641, a1Raw[58] = 0x6ab1b4b600f0b77e, a1Raw[59] = 0x574f88523a9186cc, a1Raw[60] = 0x595b78e19683aba8, a1Raw[61] = 0xa8023dfaaf8906f1, a1Raw[62] = 0x716b83cfa67b1570, a1Raw[63] = 0xeab9b33195db7b01;
    b1Raw[0] = 0x21d0e28460412f2c, b1Raw[1] = 0x1b20aea8f71b0df7, b1Raw[2] = 0x52ef6ec00c97db5b, b1Raw[3] = 0xe364a1ed85f562e4, b1Raw[4] = 0x4e148aa35640a6e2, b1Raw[5] = 0x0efa0fc0187f0291, b1Raw[6] = 0xfdb9c4fe1b2d2d74, b1Raw[7] = 0x1631b5da786b7ff9, b1Raw[8] = 0x159d59fa918367d8, b1Raw[9] = 0xb47608c5d0ee1cd5, b1Raw[10] = 0x58af7a709671205b, b1Raw[11] = 0xe1958e457c5a739d, b1Raw[12] = 0x7ab3348f7a8468e9, b1Raw[13] = 0xb72749d331a84eee, b1Raw[14] = 0xff603d2a72a8a031, b1Raw[15] = 0x84814685f57bcffb, b1Raw[16] = 0x344eb92f4e19060e, b1Raw[17] = 0xbf1dac70d232eabc, b1Raw[18] = 0xcf82a225891baacd, b1Raw[19] = 0x56603820852562df, b1Raw[20] = 0xffa311dad68dda78, b1Raw[21] = 0xc7a882758eb40413, b1Raw[22] = 0x53f56ff0d63970f2, b1Raw[23] = 0xf36359d2179f3b3a, b1Raw[24] = 0xd85361e5eb630b8b, b1Raw[25] = 0x242d5969a201cd81, b1Raw[26] = 0xeb6a3e12ddc024af, b1Raw[27] = 0x61f57da1d91ae6c8, b1Raw[28] = 0x66b9088e44eee540, b1Raw[29] = 0x2f434be7f9ee7281, b1Raw[30] = 0xdbcad77bae2db658, b1Raw[31] = 0xb120941f0dc1b000;
    r1Raw[0] = 0x55ac7f186042760f, r1Raw[1] = 0x79ad3cedaad7e1f8, r1Raw[2] = 0x1d583122a20c7f70, r1Raw[3] = 0xf8e951f5f852fb4d, r1Raw[4] = 0xc813854faed70dd5, r1Raw[5] = 0xf582995d164489d8, r1Raw[6] = 0xd99c33c70e60f734, r1Raw[7] = 0xe24983105586dfed, r1Raw[8] = 0xca5bfc8c848ee6d7, r1Raw[9] = 0x12201b30422e82df, r1Raw[10] = 0x4c57eea0150f9197, r1Raw[11] = 0x6af87cf8a28f769f, r1Raw[12] = 0x0278b7c44f517c0b, r1Raw[13] = 0x0d3452fc658dacbb, r1Raw[14] = 0x4313dd418fed7322, r1Raw[15] = 0x003297d9ddf9a81e, r1Raw[16] = 0x31c633459ba46c21, r1Raw[17] = 0xcea3788d9c4bbbba, r1Raw[18] = 0xc2050445015f67cb, r1Raw[19] = 0x1b6bcf1f116bf25e, r1Raw[20] = 0x2789b6546fb17fae, r1Raw[21] = 0x7274279d29e6d018, r1Raw[22] = 0xbf3e558a65d95c9c, r1Raw[23] = 0x36723ce179d2f16e, r1Raw[24] = 0x735959bca12a9e4f, r1Raw[25] = 0x5c65444784004082, r1Raw[26] = 0xdb84ba0aea43d817, r1Raw[27] = 0x5537f005ee65aaf1, r1Raw[28] = 0xb0da79276d6b9d1b, r1Raw[29] = 0xd754caebbc6a7e4c, r1Raw[30] = 0xeb0e2c6b86bcd5d8, r1Raw[31] = 0x800150f740f7e7a;

    // ACT
    uint2048 c0 = a0 % b0;
    uint2048 c1 = a1 % b1;

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
}

TEST(BigIntegerArithmeticTests, Modulus4096By4096Bit) {
    // ARRANGE
    uint4096 a0;
    uint4096 b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0xea494a7f58fc2dc1, a0Raw[1] = 0xe4e48f4499ba54fb, a0Raw[2] = 0x6693bcb88afb1e1c, a0Raw[3] = 0xc5cc4499e55a7f58, a0Raw[4] = 0x6822480b660b1c1d, a0Raw[5] = 0x174552b2b4dfbdb2, a0Raw[6] = 0x20ae3ffe3877a68c, a0Raw[7] = 0x5c58f9fe176a235a, a0Raw[8] = 0x4d4ad1d6798bde0e, a0Raw[9] = 0x1743fca1a5be8e13, a0Raw[10] = 0xf8c1453812703571, a0Raw[11] = 0xcc4f587cb4ae18a7, a0Raw[12] = 0x5b4121d8600db5a1, a0Raw[13] = 0x4844770b678273c9, a0Raw[14] = 0xa56b73c42d622085, a0Raw[15] = 0x430707afdd4e5c95, a0Raw[16] = 0xd0ca219310833bba, a0Raw[17] = 0x5b3d4447b1998d77, a0Raw[18] = 0x2db81b91de7f78eb, a0Raw[19] = 0x0644aac2f880435c, a0Raw[20] = 0x00968cff0bfe632b, a0Raw[21] = 0xbc02814dc6600324, a0Raw[22] = 0x9dcc7d5a72e67cab, a0Raw[23] = 0x1d7a8ac96417a48e, a0Raw[24] = 0x70dee5f2df8567f5, a0Raw[25] = 0xf5ee0a043384d75e, a0Raw[26] = 0xfba8259b9fabb5b5, a0Raw[27] = 0x29716ae77cf5cf2c, a0Raw[28] = 0x29eaf1bc26666319, a0Raw[29] = 0x4645955ae641c2f5, a0Raw[30] = 0x205c84e14460d2cb, a0Raw[31] = 0x0313c0aeaac11611, a0Raw[32] = 0x838371989d06fbb0, a0Raw[33] = 0x0cbbfac528e4ec22, a0Raw[34] = 0x15e6f3c1f2651d7f, a0Raw[35] = 0xfd15fcd9c5ac1da9, a0Raw[36] = 0x697043ad2428d9b1, a0Raw[37] = 0x16d67b2b0f024cd9, a0Raw[38] = 0x9d1eb13ef1fe1c48, a0Raw[39] = 0x8275d8784bc51063, a0Raw[40] = 0xb31c4b70c33c8678, a0Raw[41] = 0x41f84f02d9f72617, a0Raw[42] = 0x9f241d06336fe92b, a0Raw[43] = 0x770d24e9b218face, a0Raw[44] = 0x357c72efbd4bc868, a0Raw[45] = 0xc2306b7bd43e4fe9, a0Raw[46] = 0xe1e74cceda7b7176, a0Raw[47] = 0x33003428c5641bf8, a0Raw[48] = 0x6b34fa7b41da26fb, a0Raw[49] = 0x4631df3f01cd8e85, a0Raw[50] = 0x347f7efd96a116a7, a0Raw[51] = 0x2166470fb74377c4, a0Raw[52] = 0x0a625853cd030d3c, a0Raw[53] = 0xddcf51abeeb2de77, a0Raw[54] = 0xd13c8eb5f6c343a6, a0Raw[55] = 0xcb16dfbd5d8c37b0, a0Raw[56] = 0x1e6000d7e7f6a232, a0Raw[57] = 0x55502ef104eb31d5, a0Raw[58] = 0x15907a2c90a4637a, a0Raw[59] = 0xed2ba1a7eb47d900, a0Raw[60] = 0x37a3f6dabac81a80, a0Raw[61] = 0x41656cadaf0667f7, a0Raw[62] = 0xa5973099bd374226, a0Raw[63] = 0x35b6e826f9f1e9e6;
    b0Raw[0] = 0xcba373b5ff36d339, b0Raw[1] = 0x8426e00713c5c8bf, b0Raw[2] = 0x2be586ab1194d6b3, b0Raw[3] = 0xd77b656a4dbae00b, b0Raw[4] = 0xcdebfa6862b23cf2, b0Raw[5] = 0xfaa8f08f380ecaeb, b0Raw[6] = 0x401db25fc3de622b, b0Raw[7] = 0x7395728fd6059e54, b0Raw[8] = 0xf88c266dcce5e81d, b0Raw[9] = 0x1f287c93d5a961b5, b0Raw[10] = 0xc49d64448a77d51d, b0Raw[11] = 0x913a9081b5826847, b0Raw[12] = 0x8e91f58853098181, b0Raw[13] = 0xe3ee87544043f2df, b0Raw[14] = 0x14a8e76deee0d5ea, b0Raw[15] = 0x53366d0a16b06bdb, b0Raw[16] = 0x5b3f9cb355eedfb7, b0Raw[17] = 0xf9bbd1639f691c78, b0Raw[18] = 0xcba3029fbe1459b9, b0Raw[19] = 0x8528811e38b22e13, b0Raw[20] = 0xa77fda659a0ebcf8, b0Raw[21] = 0x999710d45bd0b3da, b0Raw[22] = 0x037153bc2ea5e289, b0Raw[23] = 0x082725099982460a, b0Raw[24] = 0x07a4d85d0a45ff2a, b0Raw[25] = 0xb3872084e9f8e820, b0Raw[26] = 0x014d8cbdcee4d276, b0Raw[27] = 0x7d795e5cd2091ec8, b0Raw[28] = 0x2141a33dc683e3dc, b0Raw[29] = 0xb3bdeb217f1f7b04, b0Raw[30] = 0x3c633fcee9ad80ac, b0Raw[31] = 0x828da410301eb570, b0Raw[32] = 0x0f82562f01c5bf20, b0Raw[33] = 0x3eb20866a4f4f885, b0Raw[34] = 0x02511655a1cf8bbf, b0Raw[35] = 0x1d867c8f28e54118, b0Raw[36] = 0x7d8da016cbe23924, b0Raw[37] = 0xc79e0fd7592f089a, b0Raw[38] = 0x8d5ffc84f5dcf0fe, b0Raw[39] = 0xaab5d2700d25a8fd, b0Raw[40] = 0xcc6cafcc31f032ec, b0Raw[41] = 0x1f59bc4058c7690b, b0Raw[42] = 0x84e936cf892bd7b5, b0Raw[43] = 0x8d9c359560b5aa4d, b0Raw[44] = 0xe79f5d5b25e64639, b0Raw[45] = 0x04a52823bfc2ef8a, b0Raw[46] = 0x789e758809eaa0e6, b0Raw[47] = 0x72d445af8c623399, b0Raw[48] = 0xe67df70e44cae634, b0Raw[49] = 0xd721a8fc5ad72db9, b0Raw[50] = 0xb9fdd06931ca50df, b0Raw[51] = 0x87810ea2a6d1e4fe, b0Raw[52] = 0x05853e4228c72602, b0Raw[53] = 0x9a701518e476c360, b0Raw[54] = 0x1ccb9065166f0c90, b0Raw[55] = 0x8bbdc172356cf0d4, b0Raw[56] = 0x43a3a05bf71662b8, b0Raw[57] = 0x1c3d7f6351bb18cf, b0Raw[58] = 0x9c95945e9262767f, b0Raw[59] = 0xb1e83d681229f601, b0Raw[60] = 0x0c8a320c4cfaccd4, b0Raw[61] = 0x6a1f39f8f3f91146, b0Raw[62] = 0x165dd6a27b2c9d9a, b0Raw[63] = 0xb5fce5fee1a24151;
    r0Raw[0] = 0xea494a7f58fc2dc1, r0Raw[1] = 0xe4e48f4499ba54fb, r0Raw[2] = 0x6693bcb88afb1e1c, r0Raw[3] = 0xc5cc4499e55a7f58, r0Raw[4] = 0x6822480b660b1c1d, r0Raw[5] = 0x174552b2b4dfbdb2, r0Raw[6] = 0x20ae3ffe3877a68c, r0Raw[7] = 0x5c58f9fe176a235a, r0Raw[8] = 0x4d4ad1d6798bde0e, r0Raw[9] = 0x1743fca1a5be8e13, r0Raw[10] = 0xf8c1453812703571, r0Raw[11] = 0xcc4f587cb4ae18a7, r0Raw[12] = 0x5b4121d8600db5a1, r0Raw[13] = 0x4844770b678273c9, r0Raw[14] = 0xa56b73c42d622085, r0Raw[15] = 0x430707afdd4e5c95, r0Raw[16] = 0xd0ca219310833bba, r0Raw[17] = 0x5b3d4447b1998d77, r0Raw[18] = 0x2db81b91de7f78eb, r0Raw[19] = 0x0644aac2f880435c, r0Raw[20] = 0x00968cff0bfe632b, r0Raw[21] = 0xbc02814dc6600324, r0Raw[22] = 0x9dcc7d5a72e67cab, r0Raw[23] = 0x1d7a8ac96417a48e, r0Raw[24] = 0x70dee5f2df8567f5, r0Raw[25] = 0xf5ee0a043384d75e, r0Raw[26] = 0xfba8259b9fabb5b5, r0Raw[27] = 0x29716ae77cf5cf2c, r0Raw[28] = 0x29eaf1bc26666319, r0Raw[29] = 0x4645955ae641c2f5, r0Raw[30] = 0x205c84e14460d2cb, r0Raw[31] = 0x0313c0aeaac11611, r0Raw[32] = 0x838371989d06fbb0, r0Raw[33] = 0x0cbbfac528e4ec22, r0Raw[34] = 0x15e6f3c1f2651d7f, r0Raw[35] = 0xfd15fcd9c5ac1da9, r0Raw[36] = 0x697043ad2428d9b1, r0Raw[37] = 0x16d67b2b0f024cd9, r0Raw[38] = 0x9d1eb13ef1fe1c48, r0Raw[39] = 0x8275d8784bc51063, r0Raw[40] = 0xb31c4b70c33c8678, r0Raw[41] = 0x41f84f02d9f72617, r0Raw[42] = 0x9f241d06336fe92b, r0Raw[43] = 0x770d24e9b218face, r0Raw[44] = 0x357c72efbd4bc868, r0Raw[45] = 0xc2306b7bd43e4fe9, r0Raw[46] = 0xe1e74cceda7b7176, r0Raw[47] = 0x33003428c5641bf8, r0Raw[48] = 0x6b34fa7b41da26fb, r0Raw[49] = 0x4631df3f01cd8e85, r0Raw[50] = 0x347f7efd96a116a7, r0Raw[51] = 0x2166470fb74377c4, r0Raw[52] = 0x0a625853cd030d3c, r0Raw[53] = 0xddcf51abeeb2de77, r0Raw[54] = 0xd13c8eb5f6c343a6, r0Raw[55] = 0xcb16dfbd5d8c37b0, r0Raw[56] = 0x1e6000d7e7f6a232, r0Raw[57] = 0x55502ef104eb31d5, r0Raw[58] = 0x15907a2c90a4637a, r0Raw[59] = 0xed2ba1a7eb47d900, r0Raw[60] = 0x37a3f6dabac81a80, r0Raw[61] = 0x41656cadaf0667f7, r0Raw[62] = 0xa5973099bd374226, r0Raw[63] = 0x35b6e826f9f1e9e6;

    uint4096 a1;
    uint4096 b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0x42432f90644dd056, a1Raw[1] = 0x66c76d2dde9319b7, a1Raw[2] = 0x38057505db64bc21, a1Raw[3] = 0x904e6a04a760ed20, a1Raw[4] = 0xf5ae9ceee72df268, a1Raw[5] = 0x601f7817c12b0175, a1Raw[6] = 0x38b62bce16d73297, a1Raw[7] = 0xd6c323cbf472efb6, a1Raw[8] = 0xbeb244914c79cbc6, a1Raw[9] = 0x54c2358616fa44a1, a1Raw[10] = 0x94d9966a6664a97f, a1Raw[11] = 0xf7d3f42f26221605, a1Raw[12] = 0x4b2710934d0349d0, a1Raw[13] = 0xdfbdc08b29dc128d, a1Raw[14] = 0xef9d036ce0c98221, a1Raw[15] = 0x1e6889b0c97c1c28, a1Raw[16] = 0x75df7d88b083b029, a1Raw[17] = 0xaa8a48a66dd1bedb, a1Raw[18] = 0x8a6137412d4fb9fc, a1Raw[19] = 0x9023765d5ba5cf53, a1Raw[20] = 0x712b10433535111e, a1Raw[21] = 0xc8f9639fd8d6d465, a1Raw[22] = 0xce07d3daffdf8c51, a1Raw[23] = 0x5bbae49909300db3, a1Raw[24] = 0x949005f375dfba82, a1Raw[25] = 0x1d18bea85c79ec2f, a1Raw[26] = 0x8ee415a733a80afc, a1Raw[27] = 0x17289e2bbbe1fbb4, a1Raw[28] = 0x1862657f3f980935, a1Raw[29] = 0xcd8c36a4ab667134, a1Raw[30] = 0xc73e6d2460b4e112, a1Raw[31] = 0x070d5f4c9dea64db, a1Raw[32] = 0x4d9a25ca1ae3308c, a1Raw[33] = 0x12889870365ded8f, a1Raw[34] = 0x80f6c29d9922f292, a1Raw[35] = 0xb34e0bfb238869d6, a1Raw[36] = 0xbcded2fe6d6545f6, a1Raw[37] = 0x863cfda282639459, a1Raw[38] = 0xd350e7fe334be911, a1Raw[39] = 0x3bc417614d994fa0, a1Raw[40] = 0xaa458c77da25bf0e, a1Raw[41] = 0x20466dc6e4482680, a1Raw[42] = 0xc39bdf8be17b0097, a1Raw[43] = 0xee77b3f0e9cad0c9, a1Raw[44] = 0x6509d6a5ecc2e0b0, a1Raw[45] = 0x52f2870f9b58cec4, a1Raw[46] = 0x27ce4410fc7d4db7, a1Raw[47] = 0x94b954da5b518b95, a1Raw[48] = 0x8c269ac93e2f513e, a1Raw[49] = 0xf8346a08cd6bc06f, a1Raw[50] = 0xaf4fcf0dbb1d3087, a1Raw[51] = 0x9ca0d91cd140c2f3, a1Raw[52] = 0x33ad22dd1c40bcba, a1Raw[53] = 0x5b7d294e95b0b821, a1Raw[54] = 0x3535716f00876891, a1Raw[55] = 0xdf942a0cf1dd11b4, a1Raw[56] = 0x2958c2c267159913, a1Raw[57] = 0xc3b4b94f4d2e2a2f, a1Raw[58] = 0x567991a6b3f9bb57, a1Raw[59] = 0xaa53b2df48af8ae7, a1Raw[60] = 0x3229eab525f3e8f2, a1Raw[61] = 0xb7e1b17b999ec590, a1Raw[62] = 0x83d889f7b708c3d4, a1Raw[63] = 0x20a946271c0b1a90;
    b1Raw[0] = 0x088543179e819f71, b1Raw[1] = 0xa9ce29c161d212b7, b1Raw[2] = 0x024394b36e66402e, b1Raw[3] = 0x80e567e74413c596, b1Raw[4] = 0xcc69821130b33382, b1Raw[5] = 0x1e24b774a7a5f5c9, b1Raw[6] = 0x3a9f5e156fce2b93, b1Raw[7] = 0xd39a6348738fb4e4, b1Raw[8] = 0xe7d16fe6f2a54f36, b1Raw[9] = 0xd51e14c0e5eaec6f, b1Raw[10] = 0x150bb62fcf153b40, b1Raw[11] = 0x38b6bc351c561a40, b1Raw[12] = 0x3feef95329782df0, b1Raw[13] = 0x8e56e0ddf3f0a761, b1Raw[14] = 0x4741c53969143f13, b1Raw[15] = 0x65fd9b3981c4b62b, b1Raw[16] = 0x5c64eaa5bcae3b83, b1Raw[17] = 0xd8499d4c5f0a17bf, b1Raw[18] = 0xe92e048fee5dd8b0, b1Raw[19] = 0x2e659c4103d9a775, b1Raw[20] = 0x9d34cd1defad9681, b1Raw[21] = 0xc7901a0fba5abfb2, b1Raw[22] = 0x17a61cabbbd08ad0, b1Raw[23] = 0x7b076f6d535c2ca1, b1Raw[24] = 0xfe7472082b90a07c, b1Raw[25] = 0x3579782ca54141f3, b1Raw[26] = 0x8191d92a4340c293, b1Raw[27] = 0x0ca01ac9a21dbbaa, b1Raw[28] = 0xde6af4c139b3b648, b1Raw[29] = 0x97b884815c3651a5, b1Raw[30] = 0xe5dde8b70e6fb23f, b1Raw[31] = 0x74f98bbd293aa187, b1Raw[32] = 0x17364818405958c0, b1Raw[33] = 0x73da7cb4cba75388, b1Raw[34] = 0x9c11e6fd3174401a, b1Raw[35] = 0x80321529fa8cfbf6, b1Raw[36] = 0x1183a6e4516f521d, b1Raw[37] = 0xe49d6d920240aa9a, b1Raw[38] = 0xe93a4b7e6ec33781, b1Raw[39] = 0xb3ae1abe7840519e, b1Raw[40] = 0x3e14592cb6c9cda1, b1Raw[41] = 0x6c855979c2f7b239, b1Raw[42] = 0xeedbaf7a82ad6b75, b1Raw[43] = 0xb58e96af24ae558b, b1Raw[44] = 0x1ffd5eebd9c11eb8, b1Raw[45] = 0x09dd6a91517857c9, b1Raw[46] = 0xb5d57989848b68e6, b1Raw[47] = 0xa00b84fe8d373ca9, b1Raw[48] = 0x40664d137fa45fbe, b1Raw[49] = 0xa37fda2eaaaa40b5, b1Raw[50] = 0x97dc82b7db5e63b5, b1Raw[51] = 0x01e9fe0d073ea368, b1Raw[52] = 0x67f52e7bdc69d13c, b1Raw[53] = 0x69b3c7caeb24c953, b1Raw[54] = 0x90c794fb800201b3, b1Raw[55] = 0x01f78eac9a84f472, b1Raw[56] = 0xc1e000146cb71005, b1Raw[57] = 0x4fa124520f9f54f3, b1Raw[58] = 0x096c3db1b7744349, b1Raw[59] = 0x945975043d8b29be, b1Raw[60] = 0x029ebfed16e2aef4, b1Raw[61] = 0x9542b2dd316a46ec, b1Raw[62] = 0x1bc29ccff6357bfd, b1Raw[63] = 0x20634e92eee7eab5;
    r1Raw[0] = 0x39bdec78c5cc30e5, r1Raw[1] = 0xbcf9436c7cc10700, r1Raw[2] = 0x35c1e0526cfe7bf2, r1Raw[3] = 0x0f69021d634d278a, r1Raw[4] = 0x29451addb67abee6, r1Raw[5] = 0x41fac0a319850bac, r1Raw[6] = 0xfe16cdb8a7090704, r1Raw[7] = 0x0328c08380e33ad1, r1Raw[8] = 0xd6e0d4aa59d47c90, r1Raw[9] = 0x7fa420c5310f5831, r1Raw[10] = 0x7fcde03a974f6e3e, r1Raw[11] = 0xbf1d37fa09cbfbc5, r1Raw[12] = 0x0b381740238b1be0, r1Raw[13] = 0x5166dfad35eb6b2c, r1Raw[14] = 0xa85b3e3377b5430e, r1Raw[15] = 0xb86aee7747b765fd, r1Raw[16] = 0x197a92e2f3d574a5, r1Raw[17] = 0xd240ab5a0ec7a71c, r1Raw[18] = 0xa13332b13ef1e14b, r1Raw[19] = 0x61bdda1c57cc27dd, r1Raw[20] = 0xd3f6432545877a9d, r1Raw[21] = 0x016949901e7c14b2, r1Raw[22] = 0xb661b72f440f0181, r1Raw[23] = 0xe0b3752bb5d3e112, r1Raw[24] = 0x961b93eb4a4f1a05, r1Raw[25] = 0xe79f467bb738aa3b, r1Raw[26] = 0x0d523c7cf0674868, r1Raw[27] = 0x0a88836219c4400a, r1Raw[28] = 0x39f770be05e452ed, r1Raw[29] = 0x35d3b2234f301f8e, r1Raw[30] = 0xe160846d52452ed3, r1Raw[31] = 0x9213d38f74afc353, r1Raw[32] = 0x3663ddb1da89d7cb, r1Raw[33] = 0x9eae1bbb6ab69a07, r1Raw[34] = 0xe4e4dba067aeb277, r1Raw[35] = 0x331bf6d128fb6ddf, r1Raw[36] = 0xab5b2c1a1bf5f3d9, r1Raw[37] = 0xa19f90108022e9bf, r1Raw[38] = 0xea169c7fc488b18f, r1Raw[39] = 0x8815fca2d558fe01, r1Raw[40] = 0x6c31334b235bf16c, r1Raw[41] = 0xb3c1144d21507447, r1Raw[42] = 0xd4c030115ecd9521, r1Raw[43] = 0x38e91d41c51c7b3d, r1Raw[44] = 0x450c77ba1301c1f8, r1Raw[45] = 0x49151c7e49e076fb, r1Raw[46] = 0x71f8ca8777f1e4d1, r1Raw[47] = 0xf4adcfdbce1a4eeb, r1Raw[48] = 0x4bc04db5be8af17f, r1Raw[49] = 0x54b48fda22c17fba, r1Raw[50] = 0x17734c55dfbeccd2, r1Raw[51] = 0x9ab6db0fca021f8b, r1Raw[52] = 0xcbb7f4613fd6eb7e, r1Raw[53] = 0xf1c96183aa8beecd, r1Raw[54] = 0xa46ddc73808566dd, r1Raw[55] = 0xdd9c9b6057581d41, r1Raw[56] = 0x6778c2adfa5e890e, r1Raw[57] = 0x741394fd3d8ed53b, r1Raw[58] = 0x4d0d53f4fc85780e, r1Raw[59] = 0x15fa3ddb0b246129, r1Raw[60] = 0x2f8b2ac80f1139fe, r1Raw[61] = 0x229efe9e68347ea4, r1Raw[62] = 0x6815ed27c0d347d7, r1Raw[63] = 0x45f7942d232fdb;

    // ACT
    uint4096 c0 = a0 % b0;
    uint4096 c1 = a1 % b1;

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
}


/* BigInteger Modulus and Division Tests */

TEST(BigIntegerArithmeticTests, ModulusAndDivide128By128Bit) {
    // ARRANGE
    uint128 a0, q0;
    uint128 b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *q0Raw = (uint64 *) &q0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x3ee781b0a53b1641, a0Raw[1] = 0x1763b520728c4f9c;
    b0Raw[0] = 0x99085eb00bf851ef, b0Raw[1] = 0x2aab741139fc016d;
    q0Raw[0] = 0x0;
    r0Raw[0] = 0x3ee781b0a53b1641, r0Raw[1] = 0x1763b520728c4f9c;

    uint128 a1, q1;
    uint128 b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *q1Raw = (uint64 *) &q1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0x0800275644237011, a1Raw[1] = 0x7690a3dd6442bb5;
    b1Raw[0] = 0x86740eb151ec2089, b1Raw[1] = 0x338141e8009fef91;
    q1Raw[0] = 0x0;
    r1Raw[0] = 0x0800275644237011, r1Raw[1] = 0x7690a3dd6442bb5;

    // ACT
    uint128 qc0;
    uint128 rc0;
    a0.modAndDivide(b0, qc0, rc0);
    uint128 qc1;
    uint128 rc1;
    a1.modAndDivide(b1, qc1, rc1);

    // ASSERT
    ASSERT_EQ(qc0, q0);
    ASSERT_EQ(rc0, r0);
    ASSERT_EQ(qc1, q1);
    ASSERT_EQ(rc1, r1);
}

TEST(BigIntegerArithmeticTests, ModulusAndDivide256By128Bit) {
    // ARRANGE
    uint256 a0, q0;
    uint128 b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *q0Raw = (uint64 *) &q0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x111df4f4647068ce, a0Raw[1] = 0x44bec78e593a1c57, a0Raw[2] = 0xd8634e32a9262ae7, a0Raw[3] = 0x3ea48ab9de40b245;
    b0Raw[0] = 0xf81ac02a007fe72d, b0Raw[1] = 0xfc54fa629dd9a6d0;
    q0Raw[0] = 0xa56e7764d9f4f051, q0Raw[1] = 0x3f8da8b891c9434b;
    r0Raw[0] = 0xbd48a9c0d75a1391, r0Raw[1] = 0x443e31109d098674;

    uint256 a1, q1;
    uint128 b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *q1Raw = (uint64 *) &q1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0x260cf12513174ab0, a1Raw[1] = 0x5ff318b549e7cf3e, a1Raw[2] = 0x32623f78fda05b9e, a1Raw[3] = 0x5baf5db62b475082;
    b1Raw[0] = 0xeea14a46fda12bbf, b1Raw[1] = 0x590a38778a48a6f1;
    q1Raw[0] = 0xd7312ac64ec325db, q1Raw[1] = 0x079adef8c7a184f8, q1Raw[2] = 0x1;
    r1Raw[0] = 0x1897aaef4a67434b, r1Raw[1] = 0x93bbac7f44a4029;

    // ACT
    uint256 qc0;
    uint128 rc0;
    a0.modAndDivide(b0, qc0, rc0);
    uint256 qc1;
    uint128 rc1;
    a1.modAndDivide(b1, qc1, rc1);

    // ASSERT
    ASSERT_EQ(qc0, q0);
    ASSERT_EQ(rc0, r0);
    ASSERT_EQ(qc1, q1);
    ASSERT_EQ(rc1, r1);
}

TEST(BigIntegerArithmeticTests, ModulusAndDivide256By256Bit) {
    // ARRANGE
    uint256 a0, q0;
    uint256 b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *q0Raw = (uint64 *) &q0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x9ced0af2160ee67b, a0Raw[1] = 0x605346ac8fcfe4a8, a0Raw[2] = 0xfedc25f90a260af6, a0Raw[3] = 0x99f2925959745771;
    b0Raw[0] = 0xa628ad99b7532c90, b0Raw[1] = 0x1439708041201a35, b0Raw[2] = 0xa89fbcb89a809839, b0Raw[3] = 0x195aa184b982af0a;
    q0Raw[0] = 0x6;
    r0Raw[0] = 0xb7f8f957ca1bdb1b, r0Raw[1] = 0xe6faa3ab090f4766, r0Raw[2] = 0x0b1db9a56b22799f, r0Raw[3] = 0x1d2c93d00643d32;

    uint256 a1, q1;
    uint256 b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *q1Raw = (uint64 *) &q1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0x404b57333bd28b95, a1Raw[1] = 0x38405aa9ebf36e47, a1Raw[2] = 0xc3030811daa695c4, a1Raw[3] = 0x31b61e8f2a41c9e3;
    b1Raw[0] = 0x2529dc63bcdc3dc9, b1Raw[1] = 0x23b9e6adf15075d7, b1Raw[2] = 0xf67c1c1bf697a20e, b1Raw[3] = 0x793c27310a18ffe6;
    q1Raw[0] = 0x0;
    r1Raw[0] = 0x404b57333bd28b95, r1Raw[1] = 0x38405aa9ebf36e47, r1Raw[2] = 0xc3030811daa695c4, r1Raw[3] = 0x31b61e8f2a41c9e3;

    // ACT
    uint256 qc0;
    uint256 rc0;
    a0.modAndDivide(b0, qc0, rc0);
    uint256 qc1;
    uint256 rc1;
    a1.modAndDivide(b1, qc1, rc1);

    // ASSERT
    ASSERT_EQ(qc0, q0);
    ASSERT_EQ(rc0, r0);
    ASSERT_EQ(qc1, q1);
    ASSERT_EQ(rc1, r1);
}

TEST(BigIntegerArithmeticTests, ModulusAndDivide512By128Bit) {
    // ARRANGE
    uint512 a0, q0;
    uint128 b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *q0Raw = (uint64 *) &q0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0xaee430a58054d27e, a0Raw[1] = 0x768a8f8c7bb8e591, a0Raw[2] = 0x6558688111c7481b, a0Raw[3] = 0xeec5dc00e9d5af87, a0Raw[4] = 0x885add2af1ee6514, a0Raw[5] = 0xafe8f431c16e3eef, a0Raw[6] = 0xcb6d4e99c3fda948, a0Raw[7] = 0xdcd1df4729465c2e;
    b0Raw[0] = 0xb5efbd9ccb702575, b0Raw[1] = 0xf35ffa49eeab4dfe;
    q0Raw[0] = 0xdafd7d497bdbf2b8, q0Raw[1] = 0x5fcd0845b055768b, q0Raw[2] = 0x513ff4ad4932617b, q0Raw[3] = 0x7a0ec04d14e56aec, q0Raw[4] = 0x2c675f29454da360, q0Raw[5] = 0xe8465cc92659f56c;
    r0Raw[0] = 0x528ef557023a4c66, r0Raw[1] = 0xb0dd197a0567c703;

    uint512 a1, q1;
    uint128 b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *q1Raw = (uint64 *) &q1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0xdf110e44c9b8a642, a1Raw[1] = 0xc5e8559d7edba72f, a1Raw[2] = 0xc5ca999e1054f7e1, a1Raw[3] = 0x3036bd44df940051, a1Raw[4] = 0xc2758f59a0e9feae, a1Raw[5] = 0xf1940ea57e21cb2d, a1Raw[6] = 0x7f03207b3430713c, a1Raw[7] = 0x190bf76d1d529202;
    b1Raw[0] = 0xf8829bb4fe34ed98, b1Raw[1] = 0x593ab30a95a89d46;
    q1Raw[0] = 0x23a1dc73fae9ce5c, q1Raw[1] = 0xc29bdc7ac9fd3f0f, q1Raw[2] = 0x46bb7f78ac4745ee, q1Raw[3] = 0x4b595d7c114a39fa, q1Raw[4] = 0x0c871e823fd1fbc1, q1Raw[5] = 0x47dc03cd8000fe96;
    r1Raw[0] = 0x1c4d0b30282af3a2, r1Raw[1] = 0x109181fef4915e56;

    // ACT
    uint512 qc0;
    uint128 rc0;
    a0.modAndDivide(b0, qc0, rc0);
    uint512 qc1;
    uint128 rc1;
    a1.modAndDivide(b1, qc1, rc1);

    // ASSERT
    ASSERT_EQ(qc0, q0);
    ASSERT_EQ(rc0, r0);
    ASSERT_EQ(qc1, q1);
    ASSERT_EQ(rc1, r1);
}

TEST(BigIntegerArithmeticTests, ModulusAndDivide512By256Bit) {
    // ARRANGE
    uint512 a0, q0;
    uint256 b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *q0Raw = (uint64 *) &q0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x894033ea9df3135b, a0Raw[1] = 0x3f1d64aa8e91d2fe, a0Raw[2] = 0x1d923635d7e14473, a0Raw[3] = 0x74df5f36720ee4f1, a0Raw[4] = 0xcd259b3f16cf5ca4, a0Raw[5] = 0xb103233e14c49042, a0Raw[6] = 0x6d8bc6c062b8b0e5, a0Raw[7] = 0x6bf132adb2f43a6e;
    b0Raw[0] = 0x9f14dc87de3f53af, b0Raw[1] = 0xb0ed8de34fc17ad8, b0Raw[2] = 0xff7ca2787f138bf0, b0Raw[3] = 0x86b5b9fdd6e2aab;
    q0Raw[0] = 0x3bba8bf8fbd5a0ee, q0Raw[1] = 0x5e2f58b7bc52724f, q0Raw[2] = 0x25d282ff3ad20b26, q0Raw[3] = 0xd2196ba2fc721b10, q0Raw[4] = 0xc;
    r0Raw[0] = 0x14232a6d352ae6a9, r0Raw[1] = 0xcd871b1dcbf42d00, r0Raw[2] = 0x73a1289fb95b32c1, r0Raw[3] = 0x24d1d72becaf80a;

    uint512 a1, q1;
    uint256 b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *q1Raw = (uint64 *) &q1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0xe86ded5226481865, a1Raw[1] = 0x05ef595af76e5f26, a1Raw[2] = 0x08fc15c49fa4c594, a1Raw[3] = 0x08e73ca869aa05e5, a1Raw[4] = 0x02e711b0a9a53c1a, a1Raw[5] = 0x83c1e6979874783e, a1Raw[6] = 0x92ca1d4ee6c1b7c0, a1Raw[7] = 0x643ef69048ee1982;
    b1Raw[0] = 0x731851a9ebbe54f8, b1Raw[1] = 0xa3b1f91975592e7c, b1Raw[2] = 0x00000f38b2738d7b, b1Raw[3] = 0x20a5e369b6d19e4b;
    q1Raw[0] = 0x40ec88bf08b0ef79, q1Raw[1] = 0xe5311158c938b231, q1Raw[2] = 0x8f4464365dddbb11, q1Raw[3] = 0x120cd040cf27a122, q1Raw[4] = 0x3;
    r1Raw[0] = 0x04bc8660dd7e672d, r1Raw[1] = 0x8c1cef2211da846b, r1Raw[2] = 0x059aeb5f49ed47be, r1Raw[3] = 0x5cbb179ad212dd9;

    // ACT
    uint512 qc0;
    uint256 rc0;
    a0.modAndDivide(b0, qc0, rc0);
    uint512 qc1;
    uint256 rc1;
    a1.modAndDivide(b1, qc1, rc1);

    // ASSERT
    ASSERT_EQ(qc0, q0);
    ASSERT_EQ(rc0, r0);
    ASSERT_EQ(qc1, q1);
    ASSERT_EQ(rc1, r1);
}

TEST(BigIntegerArithmeticTests, ModulusAndDivide512By512Bit) {
    // ARRANGE
    uint512 a0, q0;
    uint512 b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *q0Raw = (uint64 *) &q0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0xfbe5035f2e4d7cff, a0Raw[1] = 0xad6671662cc7d28b, a0Raw[2] = 0xa2932727e3b4c01c, a0Raw[3] = 0x47bc222f74cbe3f6, a0Raw[4] = 0xc44592c9ad4e6d64, a0Raw[5] = 0xe44f92bcbc18594e, a0Raw[6] = 0x7f5fa893a6578d1d, a0Raw[7] = 0x6d5abad94cd31b94;
    b0Raw[0] = 0x73f6fa6619913192, b0Raw[1] = 0x6049f58f7f28a5fc, b0Raw[2] = 0x0b7646cb57f2906a, b0Raw[3] = 0x0f8a96f6a33a5751, b0Raw[4] = 0x30b86d7cdabcec53, b0Raw[5] = 0x3977e8af899e9385, b0Raw[6] = 0xc72a4a83212daea7, b0Raw[7] = 0x539e255531cc9ced;
    q0Raw[0] = 0x1;
    r0Raw[0] = 0x87ee08f914bc4b6d, r0Raw[1] = 0x4d1c7bd6ad9f2c8f, r0Raw[2] = 0x971ce05c8bc22fb2, r0Raw[3] = 0x38318b38d1918ca5, r0Raw[4] = 0x938d254cd2918111, r0Raw[5] = 0xaad7aa0d3279c5c9, r0Raw[6] = 0xb8355e108529de76, r0Raw[7] = 0x19bc95841b067ea6;

    uint512 a1, q1;
    uint512 b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *q1Raw = (uint64 *) &q1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0x64d54e2dc9a9b4dc, a1Raw[1] = 0x2143b4b1665966cb, a1Raw[2] = 0x546131f0f33ed680, a1Raw[3] = 0xb2797abc37fc2c34, a1Raw[4] = 0x0dbf2a77b94c93d7, a1Raw[5] = 0xeed4ec1da69e0f44, a1Raw[6] = 0x718e8d70ac5c9355, a1Raw[7] = 0xa829e36058373928;
    b1Raw[0] = 0xbdd5a40d5f207abf, b1Raw[1] = 0xc87cf85b4466d229, b1Raw[2] = 0x565d6cbea8d807c2, b1Raw[3] = 0xfd5ab165b88f84c5, b1Raw[4] = 0x57deb9607fdb631e, b1Raw[5] = 0xe44164b0fb4d0de3, b1Raw[6] = 0xda136f80dafca6a9, b1Raw[7] = 0xd26ea1a9e02dc7d8;
    q1Raw[0] = 0x0;
    r1Raw[0] = 0x64d54e2dc9a9b4dc, r1Raw[1] = 0x2143b4b1665966cb, r1Raw[2] = 0x546131f0f33ed680, r1Raw[3] = 0xb2797abc37fc2c34, r1Raw[4] = 0x0dbf2a77b94c93d7, r1Raw[5] = 0xeed4ec1da69e0f44, r1Raw[6] = 0x718e8d70ac5c9355, r1Raw[7] = 0xa829e36058373928;

    // ACT
    uint512 qc0;
    uint512 rc0;
    a0.modAndDivide(b0, qc0, rc0);
    uint512 qc1;
    uint512 rc1;
    a1.modAndDivide(b1, qc1, rc1);

    // ASSERT
    ASSERT_EQ(qc0, q0);
    ASSERT_EQ(rc0, r0);
    ASSERT_EQ(qc1, q1);
    ASSERT_EQ(rc1, r1);
}

TEST(BigIntegerArithmeticTests, ModulusAndDivide1024By128Bit) {
    // ARRANGE
    uint1024 a0, q0;
    uint128 b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *q0Raw = (uint64 *) &q0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x7d609d4473657964, a0Raw[1] = 0x34701b05e99fab52, a0Raw[2] = 0xa8b36118d71fb273, a0Raw[3] = 0x3768790d9246a6dd, a0Raw[4] = 0x17f10766aba8890f, a0Raw[5] = 0xba7c0b3b4eb2c955, a0Raw[6] = 0x11da71bdea9c9d49, a0Raw[7] = 0x90026a0f4b8e0424, a0Raw[8] = 0xeb026c2fe6fe456d, a0Raw[9] = 0xaf599f0a02612af7, a0Raw[10] = 0xe95f0ddfda2aaf5a, a0Raw[11] = 0x406ee61e639afd88, a0Raw[12] = 0xf91a9af996a92447, a0Raw[13] = 0x3746d8c97b474839, a0Raw[14] = 0x6526e05555dc0c70, a0Raw[15] = 0x2c4733de1b059ead;
    b0Raw[0] = 0xc972d0d3c97be901, b0Raw[1] = 0x76b0fc978150b154;
    q0Raw[0] = 0x23045bfdd7e22861, q0Raw[1] = 0x51e5a875fde18c3b, q0Raw[2] = 0x35f3f0ce0661e18f, q0Raw[3] = 0x385a2f48b39f7748, q0Raw[4] = 0x1ab999a86e694024, q0Raw[5] = 0x524fad5c42191141, q0Raw[6] = 0x21cbf78d3b6f7e4a, q0Raw[7] = 0xba3e5436d0588249, q0Raw[8] = 0x6acf9cda7dc89c28, q0Raw[9] = 0xb2e3871d1c251e3f, q0Raw[10] = 0x3d63a242a9d851d2, q0Raw[11] = 0xe2d814eb58f7e787, q0Raw[12] = 0x385dd87d6f40b574, q0Raw[13] = 0x5f80626fcc9180fa;
    r0Raw[0] = 0x0cc2d47935280803, r0Raw[1] = 0x4a8aeadd73e2f607;

    uint1024 a1, q1;
    uint128 b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *q1Raw = (uint64 *) &q1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0xca4bf4d33106bc8d, a1Raw[1] = 0x0baa436ee670b55d, a1Raw[2] = 0xeda05febb0d821c2, a1Raw[3] = 0xc2599e07cb33cc96, a1Raw[4] = 0x9911a5313b4e2dd1, a1Raw[5] = 0x86fddde8bf31614a, a1Raw[6] = 0xd833bf677e9c4ef7, a1Raw[7] = 0x3aea0afdb9aa643f, a1Raw[8] = 0x9fe4bd806b31f4fc, a1Raw[9] = 0x2390d677b0fee2b1, a1Raw[10] = 0x1e77a05c66b5893e, a1Raw[11] = 0x889ab14e79f18fcd, a1Raw[12] = 0xd08ba6da1b34490c, a1Raw[13] = 0x890b23c6b4a3157d, a1Raw[14] = 0xef14e55373294ab4, a1Raw[15] = 0xc13b1ef7eddc1a37;
    b1Raw[0] = 0xa7945461e00935ff, b1Raw[1] = 0xfea3670d2c3ea7cf;
    q1Raw[0] = 0x674b0288650b3afb, q1Raw[1] = 0x6c66c0426cb6ffea, q1Raw[2] = 0x091004bb3dfa074d, q1Raw[3] = 0xace50ebe5099e26b, q1Raw[4] = 0xec2d4697ae0846de, q1Raw[5] = 0xff5d8d055f2a230d, q1Raw[6] = 0xb00bdd11f2d1b8cd, q1Raw[7] = 0x3b7208df0304493c, q1Raw[8] = 0x346f983f7968db5b, q1Raw[9] = 0x75b4f03839eea4bc, q1Raw[10] = 0xd288473df05cf6f1, q1Raw[11] = 0x23def544b607289b, q1Raw[12] = 0x9d57a8a7d84c6801, q1Raw[13] = 0xc243a6ff60cfadfe;
    r1Raw[0] = 0x21211bef84ce0588, r1Raw[1] = 0xf051dddfa2f1ce1;

    // ACT
    uint1024 qc0;
    uint128 rc0;
    a0.modAndDivide(b0, qc0, rc0);
    uint1024 qc1;
    uint128 rc1;
    a1.modAndDivide(b1, qc1, rc1);

    // ASSERT
    ASSERT_EQ(qc0, q0);
    ASSERT_EQ(rc0, r0);
    ASSERT_EQ(qc1, q1);
    ASSERT_EQ(rc1, r1);
}

TEST(BigIntegerArithmeticTests, ModulusAndDivide1024By256Bit) {
    // ARRANGE
    uint1024 a0, q0;
    uint256 b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *q0Raw = (uint64 *) &q0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0xae414d65ae85e7ca, a0Raw[1] = 0xca64be3bc5d5c58f, a0Raw[2] = 0xe8dd05561809fde5, a0Raw[3] = 0xb6b4446de0fa378d, a0Raw[4] = 0xca0e9be501febab2, a0Raw[5] = 0xe22d8f20a260fcc5, a0Raw[6] = 0xab95b92e0ad2fa10, a0Raw[7] = 0x26a2b0a9f4409364, a0Raw[8] = 0xe505d1c461fd5bc2, a0Raw[9] = 0xe79648284ca489e3, a0Raw[10] = 0x76ffdf1e87a325a7, a0Raw[11] = 0x901ed86c2fccb427, a0Raw[12] = 0x50135c80c7b2f6a6, a0Raw[13] = 0xb01378eae8c6df50, a0Raw[14] = 0xca92537044edfb8f, a0Raw[15] = 0xed7447f9a4591cee;
    b0Raw[0] = 0x86338c88095e7715, b0Raw[1] = 0x27e22daa05120357, b0Raw[2] = 0x0598acbb5617cbe2, b0Raw[3] = 0x69808600efd187b9;
    q0Raw[0] = 0x46f963e08b9d0ed9, q0Raw[1] = 0xc1a5ce9485ccaea5, q0Raw[2] = 0x9eab3a5da1aa6284, q0Raw[3] = 0xfda1423f6ffbd4d1, q0Raw[4] = 0xc410b224a16fae44, q0Raw[5] = 0x42949d5656830cf5, q0Raw[6] = 0x2d11825b82ce23ff, q0Raw[7] = 0xc3e1718f47a62c67, q0Raw[8] = 0xd4e3e75a2d98b07d, q0Raw[9] = 0xda5bc377071a224b, q0Raw[10] = 0xb650d7ed14b0911a, q0Raw[11] = 0x402e5aaf5db5e037, q0Raw[12] = 0x2;
    r0Raw[0] = 0xc239629b240ed0fd, r0Raw[1] = 0x7f491f989ef3517a, r0Raw[2] = 0xa543d7e195d331f4, r0Raw[3] = 0x2017f1030e59b26;

    uint1024 a1, q1;
    uint256 b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *q1Raw = (uint64 *) &q1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0x4004b9e0ef8b0ea5, a1Raw[1] = 0xbb7c28949e512e51, a1Raw[2] = 0xcff133da79dad35d, a1Raw[3] = 0xaaa96eb0efc80174, a1Raw[4] = 0x8ecf39bd2e25c8bf, a1Raw[5] = 0x2bd23d47bace16a0, a1Raw[6] = 0x21e6acf46b2e4517, a1Raw[7] = 0x8a79187ad979c9d2, a1Raw[8] = 0x1f7fb24b9c268cb5, a1Raw[9] = 0xe104427fc78e3d9e, a1Raw[10] = 0x3772a8172183b88a, a1Raw[11] = 0xc628ba1868a19141, a1Raw[12] = 0x470f0b8fbe252126, a1Raw[13] = 0xadd22d7e3e210092, a1Raw[14] = 0x877bb4ab01953d6a, a1Raw[15] = 0x6a1256da6d70178;
    b1Raw[0] = 0x924c978111a13ef8, b1Raw[1] = 0x3b2a98c8a53bf052, b1Raw[2] = 0xa469ee51916bb225, b1Raw[3] = 0x6330f023474b065d;
    q1Raw[0] = 0xac03cdf984f100b8, q1Raw[1] = 0xc16b689a00e588a3, q1Raw[2] = 0x9235ab50502491de, q1Raw[3] = 0xd9f6f15c8f5447b0, q1Raw[4] = 0x68fb855d0c35bc75, q1Raw[5] = 0xf0ab85bc9d149d7a, q1Raw[6] = 0x28e7683d34e3bb1f, q1Raw[7] = 0xb76c5594facdd4f4, q1Raw[8] = 0x1874d52b7a233378, q1Raw[9] = 0x58f2e263e1c00a6d, q1Raw[10] = 0x707b1bc73e98fee5, q1Raw[11] = 0x111c1f4dbafac795;
    r1Raw[0] = 0x493440a01c2dcc65, r1Raw[1] = 0x24d367e4b2ed1ffc, r1Raw[2] = 0x707bb3fc09d04c89, r1Raw[3] = 0x2a0138a229b61e02;

    // ACT
    uint1024 qc0;
    uint256 rc0;
    a0.modAndDivide(b0, qc0, rc0);
    uint1024 qc1;
    uint256 rc1;
    a1.modAndDivide(b1, qc1, rc1);

    // ASSERT
    ASSERT_EQ(qc0, q0);
    ASSERT_EQ(rc0, r0);
    ASSERT_EQ(qc1, q1);
    ASSERT_EQ(rc1, r1);
}

TEST(BigIntegerArithmeticTests, ModulusAndDivide1024By512Bit) {
    // ARRANGE
    uint1024 a0, q0;
    uint512 b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *q0Raw = (uint64 *) &q0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x1224046c77cd63d9, a0Raw[1] = 0xf47d5c0ad9b22859, a0Raw[2] = 0xa21883964df21f3f, a0Raw[3] = 0x0d34a3fb689f34a2, a0Raw[4] = 0xdcbcdf27e5c1abc8, a0Raw[5] = 0xf69642b6ceb0635d, a0Raw[6] = 0xb23c3f22e66ec0da, a0Raw[7] = 0x7a9d38c6534341e1, a0Raw[8] = 0x267676142af24be5, a0Raw[9] = 0xc540faaac43b9369, a0Raw[10] = 0x927bcc55cbfd78ad, a0Raw[11] = 0x6ab667c9e1ad5f0d, a0Raw[12] = 0xbc04d7b9649fa618, a0Raw[13] = 0x12274eb13d13ccbb, a0Raw[14] = 0xbc5e322f7501a3da, a0Raw[15] = 0x305f42766c1e6720;
    b0Raw[0] = 0x01631ee86a4b4568, b0Raw[1] = 0x6afa0b277c311fc9, b0Raw[2] = 0x661e2433ee29a473, b0Raw[3] = 0x406ccf485837fe4b, b0Raw[4] = 0x685ee1d0b00332c2, b0Raw[5] = 0xbb80e3fcb06d29d2, b0Raw[6] = 0x501eb302da08e9f1, b0Raw[7] = 0x55d38b8caa778abd;
    q0Raw[0] = 0x17c1484604fc23e4, q0Raw[1] = 0x2011ccef57249418, q0Raw[2] = 0xe5a66ee3396d5aee, q0Raw[3] = 0x9097df032267c8ac, q0Raw[4] = 0x0f03d23cbc02dc33, q0Raw[5] = 0x403060d41d0fb9a2, q0Raw[6] = 0x41f10095c41d77c3, q0Raw[7] = 0x904860d8e832bc1f;
    r0Raw[0] = 0x52aead478fe65b39, r0Raw[1] = 0x81f85eae12571ae7, r0Raw[2] = 0x5a307a791462c8c4, r0Raw[3] = 0x2bdb5dc006d1e846, r0Raw[4] = 0x3d3ad2b5656fcc9d, r0Raw[5] = 0x434fefcbe1a49076, r0Raw[6] = 0xb2188c90df59f8af, r0Raw[7] = 0x532064d5fa398dd0;

    uint1024 a1, q1;
    uint512 b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *q1Raw = (uint64 *) &q1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0xa72015bdf6e7e7bc, a1Raw[1] = 0x7fe41942d3055e26, a1Raw[2] = 0xb477d7cd1d3766e4, a1Raw[3] = 0xf773a4055450d16f, a1Raw[4] = 0x88791dfbf90c178d, a1Raw[5] = 0xbd84a612637c4ea5, a1Raw[6] = 0xb77a407e8799fa07, a1Raw[7] = 0x96d99319b6b506a3, a1Raw[8] = 0x5f532fb358d1d787, a1Raw[9] = 0xe9a962330e3a2cd2, a1Raw[10] = 0xb0090d3c49839d80, a1Raw[11] = 0x0028f869206f23b3, a1Raw[12] = 0x0bfe311c04a25f84, a1Raw[13] = 0x3e62c63a45eecb36, a1Raw[14] = 0x31013defbafd144b, a1Raw[15] = 0x9784ed661ee91703;
    b1Raw[0] = 0x5a0a6023c5ba7062, b1Raw[1] = 0xaf9a3f8f4bd57a13, b1Raw[2] = 0xada3c13525594ffa, b1Raw[3] = 0xdbdfa5aecf6cedfe, b1Raw[4] = 0x4f494f4a59866a5a, b1Raw[5] = 0x324675629a21e282, b1Raw[6] = 0x7338b951e11bba4e, b1Raw[7] = 0x5245c9aad74d4269;
    q1Raw[0] = 0x758430319942d37b, q1Raw[1] = 0x1c85cb1de7b25840, q1Raw[2] = 0x68a450ee9e73b1df, q1Raw[3] = 0x526fc4e258099799, q1Raw[4] = 0x44da1f75a6bb7c7b, q1Raw[5] = 0x1bc80bfb777b12e8, q1Raw[6] = 0x1fb915913affcc0a, q1Raw[7] = 0xd777e2e7a60efc58, q1Raw[8] = 0x1;
    r1Raw[0] = 0x22371e97c06f22a6, r1Raw[1] = 0x1629a9fb34d34b97, r1Raw[2] = 0x6db4c7183b070653, r1Raw[3] = 0x9feb12886a6c5c66, r1Raw[4] = 0x280ae535c5813dcf, r1Raw[5] = 0xb459ef908c0a3d4d, r1Raw[6] = 0x12ff80270f2ddd9c, r1Raw[7] = 0x11cc0fe24d314a8c;

    // ACT
    uint1024 qc0;
    uint512 rc0;
    a0.modAndDivide(b0, qc0, rc0);
    uint1024 qc1;
    uint512 rc1;
    a1.modAndDivide(b1, qc1, rc1);

    // ASSERT
    ASSERT_EQ(qc0, q0);
    ASSERT_EQ(rc0, r0);
    ASSERT_EQ(qc1, q1);
    ASSERT_EQ(rc1, r1);
}

TEST(BigIntegerArithmeticTests, ModulusAndDivide1024By1024Bit) {
    // ARRANGE
    uint1024 a0, q0;
    uint1024 b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *q0Raw = (uint64 *) &q0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x5b42a401dddafbe8, a0Raw[1] = 0xa4f85f15b62b284c, a0Raw[2] = 0x565e560157d4d516, a0Raw[3] = 0x8a7cffbbfa0d831d, a0Raw[4] = 0x2bd242b62425189f, a0Raw[5] = 0x74a9028f22c8d53a, a0Raw[6] = 0xf622022bc6afc647, a0Raw[7] = 0xeef8273f34e1b7cf, a0Raw[8] = 0x551317b6346ddcc0, a0Raw[9] = 0xa84c4ac3c98160df, a0Raw[10] = 0xf0af5b96c06a250c, a0Raw[11] = 0x7fe63f61b4608353, a0Raw[12] = 0xdac4478cab50a9d4, a0Raw[13] = 0x527480759976161c, a0Raw[14] = 0x3cc07dc80df82f88, a0Raw[15] = 0xac2076cd6d34437f;
    b0Raw[0] = 0x55980fede3ee1eb4, b0Raw[1] = 0xda9a5bfc2f6b318e, b0Raw[2] = 0xc91b9f979d640533, b0Raw[3] = 0xdd776720b22a6ca5, b0Raw[4] = 0xf459c7bc764eddf1, b0Raw[5] = 0x70f03625e4c68666, b0Raw[6] = 0xe694a60f0c160a12, b0Raw[7] = 0xf48a1c818511dc82, b0Raw[8] = 0x6ec8c9f9ddb160fd, b0Raw[9] = 0x2bab32462ae7ea87, b0Raw[10] = 0xe6d616960f42d646, b0Raw[11] = 0xdbaceee0a1dfd25a, b0Raw[12] = 0x80a50af0b183e28e, b0Raw[13] = 0x11f7059250dfc69a, b0Raw[14] = 0x0c1c712f4f9304f9, b0Raw[15] = 0xd09b1925a8680f5;
    q0Raw[0] = 0xd;
    r0Raw[0] = 0x0289d4ed4ac36cc4, r0Raw[1] = 0x8b21b3474db9a412, r0Raw[2] = 0x1ff73b4e59c09174, r0Raw[3] = 0x4b6cc312ede5feb2, r0Raw[4] = 0xc3431e242223d357, r0Raw[5] = 0xb87642a284b401ff, r0Raw[6] = 0x4095936829914357, r0Raw[7] = 0x83f4b4ab72f9852a, r0Raw[8] = 0xb4e0d605f26befdb, r0Raw[9] = 0x709abd339bba77fe, r0Raw[10] = 0x37d035f7fa05437c, r0Raw[11] = 0x581e1df97c02d4b6, r0Raw[12] = 0x5262b953a79e2893, r0Raw[13] = 0x68e938077e190044, r0Raw[14] = 0x9f4ebe610380eee2, r0Raw[15] = 0x2a2725ed45fb70d;

    uint1024 a1, q1;
    uint1024 b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *q1Raw = (uint64 *) &q1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0x7ee085579c0f5603, a1Raw[1] = 0xc14b11dea04f4a3d, a1Raw[2] = 0x2c503498364045c2, a1Raw[3] = 0xa6feaa87554e03d8, a1Raw[4] = 0xb929d3e9f1790dc5, a1Raw[5] = 0xfb667478ce85f53b, a1Raw[6] = 0x6e7f4f61b2ed9ae1, a1Raw[7] = 0xc95e70410f0cf73f, a1Raw[8] = 0xd85255b7b8570909, a1Raw[9] = 0x6dd65404cacb37ca, a1Raw[10] = 0x3c018207a41f081b, a1Raw[11] = 0x6c38c55770575889, a1Raw[12] = 0xd552c837391cf676, a1Raw[13] = 0xda46793f64a0883a, a1Raw[14] = 0x80bee428df9717ae, a1Raw[15] = 0x87bdeac2853d9aee;
    b1Raw[0] = 0xc30b0a5f753dd664, b1Raw[1] = 0xae2b60f244a0beeb, b1Raw[2] = 0x645caf356bcc57af, b1Raw[3] = 0x063ad84a5fcd2796, b1Raw[4] = 0xe323d4c84e3eba9b, b1Raw[5] = 0x0e10dcd8f03a6d64, b1Raw[6] = 0x94a2367a2b07f2f2, b1Raw[7] = 0x9dab911a001e8cf0, b1Raw[8] = 0xe445d5f898fdbbd8, b1Raw[9] = 0x6f4909edf9e32f8f, b1Raw[10] = 0xb3994b678ee037dc, b1Raw[11] = 0xd2d39daac7e87e31, b1Raw[12] = 0x7a9fcb784efa2192, b1Raw[13] = 0x64a8bd1b02578317, b1Raw[14] = 0x725462066f53729f, b1Raw[15] = 0x733926839f43e735;
    q1Raw[0] = 0x1;
    r1Raw[0] = 0xbbd57af826d17f9f, r1Raw[1] = 0x131fb0ec5bae8b51, r1Raw[2] = 0xc7f38562ca73ee13, r1Raw[3] = 0xa0c3d23cf580dc41, r1Raw[4] = 0xd605ff21a33a532a, r1Raw[5] = 0xed55979fde4b87d6, r1Raw[6] = 0xd9dd18e787e5a7ef, r1Raw[7] = 0x2bb2df270eee6a4e, r1Raw[8] = 0xf40c7fbf1f594d31, r1Raw[9] = 0xfe8d4a16d0e8083a, r1Raw[10] = 0x886836a0153ed03e, r1Raw[11] = 0x996527aca86eda57, r1Raw[12] = 0x5ab2fcbeea22d4e3, r1Raw[13] = 0x759dbc2462490523, r1Raw[14] = 0x0e6a82227043a50f, r1Raw[15] = 0x1484c43ee5f9b3b9;

    // ACT
    uint1024 qc0;
    uint1024 rc0;
    a0.modAndDivide(b0, qc0, rc0);
    uint1024 qc1;
    uint1024 rc1;
    a1.modAndDivide(b1, qc1, rc1);

    // ASSERT
    ASSERT_EQ(qc0, q0);
    ASSERT_EQ(rc0, r0);
    ASSERT_EQ(qc1, q1);
    ASSERT_EQ(rc1, r1);
}

TEST(BigIntegerArithmeticTests, ModulusAndDivide2048By128Bit) {
    // ARRANGE
    uint2048 a0, q0;
    uint128 b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *q0Raw = (uint64 *) &q0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0xffe0e55d5d433187, a0Raw[1] = 0x410a0053f9ad2f4e, a0Raw[2] = 0x847e1028dffd4cb6, a0Raw[3] = 0xd3a50c63d7642c14, a0Raw[4] = 0xbdfc1d2770b780c4, a0Raw[5] = 0xc71828bb73dbba13, a0Raw[6] = 0xb0a1a717cd707e71, a0Raw[7] = 0x09c91376481a5bb9, a0Raw[8] = 0xcf7fc0f0728f322b, a0Raw[9] = 0x83a4153388623056, a0Raw[10] = 0x5514cb9ff2efa185, a0Raw[11] = 0x02ede89e0e16b5d2, a0Raw[12] = 0xb0d61dba03d00389, a0Raw[13] = 0xe0c9b1d885d97325, a0Raw[14] = 0xcbf79ce9947b2898, a0Raw[15] = 0xa866de349139bcb9, a0Raw[16] = 0x2ca1e02df119b4f9, a0Raw[17] = 0x5246a8b782386c62, a0Raw[18] = 0x2c1fc2885d304990, a0Raw[19] = 0xf0669a07b2cec68e, a0Raw[20] = 0xac3c3e22cc025119, a0Raw[21] = 0x5e82bac5578e26ce, a0Raw[22] = 0xdbd6d6741203827e, a0Raw[23] = 0x33a13b38a718091e, a0Raw[24] = 0x3ed785d861791c46, a0Raw[25] = 0xcbb9bea0dabf1c39, a0Raw[26] = 0x787617a718ef068b, a0Raw[27] = 0xc5c93618331a0252, a0Raw[28] = 0x53ddc684c1178175, a0Raw[29] = 0x8608cc526eb14e54, a0Raw[30] = 0x1cd2ae45af01b815, a0Raw[31] = 0xf5c120c04236f3;
    b0Raw[0] = 0xa0036c624cf35c5f, b0Raw[1] = 0xc261f4f1ba23429c;
    q0Raw[0] = 0xceaef8ed712417e4, q0Raw[1] = 0x5508062fda251a9a, q0Raw[2] = 0xa2c8a2ecb6007f83, q0Raw[3] = 0xabcdc869ab21e78e, q0Raw[4] = 0xb189a04eae28c385, q0Raw[5] = 0xb0ccd86fd912f964, q0Raw[6] = 0x90fca415497ecfc3, q0Raw[7] = 0x4de13f3415567733, q0Raw[8] = 0xf63d24a5fd423a3b, q0Raw[9] = 0xf836d34dfd252f22, q0Raw[10] = 0xd262a439c7060ac2, q0Raw[11] = 0x76e20451607160b0, q0Raw[12] = 0x453d6e97c60f979c, q0Raw[13] = 0x03dac725687d9760, q0Raw[14] = 0x58df54bcf84029eb, q0Raw[15] = 0x1331f59cec6c65ae, q0Raw[16] = 0x83f6c4db76de6da5, q0Raw[17] = 0x1c061f401d460a5b, q0Raw[18] = 0x8d85935aa7b20247, q0Raw[19] = 0xece171841a27c521, q0Raw[20] = 0x0e955b52d42dfe74, q0Raw[21] = 0x5443f11e8940d6e1, q0Raw[22] = 0xa60809ce051fc5c8, q0Raw[23] = 0x45a5b9f2000e4998, q0Raw[24] = 0x3864ccb7d4555c00, q0Raw[25] = 0xc18b9736fa740b59, q0Raw[26] = 0x1ea6fcf7bc644e06, q0Raw[27] = 0xba47fcf08ea8f31c, q0Raw[28] = 0xf723ba2862d036d5, q0Raw[29] = 0x143a7f60317e693;
    r0Raw[0] = 0x52f2bef50adc63eb, r0Raw[1] = 0x27a0c02d0c38dbad;

    uint2048 a1, q1;
    uint128 b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *q1Raw = (uint64 *) &q1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0xf94d768544925429, a1Raw[1] = 0x13a685024cedb828, a1Raw[2] = 0x80f133c2587e3a45, a1Raw[3] = 0x1f107b3f309db185, a1Raw[4] = 0xd8acf130b2083296, a1Raw[5] = 0x9c39d286cce644d5, a1Raw[6] = 0xf69035e1c1d6f1f1, a1Raw[7] = 0x3b1610a98e166e55, a1Raw[8] = 0x94e247c860d92f63, a1Raw[9] = 0xc1e559b08b190aa1, a1Raw[10] = 0xa6a77259059dede7, a1Raw[11] = 0xc8aa6b29691c4ed4, a1Raw[12] = 0xd530a7b202459e49, a1Raw[13] = 0xaad74757b2dd17a5, a1Raw[14] = 0x8ffabf30000f1aaa, a1Raw[15] = 0x9388fd1cec4c4c83, a1Raw[16] = 0x9a90a7d070e2e29e, a1Raw[17] = 0xbd80965789e9f005, a1Raw[18] = 0x110172c0bf4abf55, a1Raw[19] = 0x430a09bd4fa3c79e, a1Raw[20] = 0xfd392f2deb10d569, a1Raw[21] = 0x06ff3bd2bc13ef73, a1Raw[22] = 0x8bfdeaac52858855, a1Raw[23] = 0xbee34861ecf934fc, a1Raw[24] = 0x893aa13c4b5384e0, a1Raw[25] = 0x1d447f39347dbc68, a1Raw[26] = 0x0c32782daab4cf3b, a1Raw[27] = 0x5af1c449084f949c, a1Raw[28] = 0xdd3be634435b8405, a1Raw[29] = 0x0aa0577628f030e6, a1Raw[30] = 0x96f51670e827a87b, a1Raw[31] = 0x728ec8bb9caf123d;
    b1Raw[0] = 0xc6cf2674d3215abd, b1Raw[1] = 0xaf95fd4d4e67edfe;
    q1Raw[0] = 0xd38185b59fdfa057, q1Raw[1] = 0xa286865f8ee47711, q1Raw[2] = 0xdb882241fcdbccc1, q1Raw[3] = 0x9317ab78872954b2, q1Raw[4] = 0x315d951644275d9d, q1Raw[5] = 0x1531334effca46f5, q1Raw[6] = 0x227dc8170d7f4724, q1Raw[7] = 0xdc206be6c073906f, q1Raw[8] = 0x2adb5e7cbcf3f703, q1Raw[9] = 0xcdf299d566a5336a, q1Raw[10] = 0x169fef1ed598519f, q1Raw[11] = 0xb1edfaf7da77e8aa, q1Raw[12] = 0x386792a720e27d25, q1Raw[13] = 0xa29db2821c4c4540, q1Raw[14] = 0x2afcf8973493c32b, q1Raw[15] = 0x3ac1997419318f3f, q1Raw[16] = 0x38d579d662065412, q1Raw[17] = 0xc73130f05805db9f, q1Raw[18] = 0x91667e5c2017f521, q1Raw[19] = 0x75fb96227de3d9bc, q1Raw[20] = 0x32caffc7953e720f, q1Raw[21] = 0xe393d221e5091e75, q1Raw[22] = 0xafc01a507686b2e0, q1Raw[23] = 0x59e293834c99f4f1, q1Raw[24] = 0x30af8807a196c878, q1Raw[25] = 0x29a99738d8d52cbf, q1Raw[26] = 0xfdb1f9fc4533c688, q1Raw[27] = 0x8793644532770b1c, q1Raw[28] = 0x791df3c57cdb438d, q1Raw[29] = 0xa705be5bba338994;
    r1Raw[0] = 0xc70266d23de35dee, r1Raw[1] = 0x325bb7ce1d661d8d;

    // ACT
    uint2048 qc0;
    uint128 rc0;
    a0.modAndDivide(b0, qc0, rc0);
    uint2048 qc1;
    uint128 rc1;
    a1.modAndDivide(b1, qc1, rc1);

    // ASSERT
    ASSERT_EQ(qc0, q0);
    ASSERT_EQ(rc0, r0);
    ASSERT_EQ(qc1, q1);
    ASSERT_EQ(rc1, r1);
}

TEST(BigIntegerArithmeticTests, ModulusAndDivide2048By256Bit) {
    // ARRANGE
    uint2048 a0, q0;
    uint256 b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *q0Raw = (uint64 *) &q0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x94d7f25214d53c49, a0Raw[1] = 0x69e5eee75926da30, a0Raw[2] = 0x30e3b7c3b9e21953, a0Raw[3] = 0x33dbee2476e1d970, a0Raw[4] = 0xa5f1ee47bada516b, a0Raw[5] = 0x6dc1fa08d19a777b, a0Raw[6] = 0xd1327685804e9123, a0Raw[7] = 0xb24be19ce6f69768, a0Raw[8] = 0xd70840049ce774ed, a0Raw[9] = 0x4f25bf3b559e0afc, a0Raw[10] = 0x6f90f0a4e17c2d99, a0Raw[11] = 0x26f9c1d49005f7d7, a0Raw[12] = 0x05a73a9cb9b73215, a0Raw[13] = 0x3a951995b02363b9, a0Raw[14] = 0x2946685c8f177b5c, a0Raw[15] = 0x76216ea764249282, a0Raw[16] = 0xd36bdaeab957c0b1, a0Raw[17] = 0x051656813ad176c3, a0Raw[18] = 0xf85f0875032c2f95, a0Raw[19] = 0xb4a3b7bbd0b190b8, a0Raw[20] = 0x3ff3acb1ed52d159, a0Raw[21] = 0x9dbaf6c84fd9ad34, a0Raw[22] = 0x5f2d7affd8876098, a0Raw[23] = 0x4863d1c3e42e4d60, a0Raw[24] = 0x22f4d4e651a5329f, a0Raw[25] = 0xd3d871e13b314e9a, a0Raw[26] = 0x1d316d01d7740f35, a0Raw[27] = 0x3a2e8f4c65f20f3d, a0Raw[28] = 0x915d213ed4381f2f, a0Raw[29] = 0xb87fcae8fe6db46b, a0Raw[30] = 0x6b93f10f7c818d30, a0Raw[31] = 0x42a7c45d790207c6;
    b0Raw[0] = 0x7fcace9663bbd34a, b0Raw[1] = 0x32796e9b8626631c, b0Raw[2] = 0xc6445926829959f5, b0Raw[3] = 0x551cbd59d342242;
    q0Raw[0] = 0x87071c209f55304b, q0Raw[1] = 0xa91e967494aefaf0, q0Raw[2] = 0xd0923854dbae16b4, q0Raw[3] = 0x1b1ecd1711d23cbb, q0Raw[4] = 0x951f875a83fd84c0, q0Raw[5] = 0x8ac7e5df32947d8a, q0Raw[6] = 0x33b7af1ff62ed657, q0Raw[7] = 0xccbb289622b08b5b, q0Raw[8] = 0xff8f23cd8f5f729f, q0Raw[9] = 0xc8dd02c598176484, q0Raw[10] = 0x7cf9b19f319f7a70, q0Raw[11] = 0xca0dc2c22d5963bc, q0Raw[12] = 0x2ecd9e489020e422, q0Raw[13] = 0x2a3f35c6bf516651, q0Raw[14] = 0x42a9812d2be62bde, q0Raw[15] = 0xdc9f6449b0df64d4, q0Raw[16] = 0xdfa558dd87b06455, q0Raw[17] = 0x1ea05d0775e93af4, q0Raw[18] = 0x84dea4cce099c6ee, q0Raw[19] = 0x8954527229ec2f5f, q0Raw[20] = 0xc87f0fbd42067abe, q0Raw[21] = 0x73e2edad9106b6a9, q0Raw[22] = 0x831526a1ec610b22, q0Raw[23] = 0x07d7a1480296da11, q0Raw[24] = 0x7855f9ed813379e5, q0Raw[25] = 0x5e21bb9971194368, q0Raw[26] = 0xd42b0e1a99b8f807, q0Raw[27] = 0x87c43b7a67ce86be, q0Raw[28] = 0xc;
    r0Raw[0] = 0x4e33f2b7879e759b, r0Raw[1] = 0xc17b051fd01dae97, r0Raw[2] = 0x6aafb63d6b19a7ad, r0Raw[3] = 0x46329353f6a43a7;

    uint2048 a1, q1;
    uint256 b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *q1Raw = (uint64 *) &q1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0x7764d3237bf39d10, a1Raw[1] = 0x9244284d9acbb2c3, a1Raw[2] = 0xe5a4339424d8c998, a1Raw[3] = 0x84d4d2d9da6839cf, a1Raw[4] = 0x049b10caafff438a, a1Raw[5] = 0xf9adcf09573f038f, a1Raw[6] = 0xd0f6c445923e623c, a1Raw[7] = 0x3b8ae020e304fb19, a1Raw[8] = 0x21cc4b044f0c363f, a1Raw[9] = 0xec9e5d9b821d59ee, a1Raw[10] = 0xa82dc7d259a6a442, a1Raw[11] = 0x35bab0e798df0df4, a1Raw[12] = 0x1be21e34e5def39c, a1Raw[13] = 0xc5abb28cda109e03, a1Raw[14] = 0x033bdeb5afce4bef, a1Raw[15] = 0xe2d80f1f3e89272c, a1Raw[16] = 0xbd518549461a0150, a1Raw[17] = 0xbc15312bae1865b4, a1Raw[18] = 0x427681a192a6c7c1, a1Raw[19] = 0xe41e4d999771093b, a1Raw[20] = 0x0bd97149392f7522, a1Raw[21] = 0xebb0f9514e7ee225, a1Raw[22] = 0x4011ddc78e85b427, a1Raw[23] = 0x6a323bda8d5c67ae, a1Raw[24] = 0x8c3546586431afa1, a1Raw[25] = 0x99c07b44018679ef, a1Raw[26] = 0x1a3c317e6d494fb0, a1Raw[27] = 0x1ac4087da1e3d00d, a1Raw[28] = 0x3c15d48d8d746424, a1Raw[29] = 0x868fc42217b05d91, a1Raw[30] = 0xff64b2abd66c6314, a1Raw[31] = 0x51a604b1ea88e2b1;
    b1Raw[0] = 0x78a7d9b2747d69d4, b1Raw[1] = 0x8db698d812b91e0b, b1Raw[2] = 0xf9a220eea65077ea, b1Raw[3] = 0xdf103f335914d419;
    q1Raw[0] = 0x862414e22f842bbf, q1Raw[1] = 0xe3750c887fb070c4, q1Raw[2] = 0xb66a41d6a8560293, q1Raw[3] = 0x7a540a2514b5d718, q1Raw[4] = 0xf2e4e0bb24856a4d, q1Raw[5] = 0x9ca9b9cc4f5ecf3f, q1Raw[6] = 0xaef8ed5b04799e61, q1Raw[7] = 0x129192c7c119edbd, q1Raw[8] = 0xdfb9ba8287a26117, q1Raw[9] = 0xf8819206f34fccd5, q1Raw[10] = 0xa96c2ec3c52e36b7, q1Raw[11] = 0xc54fead3c906cd40, q1Raw[12] = 0x550fddc31cb27798, q1Raw[13] = 0x2ba47bd1731b0024, q1Raw[14] = 0x87c50b8865da72eb, q1Raw[15] = 0x9a2f9b8a013b38ee, q1Raw[16] = 0x17bf7586b430dcc5, q1Raw[17] = 0x5508d5969be22db3, q1Raw[18] = 0x92dfbb63e555cd05, q1Raw[19] = 0x0c100ad3d89bf0bf, q1Raw[20] = 0x969c63a4fc62f0e3, q1Raw[21] = 0x2060f0f5e80678c2, q1Raw[22] = 0xc2627161047bbd3e, q1Raw[23] = 0xaa37028ec880725d, q1Raw[24] = 0x3a33e88482f27141, q1Raw[25] = 0x97342e0bcfb67718, q1Raw[26] = 0x64ff3fb6c5fcb0cb, q1Raw[27] = 0x5db450b198bc8d64;
    r1Raw[0] = 0xc065592d044b0be4, r1Raw[1] = 0x5842baee4e3d656f, r1Raw[2] = 0x168773c8c379da7c, r1Raw[3] = 0xd32737249527c0ab;

    // ACT
    uint2048 qc0;
    uint256 rc0;
    a0.modAndDivide(b0, qc0, rc0);
    uint2048 qc1;
    uint256 rc1;
    a1.modAndDivide(b1, qc1, rc1);

    // ASSERT
    ASSERT_EQ(qc0, q0);
    ASSERT_EQ(rc0, r0);
    ASSERT_EQ(qc1, q1);
    ASSERT_EQ(rc1, r1);
}

TEST(BigIntegerArithmeticTests, ModulusAndDivide2048By512Bit) {
    // ARRANGE
    uint2048 a0, q0;
    uint512 b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *q0Raw = (uint64 *) &q0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0xffdbba06f8fbc7b4, a0Raw[1] = 0xf7a4e88691822bc5, a0Raw[2] = 0xb9eae62d316c6345, a0Raw[3] = 0x065913d8772f4dea, a0Raw[4] = 0xdbe8a8a4bc5eefee, a0Raw[5] = 0xc5fc5f36ffa8d33b, a0Raw[6] = 0x1cce44f075e34120, a0Raw[7] = 0xf586fe82257a1227, a0Raw[8] = 0xd51c247323963368, a0Raw[9] = 0x0ed7f7b4476cbd5e, a0Raw[10] = 0x98b6faef2301ba01, a0Raw[11] = 0xb40ac7dccd798a48, a0Raw[12] = 0x555f9b552315bca9, a0Raw[13] = 0x0a571b418379cc01, a0Raw[14] = 0x6cab0d8a44f80c7e, a0Raw[15] = 0xcbfdfd3af620614c, a0Raw[16] = 0x5b64b7d45a831523, a0Raw[17] = 0x6c02cf8ae57cd98d, a0Raw[18] = 0xd20a711e0b821cb1, a0Raw[19] = 0xbe9defe44047fe61, a0Raw[20] = 0x0785b24f5104d25f, a0Raw[21] = 0x17b1057b54e3b6b2, a0Raw[22] = 0xb7ad94d196755071, a0Raw[23] = 0x4992d884a0551388, a0Raw[24] = 0x9f5331304f80b1d8, a0Raw[25] = 0x83ba22bc9f139328, a0Raw[26] = 0xc4cf3d161fb7ebe6, a0Raw[27] = 0x42374c6d9696edb9, a0Raw[28] = 0x0174e91cb7154575, a0Raw[29] = 0xd3a27ff2fc6012d4, a0Raw[30] = 0x5c401f9e28fdfaf0, a0Raw[31] = 0x9400853d7f602ff4;
    b0Raw[0] = 0x10521bd393539125, b0Raw[1] = 0x94f41c1785636ce8, b0Raw[2] = 0xc7bb47e5bce241be, b0Raw[3] = 0x65d9f0765fc3fd4a, b0Raw[4] = 0x14ddd8c169e8f9a9, b0Raw[5] = 0xe3389f4086a84203, b0Raw[6] = 0x9316be4ad588d362, b0Raw[7] = 0xd37f7f9bbc077411;
    q0Raw[0] = 0x38fa777e1fb6287c, q0Raw[1] = 0xe00396542affabfc, q0Raw[2] = 0x0474929ff518fd26, q0Raw[3] = 0xfbab94dd20a10570, q0Raw[4] = 0xcd7cb99dcb55c9d0, q0Raw[5] = 0x52d642be7758ec78, q0Raw[6] = 0x21b691bd984fdf9d, q0Raw[7] = 0x264b0101e76a0d19, q0Raw[8] = 0x296dc7ca34dd96d3, q0Raw[9] = 0xe25853820c773918, q0Raw[10] = 0x8a9e5dc89858727f, q0Raw[11] = 0xda141dba478eca48, q0Raw[12] = 0x574a6764b7e72427, q0Raw[13] = 0x605f21fc6d8d4b92, q0Raw[14] = 0x82d6c685b8323429, q0Raw[15] = 0x80a523f04251fa16, q0Raw[16] = 0xd4424dd42e1708c5, q0Raw[17] = 0x5e8e435288df35b0, q0Raw[18] = 0x3fad50591a978dcc, q0Raw[19] = 0x8f214e3bdfba3988, q0Raw[20] = 0xaf973c0573446940, q0Raw[21] = 0xdabc782d4a5ddef5, q0Raw[22] = 0x895d11a51b967905, q0Raw[23] = 0xb324c2fa9aad5507;
    r0Raw[0] = 0xaabfb153e285b1c8, r0Raw[1] = 0x2526e577bf1cd2ac, r0Raw[2] = 0xb25f211680448853, r0Raw[3] = 0xdb26ec829f204591, r0Raw[4] = 0x817f9b1fb660b108, r0Raw[5] = 0x0b7c0a52daebb608, r0Raw[6] = 0x49e600d49bdbccbc, r0Raw[7] = 0x3590c133c4ca5508;

    uint2048 a1, q1;
    uint512 b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *q1Raw = (uint64 *) &q1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0x5a87869c4c83ab15, a1Raw[1] = 0xf50466557abb7470, a1Raw[2] = 0x32b9d9d4b0a8cde2, a1Raw[3] = 0xfcead9ba2e29cc5b, a1Raw[4] = 0x81f2c2b24a4fdf9a, a1Raw[5] = 0xf932bfe64a0bfa73, a1Raw[6] = 0xea94280771626732, a1Raw[7] = 0x7c0b924fd811783e, a1Raw[8] = 0x795da3b74bc296ea, a1Raw[9] = 0xf52dc576bd9c6546, a1Raw[10] = 0x03f8996caf778627, a1Raw[11] = 0x8d5c5316634eadc3, a1Raw[12] = 0x96215f68843090ec, a1Raw[13] = 0x4ab4206a9cf0a61b, a1Raw[14] = 0x257824d139e7f4e5, a1Raw[15] = 0x9a8701ff1396f8a3, a1Raw[16] = 0xeb9982753abd9f0a, a1Raw[17] = 0x0d5f0105392b29ed, a1Raw[18] = 0x822dd539827ffc8a, a1Raw[19] = 0xd4896abe667677d8, a1Raw[20] = 0x1798bac95b3c9835, a1Raw[21] = 0x316bd086c91aa392, a1Raw[22] = 0xb09af31b78e8a8eb, a1Raw[23] = 0xc15945576afa144a, a1Raw[24] = 0xbbebccc80fbac163, a1Raw[25] = 0x0d8f55dd8d531b1b, a1Raw[26] = 0x58645804e27100c7, a1Raw[27] = 0x20ca058cb7e8c3d7, a1Raw[28] = 0x89ed35c71bef608a, a1Raw[29] = 0x5b8d51e0fa1b9d1f, a1Raw[30] = 0xb62ca07f29551e0f, a1Raw[31] = 0x2d8a9df939ba4c33;
    b1Raw[0] = 0x20ed911279e98e6d, b1Raw[1] = 0x4b2cd7a47e72f741, b1Raw[2] = 0xc97b26f2a66c5d0e, b1Raw[3] = 0x9dac1b2454ca4b5a, b1Raw[4] = 0x02eccd1ac5614459, b1Raw[5] = 0x5804818e926e299d, b1Raw[6] = 0xa93e12b4bb746f64, b1Raw[7] = 0xf24d4c5699417081;
    q1Raw[0] = 0x07e52c2a3739faca, q1Raw[1] = 0xd8f6fd62782346a3, q1Raw[2] = 0xd409b44a5d7e7e88, q1Raw[3] = 0xed3e606132bd13d7, q1Raw[4] = 0xa339f22a9e2ca33a, q1Raw[5] = 0x30c3adc1541b9f0d, q1Raw[6] = 0x7296ef7f173d601c, q1Raw[7] = 0x4b9d403db2999d2f, q1Raw[8] = 0x8442739b5705ef3b, q1Raw[9] = 0x3cfe571e3c841861, q1Raw[10] = 0xee0c6c0534c4afc9, q1Raw[11] = 0xd7f153282fd2fb0e, q1Raw[12] = 0x1993eb367b8360c5, q1Raw[13] = 0x9fd7799ac167147a, q1Raw[14] = 0xb642d7b9589cefdc, q1Raw[15] = 0x3d61f107c926dd04, q1Raw[16] = 0x2e8945e87ca234fe, q1Raw[17] = 0x6b00cf48f4d03542, q1Raw[18] = 0x7e986ec0649ac49d, q1Raw[19] = 0xc22dfcbbcb75508f, q1Raw[20] = 0x4431c18b6546ca0f, q1Raw[21] = 0xc3e0f1ceb20da3a5, q1Raw[22] = 0x66c8ad8c749850a7, q1Raw[23] = 0x301db6adadfbbf10;
    r1Raw[0] = 0x92cb967de3ddd713, r1Raw[1] = 0x4a3939fdd2a7799f, r1Raw[2] = 0x07a03b543d03b789, r1Raw[3] = 0xad0a2c696200182e, r1Raw[4] = 0xe9356f308477323f, r1Raw[5] = 0x09e97b2868294488, r1Raw[6] = 0x777c1ba6fcdf97a4, r1Raw[7] = 0xd3642d335015a1d3;

    // ACT
    uint2048 qc0;
    uint512 rc0;
    a0.modAndDivide(b0, qc0, rc0);
    uint2048 qc1;
    uint512 rc1;
    a1.modAndDivide(b1, qc1, rc1);

    // ASSERT
    ASSERT_EQ(qc0, q0);
    ASSERT_EQ(rc0, r0);
    ASSERT_EQ(qc1, q1);
    ASSERT_EQ(rc1, r1);
}

TEST(BigIntegerArithmeticTests, ModulusAndDivide2048By1024Bit) {
    // ARRANGE
    uint2048 a0, q0;
    uint1024 b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *q0Raw = (uint64 *) &q0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x9ecbc2ddc87b3e3b, a0Raw[1] = 0x983d2236f21235e5, a0Raw[2] = 0x2dfd4ce7947accc7, a0Raw[3] = 0x47fa9224a49e1cf1, a0Raw[4] = 0x35ba90d13e30efb3, a0Raw[5] = 0x04efa5c0d8f9c836, a0Raw[6] = 0xc6ba6b74ecff00d5, a0Raw[7] = 0x9af7c15434068a01, a0Raw[8] = 0xe206f2522ccef855, a0Raw[9] = 0x51e9046a4fde92e4, a0Raw[10] = 0x1485bb4eb2921ad7, a0Raw[11] = 0xcf2d9c19126aa0be, a0Raw[12] = 0x82b1d776ebf9cb22, a0Raw[13] = 0xe872e8e20d4f58de, a0Raw[14] = 0x8b580f1713ec5312, a0Raw[15] = 0xb7a754a205afb19a, a0Raw[16] = 0xba157a0b98ba84b5, a0Raw[17] = 0x62d418107730ee84, a0Raw[18] = 0x3f89f67ce29d965a, a0Raw[19] = 0x7b3cd60239128498, a0Raw[20] = 0x3aa123785eaa80ea, a0Raw[21] = 0x61eb7b54ae7bb3c0, a0Raw[22] = 0x5b05875631861974, a0Raw[23] = 0x7816ebc0ee47e152, a0Raw[24] = 0xb8c12b86d02ad448, a0Raw[25] = 0x9dbd61cad3f906c9, a0Raw[26] = 0x24648c64395e994e, a0Raw[27] = 0x736382f41d6e2996, a0Raw[28] = 0xa01a8034d9517e5a, a0Raw[29] = 0x014034b60617ae5d, a0Raw[30] = 0xb7ed2b47b2f4a6cb, a0Raw[31] = 0xf5e78d0c340c89a1;
    b0Raw[0] = 0x033024093a9c96ae, b0Raw[1] = 0x684002175978a7d3, b0Raw[2] = 0x1ae7e70762c458e9, b0Raw[3] = 0x1cc93f1f02970adb, b0Raw[4] = 0xeb426e782d947959, b0Raw[5] = 0x9dc7074f66acf593, b0Raw[6] = 0xbd6fbe6b40162d56, b0Raw[7] = 0xaab65da7d6dcaaec, b0Raw[8] = 0x49a3f39036e88ab5, b0Raw[9] = 0x0f19bc8b2341068c, b0Raw[10] = 0xa0db793475e483af, b0Raw[11] = 0x683c791344eb3ecf, b0Raw[12] = 0x637fc9c13688f020, b0Raw[13] = 0xdb95e4bc9b77af53, b0Raw[14] = 0x317012055c5b25f9, b0Raw[15] = 0x2cf0967dc4095759;
    q0Raw[0] = 0xbc3ca53555203732, q0Raw[1] = 0x4c8218c9434e6b37, q0Raw[2] = 0x3b48c65077eef217, q0Raw[3] = 0xe03d2b17717f9481, q0Raw[4] = 0xbfaee56174a863be, q0Raw[5] = 0xe6eb78b2a473f13c, q0Raw[6] = 0x075bddfffdb3d270, q0Raw[7] = 0x72e7047d243dd8af, q0Raw[8] = 0xab537cbc8042a22f, q0Raw[9] = 0x321133b35761edaf, q0Raw[10] = 0xb3aa38f98f038567, q0Raw[11] = 0x1a22d5ddebe7422a, q0Raw[12] = 0x8f22e403827565d8, q0Raw[13] = 0x651ed5b9fda4d9be, q0Raw[14] = 0xa8578fc0e0244fab, q0Raw[15] = 0x78cc240f306462ef, q0Raw[16] = 0x5;
    r0Raw[0] = 0xedb813d815c66e3f, r0Raw[1] = 0xceba8de51afa7996, r0Raw[2] = 0xb3c559acb0bab0ae, r0Raw[3] = 0x928a91bb5729fa71, r0Raw[4] = 0x562b5f4dfae77be3, r0Raw[5] = 0xc7f3b55aa2c8d0f6, r0Raw[6] = 0xad99ebf128873ad4, r0Raw[7] = 0x498c18e46447af8f, r0Raw[8] = 0x3e7667def1fe3efc, r0Raw[9] = 0xc26e8c986aacfd13, r0Raw[10] = 0xf032c5bf662d409a, r0Raw[11] = 0xfa8632f387d1b561, r0Raw[12] = 0xfac70385dd06a909, r0Raw[13] = 0xcc0d7e055be0d955, r0Raw[14] = 0x5fd733ae386f917e, r0Raw[15] = 0x40ecfb32000b6dc;

    uint2048 a1, q1;
    uint1024 b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *q1Raw = (uint64 *) &q1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0xaa377ac6daa8523d, a1Raw[1] = 0xc519019893ae7381, a1Raw[2] = 0xe96f1d34c09ddb94, a1Raw[3] = 0x3c6fea3c8c771d5f, a1Raw[4] = 0x001ef8367da7359b, a1Raw[5] = 0xf18a76758e7dfa6f, a1Raw[6] = 0x1e29496c2de6dbd3, a1Raw[7] = 0xabf14fadcd3459da, a1Raw[8] = 0x9315f91214dc48e8, a1Raw[9] = 0xcbdb0e5bb076eccd, a1Raw[10] = 0x1d4567413a169266, a1Raw[11] = 0xcdc50f56c9458006, a1Raw[12] = 0xf4245d9864ab2152, a1Raw[13] = 0xd908163fcd6f3d9e, a1Raw[14] = 0xb919c2ee10c63d71, a1Raw[15] = 0x6a7bfbd8f0b17fa8, a1Raw[16] = 0x8b434ad6509959a0, a1Raw[17] = 0x3ae2bf5dedd5dfc6, a1Raw[18] = 0x00c2e5db01411c91, a1Raw[19] = 0x37827a86ec883124, a1Raw[20] = 0x0cae8bbbaa325cd4, a1Raw[21] = 0x0496b4c38e1be07b, a1Raw[22] = 0x0d44c32ca4d0ced0, a1Raw[23] = 0x4f9f1f4de32fc4af, a1Raw[24] = 0xdc95fcc39f02edd8, a1Raw[25] = 0x1b0556d4bcd264e8, a1Raw[26] = 0x71fc680184c41b12, a1Raw[27] = 0x45654bf0aae0c22d, a1Raw[28] = 0x4f10ffc6cd275a8e, a1Raw[29] = 0xc04afb2046192dd6, a1Raw[30] = 0x14fcafa99341067f, a1Raw[31] = 0x7dca56271d54bd05;
    b1Raw[0] = 0xe1621d83fdc75832, b1Raw[1] = 0x99da78ecd35a8f41, b1Raw[2] = 0x009944508ccf951d, b1Raw[3] = 0x7dca3ede96c53c1b, b1Raw[4] = 0x194ef88cb9383076, b1Raw[5] = 0x6df6e596ae82cd06, b1Raw[6] = 0x3290768da201c66b, b1Raw[7] = 0xa91978357506c134, b1Raw[8] = 0x6489e50b56310c08, b1Raw[9] = 0xfb1989d1ac595ee6, b1Raw[10] = 0x801caaf218803a2a, b1Raw[11] = 0xc5453968d1238c5e, b1Raw[12] = 0x4f290294f924fbef, b1Raw[13] = 0xf160af121a020bb4, b1Raw[14] = 0xc136d4b6a6fee525, b1Raw[15] = 0xfde8f9e502ec1e10;
    q1Raw[0] = 0xb8351a7122c29670, q1Raw[1] = 0x5b5ca215a466f242, q1Raw[2] = 0x42f6ee6a7bc876e7, q1Raw[3] = 0xa5f7214288f09ff7, q1Raw[4] = 0x0a01a9ff1762b542, q1Raw[5] = 0x60185190232b372a, q1Raw[6] = 0x55d259142d4bf5e3, q1Raw[7] = 0xd8d7a8fda52dfa7a, q1Raw[8] = 0x53ca8cc27a25388b, q1Raw[9] = 0x39f83738ddbff83d, q1Raw[10] = 0x725fefa179e8f22c, q1Raw[11] = 0x42e40c900ae693d3, q1Raw[12] = 0xf0ef8a910d8e79da, q1Raw[13] = 0xee44b22530b32ea8, q1Raw[14] = 0x67d6697e71f002f0, q1Raw[15] = 0x7ed364f56d733ec0;
    r1Raw[0] = 0x35f76d7b8be0705d, r1Raw[1] = 0x3f77f509438a16c3, r1Raw[2] = 0x3c14ef1ff088e292, r1Raw[3] = 0x660268d7b798af75, r1Raw[4] = 0x5aa8693047a6f939, r1Raw[5] = 0x671c3e8e0e2b53e5, r1Raw[6] = 0xea03020fab5f12e6, r1Raw[7] = 0xa8a5da8386d9a52f, r1Raw[8] = 0xbde6d1e4d3fee787, r1Raw[9] = 0xe3aef761c7aef80f, r1Raw[10] = 0x9387bdba0b6ea92c, r1Raw[11] = 0x2baf0fb5b6abe6cd, r1Raw[12] = 0x98344bcfd18d2b2e, r1Raw[13] = 0xb08157f50daebcbe, r1Raw[14] = 0xfcd52b59942fcd63, r1Raw[15] = 0x28dc1663de1db95;

    // ACT
    uint2048 qc0;
    uint1024 rc0;
    a0.modAndDivide(b0, qc0, rc0);
    uint2048 qc1;
    uint1024 rc1;
    a1.modAndDivide(b1, qc1, rc1);

    // ASSERT
    ASSERT_EQ(qc0, q0);
    ASSERT_EQ(rc0, r0);
    ASSERT_EQ(qc1, q1);
    ASSERT_EQ(rc1, r1);
}

TEST(BigIntegerArithmeticTests, ModulusAndDivide2048By2048Bit) {
    // ARRANGE
    uint2048 a0, q0;
    uint2048 b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *q0Raw = (uint64 *) &q0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x65fbef3815db7bbf, a0Raw[1] = 0x89b6f1174c26c8a5, a0Raw[2] = 0xab17cfc3c1116314, a0Raw[3] = 0xcd7aa24dc3104c29, a0Raw[4] = 0x10f20cac7180eb04, a0Raw[5] = 0x0fec617e01e064c8, a0Raw[6] = 0x0d2f0d895c889dee, a0Raw[7] = 0x784153e2909f7028, a0Raw[8] = 0x652151a68ef29dc9, a0Raw[9] = 0xd9a94ea7cc27f48b, a0Raw[10] = 0x7b20218ed984aa2b, a0Raw[11] = 0x85fabe0acf6adbf6, a0Raw[12] = 0x3acdb0ef80585e9e, a0Raw[13] = 0x8ba6dd1b2cfbbd00, a0Raw[14] = 0x8adc51952865122d, a0Raw[15] = 0x2ccb6f53b12ac320, a0Raw[16] = 0x50c567e4c5d03d0c, a0Raw[17] = 0x8f3b684c630eb33d, a0Raw[18] = 0x982fa93c27840117, a0Raw[19] = 0xa3a845f95d7632df, a0Raw[20] = 0x35d688fe2b3a4848, a0Raw[21] = 0x6b93015943869e02, a0Raw[22] = 0x82a33dda449dfb5d, a0Raw[23] = 0xc81cb4154574b12d, a0Raw[24] = 0xcdab1b953c28af68, a0Raw[25] = 0x9a85d7784507ad26, a0Raw[26] = 0x143e64a57ca89f7d, a0Raw[27] = 0x84789fbb88faabde, a0Raw[28] = 0xf367171bb34ba4e1, a0Raw[29] = 0xb51847d863cdc65e, a0Raw[30] = 0xddb0a43f82fae5a2, a0Raw[31] = 0x12e483b9a6a8475f;
    b0Raw[0] = 0x879712f4024c01a3, b0Raw[1] = 0x16f1505a848acce5, b0Raw[2] = 0x346c462b9459f372, b0Raw[3] = 0x5f7033db21f5309b, b0Raw[4] = 0x16a992ec52af22bb, b0Raw[5] = 0x1638fb63820e4cc3, b0Raw[6] = 0x0f6cbdf36d65bb8b, b0Raw[7] = 0x20b39c90477c4519, b0Raw[8] = 0x549cbfff05694380, b0Raw[9] = 0x5f4e160ce4fea3bd, b0Raw[10] = 0x29bff4a7368de40f, b0Raw[11] = 0x3897a0fd9d4987fc, b0Raw[12] = 0xb0ef32783f4dc537, b0Raw[13] = 0x8c8c5cd4db250064, b0Raw[14] = 0x27cc0cd266b93d5f, b0Raw[15] = 0x249154f414f4e8f2, b0Raw[16] = 0xed5f17d1d58ea499, b0Raw[17] = 0x2020f3a28c6298b2, b0Raw[18] = 0xd7a283782bf42103, b0Raw[19] = 0x1cd8412298e92773, b0Raw[20] = 0x58f7a0bb18c87a49, b0Raw[21] = 0x6b279e92cb9bd92e, b0Raw[22] = 0xa93632875c010840, b0Raw[23] = 0xdd404158e6ee2650, b0Raw[24] = 0x64281e69753d621d, b0Raw[25] = 0xfc9fab4d49ee7de1, b0Raw[26] = 0x667c47c32ce14437, b0Raw[27] = 0x490f3709682a1e21, b0Raw[28] = 0x8f7da8609a84993e, b0Raw[29] = 0x7e78a6f3bc4543f9, b0Raw[30] = 0xf9f6622f99b03531, b0Raw[31] = 0xbdac1fca2573247f;
    q0Raw[0] = 0x0;
    r0Raw[0] = 0x65fbef3815db7bbf, r0Raw[1] = 0x89b6f1174c26c8a5, r0Raw[2] = 0xab17cfc3c1116314, r0Raw[3] = 0xcd7aa24dc3104c29, r0Raw[4] = 0x10f20cac7180eb04, r0Raw[5] = 0x0fec617e01e064c8, r0Raw[6] = 0x0d2f0d895c889dee, r0Raw[7] = 0x784153e2909f7028, r0Raw[8] = 0x652151a68ef29dc9, r0Raw[9] = 0xd9a94ea7cc27f48b, r0Raw[10] = 0x7b20218ed984aa2b, r0Raw[11] = 0x85fabe0acf6adbf6, r0Raw[12] = 0x3acdb0ef80585e9e, r0Raw[13] = 0x8ba6dd1b2cfbbd00, r0Raw[14] = 0x8adc51952865122d, r0Raw[15] = 0x2ccb6f53b12ac320, r0Raw[16] = 0x50c567e4c5d03d0c, r0Raw[17] = 0x8f3b684c630eb33d, r0Raw[18] = 0x982fa93c27840117, r0Raw[19] = 0xa3a845f95d7632df, r0Raw[20] = 0x35d688fe2b3a4848, r0Raw[21] = 0x6b93015943869e02, r0Raw[22] = 0x82a33dda449dfb5d, r0Raw[23] = 0xc81cb4154574b12d, r0Raw[24] = 0xcdab1b953c28af68, r0Raw[25] = 0x9a85d7784507ad26, r0Raw[26] = 0x143e64a57ca89f7d, r0Raw[27] = 0x84789fbb88faabde, r0Raw[28] = 0xf367171bb34ba4e1, r0Raw[29] = 0xb51847d863cdc65e, r0Raw[30] = 0xddb0a43f82fae5a2, r0Raw[31] = 0x12e483b9a6a8475f;

    uint2048 a1, q1;
    uint2048 b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *q1Raw = (uint64 *) &q1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0x02418236b5d6ac1b, a1Raw[1] = 0x074cf267cd2de41e, a1Raw[2] = 0x5a06d56bed2c283f, a1Raw[3] = 0xfba97e33ba4ac61e, a1Raw[4] = 0xb4488b5bc49d56f3, a1Raw[5] = 0x9e440efbbc5d12ca, a1Raw[6] = 0x6205e857e373a15a, a1Raw[7] = 0xcc4b5c8f766f1148, a1Raw[8] = 0x77bcdebd90b2c767, a1Raw[9] = 0x49031f8ce6b84fb8, a1Raw[10] = 0x1e7d2005a3eee6e7, a1Raw[11] = 0x4f1344e509123115, a1Raw[12] = 0x64b311b06bb4e08b, a1Raw[13] = 0x63fab17acf9fc622, a1Raw[14] = 0x1b519df40697541b, a1Raw[15] = 0x666dde6742fb15d7, a1Raw[16] = 0x9f426983645d0530, a1Raw[17] = 0x7e07bb95d717473b, a1Raw[18] = 0x04a97db70eb3aee5, a1Raw[19] = 0xa62a577c95edd2b0, a1Raw[20] = 0x53425c9ce34bd62b, a1Raw[21] = 0xe80ed11eaaeaff47, a1Raw[22] = 0xdff22401417f00f8, a1Raw[23] = 0x7d57c9c4eb5e28ea, a1Raw[24] = 0x4da124862fa5c5ce, a1Raw[25] = 0xa72407e0ba1336fe, a1Raw[26] = 0xe9d1fcaf8ef94664, a1Raw[27] = 0x3fb09258b638a5d6, a1Raw[28] = 0xd9ca274f9b52fe8f, a1Raw[29] = 0xa340a22ee73cba85, a1Raw[30] = 0xd75439ec4415a615, a1Raw[31] = 0x7269596b123d2c63;
    b1Raw[0] = 0x6105a21d407f8bbd, b1Raw[1] = 0x61cba5eb7539bd24, b1Raw[2] = 0x42684fa225049edb, b1Raw[3] = 0x342c60f83568e0cc, b1Raw[4] = 0xb895e8b8170e209e, b1Raw[5] = 0x959d45631c87ed11, b1Raw[6] = 0x1dafa036d7ea74d2, b1Raw[7] = 0x18afbea350186465, b1Raw[8] = 0x7a525378a8f85213, b1Raw[9] = 0xaa38eed6623532f6, b1Raw[10] = 0x2d054138bbfbfa71, b1Raw[11] = 0xc71dce6972c027e6, b1Raw[12] = 0x5168b41363e4eba2, b1Raw[13] = 0xeff9b91eaf6bb666, b1Raw[14] = 0x16efc707aca75f94, b1Raw[15] = 0xb21ecc5ff8a76135, b1Raw[16] = 0x9f820b18b4c3f4e5, b1Raw[17] = 0x6e0a0d4cf8e456f4, b1Raw[18] = 0x88adaf5e83c30007, b1Raw[19] = 0x4f3da70a224274b8, b1Raw[20] = 0x6c1c433579fdfa5a, b1Raw[21] = 0xe737b4e67a7b3104, b1Raw[22] = 0xa1efe8ce53cba51f, b1Raw[23] = 0xac007ce9b58bfa07, b1Raw[24] = 0xda91d93f21a23312, b1Raw[25] = 0xd30208f16c27d0e0, b1Raw[26] = 0xa99c8247e1a494a8, b1Raw[27] = 0xe0c41c78338b991d, b1Raw[28] = 0xd5dd26e62778d32b, b1Raw[29] = 0xbba49f98aba8e64b, b1Raw[30] = 0xf4cc6243f4d993f3, b1Raw[31] = 0x97f63bc24a070b;
    q1Raw[0] = 0xc0;
    r1Raw[0] = 0x3e07ec46562dde5b, r1Raw[1] = 0xae9081cfe1e008d5, r1Raw[2] = 0x8bcb1bd029b503b5, r1Raw[3] = 0xda60c40baba22cec, r1Raw[4] = 0x43da014a7a04e04c, r1Raw[5] = 0x685004a6566b4580, r1Raw[6] = 0x1e4dbf35f39c036a, r1Raw[7] = 0x487c62136423c572, r1Raw[8] = 0xb9fe443ed6753915, r1Raw[9] = 0x9e4ffec33ed216dc, r1Raw[10] = 0x5a8c3578a6f311a7, r1Raw[11] = 0xf8b875cef8f44473, r1Raw[12] = 0x562c032580042675, r1Raw[13] = 0x68afda773ed6f965, r1Raw[14] = 0xe77c5832890fa467, r1Raw[15] = 0xcf54966cc5722e05, r1Raw[16] = 0xfdba16fbd16558ea, r1Raw[17] = 0xf67dc1db2bd60fc3, r1Raw[18] = 0x8265f6d43c73a952, r1Raw[19] = 0x37ed0fe2e4164849, r1Raw[20] = 0x3e0ff48164d01270, r1Raw[21] = 0x7e472442ce863bf6, r1Raw[22] = 0x6c03894268c3290b, r1Raw[23] = 0x7cfa1a7cc262a331, r1Raw[24] = 0x603e352cf5ff77cd, r1Raw[25] = 0x659d52cf9c368e5a, r1Raw[26] = 0xb47046c65389c7c6, r1Raw[27] = 0xac9b38320d85cf97, r1Raw[28] = 0x73ecfab200b49da6, r1Raw[29] = 0xe7c8efae289001a5, r1Raw[30] = 0x3e0a86f4a0e6af48, r1Raw[31] = 0x70ac995ab7e36c;

    // ACT
    uint2048 qc0;
    uint2048 rc0;
    a0.modAndDivide(b0, qc0, rc0);
    uint2048 qc1;
    uint2048 rc1;
    a1.modAndDivide(b1, qc1, rc1);

    // ASSERT
    ASSERT_EQ(qc0, q0);
    ASSERT_EQ(rc0, r0);
    ASSERT_EQ(qc1, q1);
    ASSERT_EQ(rc1, r1);
}

TEST(BigIntegerArithmeticTests, ModulusAndDivide4096By128Bit) {
    // ARRANGE
    uint4096 a0, q0;
    uint128 b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *q0Raw = (uint64 *) &q0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0xc8794b4aa7a1cf4f, a0Raw[1] = 0xaef1733788e936b2, a0Raw[2] = 0x2ba7672bde687279, a0Raw[3] = 0x9ff243bbed048360, a0Raw[4] = 0xa1848b668867800e, a0Raw[5] = 0xd1209132cd68f30f, a0Raw[6] = 0xf3e153d56c6506e0, a0Raw[7] = 0xedc847083778572f, a0Raw[8] = 0xb472d03ab07e0385, a0Raw[9] = 0xb1a63be252df954b, a0Raw[10] = 0xc07b2897c977ca59, a0Raw[11] = 0x62533269ab3d4032, a0Raw[12] = 0xaf4cf672e6d10a31, a0Raw[13] = 0x3cb9b07c8135d528, a0Raw[14] = 0xd0ac23f7402eccfd, a0Raw[15] = 0x8e5ec1d4a20c13cd, a0Raw[16] = 0x5eb9a85c260c3910, a0Raw[17] = 0x1d9d38eb97c56d4e, a0Raw[18] = 0xd54d49e80cb73424, a0Raw[19] = 0xac7f7c2d94b15066, a0Raw[20] = 0xa226d39f5dc959c4, a0Raw[21] = 0x42c961fe066887ad, a0Raw[22] = 0xa1493f839ab31d2d, a0Raw[23] = 0x6114c948dfd5336b, a0Raw[24] = 0x92a7cea428634809, a0Raw[25] = 0x4934f65022810cd1, a0Raw[26] = 0x5aa69b4e45713e18, a0Raw[27] = 0xbb28d47ac60bff4e, a0Raw[28] = 0x8fb1be57500349f2, a0Raw[29] = 0x7d5b8c4a24045eed, a0Raw[30] = 0x2f805bb4a69f6fcc, a0Raw[31] = 0x8c8de8d121d2d1b3, a0Raw[32] = 0x17b665cb848848ef, a0Raw[33] = 0x42c6fe901ce462c7, a0Raw[34] = 0xd88547f206af5e3f, a0Raw[35] = 0x49f97fba509ba0ec, a0Raw[36] = 0x93750c7b1bafae6b, a0Raw[37] = 0x60b74dbc06bd151b, a0Raw[38] = 0x29bb3d88371170b7, a0Raw[39] = 0x75d8d7c0302f73a8, a0Raw[40] = 0x44411c8178309764, a0Raw[41] = 0x612cbe5a8761133c, a0Raw[42] = 0xc1d4da6c9edcc66d, a0Raw[43] = 0x93568438a823b250, a0Raw[44] = 0x2bda61d13c9ce8bb, a0Raw[45] = 0x7017d4627e718182, a0Raw[46] = 0x01096c7aea388cc7, a0Raw[47] = 0x6339770ea516a7ae, a0Raw[48] = 0xa0e03794c8041557, a0Raw[49] = 0x1fbebb335bd415b2, a0Raw[50] = 0xa80a3cefdbcbe956, a0Raw[51] = 0x01213a6c0c825577, a0Raw[52] = 0x68b029a16d1d5684, a0Raw[53] = 0xc7f3039e8bdf41e5, a0Raw[54] = 0x24f53262c8b165c0, a0Raw[55] = 0x5c4f745b67c7f40b, a0Raw[56] = 0x41c5e9961e2b7bbd, a0Raw[57] = 0x082556a351d8feb9, a0Raw[58] = 0x1134f3295697d7ce, a0Raw[59] = 0x561493bbbd24f573, a0Raw[60] = 0x624c77f45b84c2c2, a0Raw[61] = 0x9bcd46114cf3c165, a0Raw[62] = 0xd90b0b5f08ad226a, a0Raw[63] = 0xc5b874e5ca6756;
    b0Raw[0] = 0x1d758479816b6e89, b0Raw[1] = 0x23da21f3a828706;
    q0Raw[0] = 0x84cbb18d0c5f7079, q0Raw[1] = 0xac63e1900c528fde, q0Raw[2] = 0xa0fcb91f0a69b1b1, q0Raw[3] = 0xf7d40c83cbf7aaba, q0Raw[4] = 0xef5253b1bc699cf6, q0Raw[5] = 0x04e80fc4d8024557, q0Raw[6] = 0x42a4935c908127b4, q0Raw[7] = 0x49b730bccfa97107, q0Raw[8] = 0x91ff699a52b40e8e, q0Raw[9] = 0x08feea46bf74e854, q0Raw[10] = 0xf4d4e1b446a51889, q0Raw[11] = 0x5f63bc3a8938ec0f, q0Raw[12] = 0x441ee7deb13ed980, q0Raw[13] = 0x6c2282079546963a, q0Raw[14] = 0x1566963058a889db, q0Raw[15] = 0x93157b9248e7f5dd, q0Raw[16] = 0xdb08441b4065a445, q0Raw[17] = 0xd46660fad7696e93, q0Raw[18] = 0x3438aae89467d196, q0Raw[19] = 0x281ff41ac0c6b231, q0Raw[20] = 0x6a4eaffa7278abb6, q0Raw[21] = 0x13f0a1f05a74a608, q0Raw[22] = 0x40f5171fe0b310bb, q0Raw[23] = 0x54ceb3066cfed5fd, q0Raw[24] = 0xdc0994fdc12d3c20, q0Raw[25] = 0x2237db30b752bd2c, q0Raw[26] = 0x68b7a38b6c46316c, q0Raw[27] = 0x5620a2ce88b33750, q0Raw[28] = 0xbbc0ddcd751d7de0, q0Raw[29] = 0x3a75e4383f40ca8d, q0Raw[30] = 0x777b079ae9253e47, q0Raw[31] = 0xaec394c376cdf89a, q0Raw[32] = 0x97d77295777907df, q0Raw[33] = 0x087c2dce8427d34c, q0Raw[34] = 0x4480b1bdffba9e6e, q0Raw[35] = 0xa3a7fbf4ff981ec2, q0Raw[36] = 0x6e941cb0852cef04, q0Raw[37] = 0x24c7cece526b7566, q0Raw[38] = 0xc46b82e4c1ab40c8, q0Raw[39] = 0x5d94239d894c0033, q0Raw[40] = 0x78d2b0a456cf7bc7, q0Raw[41] = 0x690d47ec02ed6e42, q0Raw[42] = 0xd353ccdbe41d9677, q0Raw[43] = 0x0dbfb1e071a64666, q0Raw[44] = 0xb0303135e392147c, q0Raw[45] = 0x68ff350548a1058f, q0Raw[46] = 0xecce0ed00bc71f9c, q0Raw[47] = 0x8439301ddf679469, q0Raw[48] = 0xb6d65abfb2097229, q0Raw[49] = 0x449f1314e0e5e3a5, q0Raw[50] = 0x9880ab4c5cd9a4f7, q0Raw[51] = 0x2047f565760871a8, q0Raw[52] = 0x7e478f1beb23282e, q0Raw[53] = 0xf6b7163e7feaa913, q0Raw[54] = 0xf518485f3c40861a, q0Raw[55] = 0x1c6ad2c422f6bc26, q0Raw[56] = 0xb9c7f8b5c5fe4134, q0Raw[57] = 0x713d8a12281eef21, q0Raw[58] = 0x6c61ac29aaa8fb90, q0Raw[59] = 0x1a08f2e1146a1e22, q0Raw[60] = 0x94d1899b9ec6206a, q0Raw[61] = 0x583d04b34581969f;
    r0Raw[0] = 0xbc94dabc0aa7a08e, r0Raw[1] = 0xcef28b224ce6b4;

    uint4096 a1, q1;
    uint128 b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *q1Raw = (uint64 *) &q1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0x57032685441f396a, a1Raw[1] = 0x55f0dcd9fda483e2, a1Raw[2] = 0xde4ffae6493c899b, a1Raw[3] = 0x2a5f65e187a0d723, a1Raw[4] = 0x9f99412f8fbf4d3e, a1Raw[5] = 0x4dd5acb9c2510ec3, a1Raw[6] = 0xd9f87fbeac21f01f, a1Raw[7] = 0xb63efc9b89d367ec, a1Raw[8] = 0x6dfdd396a5a82f2b, a1Raw[9] = 0xed2e03ceef5ec40d, a1Raw[10] = 0xcc7085295d3cf422, a1Raw[11] = 0xdc77b160bbc4e49f, a1Raw[12] = 0xf273869d318daa25, a1Raw[13] = 0x68baed6062ef29ac, a1Raw[14] = 0xb5ef82a9653b074e, a1Raw[15] = 0xd51ed11026bf0fe9, a1Raw[16] = 0x267586462f5bf00c, a1Raw[17] = 0xc6b3a695855551bc, a1Raw[18] = 0x2c53abf3fafd38be, a1Raw[19] = 0xd8f97dc45e40b08a, a1Raw[20] = 0x08a8c13fb81e2d38, a1Raw[21] = 0x0f1c4243c77de1df, a1Raw[22] = 0x792c89f12a4ab234, a1Raw[23] = 0x8117d325c09462ba, a1Raw[24] = 0xbde20f4968e86da3, a1Raw[25] = 0xac1bc4ed2b3fd8e1, a1Raw[26] = 0xc859dbc03bb10013, a1Raw[27] = 0x14de53e295f26377, a1Raw[28] = 0x1239bb676c9c098f, a1Raw[29] = 0x7679aa58728e6e5c, a1Raw[30] = 0x7c80ed10721f51ff, a1Raw[31] = 0x035be6732b3e9e06, a1Raw[32] = 0xd17db7ae5d4c7900, a1Raw[33] = 0x8bef146549528a1c, a1Raw[34] = 0x1dd4aa7bf1aca836, a1Raw[35] = 0x624001aad113bfb4, a1Raw[36] = 0x8e5d053b6b5b6a7a, a1Raw[37] = 0xe6a1a95a0dfef38c, a1Raw[38] = 0xb905682fd0bb43b2, a1Raw[39] = 0x21c45e5bfeddbcfa, a1Raw[40] = 0xe38151424b234154, a1Raw[41] = 0xcc68d4334da8b1e4, a1Raw[42] = 0xff3a70e1469148b2, a1Raw[43] = 0x09c528e46272d52b, a1Raw[44] = 0xb7cee44e08506e08, a1Raw[45] = 0x5351d9e05a5f8043, a1Raw[46] = 0xc4cf42e5a3de4368, a1Raw[47] = 0x6271c03e1def2077, a1Raw[48] = 0xf8ca02429511dadf, a1Raw[49] = 0x27da50400cc3f53e, a1Raw[50] = 0x4bd8578c5e2a3c6a, a1Raw[51] = 0xde2605978d39b69f, a1Raw[52] = 0x067b78f251cee643, a1Raw[53] = 0x92ad7981f01d6694, a1Raw[54] = 0x7b271d66714f4ce5, a1Raw[55] = 0x70d175e278ef6daa, a1Raw[56] = 0xf4e92f2823ac95f3, a1Raw[57] = 0x7fe8c2b615f5346f, a1Raw[58] = 0xa238cde05405f286, a1Raw[59] = 0x2dc83e71c6bcf626, a1Raw[60] = 0x5950c9eac0240b47, a1Raw[61] = 0xd78f9b873642d4b4, a1Raw[62] = 0x4ea423af1a005007, a1Raw[63] = 0xa3182f4951ef1c9f;
    b1Raw[0] = 0x73d087740bcbe92b, b1Raw[1] = 0xf49fc86f865b4e26;
    q1Raw[0] = 0x03370d79f410a0b5, q1Raw[1] = 0x5c6e2aa04cddfc25, q1Raw[2] = 0x0582741b55f881d2, q1Raw[3] = 0x08f649e9f078505a, q1Raw[4] = 0x062b550491040775, q1Raw[5] = 0x7f6706d348ae2b89, q1Raw[6] = 0x7c452a150552b759, q1Raw[7] = 0x499cea46d826e576, q1Raw[8] = 0x9e1d9557e0054c2c, q1Raw[9] = 0x050d972d1b8b7df9, q1Raw[10] = 0x7f035f21df41e1d3, q1Raw[11] = 0xd64e07ba10948809, q1Raw[12] = 0x55e96fd735e89b1b, q1Raw[13] = 0x3390557af59bd9ef, q1Raw[14] = 0x22a5a2d92bb47cf7, q1Raw[15] = 0xd59a150087dba9d4, q1Raw[16] = 0x5a0cb16d034624bf, q1Raw[17] = 0xf5d35b47c4c6cf3e, q1Raw[18] = 0x8a415aa0ee36643b, q1Raw[19] = 0x6b3156125404a033, q1Raw[20] = 0x1c430d0a801faf5e, q1Raw[21] = 0xa039b894ff3598e9, q1Raw[22] = 0x157a72ef9c553323, q1Raw[23] = 0x679b5b016b8646f8, q1Raw[24] = 0xb72cfa3967226ecb, q1Raw[25] = 0x40b7fc159939c119, q1Raw[26] = 0xc2f4ff6fa012b94e, q1Raw[27] = 0x00464536c750580f, q1Raw[28] = 0x414cfb6aeb8f4851, q1Raw[29] = 0x860d0e32f50caa0b, q1Raw[30] = 0x5730c1f4ff114dd1, q1Raw[31] = 0x4d00f4a8b1b563bc, q1Raw[32] = 0x0a600d534d4e1262, q1Raw[33] = 0xc18ebbe1814f6db0, q1Raw[34] = 0xe64d9ee0720dfc21, q1Raw[35] = 0x9cb96913bfbefd08, q1Raw[36] = 0x07a5f7126a74c257, q1Raw[37] = 0xb3e0cfbb127980a6, q1Raw[38] = 0x45b386e1a1104a56, q1Raw[39] = 0x392b3f40b0464f3f, q1Raw[40] = 0x5f32633e21aab5b6, q1Raw[41] = 0xdfcc448ffdd410f3, q1Raw[42] = 0x7ae72acbb68acbe5, q1Raw[43] = 0xb60468651f4615b1, q1Raw[44] = 0xbf1a73e3fcbfb83e, q1Raw[45] = 0xa281bbf8bd5e42f8, q1Raw[46] = 0x055124a023841df4, q1Raw[47] = 0x8525d62e90190bd1, q1Raw[48] = 0x35967d981a340596, q1Raw[49] = 0x700bf0b8f6ae8d66, q1Raw[50] = 0xb77cc5496f05388c, q1Raw[51] = 0x32c73ba805d436d8, q1Raw[52] = 0x45401503d77184db, q1Raw[53] = 0x92fb0f157c12396b, q1Raw[54] = 0x1ff820a0d3e42757, q1Raw[55] = 0x67ebf3cce2cd4109, q1Raw[56] = 0x893953d14c4f5fd3, q1Raw[57] = 0xa4292db9529047bd, q1Raw[58] = 0x0d9a514fdfc3762b, q1Raw[59] = 0x880777859a485f2f, q1Raw[60] = 0x4910d6c3280dfc05, q1Raw[61] = 0xaaadcd549e74277c;
    r1Raw[0] = 0x85f65ecaec887e03, r1Raw[1] = 0x71977de01ed35df8;

    // ACT
    uint4096 qc0;
    uint128 rc0;
    a0.modAndDivide(b0, qc0, rc0);
    uint4096 qc1;
    uint128 rc1;
    a1.modAndDivide(b1, qc1, rc1);

    // ASSERT
    ASSERT_EQ(qc0, q0);
    ASSERT_EQ(rc0, r0);
    ASSERT_EQ(qc1, q1);
    ASSERT_EQ(rc1, r1);
}

TEST(BigIntegerArithmeticTests, ModulusAndDivide4096By256Bit) {
    // ARRANGE
    uint4096 a0, q0;
    uint256 b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *q0Raw = (uint64 *) &q0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0xdad9b9ccac3651e1, a0Raw[1] = 0xdf2a247472d8efce, a0Raw[2] = 0xb237a2e85aa1af58, a0Raw[3] = 0x5df44e5081c69e41, a0Raw[4] = 0xaaedf1ec598e3614, a0Raw[5] = 0x7d08ab215ff3b829, a0Raw[6] = 0x6e151dc05d11eb4f, a0Raw[7] = 0x84366573313ef973, a0Raw[8] = 0xe01e4c313a015ffe, a0Raw[9] = 0x0c1d51a852970fdc, a0Raw[10] = 0x21e5e39f9d83504d, a0Raw[11] = 0xa85f9f8e7ce00c27, a0Raw[12] = 0x9e5bf815c7d6ebf3, a0Raw[13] = 0x0c01b12f3b66021b, a0Raw[14] = 0x22cfbfb3dd3c8be3, a0Raw[15] = 0x944a7c15966cd798, a0Raw[16] = 0x8e5cffcf8196f534, a0Raw[17] = 0x3d21956253c8e1eb, a0Raw[18] = 0x03c1c14ca82d75b7, a0Raw[19] = 0xa1229f909ec162db, a0Raw[20] = 0x136329295f9c2da6, a0Raw[21] = 0xea99ca17dd0b81f7, a0Raw[22] = 0x6c77b91f94af2273, a0Raw[23] = 0x8afaa4a794c8802d, a0Raw[24] = 0xaeef16ebe5ec3b8d, a0Raw[25] = 0x9e3e4255b6f0dbe4, a0Raw[26] = 0xdbdfc0c6502b4d27, a0Raw[27] = 0xdf8b713fd5aa0c4d, a0Raw[28] = 0x1be6863223f98b91, a0Raw[29] = 0x00251f6bb088905a, a0Raw[30] = 0x0d3cacb8d74685f6, a0Raw[31] = 0x2fedbfdd3f327c74, a0Raw[32] = 0xdd1dc83457da2e3f, a0Raw[33] = 0x33fbfd4166a28527, a0Raw[34] = 0x7733fe62e08dc1d7, a0Raw[35] = 0xb813cd8dba7b37ac, a0Raw[36] = 0x10a669ae8d9b541d, a0Raw[37] = 0x64724760a4dc3721, a0Raw[38] = 0x8a0f1c866db1dc2f, a0Raw[39] = 0x2494615d64e6b94b, a0Raw[40] = 0x4aa272aa0e3c4fbb, a0Raw[41] = 0x0dbbe5037919bf3b, a0Raw[42] = 0x8ef82f66c256d64e, a0Raw[43] = 0x5232e52e7a3c45e7, a0Raw[44] = 0xa40dda8c9cdecbd3, a0Raw[45] = 0xf5ce98336e75b849, a0Raw[46] = 0x5b884670904fe9c1, a0Raw[47] = 0x5f8c76b8a3f2ffb7, a0Raw[48] = 0x4c2ef74af1dcac3a, a0Raw[49] = 0xd2f7977a1abfcd2b, a0Raw[50] = 0x4df6717833e96653, a0Raw[51] = 0xd53bb3d53a0b9c1c, a0Raw[52] = 0x76edcd121bf01cdf, a0Raw[53] = 0x09546cf9b0decc47, a0Raw[54] = 0x921d97df638631a2, a0Raw[55] = 0xd06f59fd65a99779, a0Raw[56] = 0x11da7af224d36ac1, a0Raw[57] = 0x48b0abb94f98a0a7, a0Raw[58] = 0x50fad17ee43b0b9c, a0Raw[59] = 0x5bdda98debe50bde, a0Raw[60] = 0x5bb704acb1fa89a8, a0Raw[61] = 0x8ac7c60f98ad758e, a0Raw[62] = 0xfeccc2687682123d, a0Raw[63] = 0x47e56691913618;
    b0Raw[0] = 0x1bf40aa45a5024ca, b0Raw[1] = 0x85c13df896713e23, b0Raw[2] = 0xdac25cc3bdfaf836, b0Raw[3] = 0xb9a8b49e43d9dd2c;
    q0Raw[0] = 0x95efb8a5e1f049b7, q0Raw[1] = 0xc75bfc6bab29ddba, q0Raw[2] = 0x457fb53c364f6a5a, q0Raw[3] = 0x7a535640834129a0, q0Raw[4] = 0xd1d31bf3d7eaf652, q0Raw[5] = 0xc2516212eb6cd7e9, q0Raw[6] = 0xb5a22a004985b4d6, q0Raw[7] = 0x56540d5907acd1ca, q0Raw[8] = 0xae1334e73085f376, q0Raw[9] = 0x4bb5cc9c82052ed3, q0Raw[10] = 0xcdfb7b1f08dbc2ba, q0Raw[11] = 0x46ed1dadbae0a546, q0Raw[12] = 0xe9b5799d001831ab, q0Raw[13] = 0x40f46c4b01f2acb4, q0Raw[14] = 0x785f4fd8e3e4f5f6, q0Raw[15] = 0x31dfecd138becd3d, q0Raw[16] = 0x233c762bc543820d, q0Raw[17] = 0x6dab23b10640d063, q0Raw[18] = 0x5508e0f3c5df1c90, q0Raw[19] = 0x3e070d368920d525, q0Raw[20] = 0x3d024d5f18cd25a8, q0Raw[21] = 0x6232e4e36ddd4050, q0Raw[22] = 0x71d99fcce871c431, q0Raw[23] = 0x582533044f06bed3, q0Raw[24] = 0x484f8db349c3832a, q0Raw[25] = 0x8b6f263bf6664ccf, q0Raw[26] = 0x8c635cd8cc265610, q0Raw[27] = 0x1502041006b520c8, q0Raw[28] = 0xe8170c9454c30b59, q0Raw[29] = 0x5e123c6b93e09110, q0Raw[30] = 0x043faab04c5b4827, q0Raw[31] = 0xe13688e510d632f1, q0Raw[32] = 0x835c7b468ef1b01b, q0Raw[33] = 0x4148d08da86a3653, q0Raw[34] = 0xd876f6a4975078ee, q0Raw[35] = 0x2f02ec41e1d03b38, q0Raw[36] = 0x627016c0b4010b75, q0Raw[37] = 0x39fafa234dd41b31, q0Raw[38] = 0x16b94f92b973023a, q0Raw[39] = 0x42bc84010a175618, q0Raw[40] = 0xb4e5b209f1414e84, q0Raw[41] = 0x065997dc58c40ff6, q0Raw[42] = 0xfdb49cbaedbe02ff, q0Raw[43] = 0x4bed3bd43d38d05e, q0Raw[44] = 0xdbffd7918938bd47, q0Raw[45] = 0x4f6ca290d41c69ec, q0Raw[46] = 0x98b4189938c3523a, q0Raw[47] = 0x2412d1028c6828b4, q0Raw[48] = 0xd8deb57c8cf413b6, q0Raw[49] = 0x0a52ad02b169886b, q0Raw[50] = 0xa18a5555b1d25f7b, q0Raw[51] = 0x973aef969a1bc44c, q0Raw[52] = 0xe65a045cbef94ecd, q0Raw[53] = 0x432068b3b62ca53f, q0Raw[54] = 0xad4f588e02399872, q0Raw[55] = 0x69085c236084020e, q0Raw[56] = 0xcb17af89a1e981ec, q0Raw[57] = 0x7d082e25f497c135, q0Raw[58] = 0xf3e19962956d0fe5, q0Raw[59] = 0x6322b0edb41230;
    r0Raw[0] = 0x20393ee53b0e6b7b, r0Raw[1] = 0x8db8221bdc68bfc1, r0Raw[2] = 0x868ac241e5fa55d3, r0Raw[3] = 0x859629899875efd6;

    uint4096 a1, q1;
    uint256 b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *q1Raw = (uint64 *) &q1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0x3f7ce661010b379e, a1Raw[1] = 0x57dfea0f0638d51f, a1Raw[2] = 0xd411b637d0be09ca, a1Raw[3] = 0x0e3992a3d17c70ab, a1Raw[4] = 0xdbb48eab42e1cc51, a1Raw[5] = 0x300c70cc40d0fb67, a1Raw[6] = 0x4435470d87170712, a1Raw[7] = 0x1fc9f5b96f986b9d, a1Raw[8] = 0x527b4faf0e460237, a1Raw[9] = 0xb925e53bdbff4513, a1Raw[10] = 0x782bde5eb10c74ba, a1Raw[11] = 0x45a011dcc13f7691, a1Raw[12] = 0x36af04dda59420c7, a1Raw[13] = 0xfdb66f3c7a165484, a1Raw[14] = 0x7a0ebc0f87270107, a1Raw[15] = 0xc26c2bb91a715d2b, a1Raw[16] = 0x0635d4cc0711c7f1, a1Raw[17] = 0x7e19b433b1db117c, a1Raw[18] = 0xf3b1588afb81ed07, a1Raw[19] = 0x7f75c467df961db6, a1Raw[20] = 0x8eaef6d1bf9a6c1d, a1Raw[21] = 0x318f9670ab8c4309, a1Raw[22] = 0x580c4d3f0652528d, a1Raw[23] = 0x225721fd42dbed34, a1Raw[24] = 0x28d49bf2cfc39107, a1Raw[25] = 0x5914d86dc419ef29, a1Raw[26] = 0x94e80401fe655308, a1Raw[27] = 0xf0e8d4cdc9b7789e, a1Raw[28] = 0xc09eb7ad06898063, a1Raw[29] = 0xe5d1889644f4b129, a1Raw[30] = 0xe74bb55b91d54a97, a1Raw[31] = 0x2c8384ed79e36d82, a1Raw[32] = 0x387acaabc9207353, a1Raw[33] = 0x0305f663bfc8cc0c, a1Raw[34] = 0x41c14e34aa4dd660, a1Raw[35] = 0xaeb21c015f2ce615, a1Raw[36] = 0x651554fa2f8ce9df, a1Raw[37] = 0xcd7df19dbdd1f361, a1Raw[38] = 0x88e145e4be27f5f1, a1Raw[39] = 0x4a5b07bf502030c8, a1Raw[40] = 0xbc5dc4133bbabe64, a1Raw[41] = 0xc9827aefe80331ad, a1Raw[42] = 0x8cfd2986bdc6b0f6, a1Raw[43] = 0x762266aca7cc0ec7, a1Raw[44] = 0x654a17003ce41b53, a1Raw[45] = 0x9eba229c1e56c643, a1Raw[46] = 0x4d360d6b5144515c, a1Raw[47] = 0xe194b67053cc2268, a1Raw[48] = 0x7fd5eefda9a3441b, a1Raw[49] = 0x5f77c4ac65c2b0cf, a1Raw[50] = 0xa74e64fb490367b4, a1Raw[51] = 0xaacd9b5663157287, a1Raw[52] = 0x79c819baab986b95, a1Raw[53] = 0x7e5927d356c22895, a1Raw[54] = 0x20e91a9214077b69, a1Raw[55] = 0xbfdbcb90404a5dd4, a1Raw[56] = 0xfe1b33286918ecb6, a1Raw[57] = 0x2bbdfd1ad55239b3, a1Raw[58] = 0x02c7e0cc80ca56f6, a1Raw[59] = 0xc38e4eafbad46591, a1Raw[60] = 0x1ceb08423f49d648, a1Raw[61] = 0x409421336d3131a0, a1Raw[62] = 0xbf05986f78dca573, a1Raw[63] = 0x2c5b13cfe4e4c5fd;
    b1Raw[0] = 0x93cfea0f672de799, b1Raw[1] = 0x1f5e25d1e1eb8238, b1Raw[2] = 0xf42efcaae5092fd3, b1Raw[3] = 0xf1fda5691f943a1a;
    q1Raw[0] = 0x21a1f9c074df7486, q1Raw[1] = 0x6a6f72b2ff4d905f, q1Raw[2] = 0x3eef02736d42ff67, q1Raw[3] = 0x212422ab34a4e721, q1Raw[4] = 0x8974cccaa40d002e, q1Raw[5] = 0xba747c63ab0ed480, q1Raw[6] = 0x23a0a9d8f897af4a, q1Raw[7] = 0x286308d7b2a3ac0f, q1Raw[8] = 0x61bb1966152e9cc9, q1Raw[9] = 0x13a8d8184120d1ed, q1Raw[10] = 0x4b680cf0f9494dea, q1Raw[11] = 0x08b815dae4fc9938, q1Raw[12] = 0x946fd723b570b12a, q1Raw[13] = 0xe684f961c3631661, q1Raw[14] = 0xd2e73413666a7980, q1Raw[15] = 0x487387240d10e994, q1Raw[16] = 0x8bd2c869a8ed5843, q1Raw[17] = 0xd4e9d45f3ab045ac, q1Raw[18] = 0xf7112820608a1862, q1Raw[19] = 0x4f7009b643ef4d08, q1Raw[20] = 0x81ab1f5277bad94e, q1Raw[21] = 0x5647bd85d333b5c3, q1Raw[22] = 0xbb5e4a5a8c57f0dd, q1Raw[23] = 0xcd5553a4d65be2a9, q1Raw[24] = 0xefcbbfc405f2097f, q1Raw[25] = 0x96d303bd20fe2d84, q1Raw[26] = 0x2cd7041e109e8056, q1Raw[27] = 0x2667df63eaed018f, q1Raw[28] = 0x94cec79983fab947, q1Raw[29] = 0x7d4194102d85bd78, q1Raw[30] = 0x2fd11edac9fe7878, q1Raw[31] = 0x6a358bfc175008ad, q1Raw[32] = 0xf81b05ff18cf3385, q1Raw[33] = 0x4f0c43a1bff16b49, q1Raw[34] = 0x34946c31dae57689, q1Raw[35] = 0x3ab3d25c5633420d, q1Raw[36] = 0xc495edfbf105b7dc, q1Raw[37] = 0x42d22ea46ad33947, q1Raw[38] = 0x7d94be7e67c8ffa3, q1Raw[39] = 0x555c60817f07ac42, q1Raw[40] = 0xdd2459c8f83b24e6, q1Raw[41] = 0xa1f75cd2b7117181, q1Raw[42] = 0x1ea715c22729afcd, q1Raw[43] = 0xd42b89c28ae3ab0c, q1Raw[44] = 0x2f5381a5f28795bd, q1Raw[45] = 0x6993c96535cf504a, q1Raw[46] = 0xe2cc4604e331a0e3, q1Raw[47] = 0x3a673cdb6e2a1a2f, q1Raw[48] = 0xa86eb93051ac2690, q1Raw[49] = 0x4f10d06b81b499db, q1Raw[50] = 0x78170e1864d5eddb, q1Raw[51] = 0xe941985f866aef28, q1Raw[52] = 0xb91bf4ddcb355666, q1Raw[53] = 0x8acf776ce15e9e8e, q1Raw[54] = 0x3611d7adaf78b375, q1Raw[55] = 0x4ef73c4df843af15, q1Raw[56] = 0x21f2c4c4dbfbc7c8, q1Raw[57] = 0x718efeac65ac8fd2, q1Raw[58] = 0x2f6cc4c47cc48733, q1Raw[59] = 0x2eec70694f3e5419;
    r1Raw[0] = 0x638335e21fcba988, r1Raw[1] = 0x03b798e688c4b8f2, r1Raw[2] = 0xd748d07b58ecc307, r1Raw[3] = 0xed22df5e0d08e866;

    // ACT
    uint4096 qc0;
    uint256 rc0;
    a0.modAndDivide(b0, qc0, rc0);
    uint4096 qc1;
    uint256 rc1;
    a1.modAndDivide(b1, qc1, rc1);

    // ASSERT
    ASSERT_EQ(qc0, q0);
    ASSERT_EQ(rc0, r0);
    ASSERT_EQ(qc1, q1);
    ASSERT_EQ(rc1, r1);
}

TEST(BigIntegerArithmeticTests, ModulusAndDivide4096By512Bit) {
    // ARRANGE
    uint4096 a0, q0;
    uint512 b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *q0Raw = (uint64 *) &q0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x3e3c11fa82f3c235, a0Raw[1] = 0x3bf3277bc6373ad7, a0Raw[2] = 0xbac5b83bad8f6832, a0Raw[3] = 0x8fb88119f7d09cb6, a0Raw[4] = 0xf683c973d34c269a, a0Raw[5] = 0x8cde7db5c00f440e, a0Raw[6] = 0x0955b35a2bd64814, a0Raw[7] = 0xecdfeccc91f24ace, a0Raw[8] = 0x892720bc3e955342, a0Raw[9] = 0x61b501eb8bdf3927, a0Raw[10] = 0x066ef641ec87b296, a0Raw[11] = 0x9743d9de450ce294, a0Raw[12] = 0x2970d97524f7a8b3, a0Raw[13] = 0xb05dc2b220744c4d, a0Raw[14] = 0x5db5954797bc1ea5, a0Raw[15] = 0x83ff4650d9bbde3c, a0Raw[16] = 0x05b173279a56beed, a0Raw[17] = 0x855adf68a3d439e2, a0Raw[18] = 0xe953ee068c53199c, a0Raw[19] = 0xd070a8a7ff67f1c6, a0Raw[20] = 0x80116b63bf5e8703, a0Raw[21] = 0x25e231f897dc9421, a0Raw[22] = 0x056f7dae784f6b58, a0Raw[23] = 0x5b86c13e8779accc, a0Raw[24] = 0x20f34b91968dde0f, a0Raw[25] = 0x30798c4b3bb91022, a0Raw[26] = 0xec2d983bb72a83ad, a0Raw[27] = 0xb78a91b74357859c, a0Raw[28] = 0x6c236d86189d29f0, a0Raw[29] = 0x7519790b7d8a4af2, a0Raw[30] = 0xc8a35d185458162c, a0Raw[31] = 0x80de05b52a3cf287, a0Raw[32] = 0x7541591b973edd47, a0Raw[33] = 0x48ca2c9655ddcf03, a0Raw[34] = 0xbad8b50c4b7a8437, a0Raw[35] = 0x39e535d39a08ec46, a0Raw[36] = 0x2aa216826b212b5c, a0Raw[37] = 0x883ef7f5f318837b, a0Raw[38] = 0x6dbee3f286f1938d, a0Raw[39] = 0xcff7531ead2760ff, a0Raw[40] = 0xd80b57f7ba6d62e8, a0Raw[41] = 0x20923110ef716ee4, a0Raw[42] = 0xf242598a7c1c0f68, a0Raw[43] = 0x74cf523afe988766, a0Raw[44] = 0xbb9c4b1e924a3030, a0Raw[45] = 0x669519dd38d5933c, a0Raw[46] = 0x5b9282477191c4cd, a0Raw[47] = 0xd16b3b5af38c6491, a0Raw[48] = 0x9bfb2786cbe21979, a0Raw[49] = 0xa5b370bd5b49131e, a0Raw[50] = 0xe3dfa487f4f9f765, a0Raw[51] = 0xe9ad4fa2b943fba3, a0Raw[52] = 0x5cc9bd04dbe64dce, a0Raw[53] = 0x576d87ce946173e3, a0Raw[54] = 0xfa4b25086baa3610, a0Raw[55] = 0xda7d10f450979e11, a0Raw[56] = 0x625c6d4c992174f6, a0Raw[57] = 0xda2eb1b1c78efefd, a0Raw[58] = 0xc26efe384eb261fb, a0Raw[59] = 0xfc1b042b1dfb1175, a0Raw[60] = 0xb186b6ed77d22473, a0Raw[61] = 0x7ebe867984701cd4, a0Raw[62] = 0xc6e59e986d17a33f, a0Raw[63] = 0x9be52b2e87528eab;
    b0Raw[0] = 0x72414e502c2b40c5, b0Raw[1] = 0x5a84f3aeb3b188bd, b0Raw[2] = 0x991f1807e7891070, b0Raw[3] = 0x6fa6b2ba9e42c48d, b0Raw[4] = 0x5eaf75d729fbaa3e, b0Raw[5] = 0xc6b8135c20caf930, b0Raw[6] = 0xd80c94107f7ce289, b0Raw[7] = 0xe109037e446918bc;
    q0Raw[0] = 0xb83f2edab97aa8c3, q0Raw[1] = 0x0ce19ea2f8d77aa5, q0Raw[2] = 0x60910d2c6a2e574c, q0Raw[3] = 0x629a9af2f1ab7895, q0Raw[4] = 0x38c96f731a082d5d, q0Raw[5] = 0x5f6d9bcd3e46419f, q0Raw[6] = 0x974faeffa5b1472c, q0Raw[7] = 0x08456950ad456ed0, q0Raw[8] = 0xe23678f52538d1c3, q0Raw[9] = 0xbcf5dc9fceb4d04f, q0Raw[10] = 0xf1f41bb2eb28d982, q0Raw[11] = 0xc735f2f2181e1515, q0Raw[12] = 0x25d67495f795edf8, q0Raw[13] = 0x4660766ebb15e21b, q0Raw[14] = 0xc71ea22e62524bbd, q0Raw[15] = 0xa6b74cd4ff1e26a7, q0Raw[16] = 0x27ca27d9fec22a0d, q0Raw[17] = 0xdb53df46ab60d92d, q0Raw[18] = 0x18adf8ada84e0edf, q0Raw[19] = 0x22358f959f6e9d9a, q0Raw[20] = 0x92e2a8bc44de2ed2, q0Raw[21] = 0x80aba5834fdc9b5e, q0Raw[22] = 0xf81356a7d7e3f41e, q0Raw[23] = 0xc4b25b519a3c6148, q0Raw[24] = 0x9c5982ae2cac6d47, q0Raw[25] = 0x7ebee920285ec293, q0Raw[26] = 0xa9466b407325e5f8, q0Raw[27] = 0x1081fc1b3ac20c9f, q0Raw[28] = 0x4118b72723784363, q0Raw[29] = 0x90f8757b9afafd10, q0Raw[30] = 0x24249eb1d5746db3, q0Raw[31] = 0xbb12f0cbb9c1e356, q0Raw[32] = 0xf6c866c718c2b960, q0Raw[33] = 0xb3f27af1bc559d9c, q0Raw[34] = 0x481481b74f0d00b7, q0Raw[35] = 0x269d002b8ab34de3, q0Raw[36] = 0x5e92ce2d031b6be6, q0Raw[37] = 0xd79c87ff420cbe3e, q0Raw[38] = 0xa645bc71f38c1d43, q0Raw[39] = 0xd3ea168c29298c77, q0Raw[40] = 0x534c6039b3bc9c17, q0Raw[41] = 0xdb477791196297b5, q0Raw[42] = 0x90103ac37fbf5fb9, q0Raw[43] = 0xd0efb0202d5f731e, q0Raw[44] = 0xb2782f6aa06820da, q0Raw[45] = 0x924621f7dfc93f81, q0Raw[46] = 0xa946480f27a438df, q0Raw[47] = 0x79d3ddf0112fec75, q0Raw[48] = 0xd328fff92a524448, q0Raw[49] = 0xeef10d203ab82580, q0Raw[50] = 0x039be35764f12c77, q0Raw[51] = 0xa1c6dbc6cd1700c8, q0Raw[52] = 0xe19eb0f498b05683, q0Raw[53] = 0xd062c5b798917a76, q0Raw[54] = 0x5caf3019064ee11b, q0Raw[55] = 0xb158a91ff048f956;
    r0Raw[0] = 0x2e04f1bf409e2426, r0Raw[1] = 0xe9212a64130b6c76, r0Raw[2] = 0x409f2eb9d26e81ec, r0Raw[3] = 0x5fde62de5b1f8c6b, r0Raw[4] = 0xa2b26be3bd250a8b, r0Raw[5] = 0x3d9bfca2d9308078, r0Raw[6] = 0x87309396c73aee50, r0Raw[7] = 0xa2825878cb056a12;

    uint4096 a1, q1;
    uint512 b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *q1Raw = (uint64 *) &q1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0xe06d932c54d2ab06, a1Raw[1] = 0x59ce55b99003b00c, a1Raw[2] = 0x709a1e24809fd7bc, a1Raw[3] = 0x49832d6e4ee3a76b, a1Raw[4] = 0x377dbacc08e22f95, a1Raw[5] = 0x52bb3a5134c6052b, a1Raw[6] = 0xb2f4e5110d4f1e8c, a1Raw[7] = 0xdab3560741372e70, a1Raw[8] = 0xbd1b760f0115cf77, a1Raw[9] = 0xc0683a35025246d0, a1Raw[10] = 0xc1861dee7f6a5819, a1Raw[11] = 0xe098c1ceada8b949, a1Raw[12] = 0xb287bee3c99d439a, a1Raw[13] = 0x70ea56488d9bcabf, a1Raw[14] = 0xb858234882de7465, a1Raw[15] = 0xf32d27db2ce1e07b, a1Raw[16] = 0xf989f9a4544d8e18, a1Raw[17] = 0xe72bb7d5836b6f9a, a1Raw[18] = 0x8e270685d4b451d0, a1Raw[19] = 0x60719864452d45a1, a1Raw[20] = 0xee71513e3bed6d59, a1Raw[21] = 0xb292752622229312, a1Raw[22] = 0xf66aeeb712f2bacb, a1Raw[23] = 0x6d384661257bfb8b, a1Raw[24] = 0xaab84b0612977076, a1Raw[25] = 0x389b6ff0262bf23a, a1Raw[26] = 0xb5b21fee6f218925, a1Raw[27] = 0x3c5f71c263e4a05c, a1Raw[28] = 0xb6af3bb93e9bba6d, a1Raw[29] = 0xbeb32b857f170404, a1Raw[30] = 0xe432a3dc1d278c8f, a1Raw[31] = 0xf8e3d3b34541d0a4, a1Raw[32] = 0xfd412a34716a3a77, a1Raw[33] = 0x22273c4af566a297, a1Raw[34] = 0x7c9fef87ec2c53b1, a1Raw[35] = 0x2541b7fcce383f32, a1Raw[36] = 0xb68cf96ff773f584, a1Raw[37] = 0x85a68830189618b4, a1Raw[38] = 0x8a35af6807bd13c1, a1Raw[39] = 0x0d991d3862a4bf15, a1Raw[40] = 0xb1660d53195469d0, a1Raw[41] = 0xe150b9d9b0e41787, a1Raw[42] = 0xbeafbd518c8955c6, a1Raw[43] = 0xf7570d8541cdd338, a1Raw[44] = 0x749de703a27cd85a, a1Raw[45] = 0xc32c7a7cc4cd64f2, a1Raw[46] = 0x7f47a9b83ba99dfa, a1Raw[47] = 0x45d17f93e3860732, a1Raw[48] = 0x90d5842b849328ad, a1Raw[49] = 0x7642814f477dbe74, a1Raw[50] = 0x8b19d584c05c8cf5, a1Raw[51] = 0x5ee7b6ada90b0e38, a1Raw[52] = 0xa9e57db1291e94ba, a1Raw[53] = 0xf05e39387a963b77, a1Raw[54] = 0xc509685f4070c486, a1Raw[55] = 0x8670fcdc33f81725, a1Raw[56] = 0x0dc7b80915ce2004, a1Raw[57] = 0xe2f1d9e18462d2fe, a1Raw[58] = 0x10306adcba3910c0, a1Raw[59] = 0xc0389e15badfe9c9, a1Raw[60] = 0x10bb338194754ec0, a1Raw[61] = 0x6bb8d70b68efc199, a1Raw[62] = 0x85640d22c4116588, a1Raw[63] = 0x799d4638e7518f40;
    b1Raw[0] = 0x1bd34103f0a20198, b1Raw[1] = 0xdf00f809507d6ba6, b1Raw[2] = 0xb4379d3171ee5041, b1Raw[3] = 0xf3a9a6d225aa5ff5, b1Raw[4] = 0x93f8efed0513fbd1, b1Raw[5] = 0x0c1f0a0ef6e8d773, b1Raw[6] = 0x01fd3ee826550895, b1Raw[7] = 0x9e203749893bb707;
    q1Raw[0] = 0xa6c13b30bbe32d94, q1Raw[1] = 0x5e7e97449e2061f6, q1Raw[2] = 0x67957bc987feed3d, q1Raw[3] = 0x12b1eee89ad88e5c, q1Raw[4] = 0x21c719924f2c2b5d, q1Raw[5] = 0xeba83ec7e727458c, q1Raw[6] = 0x85574e494ed87643, q1Raw[7] = 0x469f6da64f9ab096, q1Raw[8] = 0xfccbdd041c8d5622, q1Raw[9] = 0x564b9cf13b9da696, q1Raw[10] = 0xbd0a9d89a742228c, q1Raw[11] = 0xb209d7da8e543f21, q1Raw[12] = 0x8b2ba19995c2224a, q1Raw[13] = 0xc1a954e7fbbf808b, q1Raw[14] = 0x79b9d37ac99477c1, q1Raw[15] = 0x8be81fa8c797da60, q1Raw[16] = 0x5a7eb0475d83f1b7, q1Raw[17] = 0xb579e03ddbb98403, q1Raw[18] = 0x07f62c7008fc8db7, q1Raw[19] = 0xe90f9b63ea77e127, q1Raw[20] = 0xcbdf57be5bf11edb, q1Raw[21] = 0xf6318ef15b2839f2, q1Raw[22] = 0x120f5ad4ebfec4f5, q1Raw[23] = 0xe2eda32d21c7e5fe, q1Raw[24] = 0xc85486c9536296cd, q1Raw[25] = 0xe85e0db07d22b93d, q1Raw[26] = 0x4eaecf69f68c2678, q1Raw[27] = 0x27f63b28c15d1438, q1Raw[28] = 0x277f2bb4ee6bb49b, q1Raw[29] = 0x06926a3185d48a67, q1Raw[30] = 0x66b95443a7bd7759, q1Raw[31] = 0x941cd4d32fea4611, q1Raw[32] = 0x942d238633f49bf9, q1Raw[33] = 0x1f7fe22030d450bc, q1Raw[34] = 0xd3abc7fc0692061f, q1Raw[35] = 0xc6f9810cc88b60b7, q1Raw[36] = 0xa6f1ca6478fb532b, q1Raw[37] = 0x0b1753aba38cd169, q1Raw[38] = 0xe624bd4272f03f84, q1Raw[39] = 0x7e515a3b7342b382, q1Raw[40] = 0xde5228e8ae2acaee, q1Raw[41] = 0xf6e022ee2b5d1093, q1Raw[42] = 0xe08d3f581f307b02, q1Raw[43] = 0x229370fe6d1f09e9, q1Raw[44] = 0x8f49122bd4372a99, q1Raw[45] = 0xc741e1cc6fcbf17e, q1Raw[46] = 0x5fc00a78f2461e2e, q1Raw[47] = 0x27900d3c6d466230, q1Raw[48] = 0xdd97045334282c71, q1Raw[49] = 0x183d41c0462dabac, q1Raw[50] = 0x406925dc3304afd1, q1Raw[51] = 0x9397330e34d825ff, q1Raw[52] = 0xd753a770953df88a, q1Raw[53] = 0x0e677798ce34b5b4, q1Raw[54] = 0xb0b16dc7d3120887, q1Raw[55] = 0xc4e3a40b3c4aa9b5;
    r1Raw[0] = 0xe84340474b1a0726, r1Raw[1] = 0x3b8fc4ca161593e1, r1Raw[2] = 0x11ffabb00af9e489, r1Raw[3] = 0x5c92f1f3789e289c, r1Raw[4] = 0xd305b17acddf358c, r1Raw[5] = 0xc886735ccf6187a0, r1Raw[6] = 0x2dd96964a8e86970, r1Raw[7] = 0x6209182975ef0767;

    // ACT
    uint4096 qc0;
    uint512 rc0;
    a0.modAndDivide(b0, qc0, rc0);
    uint4096 qc1;
    uint512 rc1;
    a1.modAndDivide(b1, qc1, rc1);

    // ASSERT
    ASSERT_EQ(qc0, q0);
    ASSERT_EQ(rc0, r0);
    ASSERT_EQ(qc1, q1);
    ASSERT_EQ(rc1, r1);
}

TEST(BigIntegerArithmeticTests, ModulusAndDivide4096By1024Bit) {
    // ARRANGE
    uint4096 a0, q0;
    uint1024 b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *q0Raw = (uint64 *) &q0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x45a34bf5028a58d8, a0Raw[1] = 0xf718f490b835b77d, a0Raw[2] = 0x51173a57a254050c, a0Raw[3] = 0x94311a03ea092caf, a0Raw[4] = 0x4b357027aa05a05f, a0Raw[5] = 0xc3dcfccc43c13307, a0Raw[6] = 0xf0b9c3709337299b, a0Raw[7] = 0x3b9b89cef9955521, a0Raw[8] = 0x5403bca647015f69, a0Raw[9] = 0x5c85ebf008b9f706, a0Raw[10] = 0xa360d2a8b98914f0, a0Raw[11] = 0x8c0af5432b9a03b8, a0Raw[12] = 0xad15ee73dfabfcdf, a0Raw[13] = 0x64c9e18c70d5868a, a0Raw[14] = 0x2b4ff769a6c501b0, a0Raw[15] = 0x90a2530d7edf004b, a0Raw[16] = 0xd410e8f8dd107d7f, a0Raw[17] = 0x51ff041ceaa71be4, a0Raw[18] = 0x2c8d0bd4d2bc21b2, a0Raw[19] = 0xa4edcea3212bdff1, a0Raw[20] = 0xa634a17389ce7ed7, a0Raw[21] = 0x1d050fbee53d5840, a0Raw[22] = 0xa554f047e09f8113, a0Raw[23] = 0x59f89a0685ad8421, a0Raw[24] = 0xf3eec8a94c170057, a0Raw[25] = 0x7ef94da822945067, a0Raw[26] = 0x988e08c9574bbf33, a0Raw[27] = 0x3ab47830765b1706, a0Raw[28] = 0xc51edbfa2f0a80ec, a0Raw[29] = 0x3ba008c3f572eadb, a0Raw[30] = 0x53b4aefb1ddd675e, a0Raw[31] = 0x1686a2e455e92c3c, a0Raw[32] = 0x34603868ad53c0aa, a0Raw[33] = 0xd32a0bc79308f7a9, a0Raw[34] = 0x985816fd99a8a052, a0Raw[35] = 0x8c6e66fe69d545a6, a0Raw[36] = 0xa9c3b94b721958ba, a0Raw[37] = 0x930262846c2701f5, a0Raw[38] = 0xcb90b36661bb12e9, a0Raw[39] = 0xdca5a579a0c99521, a0Raw[40] = 0xf8e0033e2f208e1a, a0Raw[41] = 0x340eef6fc05dcfae, a0Raw[42] = 0xfc5c51be46c8b48d, a0Raw[43] = 0xf48059eaaced3f0f, a0Raw[44] = 0x821e3ce7a2cb129d, a0Raw[45] = 0x975611cc55788296, a0Raw[46] = 0xc8dd444b3d893ec0, a0Raw[47] = 0xd03aa40d5c6d9909, a0Raw[48] = 0x92beddcff9e22cc9, a0Raw[49] = 0x027572ab633a2b8c, a0Raw[50] = 0x24baa162844a89e3, a0Raw[51] = 0xc7d36e1fa8572b50, a0Raw[52] = 0x559b63fc7032e641, a0Raw[53] = 0x30b74ac763f91271, a0Raw[54] = 0x28486532d8a1749e, a0Raw[55] = 0x701a15c785cebd1d, a0Raw[56] = 0x42eb589b124708af, a0Raw[57] = 0x138e11979e4c92c2, a0Raw[58] = 0xf03ebad08bbc5664, a0Raw[59] = 0x40cfa20e6cefdbb5, a0Raw[60] = 0x39816f5a6abef26f, a0Raw[61] = 0x0f454f34eb92499f, a0Raw[62] = 0x3b60242cff7f7665, a0Raw[63] = 0xba986447fbf9f2af;
    b0Raw[0] = 0xa3a06a0f274df860, b0Raw[1] = 0xd550b9093e6e6716, b0Raw[2] = 0x6907c357cc9dfe66, b0Raw[3] = 0x4af59750c7a534d5, b0Raw[4] = 0x7faf43bcc2499e1c, b0Raw[5] = 0x08afc623fb341f58, b0Raw[6] = 0x3f96665786a52e42, b0Raw[7] = 0x2330a5d6f9b353a1, b0Raw[8] = 0x8024907b6ad184d6, b0Raw[9] = 0xe917a6d0bcbc88ed, b0Raw[10] = 0x029c0fae66ec046e, b0Raw[11] = 0x1611af542240529a, b0Raw[12] = 0x69f85991c10b2584, b0Raw[13] = 0xdb1b0ea39ae582f7, b0Raw[14] = 0xdfb822aea32c02f0, b0Raw[15] = 0x6730d2b2a95e7915;
    q0Raw[0] = 0x54ab5b904407ac36, q0Raw[1] = 0x4fdf6b49d192d6e8, q0Raw[2] = 0x2bfb243eb521f970, q0Raw[3] = 0xdbb20ac9c7a74470, q0Raw[4] = 0x6793d16f60d58016, q0Raw[5] = 0xb4917f9fec90a51e, q0Raw[6] = 0xa0875edbae7522b0, q0Raw[7] = 0x3ed8d47af11b92ca, q0Raw[8] = 0xea13dfafea9e8905, q0Raw[9] = 0x843c91e03b9bd4e3, q0Raw[10] = 0xb7abab6235d410ea, q0Raw[11] = 0x0cc524c7e0c77d21, q0Raw[12] = 0xe0fc6e807f5d784b, q0Raw[13] = 0x444930bc8880f961, q0Raw[14] = 0x4483044a9d706f09, q0Raw[15] = 0xabafcae2720bfc95, q0Raw[16] = 0x0fbcf8dcd1c6c566, q0Raw[17] = 0xd26c728d0159e915, q0Raw[18] = 0xdd34f1f095afe554, q0Raw[19] = 0xafbce9f06ff6bb0e, q0Raw[20] = 0x2a2cea94245c4e6f, q0Raw[21] = 0xe181019d04eda9b0, q0Raw[22] = 0x7360eae53b3983b9, q0Raw[23] = 0x9be75d5624c5d040, q0Raw[24] = 0x4080aba0ee24c249, q0Raw[25] = 0x9eba2df792643801, q0Raw[26] = 0x4a0ca32050207b4b, q0Raw[27] = 0x06f3117768354159, q0Raw[28] = 0xe18dad31558a7986, q0Raw[29] = 0x3505a171c289a27a, q0Raw[30] = 0x4e3b56838ecf3313, q0Raw[31] = 0x94eeeb33f7f874cf, q0Raw[32] = 0x15c71128ec5628e1, q0Raw[33] = 0xe9039ce42b0eaf93, q0Raw[34] = 0x65ce8b0e9b84c5f8, q0Raw[35] = 0x6e154faa2907a6a0, q0Raw[36] = 0xe249b587a917bbec, q0Raw[37] = 0xb53633f06d6f3260, q0Raw[38] = 0x1a149a9c4209b320, q0Raw[39] = 0x772b64b20de9ae66, q0Raw[40] = 0x14376d5a8400417e, q0Raw[41] = 0xef5c45345d4af6a0, q0Raw[42] = 0x421a31b0dc75972d, q0Raw[43] = 0x28b4664065ec69ee, q0Raw[44] = 0xa6d36b03a2af157e, q0Raw[45] = 0x8c53e1654d65ff8b, q0Raw[46] = 0x047cf797b1a7c671, q0Raw[47] = 0xcee9e5ba58b6a093, q0Raw[48] = 0x1;
    r0Raw[0] = 0xd26a1f3f0a977498, r0Raw[1] = 0x8beae835d6967424, r0Raw[2] = 0x9c96cd5ee4902607, r0Raw[3] = 0xb182e8741dedb374, r0Raw[4] = 0x81d20eabdbec1e1e, r0Raw[5] = 0x776e173b01ffa52b, r0Raw[6] = 0xa0c7b28a19bec1df, r0Raw[7] = 0xe5eddc7fe610133d, r0Raw[8] = 0xfde7b3d642d61d89, r0Raw[9] = 0x8baa61d919101e34, r0Raw[10] = 0x233925622b0c28d6, r0Raw[11] = 0xf73a77243e02d72f, r0Raw[12] = 0xe82310680e9146b5, r0Raw[13] = 0x6213360fac75f2cb, r0Raw[14] = 0x5dd9083050cb28d1, r0Raw[15] = 0x41388014f8393fc2;

    uint4096 a1, q1;
    uint1024 b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *q1Raw = (uint64 *) &q1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0x47f6c1ed89e63242, a1Raw[1] = 0x670133b6089b47f6, a1Raw[2] = 0x3ecffd8b930ded46, a1Raw[3] = 0x1b66aa6f05dac19e, a1Raw[4] = 0x5bfe96eb293f033a, a1Raw[5] = 0x64fe084a4501de9a, a1Raw[6] = 0x7be8992e05d418f6, a1Raw[7] = 0x60ba70c549abc44f, a1Raw[8] = 0xacb7b77777015472, a1Raw[9] = 0x64a6d79d6c69c7d8, a1Raw[10] = 0x1d577dabb460f605, a1Raw[11] = 0xe55201be3ef80519, a1Raw[12] = 0xdb1868eb8cfe51c6, a1Raw[13] = 0xea4006d2d0c2de2c, a1Raw[14] = 0x0c4c2f810abfd1ec, a1Raw[15] = 0xee74ec72e60abaf0, a1Raw[16] = 0x414121265497fc6f, a1Raw[17] = 0x2ddb615a80acf922, a1Raw[18] = 0x2d84ef2d7ca2eeb5, a1Raw[19] = 0x30e3cfd1b5f67f6c, a1Raw[20] = 0xf0b0955319a86f2e, a1Raw[21] = 0xdddc22e651d8db1f, a1Raw[22] = 0x60e1ed3816d16fdb, a1Raw[23] = 0xd5598991f1320c89, a1Raw[24] = 0x6b156105b91c5f76, a1Raw[25] = 0xe8e70c15a8eb8f50, a1Raw[26] = 0xe559f3b773b2cb60, a1Raw[27] = 0x07e24960eed10521, a1Raw[28] = 0x6c995396943f2c8e, a1Raw[29] = 0xd7b289c4f4124969, a1Raw[30] = 0x97ff56c0159526fa, a1Raw[31] = 0xa3267aa8ed72f903, a1Raw[32] = 0xda36cd35fc818248, a1Raw[33] = 0xb532bd34ce510091, a1Raw[34] = 0xc554a78b74a7ed16, a1Raw[35] = 0x310830d840f72ca7, a1Raw[36] = 0xb03b2329023ce102, a1Raw[37] = 0x7ac389a74ffd0b96, a1Raw[38] = 0x84d308e8abacd6e5, a1Raw[39] = 0xc2a9e34aaef653ff, a1Raw[40] = 0x815d7a4692ecb6fb, a1Raw[41] = 0x7d1c84c7e114e830, a1Raw[42] = 0xa02b2ec0613da476, a1Raw[43] = 0xdb0764aaf623e713, a1Raw[44] = 0x3bff0524a6166b82, a1Raw[45] = 0xe837bd622d2bec0d, a1Raw[46] = 0x306065be0d4a1bd5, a1Raw[47] = 0xd4fd2ab2c85a3061, a1Raw[48] = 0xf51575c38584ac57, a1Raw[49] = 0x0d4f6ef3d13c8695, a1Raw[50] = 0x00bd2c2cb91724e0, a1Raw[51] = 0xc06d2618743d02c5, a1Raw[52] = 0xce172c06c3d4b68a, a1Raw[53] = 0x5dede054eaba1867, a1Raw[54] = 0x445d2f5a3a94cb2b, a1Raw[55] = 0x86ff9c26b496eb37, a1Raw[56] = 0xab15e846da17cbe8, a1Raw[57] = 0xaf8aebe188af70d2, a1Raw[58] = 0x4ff1fe849a072c85, a1Raw[59] = 0x1331b9e8c32fa54b, a1Raw[60] = 0xff498f41036c51b7, a1Raw[61] = 0xb695f7e1a51aea65, a1Raw[62] = 0xdcfd2c2e160b8747, a1Raw[63] = 0x890f9902f81aec79;
    b1Raw[0] = 0x01d954fa33368ce9, b1Raw[1] = 0x98c143c08198be80, b1Raw[2] = 0x66be5fa8830e72a1, b1Raw[3] = 0x7f8eb5f47e602d32, b1Raw[4] = 0x31b66a319cd5832a, b1Raw[5] = 0x975502c2efd4b134, b1Raw[6] = 0xf7096bfec918529b, b1Raw[7] = 0x466695ed22aa2794, b1Raw[8] = 0x4f6ebc1857564ef5, b1Raw[9] = 0x2320e3476ec75886, b1Raw[10] = 0xa699521f0dd1a481, b1Raw[11] = 0xe6238171bf83e06f, b1Raw[12] = 0x3736a52b06802fa4, b1Raw[13] = 0xab354c9b00b803d8, b1Raw[14] = 0xe124876050b07a4d, b1Raw[15] = 0x47f7c16ef33e7917;
    q1Raw[0] = 0x3271f0b3efeb502d, q1Raw[1] = 0x7397a7cb9e470fc8, q1Raw[2] = 0x34d74a7a328b2329, q1Raw[3] = 0x3c586d9e08886d51, q1Raw[4] = 0xdd2b521b8510f2de, q1Raw[5] = 0xf1556697d54be47c, q1Raw[6] = 0xd7f05d973a9b2340, q1Raw[7] = 0x19c5eeb5ad6e7f7d, q1Raw[8] = 0xee2c3825443b9d92, q1Raw[9] = 0x5c98d5eed8c22eb3, q1Raw[10] = 0x96b4be3c0277db42, q1Raw[11] = 0x03ea9df95cac54f7, q1Raw[12] = 0x3d2446fa8d918fbb, q1Raw[13] = 0x0f8d48826e296c6f, q1Raw[14] = 0x03c2d96d3a331786, q1Raw[15] = 0xdac5e49c0ed28522, q1Raw[16] = 0xacfe0f2ecdc4386f, q1Raw[17] = 0xfcdab78d579a0f68, q1Raw[18] = 0x6bc401afa717ec84, q1Raw[19] = 0x9379366851f48004, q1Raw[20] = 0x300bc966916c1e73, q1Raw[21] = 0xea08d41549d1e967, q1Raw[22] = 0x6b54537a79430660, q1Raw[23] = 0xe830154fa6f22e15, q1Raw[24] = 0x5aaf6f27ca23203c, q1Raw[25] = 0xa760a9c5113b930e, q1Raw[26] = 0x22e6a770917048c5, q1Raw[27] = 0xd09d61bf1631a2a0, q1Raw[28] = 0x653d4ee3d0c6a53d, q1Raw[29] = 0xdfb6ef7672dc0b1d, q1Raw[30] = 0xd4601f1b50e078b3, q1Raw[31] = 0x70462c02c103f101, q1Raw[32] = 0x4e38480ade0a9379, q1Raw[33] = 0x5ae29d254c5404e1, q1Raw[34] = 0xca9ffc03698f6507, q1Raw[35] = 0x4c4ec2442637e761, q1Raw[36] = 0x8d920fe3135402ed, q1Raw[37] = 0x6090b5bfc8c41ac0, q1Raw[38] = 0x6543d88fe8b7d078, q1Raw[39] = 0x9ed00ab4c39fac78, q1Raw[40] = 0x51b2e1cd505cd46b, q1Raw[41] = 0x324d7d125f78ed0c, q1Raw[42] = 0x0366c960b941b005, q1Raw[43] = 0xbf82a90984c66bf1, q1Raw[44] = 0xd0a5e0401d173f2e, q1Raw[45] = 0x70c7fe892d32701a, q1Raw[46] = 0x0381adbe93e5e574, q1Raw[47] = 0xe78bbaca47791d0b, q1Raw[48] = 0x1;
    r1Raw[0] = 0xca9fba659c639d4d, r1Raw[1] = 0x30837136a16d3774, r1Raw[2] = 0xcfed67b0f4cc064d, r1Raw[3] = 0xd1f39fb8cf784718, r1Raw[4] = 0xeba0821ae6b2325c, r1Raw[5] = 0xb2813bb931283dfa, r1Raw[6] = 0x5273039ffc72bb3c, r1Raw[7] = 0x7e38531465ba09f6, r1Raw[8] = 0xc2b8251ed58972e3, r1Raw[9] = 0x2126bb14ecbc1bac, r1Raw[10] = 0x60cc4377be8f9caa, r1Raw[11] = 0xea9deec546bb5498, r1Raw[12] = 0xba8bfdbab0f2c2fb, r1Raw[13] = 0x533bf2e49eaeacab, r1Raw[14] = 0xd506b166bd017ae8, r1Raw[15] = 0xcb8de2ba24be766;

    // ACT
    uint4096 qc0;
    uint1024 rc0;
    a0.modAndDivide(b0, qc0, rc0);
    uint4096 qc1;
    uint1024 rc1;
    a1.modAndDivide(b1, qc1, rc1);

    // ASSERT
    ASSERT_EQ(qc0, q0);
    ASSERT_EQ(rc0, r0);
    ASSERT_EQ(qc1, q1);
    ASSERT_EQ(rc1, r1);
}

TEST(BigIntegerArithmeticTests, ModulusAndDivide4096By2048Bit) {
    // ARRANGE
    uint4096 a0, q0;
    uint2048 b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *q0Raw = (uint64 *) &q0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x52b3e1448ce28b5a, a0Raw[1] = 0x5de6518a76735496, a0Raw[2] = 0x0ca714b72418beb9, a0Raw[3] = 0xd84273b3e37c7bf2, a0Raw[4] = 0xac508f5ab62d620e, a0Raw[5] = 0x980874de313e5462, a0Raw[6] = 0xee9c97cdf5175dcc, a0Raw[7] = 0x1057af3b133bb48d, a0Raw[8] = 0x0dcc7a8c0f9d72fa, a0Raw[9] = 0xfdcd78098efe532e, a0Raw[10] = 0x7255ba378402b142, a0Raw[11] = 0x05bafabc02314358, a0Raw[12] = 0x4a9808f0de087401, a0Raw[13] = 0x1984b4951a5a04c5, a0Raw[14] = 0xc4294cfd3d0a27c1, a0Raw[15] = 0x3db7d23de1f0d3bc, a0Raw[16] = 0x8eeb128187582d0f, a0Raw[17] = 0xa6955155f4715873, a0Raw[18] = 0xb7847eb6088dc626, a0Raw[19] = 0x0a63482f757238d5, a0Raw[20] = 0x436938a6639cb87e, a0Raw[21] = 0xa7703b82b193e597, a0Raw[22] = 0xac9e5ff2e5bf98ab, a0Raw[23] = 0x9d00890ce81b7f33, a0Raw[24] = 0xb526b5729ec48d29, a0Raw[25] = 0x339d230933472f2c, a0Raw[26] = 0x809982e307d04094, a0Raw[27] = 0x2e99e3f7f8a6fc62, a0Raw[28] = 0xeb065ae9279d203f, a0Raw[29] = 0xacac2c4aa7d41879, a0Raw[30] = 0x6c1e16a6182f93c5, a0Raw[31] = 0xb5adbb8c96c4f941, a0Raw[32] = 0x30cd64aad308396b, a0Raw[33] = 0x679e5a7ad428ed82, a0Raw[34] = 0xdbcdab3e541f7f96, a0Raw[35] = 0x98a39f8b22d8e64f, a0Raw[36] = 0xc00cb1fa27c55523, a0Raw[37] = 0x45922a5a7ec1f439, a0Raw[38] = 0x2fb2d1e921692357, a0Raw[39] = 0xce7173010a926281, a0Raw[40] = 0x16058066a5d1d20a, a0Raw[41] = 0x9b5f2fbcbef3adfd, a0Raw[42] = 0x205f932cd2fc11d3, a0Raw[43] = 0xf6d504077d6e8109, a0Raw[44] = 0x607f92ee8f3f3ad2, a0Raw[45] = 0xdc0a9b8bf3e729a3, a0Raw[46] = 0x64ad56333bd83c8c, a0Raw[47] = 0x65e1163df703d60a, a0Raw[48] = 0x8dfd37ed917ce87b, a0Raw[49] = 0x6580781ca3bea3b7, a0Raw[50] = 0x7b8b6a45b8b29b54, a0Raw[51] = 0x3bbed4761f75808e, a0Raw[52] = 0xe14d9e7ff37d8a07, a0Raw[53] = 0xe6bc643d5839edd4, a0Raw[54] = 0x1ea979c957ecac30, a0Raw[55] = 0x9b1d27c335ff86be, a0Raw[56] = 0x4f47f42e13399886, a0Raw[57] = 0xe6ea03ed2237893e, a0Raw[58] = 0x44a67dc512e4ac04, a0Raw[59] = 0xf3249714e3fa3333, a0Raw[60] = 0x353682ea2eb0ecfb, a0Raw[61] = 0x891628f51f2a72a6, a0Raw[62] = 0x63d20f91b415c908, a0Raw[63] = 0xe1d9fe6e9402e913;
    b0Raw[0] = 0xdc38155cac74aef7, b0Raw[1] = 0xe80caed41cdb4332, b0Raw[2] = 0x68ff6afb04249996, b0Raw[3] = 0x7607a4757ec7943a, b0Raw[4] = 0x6282a51d0b865594, b0Raw[5] = 0x1b127807215637ae, b0Raw[6] = 0x8e4a4e3282177a86, b0Raw[7] = 0x6eb02ca098761962, b0Raw[8] = 0x3daf5a891534eace, b0Raw[9] = 0x99d62b47c9c594a1, b0Raw[10] = 0x9d004e7614839cc1, b0Raw[11] = 0x3267b84263f580cf, b0Raw[12] = 0x9862d03c5b4d0eb8, b0Raw[13] = 0x38dd2e9f1a69c7dd, b0Raw[14] = 0x09fc70721ca23977, b0Raw[15] = 0x654e30a692a5352f, b0Raw[16] = 0x092d05f99a942a15, b0Raw[17] = 0xead3fb36a9e918ef, b0Raw[18] = 0x19d1aa231d785870, b0Raw[19] = 0xd43a8ada75d5793c, b0Raw[20] = 0xd401adbd4a65dbd6, b0Raw[21] = 0x15da21d6b4120cbf, b0Raw[22] = 0xd84f0b5933169895, b0Raw[23] = 0x8376750128a4a65e, b0Raw[24] = 0xdc696685da874640, b0Raw[25] = 0x05e973f682eb55aa, b0Raw[26] = 0xdce113a0309a1f70, b0Raw[27] = 0xe891028378814553, b0Raw[28] = 0xfe9b2257e8b4184c, b0Raw[29] = 0x41b6ee02341078b1, b0Raw[30] = 0x87ed1e175631dcba, b0Raw[31] = 0x62fee926ac281051;
    q0Raw[0] = 0xf509ababefa9d99a, q0Raw[1] = 0xdb2585f345956828, q0Raw[2] = 0x116093656062e1f5, q0Raw[3] = 0x36d34cc562c84973, q0Raw[4] = 0x8b7e34f6821c0f08, q0Raw[5] = 0xd545c3dd8e7701d8, q0Raw[6] = 0x19fa609e1b819f05, q0Raw[7] = 0xe703e3fb29178c0c, q0Raw[8] = 0xb7775fa682cdb343, q0Raw[9] = 0xbf2ea2cfd58ea1f8, q0Raw[10] = 0x5b9a5ec3897f07ce, q0Raw[11] = 0x005c0fcfd1d81381, q0Raw[12] = 0x4d05b4069c88d0ca, q0Raw[13] = 0xd7fcdbc60880584e, q0Raw[14] = 0x2cfb71489d864b84, q0Raw[15] = 0x9376619bc3625d76, q0Raw[16] = 0xde1efe99264386de, q0Raw[17] = 0xa373786f99c00beb, q0Raw[18] = 0x4c8bdc94616cdbe0, q0Raw[19] = 0x731d807c823c610b, q0Raw[20] = 0x6e2ad443841c4da0, q0Raw[21] = 0xf2c8cf7b24489522, q0Raw[22] = 0xfb1023d3fe4c6777, q0Raw[23] = 0x1d50b5cbeda225d5, q0Raw[24] = 0x5f5c55a5bfe4fbd0, q0Raw[25] = 0x296a716281ab95cb, q0Raw[26] = 0xa645673e6ad7b407, q0Raw[27] = 0x1069aa390ac35954, q0Raw[28] = 0xda3a18ed8d9ca124, q0Raw[29] = 0xa3fcc00b341e8fb1, q0Raw[30] = 0x6bef6c02f838acbd, q0Raw[31] = 0x480b94f595a62d7f, q0Raw[32] = 0x2;
    r0Raw[0] = 0x032dd4f8cc52ebc4, r0Raw[1] = 0x4bff1b70a34f781d, r0Raw[2] = 0x79926d6d9485ed5f, r0Raw[3] = 0x5a65c49ecbcd9d1b, r0Raw[4] = 0x146a7815a7204704, r0Raw[5] = 0x0bf342a0c296aa99, r0Raw[6] = 0x04f2002be2228935, r0Raw[7] = 0x82f86c6955983056, r0Raw[8] = 0x449cd4a0633c3ee7, r0Raw[9] = 0x5a49682e466564d5, r0Raw[10] = 0xac54844969528bfc, r0Raw[11] = 0xaa6dd87f01b529cf, r0Raw[12] = 0x51f3a824a881e184, r0Raw[13] = 0xf86536a32577935e, r0Raw[14] = 0x581fef4b8cc81c4f, r0Raw[15] = 0xb87605658ff244ee, r0Raw[16] = 0x309a1ac05a9e0dcc, r0Raw[17] = 0x2f21663e8d074146, r0Raw[18] = 0xb56ba7eca4f74ca8, r0Raw[19] = 0xd05863b0e043bda4, r0Raw[20] = 0xc265ff5d95ad8388, r0Raw[21] = 0xc2d7fe2b1d07cffb, r0Raw[22] = 0x2bffbb97e0811ce9, r0Raw[23] = 0x275cc56918176ab5, r0Raw[24] = 0x0f095b1b4574503e, r0Raw[25] = 0x1cc8de99d42d58e3, r0Raw[26] = 0x376b237b4c4795db, r0Raw[27] = 0x34268cc565c4db8f, r0Raw[28] = 0x644fc200642be3fd, r0Raw[29] = 0xcb0c5ea5a0814da0, r0Raw[30] = 0x273fa55ec262e301, r0Raw[31] = 0x247e05e927a14500;

    uint4096 a1, q1;
    uint2048 b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *q1Raw = (uint64 *) &q1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0xeebf7b5b79c7a6d3, a1Raw[1] = 0x0b8854e780a14add, a1Raw[2] = 0xf5969257afad44c0, a1Raw[3] = 0x633de54e30750b3e, a1Raw[4] = 0x5129ce1bcf865b9f, a1Raw[5] = 0xfcbce88bc203a9c5, a1Raw[6] = 0xdbe92c2faa9d574a, a1Raw[7] = 0x430605d37f2c4af3, a1Raw[8] = 0xee9ff76fb3721bb6, a1Raw[9] = 0xec83dcf35421a483, a1Raw[10] = 0x28c152eddc425818, a1Raw[11] = 0x5cae7d4fe27793c2, a1Raw[12] = 0x6459d2718272a522, a1Raw[13] = 0x8730155517d1b0f7, a1Raw[14] = 0x7887b9cee5fce766, a1Raw[15] = 0x97c6d5ccb4351338, a1Raw[16] = 0x3228e02a06d4527b, a1Raw[17] = 0x0617d8191994c18f, a1Raw[18] = 0x036f86ab6da4b00a, a1Raw[19] = 0x12e2375bd8d2b6f3, a1Raw[20] = 0x9a8d73dadb22befd, a1Raw[21] = 0x4630f9c1293582b0, a1Raw[22] = 0x7bbb1096d75a352b, a1Raw[23] = 0xffe833d2ed8113e3, a1Raw[24] = 0xb9236a7eff270fcf, a1Raw[25] = 0x1c275a2ebbadefaf, a1Raw[26] = 0x765a534984792ed3, a1Raw[27] = 0x431fd5e2ac8850c5, a1Raw[28] = 0x9ede2004f6af6298, a1Raw[29] = 0xf214149525370139, a1Raw[30] = 0xdce39ba7e8fb6c67, a1Raw[31] = 0xda2568557314ca0a, a1Raw[32] = 0xe992086563ded8e8, a1Raw[33] = 0x036fda82fd7504d2, a1Raw[34] = 0xdd010b697b420057, a1Raw[35] = 0x895a81d88d0f0bcb, a1Raw[36] = 0x6103ad39a36e4b03, a1Raw[37] = 0xcd3bb85f6915e19b, a1Raw[38] = 0x8c89c29d4ff86e39, a1Raw[39] = 0x0bff70c4e55ae9a7, a1Raw[40] = 0x9bff29daddd8a631, a1Raw[41] = 0x06b7cc1f04a5932c, a1Raw[42] = 0x5e07a827330b007f, a1Raw[43] = 0x7914ddd14e9686b5, a1Raw[44] = 0x7f51f32b5606b1b8, a1Raw[45] = 0x1baaae01c3e2f505, a1Raw[46] = 0xea02d21e6ec544b7, a1Raw[47] = 0xb85612732f1eed1e, a1Raw[48] = 0x64d0b0f81e5ec7d9, a1Raw[49] = 0xafd698f513966766, a1Raw[50] = 0x9221be41cfd419ff, a1Raw[51] = 0x9ed88b4354da8670, a1Raw[52] = 0x2b4a144ae00e61fb, a1Raw[53] = 0xa8fe0a74ddf959ea, a1Raw[54] = 0x9421c846534d3804, a1Raw[55] = 0xdbe6a775322bbb1a, a1Raw[56] = 0x83d3dd0b48f3f279, a1Raw[57] = 0xc9895358972ebb9f, a1Raw[58] = 0x9760b0a2bf7bc0c1, a1Raw[59] = 0x8437ca50de9fb4de, a1Raw[60] = 0xec8538bc7d5eb80a, a1Raw[61] = 0x7c8cbd9d60df4e4a, a1Raw[62] = 0x7866682934232bc3, a1Raw[63] = 0x43a7a87c3992836a;
    b1Raw[0] = 0x2b15c9b2dc367ce0, b1Raw[1] = 0x3ac9ced2969bb4c5, b1Raw[2] = 0xaffc71c165450fc9, b1Raw[3] = 0x1617896c1d1a0ceb, b1Raw[4] = 0x5848aeb197077cc0, b1Raw[5] = 0xfb87df354daa44f8, b1Raw[6] = 0xff2f7d630068b8aa, b1Raw[7] = 0x0da386d64f61494c, b1Raw[8] = 0xe3e6f8c77ca809f3, b1Raw[9] = 0xcf825df3c0b03d17, b1Raw[10] = 0x281ee616390355e6, b1Raw[11] = 0x363ef12ca66c3d27, b1Raw[12] = 0xff3b94ae4a1f1ac8, b1Raw[13] = 0xbdade7d35404b0fb, b1Raw[14] = 0xa3dca69adafd858b, b1Raw[15] = 0x619cea83645e9b1f, b1Raw[16] = 0x53b9cdac755174dd, b1Raw[17] = 0x81885a2ccf29865e, b1Raw[18] = 0xbeba10ffbf84f503, b1Raw[19] = 0x4c7b51c6eb08e713, b1Raw[20] = 0x93caa2214c142568, b1Raw[21] = 0x3282b9f21420fd57, b1Raw[22] = 0xbbcc8033a974b120, b1Raw[23] = 0xef42f74c41e715bd, b1Raw[24] = 0x215070a7a63dc098, b1Raw[25] = 0x5915f1035c11a40b, b1Raw[26] = 0x862a46839843782a, b1Raw[27] = 0x468be9e2e6448a5d, b1Raw[28] = 0x64507c3a10100363, b1Raw[29] = 0x4baeeb68e8aebb5c, b1Raw[30] = 0xb9c735ff99b8c874, b1Raw[31] = 0x53e36d37efd64887;
    q1Raw[0] = 0xb81922057c846a53, q1Raw[1] = 0x4ba335fd708d9dd4, q1Raw[2] = 0x404a3417e8f70fb3, q1Raw[3] = 0xfa40ea8b172cf62f, q1Raw[4] = 0xbe91cf98bbd07c35, q1Raw[5] = 0x018a58c494a22f15, q1Raw[6] = 0x39e836cf163cabd2, q1Raw[7] = 0x0cce646560825128, q1Raw[8] = 0x046f6354f8530e28, q1Raw[9] = 0x977a0d3d26f043fe, q1Raw[10] = 0x5627150382c7b199, q1Raw[11] = 0xfe2188eef7d4bf50, q1Raw[12] = 0xcd886c24519df36d, q1Raw[13] = 0x73a2db90bd4305f8, q1Raw[14] = 0xba832a9d4ab8ddfc, q1Raw[15] = 0xe95cad90d88032d4, q1Raw[16] = 0x040d6d41699e81f8, q1Raw[17] = 0x3184d431e17bfc29, q1Raw[18] = 0x2443436a35fa6476, q1Raw[19] = 0xfc8ccf7448b1d142, q1Raw[20] = 0xbac7a3bd10b4514d, q1Raw[21] = 0x3af38f2dae43039a, q1Raw[22] = 0x93e2a16addd8c6df, q1Raw[23] = 0x6fb135109ddda9be, q1Raw[24] = 0xa170de36716108b9, q1Raw[25] = 0x6e844261e4beb06f, q1Raw[26] = 0x5c616772083d5d98, q1Raw[27] = 0x551dc90543844c9b, q1Raw[28] = 0xca4193e0503d87f2, q1Raw[29] = 0x5e279597ca642008, q1Raw[30] = 0xcb98844adef7359e, q1Raw[31] = 0xce75f316a42b9d1c;
    r1Raw[0] = 0x92c0e63aa0e86a33, r1Raw[1] = 0x5abbc78ef0b91fda, r1Raw[2] = 0x3a00402c86ce4579, r1Raw[3] = 0x652c60cfa159f98c, r1Raw[4] = 0x7b02128e6c444941, r1Raw[5] = 0x7ec2d747d2597207, r1Raw[6] = 0x6aff2b2b34880d0c, r1Raw[7] = 0xf1d23cb3bfce78a3, r1Raw[8] = 0xa31cce1f0024a3a0, r1Raw[9] = 0xdbfa942bbb88f86c, r1Raw[10] = 0xccbbfec064445c07, r1Raw[11] = 0xaad10cc3f1179b31, r1Raw[12] = 0xef33f7be62abd44e, r1Raw[13] = 0xe9a47c03eb6563ea, r1Raw[14] = 0xd519282af5d4c183, r1Raw[15] = 0x7a0290b72e471176, r1Raw[16] = 0x01bae1b955ca7d2d, r1Raw[17] = 0x67c25a17180f16ad, r1Raw[18] = 0x5e4a967be4f4917f, r1Raw[19] = 0xdfbf3c5676803870, r1Raw[20] = 0xc6eacd33fec60611, r1Raw[21] = 0xd3b78a89b92f5faf, r1Raw[22] = 0x0ca8bc1848676429, r1Raw[23] = 0x6c0d65e4c40d5232, r1Raw[24] = 0xd08cfb66dc9ae304, r1Raw[25] = 0x989e7fc3ed5c0ec4, r1Raw[26] = 0xc6d4bc19f98e5927, r1Raw[27] = 0x7e6727b85edbec4b, r1Raw[28] = 0x1ad178ac15302b19, r1Raw[29] = 0xee25f35a3a4c8d5e, r1Raw[30] = 0x39a3d471eb3bbb07, r1Raw[31] = 0x2fd1d3eed3f05abf;

    // ACT
    uint4096 qc0;
    uint2048 rc0;
    a0.modAndDivide(b0, qc0, rc0);
    uint4096 qc1;
    uint2048 rc1;
    a1.modAndDivide(b1, qc1, rc1);

    // ASSERT
    ASSERT_EQ(qc0, q0);
    ASSERT_EQ(rc0, r0);
    ASSERT_EQ(qc1, q1);
    ASSERT_EQ(rc1, r1);
}

TEST(BigIntegerArithmeticTests, ModulusAndDivide4096By4096Bit) {
    // ARRANGE
    uint4096 a0, q0;
    uint4096 b0, r0;
    uint64 *a0Raw = (uint64 *) &a0, *b0Raw = (uint64 *) &b0, *q0Raw = (uint64 *) &q0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x6d68dfb27e06a349, a0Raw[1] = 0x096db1434bdf60ba, a0Raw[2] = 0x670aad5a3e57250c, a0Raw[3] = 0x0c01a187a33de8a9, a0Raw[4] = 0xb041a1e155ab8eef, a0Raw[5] = 0x727c551e92990c75, a0Raw[6] = 0xcdc445ce68c57e56, a0Raw[7] = 0x8fe0276ea09d60b6, a0Raw[8] = 0x922a553ee3670cfd, a0Raw[9] = 0xc288ddaac48839d2, a0Raw[10] = 0x9ddffeb1044bb195, a0Raw[11] = 0x31f66aef34696f21, a0Raw[12] = 0xf28c6fd36aff91e4, a0Raw[13] = 0x438dc600519411b0, a0Raw[14] = 0x2e8168a2bfdbfa62, a0Raw[15] = 0xaae74711c57db6ae, a0Raw[16] = 0x8ef9b309a79afc2b, a0Raw[17] = 0x42aea8901711a505, a0Raw[18] = 0x2c356f678275e6f2, a0Raw[19] = 0x12553d7db61b3571, a0Raw[20] = 0x61a73f7919da96fe, a0Raw[21] = 0xd4e9e4ed010d8f74, a0Raw[22] = 0x6a6f9437d47feb33, a0Raw[23] = 0xe4aaf2b2754a7576, a0Raw[24] = 0xa038225fea39a31e, a0Raw[25] = 0x3c42acda5d475d84, a0Raw[26] = 0xf915245cfd43f589, a0Raw[27] = 0xe97006fd5a0346ab, a0Raw[28] = 0x641403896e3bac0c, a0Raw[29] = 0x981c235f9a1a30a4, a0Raw[30] = 0xa6b05d3c5f2f855f, a0Raw[31] = 0xee9a81b00ee689b2, a0Raw[32] = 0x0ac82b2a4c768280, a0Raw[33] = 0xb126fda9ae85f572, a0Raw[34] = 0x68f8195064794c84, a0Raw[35] = 0xe261101687c84a44, a0Raw[36] = 0xd08b330890e04f03, a0Raw[37] = 0xab8007b2d580db76, a0Raw[38] = 0x7b5f97dda504e62b, a0Raw[39] = 0x0f9f8f7ef5b1375e, a0Raw[40] = 0x09eb8aa4224d8b5d, a0Raw[41] = 0x4a7dfdcf95e36e34, a0Raw[42] = 0x1981dfe568fe267a, a0Raw[43] = 0x9a8b5948f3b4c0d8, a0Raw[44] = 0x780079bad260f34e, a0Raw[45] = 0x8951afe0686cfcba, a0Raw[46] = 0x673620d06997e946, a0Raw[47] = 0xc623d75eed92cb4e, a0Raw[48] = 0x50e5fb03cffb921d, a0Raw[49] = 0xd17d9e976115f6d4, a0Raw[50] = 0xd45a2e3fd6dd7169, a0Raw[51] = 0xfeb3c393f1221c67, a0Raw[52] = 0xdcea2bd8953dd2f4, a0Raw[53] = 0xd015111b52774c55, a0Raw[54] = 0x437bd7d9e6980bb4, a0Raw[55] = 0xbc072299fbe8ce81, a0Raw[56] = 0x912734558fc2e39c, a0Raw[57] = 0x2d33c246b1bca22f, a0Raw[58] = 0xce54e144bb48975b, a0Raw[59] = 0x052d66e6275fa58e, a0Raw[60] = 0x2fa83720b729f52a, a0Raw[61] = 0x606d855607792695, a0Raw[62] = 0x7ecf5775d6cdf4f9, a0Raw[63] = 0x41a11ca02d8c1ceb;
    b0Raw[0] = 0x54e31c38db16551a, b0Raw[1] = 0x62f9aa2d5251bfb0, b0Raw[2] = 0xfca1d7fd0c7dd76a, b0Raw[3] = 0x1a2b063c0beb68d7, b0Raw[4] = 0x9ded3226db285d98, b0Raw[5] = 0xcfb3fa667b132301, b0Raw[6] = 0x51609c522310d5f2, b0Raw[7] = 0x02a3ec19585b6779, b0Raw[8] = 0x0ec63baf054f32b6, b0Raw[9] = 0x1dd9c1cbd74952c7, b0Raw[10] = 0xe45c6aae411a007d, b0Raw[11] = 0x2804d9902bfde7a5, b0Raw[12] = 0xb46adb5171b25719, b0Raw[13] = 0x8f3935956519f8b5, b0Raw[14] = 0x749e9ba5d3a93800, b0Raw[15] = 0xe25e280fd4bbc32c, b0Raw[16] = 0xb6f50cfad959d9fe, b0Raw[17] = 0x1969f3ba9410a436, b0Raw[18] = 0x98967176115133c6, b0Raw[19] = 0x6d150fb8fb6bd171, b0Raw[20] = 0x96191a92273ae578, b0Raw[21] = 0x6323c357eaed2d40, b0Raw[22] = 0x501f17d5b6b519fd, b0Raw[23] = 0xd17d0e28309b4e5f, b0Raw[24] = 0x14b5d8d4376ce181, b0Raw[25] = 0x5fcd6f4df79107dd, b0Raw[26] = 0x94f9835b44ccdd60, b0Raw[27] = 0xb32b5b3d0df05555, b0Raw[28] = 0x463a6f0a1e0c3ee1, b0Raw[29] = 0xd9d14e2f06438e2f, b0Raw[30] = 0x5be42d02560e7e7b, b0Raw[31] = 0x867009e75bf9bed4, b0Raw[32] = 0x1cfe99880ee3a4aa, b0Raw[33] = 0x92cd92d23bd540f9, b0Raw[34] = 0x1ed6be5822ea6b88, b0Raw[35] = 0x049386e05fdb543e, b0Raw[36] = 0xf20fd1392b787469, b0Raw[37] = 0x669b3b1f56c5a124, b0Raw[38] = 0xc7bc046db3c4e7d5, b0Raw[39] = 0xc2eed1e6fb746a1d, b0Raw[40] = 0x7784609460602e65, b0Raw[41] = 0xddebfeeba67ec8a4, b0Raw[42] = 0xa9a0bc08b3183673, b0Raw[43] = 0xe1ee60c4bfc622fb, b0Raw[44] = 0xec8c69b7b0322fa8, b0Raw[45] = 0xef7fce9e514a8b85, b0Raw[46] = 0x30d0697985bbd5dc, b0Raw[47] = 0x1057e73b9ae844bb, b0Raw[48] = 0x8984407e8625bfef, b0Raw[49] = 0x60a76da0ff686c2a, b0Raw[50] = 0xce20622fe392fc53, b0Raw[51] = 0xe93c46147282e253, b0Raw[52] = 0xb5a58a828e4d5821, b0Raw[53] = 0x46ddf1d450796125, b0Raw[54] = 0x98be339cf6b8351c, b0Raw[55] = 0x8daf9212fe020bd7, b0Raw[56] = 0xe00d6fabf3242920, b0Raw[57] = 0x67809352e4d14fef, b0Raw[58] = 0xd1ef045d362833fe, b0Raw[59] = 0xcb963c52189128bc, b0Raw[60] = 0xce7915852379faf1, b0Raw[61] = 0x31c8ec18fca4d590, b0Raw[62] = 0x36d509eea1669644, b0Raw[63] = 0x2fda2fdcf1a46b36;
    q0Raw[0] = 0x1;
    r0Raw[0] = 0x1885c379a2f04e2f, r0Raw[1] = 0xa6740715f98da10a, r0Raw[2] = 0x6a68d55d31d94da1, r0Raw[3] = 0xf1d69b4b97527fd1, r0Raw[4] = 0x12546fba7a833156, r0Raw[5] = 0xa2c85ab81785e974, r0Raw[6] = 0x7c63a97c45b4a863, r0Raw[7] = 0x8d3c3b554841f93d, r0Raw[8] = 0x8364198fde17da47, r0Raw[9] = 0xa4af1bdeed3ee70b, r0Raw[10] = 0xb9839402c331b118, r0Raw[11] = 0x09f1915f086b877b, r0Raw[12] = 0x3e219481f94d3acb, r0Raw[13] = 0xb454906aec7a18fb, r0Raw[14] = 0xb9e2ccfcec32c261, r0Raw[15] = 0xc8891f01f0c1f381, r0Raw[16] = 0xd804a60ece41222c, r0Raw[17] = 0x2944b4d5830100ce, r0Raw[18] = 0x939efdf17124b32c, r0Raw[19] = 0xa5402dc4baaf63ff, r0Raw[20] = 0xcb8e24e6f29fb185, r0Raw[21] = 0x71c6219516206233, r0Raw[22] = 0x1a507c621dcad136, r0Raw[23] = 0x132de48a44af2717, r0Raw[24] = 0x8b82498bb2ccc19d, r0Raw[25] = 0xdc753d8c65b655a7, r0Raw[26] = 0x641ba101b8771828, r0Raw[27] = 0x3644abc04c12f156, r0Raw[28] = 0x1dd9947f502f6d2b, r0Raw[29] = 0xbe4ad53093d6a275, r0Raw[30] = 0x4acc303a092106e3, r0Raw[31] = 0x682a77c8b2eccade, r0Raw[32] = 0xedc991a23d92ddd6, r0Raw[33] = 0x1e596ad772b0b478, r0Raw[34] = 0x4a215af8418ee0fc, r0Raw[35] = 0xddcd893627ecf606, r0Raw[36] = 0xde7b61cf6567da9a, r0Raw[37] = 0x44e4cc937ebb3a51, r0Raw[38] = 0xb3a3936ff13ffe56, r0Raw[39] = 0x4cb0bd97fa3ccd40, r0Raw[40] = 0x92672a0fc1ed5cf7, r0Raw[41] = 0x6c91fee3ef64a58f, r0Raw[42] = 0x6fe123dcb5e5f006, r0Raw[43] = 0xb89cf88433ee9ddc, r0Raw[44] = 0x8b741003222ec3a5, r0Raw[45] = 0x99d1e14217227134, r0Raw[46] = 0x3665b756e3dc1369, r0Raw[47] = 0xb5cbf02352aa8693, r0Raw[48] = 0xc761ba8549d5d22e, r0Raw[49] = 0x70d630f661ad8aa9, r0Raw[50] = 0x0639cc0ff34a7516, r0Raw[51] = 0x15777d7f7e9f3a14, r0Raw[52] = 0x2744a15606f07ad3, r0Raw[53] = 0x89371f4701fdeb30, r0Raw[54] = 0xaabda43cefdfd698, r0Raw[55] = 0x2e579086fde6c2a9, r0Raw[56] = 0xb119c4a99c9eba7c, r0Raw[57] = 0xc5b32ef3cceb523f, r0Raw[58] = 0xfc65dce78520635c, r0Raw[59] = 0x39972a940ece7cd1, r0Raw[60] = 0x612f219b93affa38, r0Raw[61] = 0x2ea4993d0ad45104, r0Raw[62] = 0x47fa4d8735675eb5, r0Raw[63] = 0x11c6ecc33be7b1b5;

    uint4096 a1, q1;
    uint4096 b1, r1;
    uint64 *a1Raw = (uint64 *) &a1, *b1Raw = (uint64 *) &b1, *q1Raw = (uint64 *) &q1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0xa410f2468f4f32d1, a1Raw[1] = 0x22047e2eff1c85ff, a1Raw[2] = 0xff389c27fb728349, a1Raw[3] = 0xef96c9efc68ff70a, a1Raw[4] = 0x7a7f965c4bd49eb8, a1Raw[5] = 0x96c8e68d6670b10b, a1Raw[6] = 0x397dafbc81ec2584, a1Raw[7] = 0xc0fa976efdbd007c, a1Raw[8] = 0x68a1dc7b2fd6992e, a1Raw[9] = 0xc4d11654193c2a16, a1Raw[10] = 0x034ded19f6f816e4, a1Raw[11] = 0xe3dfa65bccc825a2, a1Raw[12] = 0x1795d47c1d378868, a1Raw[13] = 0x02c6bfe6f416e88b, a1Raw[14] = 0x478c72ca0b567911, a1Raw[15] = 0x968b3194070b0695, a1Raw[16] = 0x3d181bdaaf31e752, a1Raw[17] = 0x837109638fa1629f, a1Raw[18] = 0xebef1a8d7087d0e0, a1Raw[19] = 0xbf03f635c4bbd949, a1Raw[20] = 0xdbf07a77f00be7a6, a1Raw[21] = 0xc882e2b0b2a1456a, a1Raw[22] = 0x094cad9f1251751f, a1Raw[23] = 0xf5f8af4e93482b64, a1Raw[24] = 0xa6848a9687c55b9d, a1Raw[25] = 0xca5f69d895fce986, a1Raw[26] = 0xc81079fa44ff6131, a1Raw[27] = 0xb25148414dbccce1, a1Raw[28] = 0xc3aa7cc4a8547c39, a1Raw[29] = 0x192a43e080ad079b, a1Raw[30] = 0xc22f02ee3c870624, a1Raw[31] = 0xe8be2be847a2a51b, a1Raw[32] = 0x768c6280eed8197b, a1Raw[33] = 0xc8b24c4dc2fe1a5d, a1Raw[34] = 0x5f9c68b7ad2a58e5, a1Raw[35] = 0xa8a37801d8505bb3, a1Raw[36] = 0x4e58dca58ec179c2, a1Raw[37] = 0x7f5c0133bf993c2a, a1Raw[38] = 0x0c1fde1f42862bd4, a1Raw[39] = 0x7294a57edbb6241e, a1Raw[40] = 0x7070f1a6f0fc1125, a1Raw[41] = 0x3173c92d727faada, a1Raw[42] = 0xfe0698909d909750, a1Raw[43] = 0x0c39bcbf011567d9, a1Raw[44] = 0xe2e35959003b8b5b, a1Raw[45] = 0xeedaabcfcc1afdbc, a1Raw[46] = 0xebfa1751b2962fd0, a1Raw[47] = 0xae01cecab8cf051a, a1Raw[48] = 0x2c05641afd5d7a3b, a1Raw[49] = 0xeb83aacc6b017347, a1Raw[50] = 0x470bc1b78d37b13f, a1Raw[51] = 0xb83480a3fdaacf96, a1Raw[52] = 0xa5f1db1f1586b657, a1Raw[53] = 0x214241d071e04337, a1Raw[54] = 0xaa0972b89d73c5a8, a1Raw[55] = 0x15b3555425fb323d, a1Raw[56] = 0xa8c1b131d18cc3a8, a1Raw[57] = 0x4e6d3f4ba0e7c46b, a1Raw[58] = 0xb770c0b052bd8add, a1Raw[59] = 0x6353d3dc61f53582, a1Raw[60] = 0xfb95f62d4dca5767, a1Raw[61] = 0xa6ed341e539000e0, a1Raw[62] = 0x5d6db6a0a16dfd09, a1Raw[63] = 0x2be492cc28ffe1e;
    b1Raw[0] = 0x550e0ce36182260c, b1Raw[1] = 0xfa64b912c8bdee4b, b1Raw[2] = 0xbfa9725d876b4a80, b1Raw[3] = 0xca52d10f3d1a979c, b1Raw[4] = 0x95595fb67baaceba, b1Raw[5] = 0x387ac382a82903f3, b1Raw[6] = 0xe4eba7383210b74e, b1Raw[7] = 0x02c4e5c03b9d1a84, b1Raw[8] = 0x69fbd9beb92a569d, b1Raw[9] = 0x22e735589bf20317, b1Raw[10] = 0xe0de9f00aac0a4f4, b1Raw[11] = 0xabfa32b19c8ccd0d, b1Raw[12] = 0xe39ada4bcc1db81a, b1Raw[13] = 0xdaf8facb8f565775, b1Raw[14] = 0xae652ac995d8847a, b1Raw[15] = 0x11306accc4a26203, b1Raw[16] = 0x4ec45466005022d0, b1Raw[17] = 0xbf85abe5f6d57fbb, b1Raw[18] = 0x5e9951d3a3d1429f, b1Raw[19] = 0xf69d3b4119f7983f, b1Raw[20] = 0x6fce617c86c9f9fd, b1Raw[21] = 0x6e0cca5af5465aaa, b1Raw[22] = 0xd7f21e98de39758f, b1Raw[23] = 0xe87255a57c3e08f7, b1Raw[24] = 0xcfcad8dfce9ff4c5, b1Raw[25] = 0x8a0536f00d68bdf2, b1Raw[26] = 0x96858cf435afa2fe, b1Raw[27] = 0x3c61aa770a3e734f, b1Raw[28] = 0xa3934e66dc638844, b1Raw[29] = 0xc5d2b9a9567ae590, b1Raw[30] = 0xef2de5453c66bc1f, b1Raw[31] = 0x4281fe169acb7908, b1Raw[32] = 0x296a2ee2d9ed612e, b1Raw[33] = 0x554054c5afead35f, b1Raw[34] = 0x3320113360688741, b1Raw[35] = 0x05272835f0f0537d, b1Raw[36] = 0x7364b44cf5313721, b1Raw[37] = 0x004d8c6525d6b84d, b1Raw[38] = 0x89495ce58148a8fd, b1Raw[39] = 0xad3752a903f104fa, b1Raw[40] = 0x4d1a2874c494f53c, b1Raw[41] = 0xf0da4119e60baabd, b1Raw[42] = 0x90f1b344668d5310, b1Raw[43] = 0x59c04c3c500ace03, b1Raw[44] = 0xa7e23d6fde77e38a, b1Raw[45] = 0x7e5e1e0115dda7a3, b1Raw[46] = 0xcb85457e30cc4ee9, b1Raw[47] = 0xc2cdcb65f14cc1f1, b1Raw[48] = 0xaff27bf6eaa44e05, b1Raw[49] = 0x1b31dabbdcb52426, b1Raw[50] = 0x413f5eb5163c844f, b1Raw[51] = 0x2fbd20ead4df7dca, b1Raw[52] = 0xc1b740e561f2975a, b1Raw[53] = 0xb65f56c1600958ac, b1Raw[54] = 0x188f75a792009f4f, b1Raw[55] = 0xa32188e7319fa85b, b1Raw[56] = 0x84be007b8e7b464b, b1Raw[57] = 0x9129740afa8bc312, b1Raw[58] = 0xfab5f0f939a6705b, b1Raw[59] = 0x7dbe9ef9e2695c86, b1Raw[60] = 0xe4896c9e3b219be0, b1Raw[61] = 0x885d200414d768b3, b1Raw[62] = 0x443c0fb25d448943, b1Raw[63] = 0xeca6e06e416d12c9;
    q1Raw[0] = 0x0;
    r1Raw[0] = 0xa410f2468f4f32d1, r1Raw[1] = 0x22047e2eff1c85ff, r1Raw[2] = 0xff389c27fb728349, r1Raw[3] = 0xef96c9efc68ff70a, r1Raw[4] = 0x7a7f965c4bd49eb8, r1Raw[5] = 0x96c8e68d6670b10b, r1Raw[6] = 0x397dafbc81ec2584, r1Raw[7] = 0xc0fa976efdbd007c, r1Raw[8] = 0x68a1dc7b2fd6992e, r1Raw[9] = 0xc4d11654193c2a16, r1Raw[10] = 0x034ded19f6f816e4, r1Raw[11] = 0xe3dfa65bccc825a2, r1Raw[12] = 0x1795d47c1d378868, r1Raw[13] = 0x02c6bfe6f416e88b, r1Raw[14] = 0x478c72ca0b567911, r1Raw[15] = 0x968b3194070b0695, r1Raw[16] = 0x3d181bdaaf31e752, r1Raw[17] = 0x837109638fa1629f, r1Raw[18] = 0xebef1a8d7087d0e0, r1Raw[19] = 0xbf03f635c4bbd949, r1Raw[20] = 0xdbf07a77f00be7a6, r1Raw[21] = 0xc882e2b0b2a1456a, r1Raw[22] = 0x094cad9f1251751f, r1Raw[23] = 0xf5f8af4e93482b64, r1Raw[24] = 0xa6848a9687c55b9d, r1Raw[25] = 0xca5f69d895fce986, r1Raw[26] = 0xc81079fa44ff6131, r1Raw[27] = 0xb25148414dbccce1, r1Raw[28] = 0xc3aa7cc4a8547c39, r1Raw[29] = 0x192a43e080ad079b, r1Raw[30] = 0xc22f02ee3c870624, r1Raw[31] = 0xe8be2be847a2a51b, r1Raw[32] = 0x768c6280eed8197b, r1Raw[33] = 0xc8b24c4dc2fe1a5d, r1Raw[34] = 0x5f9c68b7ad2a58e5, r1Raw[35] = 0xa8a37801d8505bb3, r1Raw[36] = 0x4e58dca58ec179c2, r1Raw[37] = 0x7f5c0133bf993c2a, r1Raw[38] = 0x0c1fde1f42862bd4, r1Raw[39] = 0x7294a57edbb6241e, r1Raw[40] = 0x7070f1a6f0fc1125, r1Raw[41] = 0x3173c92d727faada, r1Raw[42] = 0xfe0698909d909750, r1Raw[43] = 0x0c39bcbf011567d9, r1Raw[44] = 0xe2e35959003b8b5b, r1Raw[45] = 0xeedaabcfcc1afdbc, r1Raw[46] = 0xebfa1751b2962fd0, r1Raw[47] = 0xae01cecab8cf051a, r1Raw[48] = 0x2c05641afd5d7a3b, r1Raw[49] = 0xeb83aacc6b017347, r1Raw[50] = 0x470bc1b78d37b13f, r1Raw[51] = 0xb83480a3fdaacf96, r1Raw[52] = 0xa5f1db1f1586b657, r1Raw[53] = 0x214241d071e04337, r1Raw[54] = 0xaa0972b89d73c5a8, r1Raw[55] = 0x15b3555425fb323d, r1Raw[56] = 0xa8c1b131d18cc3a8, r1Raw[57] = 0x4e6d3f4ba0e7c46b, r1Raw[58] = 0xb770c0b052bd8add, r1Raw[59] = 0x6353d3dc61f53582, r1Raw[60] = 0xfb95f62d4dca5767, r1Raw[61] = 0xa6ed341e539000e0, r1Raw[62] = 0x5d6db6a0a16dfd09, r1Raw[63] = 0x2be492cc28ffe1e;

    // ACT
    uint4096 qc0;
    uint4096 rc0;
    a0.modAndDivide(b0, qc0, rc0);
    uint4096 qc1;
    uint4096 rc1;
    a1.modAndDivide(b1, qc1, rc1);

    // ASSERT
    ASSERT_EQ(qc0, q0);
    ASSERT_EQ(rc0, r0);
    ASSERT_EQ(qc1, q1);
    ASSERT_EQ(rc1, r1);
}


/* BigInteger Left Bit Shift Tests */

TEST(BigIntegerArithmeticTests, BitShiftLeft128Bit) {
    // ARRANGE
    uint128 a0, r0;
    uint32 b0;
    uint64 *a0Raw = (uint64 *) &a0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x8707597c9c40f45d, a0Raw[1] = 0x252c9a74f063083e;
    b0 = 86;
    r0Raw[0] = 0x0000000000000000, r0Raw[1] = 0x5f27103d17400000;

    uint128 a1, r1;
    uint32 b1;
    uint64 *a1Raw = (uint64 *) &a1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0x3f17af7397627c8a, a1Raw[1] = 0x58796e851b0b800d;
    b1 = 36;
    r1Raw[0] = 0x7627c8a000000000, r1Raw[1] = 0xb0b800d3f17af739;

    uint128 a2, r2;
    uint32 b2;
    uint64 *a2Raw = (uint64 *) &a2, *r2Raw = (uint64 *) &r2;

    a2Raw[0] = 0xfe95ee5366701297, a2Raw[1] = 0xff1efaceb0032819;
    b2 = 75;
    r2Raw[0] = 0x0000000000000000, r2Raw[1] = 0xaf729b338094b800;

    uint128 a3, r3;
    uint32 b3;
    uint64 *a3Raw = (uint64 *) &a3, *r3Raw = (uint64 *) &r3;

    a3Raw[0] = 0x9bf27932e02814e0, a3Raw[1] = 0xeca8b5a00d3c537f;
    b3 = 51;
    r3Raw[0] = 0xa700000000000000, r3Raw[1] = 0x9bfcdf93c9970140;

    // ACT
    uint128 c0 = a0 << b0;
    uint128 c1 = a1 << b1;
    uint128 c2 = a2 << b2;
    uint128 c3 = a3 << b3;

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
    ASSERT_EQ(c2, r2);
    ASSERT_EQ(c3, r3);
}

TEST(BigIntegerArithmeticTests, BitShiftLeft256Bit) {
    // ARRANGE
    uint256 a0, r0;
    uint32 b0;
    uint64 *a0Raw = (uint64 *) &a0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0xb620187a5fd1ce9e, a0Raw[1] = 0x8ba81b571a69d2c0, a0Raw[2] = 0xe976afc955678e5b, a0Raw[3] = 0xa783b8aabfa9122c;
    b0 = 230;
    r0Raw[0] = 0x0000000000000000, r0Raw[1] = 0x0000000000000000, r0Raw[2] = 0x0000000000000000, r0Raw[3] = 0xf473a78000000000;

    uint256 a1, r1;
    uint32 b1;
    uint64 *a1Raw = (uint64 *) &a1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0xec6b3982c3c904cb, a1Raw[1] = 0x3874d9d34d09d283, a1Raw[2] = 0x9963c6158e2006d1, a1Raw[3] = 0x35bea9ba275824de;
    b1 = 115;
    r1Raw[0] = 0x0000000000000000, r1Raw[1] = 0x2658000000000000, r1Raw[2] = 0x941f6359cc161e48, r1Raw[3] = 0x3689c3a6ce9a684e;

    uint256 a2, r2;
    uint32 b2;
    uint64 *a2Raw = (uint64 *) &a2, *r2Raw = (uint64 *) &r2;

    a2Raw[0] = 0xd1fe09efbbd783a5, a2Raw[1] = 0x1bccece029e2ec70, a2Raw[2] = 0x76dd274431855c5c, a2Raw[3] = 0x663c205e749d79fe;
    b2 = 140;
    r2Raw[0] = 0x0000000000000000, r2Raw[1] = 0x0000000000000000, r2Raw[2] = 0xe09efbbd783a5000, r2Raw[3] = 0xcece029e2ec70d1f;

    uint256 a3, r3;
    uint32 b3;
    uint64 *a3Raw = (uint64 *) &a3, *r3Raw = (uint64 *) &r3;

    a3Raw[0] = 0x0bf7abcd4e32f784, a3Raw[1] = 0xfc3b5924761cf839, a3Raw[2] = 0x48468eb881fd470c, a3Raw[3] = 0xabae814ddba78239;
    b3 = 146;
    r3Raw[0] = 0x0000000000000000, r3Raw[1] = 0x0000000000000000, r3Raw[2] = 0xaf3538cbde100000, r3Raw[3] = 0x6491d873e0e42fde;

    // ACT
    uint256 c0 = a0 << b0;
    uint256 c1 = a1 << b1;
    uint256 c2 = a2 << b2;
    uint256 c3 = a3 << b3;

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
    ASSERT_EQ(c2, r2);
    ASSERT_EQ(c3, r3);
}

TEST(BigIntegerArithmeticTests, BitShiftLeft512Bit) {
    // ARRANGE
    uint512 a0, r0;
    uint32 b0;
    uint64 *a0Raw = (uint64 *) &a0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x5c7a95079b614107, a0Raw[1] = 0x1c52f2529f4bc238, a0Raw[2] = 0x0373239a198314f2, a0Raw[3] = 0x663d2b9ac9480a99, a0Raw[4] = 0xa171a88c370555ed, a0Raw[5] = 0x1bce75aa8bec69d3, a0Raw[6] = 0xfccfb50d745d86d6, a0Raw[7] = 0x349c8e6dea491154;
    b0 = 259;
    r0Raw[0] = 0x0000000000000000, r0Raw[1] = 0x0000000000000000, r0Raw[2] = 0x0000000000000000, r0Raw[3] = 0x0000000000000000, r0Raw[4] = 0xe3d4a83cdb0a0838, r0Raw[5] = 0xe2979294fa5e11c2, r0Raw[6] = 0x1b991cd0cc18a790, r0Raw[7] = 0x31e95cd64a4054c8;

    uint512 a1, r1;
    uint32 b1;
    uint64 *a1Raw = (uint64 *) &a1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0xa33a605f380e3df9, a1Raw[1] = 0xa2ae867a1a58044e, a1Raw[2] = 0x12ab7aa8385242f1, a1Raw[3] = 0x1292b99f32ffa88b, a1Raw[4] = 0x6235be933d03f3f8, a1Raw[5] = 0xcea7fd78c5d747d9, a1Raw[6] = 0x9107d5ba11cb581b, a1Raw[7] = 0xab5f954d19c19bd2;
    b1 = 160;
    r1Raw[0] = 0x0000000000000000, r1Raw[1] = 0x0000000000000000, r1Raw[2] = 0x380e3df900000000, r1Raw[3] = 0x1a58044ea33a605f, r1Raw[4] = 0x385242f1a2ae867a, r1Raw[5] = 0x32ffa88b12ab7aa8, r1Raw[6] = 0x3d03f3f81292b99f, r1Raw[7] = 0xc5d747d96235be93;

    uint512 a2, r2;
    uint32 b2;
    uint64 *a2Raw = (uint64 *) &a2, *r2Raw = (uint64 *) &r2;

    a2Raw[0] = 0x41997fad89c0c519, a2Raw[1] = 0x2bb294ae6f4409ef, a2Raw[2] = 0x0a13cc11ac63e95e, a2Raw[3] = 0x9a8626946f7ccec5, a2Raw[4] = 0x296c18526a08d6eb, a2Raw[5] = 0x6b6f1ca2d1ec8e93, a2Raw[6] = 0xce3e63121fecff33, a2Raw[7] = 0x8c2da5d93055767d;
    b2 = 234;
    r2Raw[0] = 0x0000000000000000, r2Raw[1] = 0x0000000000000000, r2Raw[2] = 0x0000000000000000, r2Raw[3] = 0x0314640000000000, r2Raw[4] = 0x1027bd0665feb627, r2Raw[5] = 0x8fa578aeca52b9bd, r2Raw[6] = 0xf33b14284f3046b1, r2Raw[7] = 0x235bae6a189a51bd;

    uint512 a3, r3;
    uint32 b3;
    uint64 *a3Raw = (uint64 *) &a3, *r3Raw = (uint64 *) &r3;

    a3Raw[0] = 0xbe48b261811d09d6, a3Raw[1] = 0xf0f0bcef385c094c, a3Raw[2] = 0x7c92f1e129ad3f01, a3Raw[3] = 0x4b8ff3117fa827e8, a3Raw[4] = 0x7858216490084b86, a3Raw[5] = 0xdac0aecb4a709fcd, a3Raw[6] = 0xafe068ea46939263, a3Raw[7] = 0xb2144abf475ef6d4;
    b3 = 68;
    r3Raw[0] = 0x0000000000000000, r3Raw[1] = 0xe48b261811d09d60, r3Raw[2] = 0x0f0bcef385c094cb, r3Raw[3] = 0xc92f1e129ad3f01f, r3Raw[4] = 0xb8ff3117fa827e87, r3Raw[5] = 0x858216490084b864, r3Raw[6] = 0xac0aecb4a709fcd7, r3Raw[7] = 0xfe068ea46939263d;

    // ACT
    uint512 c0 = a0 << b0;
    uint512 c1 = a1 << b1;
    uint512 c2 = a2 << b2;
    uint512 c3 = a3 << b3;

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
    ASSERT_EQ(c2, r2);
    ASSERT_EQ(c3, r3);
}

TEST(BigIntegerArithmeticTests, BitShiftLeft1024Bit) {
    // ARRANGE
    uint1024 a0, r0;
    uint32 b0;
    uint64 *a0Raw = (uint64 *) &a0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x86847658ff8345ce, a0Raw[1] = 0xbfe066fd0027c452, a0Raw[2] = 0x5595478352f64652, a0Raw[3] = 0x47d5b39cb7bb590c, a0Raw[4] = 0x5dda7204ad92174f, a0Raw[5] = 0x7b326053bb6d4ebb, a0Raw[6] = 0xf3590b502eb3666f, a0Raw[7] = 0x35ff66bb9a28440b, a0Raw[8] = 0x41baece2772dab10, a0Raw[9] = 0xfed8372b42eb9f38, a0Raw[10] = 0xa4535aa6fbfa027d, a0Raw[11] = 0x40abca792cb8eef7, a0Raw[12] = 0x4bc5753b561f65f4, a0Raw[13] = 0xe59adaf114edc7e3, a0Raw[14] = 0x543e0c075299e781, a0Raw[15] = 0xe9d96a5a9b3d6343;
    b0 = 41;
    r0Raw[0] = 0x068b9c0000000000, r0Raw[1] = 0x4f88a50d08ecb1ff, r0Raw[2] = 0xec8ca57fc0cdfa00, r0Raw[3] = 0x76b218ab2a8f06a5, r0Raw[4] = 0x242e9e8fab67396f, r0Raw[5] = 0xda9d76bbb4e4095b, r0Raw[6] = 0x66ccdef664c0a776, r0Raw[7] = 0x508817e6b216a05d, r0Raw[8] = 0x5b56206bfecd7734, r0Raw[9] = 0xd73e708375d9c4ee, r0Raw[10] = 0xf404fbfdb06e5685, r0Raw[11] = 0x71ddef48a6b54df7, r0Raw[12] = 0x3ecbe8815794f259, r0Raw[13] = 0xdb8fc6978aea76ac, r0Raw[14] = 0x33cf03cb35b5e229, r0Raw[15] = 0x7ac686a87c180ea5;

    uint1024 a1, r1;
    uint32 b1;
    uint64 *a1Raw = (uint64 *) &a1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0x3479e9c8612df0e0, a1Raw[1] = 0x71fdd1f92f0dbb36, a1Raw[2] = 0x20edb0f10c4154c0, a1Raw[3] = 0x06cd459a50e0d696, a1Raw[4] = 0x4cf4865d3719b34c, a1Raw[5] = 0xf968a90e22a0aa4d, a1Raw[6] = 0x333f5d59d83ae93f, a1Raw[7] = 0x41ef91e2601d9d55, a1Raw[8] = 0xd4ceb06e247bbfa2, a1Raw[9] = 0xb79b6c7df5a956fe, a1Raw[10] = 0x6702716fc8cb3137, a1Raw[11] = 0x7a94b8187bb1404d, a1Raw[12] = 0x64b5feada3373011, a1Raw[13] = 0xcc14031b9a934935, a1Raw[14] = 0x7265361d196f580f, a1Raw[15] = 0x4929718de8c80a95;
    b1 = 612;
    r1Raw[0] = 0x0000000000000000, r1Raw[1] = 0x0000000000000000, r1Raw[2] = 0x0000000000000000, r1Raw[3] = 0x0000000000000000, r1Raw[4] = 0x0000000000000000, r1Raw[5] = 0x0000000000000000, r1Raw[6] = 0x0000000000000000, r1Raw[7] = 0x0000000000000000, r1Raw[8] = 0x0000000000000000, r1Raw[9] = 0x12df0e0000000000, r1Raw[10] = 0xf0dbb363479e9c86, r1Raw[11] = 0xc4154c071fdd1f92, r1Raw[12] = 0x0e0d69620edb0f10, r1Raw[13] = 0x719b34c06cd459a5, r1Raw[14] = 0x2a0aa4d4cf4865d3, r1Raw[15] = 0x83ae93ff968a90e2;

    uint1024 a2, r2;
    uint32 b2;
    uint64 *a2Raw = (uint64 *) &a2, *r2Raw = (uint64 *) &r2;

    a2Raw[0] = 0xb46b3e707bb200f6, a2Raw[1] = 0x1ea48eee619cdaed, a2Raw[2] = 0x75c23eb41c3b92d4, a2Raw[3] = 0xaf9602922833e9e6, a2Raw[4] = 0xbbdffa3ba47b0981, a2Raw[5] = 0x4a5a8ffe2c342e8b, a2Raw[6] = 0xe46d62b9dad58a4e, a2Raw[7] = 0x7d2d517cca829d8a, a2Raw[8] = 0xefdc4eb721f06a96, a2Raw[9] = 0x567e93e1c305af2f, a2Raw[10] = 0x49632c4814173779, a2Raw[11] = 0x7a08f3ccdc58f17a, a2Raw[12] = 0xd0b7e01095ecee5a, a2Raw[13] = 0xfa93e92338c4746f, a2Raw[14] = 0x505baef0f0d4038f, a2Raw[15] = 0xab8190be57509bf;
    b2 = 771;
    r2Raw[0] = 0x0000000000000000, r2Raw[1] = 0x0000000000000000, r2Raw[2] = 0x0000000000000000, r2Raw[3] = 0x0000000000000000, r2Raw[4] = 0x0000000000000000, r2Raw[5] = 0x0000000000000000, r2Raw[6] = 0x0000000000000000, r2Raw[7] = 0x0000000000000000, r2Raw[8] = 0x0000000000000000, r2Raw[9] = 0x0000000000000000, r2Raw[10] = 0x0000000000000000, r2Raw[11] = 0x0000000000000000, r2Raw[12] = 0xa359f383dd9007b0, r2Raw[13] = 0xf52477730ce6d76d, r2Raw[14] = 0xae11f5a0e1dc96a0, r2Raw[15] = 0x7cb01491419f4f33;

    uint1024 a3, r3;
    uint32 b3;
    uint64 *a3Raw = (uint64 *) &a3, *r3Raw = (uint64 *) &r3;

    a3Raw[0] = 0x78d4e7a4c8d6fd73, a3Raw[1] = 0x2063ecf96d2de507, a3Raw[2] = 0x75b42931b5c9bd97, a3Raw[3] = 0xcde783216428b420, a3Raw[4] = 0x1b5eeb8a6daf60bc, a3Raw[5] = 0x6afe4f279ddb9b1d, a3Raw[6] = 0x27b845a1ff43fc19, a3Raw[7] = 0x67b9960732366d2b, a3Raw[8] = 0x3dd86033d817982f, a3Raw[9] = 0x371e869edc3b6ea1, a3Raw[10] = 0x1584b91004cfb095, a3Raw[11] = 0xfc416e1c9402aa4f, a3Raw[12] = 0x660ec5793db7aa80, a3Raw[13] = 0xdc0de37f95c4f3f8, a3Raw[14] = 0x4dc63c4509d7a43f, a3Raw[15] = 0xf42c48c023113894;
    b3 = 503;
    r3Raw[0] = 0x0000000000000000, r3Raw[1] = 0x0000000000000000, r3Raw[2] = 0x0000000000000000, r3Raw[3] = 0x0000000000000000, r3Raw[4] = 0x0000000000000000, r3Raw[5] = 0x0000000000000000, r3Raw[6] = 0x0000000000000000, r3Raw[7] = 0xb980000000000000, r3Raw[8] = 0x83bc6a73d2646b7e, r3Raw[9] = 0xcb9031f67cb696f2, r3Raw[10] = 0x103ada1498dae4de, r3Raw[11] = 0x5e66f3c190b2145a, r3Raw[12] = 0x8e8daf75c536d7b0, r3Raw[13] = 0x0cb57f2793ceedcd, r3Raw[14] = 0x9593dc22d0ffa1fe, r3Raw[15] = 0x17b3dccb03991b36;

    // ACT
    uint1024 c0 = a0 << b0;
    uint1024 c1 = a1 << b1;
    uint1024 c2 = a2 << b2;
    uint1024 c3 = a3 << b3;

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
    ASSERT_EQ(c2, r2);
    ASSERT_EQ(c3, r3);
}

TEST(BigIntegerArithmeticTests, BitShiftLeft2048Bit) {
    // ARRANGE
    uint2048 a0, r0;
    uint32 b0;
    uint64 *a0Raw = (uint64 *) &a0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x3f917a54931f561b, a0Raw[1] = 0x867f06aeff6df9a6, a0Raw[2] = 0xb9cd7d5512ce3feb, a0Raw[3] = 0x9d2a0869d93b2600, a0Raw[4] = 0x8f19aa37a3bc399f, a0Raw[5] = 0x6b5457145e2c1561, a0Raw[6] = 0x11172d9e30b2e684, a0Raw[7] = 0x8a059fee3542efb3, a0Raw[8] = 0xce0f326a4c2c590f, a0Raw[9] = 0xd647755536fdbeea, a0Raw[10] = 0x417e568facd87619, a0Raw[11] = 0x120d4c7c2a402d7d, a0Raw[12] = 0x7703bd794c8ce9e8, a0Raw[13] = 0x2aa129b5e1abeeb8, a0Raw[14] = 0x03714991c4ebaa52, a0Raw[15] = 0x05a2715961255156, a0Raw[16] = 0xb240ecaeba4e217c, a0Raw[17] = 0xb952457f8d0a1ba2, a0Raw[18] = 0x7c5ef63f223d68d1, a0Raw[19] = 0x866788780625c2cc, a0Raw[20] = 0x5de205a9f7d62af0, a0Raw[21] = 0x3b5f367fac95133a, a0Raw[22] = 0x74ddbf96955654eb, a0Raw[23] = 0xe86664469e9df528, a0Raw[24] = 0x13ceb7f927fd62af, a0Raw[25] = 0x33ab241e237574de, a0Raw[26] = 0x0b52478ce9af338b, a0Raw[27] = 0x45cb03104003e31f, a0Raw[28] = 0xd268380eecf86944, a0Raw[29] = 0x78553f0b3f634ca7, a0Raw[30] = 0x81e8ae0dee949a50, a0Raw[31] = 0x89fd6fe01f6cd943;
    b0 = 1115;
    r0Raw[0] = 0x0000000000000000, r0Raw[1] = 0x0000000000000000, r0Raw[2] = 0x0000000000000000, r0Raw[3] = 0x0000000000000000, r0Raw[4] = 0x0000000000000000, r0Raw[5] = 0x0000000000000000, r0Raw[6] = 0x0000000000000000, r0Raw[7] = 0x0000000000000000, r0Raw[8] = 0x0000000000000000, r0Raw[9] = 0x0000000000000000, r0Raw[10] = 0x0000000000000000, r0Raw[11] = 0x0000000000000000, r0Raw[12] = 0x0000000000000000, r0Raw[13] = 0x0000000000000000, r0Raw[14] = 0x0000000000000000, r0Raw[15] = 0x0000000000000000, r0Raw[16] = 0x0000000000000000, r0Raw[17] = 0xa498fab0d8000000, r0Raw[18] = 0x77fb6fcd31fc8bd2, r0Raw[19] = 0xa89671ff5c33f835, r0Raw[20] = 0x4ec9d93005ce6bea, r0Raw[21] = 0xbd1de1ccfce95043, r0Raw[22] = 0xa2f160ab0c78cd51, r0Raw[23] = 0xf1859734235aa2b8, r0Raw[24] = 0x71aa177d9888b96c, r0Raw[25] = 0x526162c87c502cff, r0Raw[26] = 0xa9b7edf756707993, r0Raw[27] = 0x7d66c3b0ceb23baa, r0Raw[28] = 0xe152016bea0bf2b4, r0Raw[29] = 0xca64674f40906a63, r0Raw[30] = 0xaf0d5f75c3b81deb, r0Raw[31] = 0x8e275d529155094d;

    uint2048 a1, r1;
    uint32 b1;
    uint64 *a1Raw = (uint64 *) &a1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0xbc9c4598a08748b6, a1Raw[1] = 0xfdf0df0623290aff, a1Raw[2] = 0xf171788e66971b95, a1Raw[3] = 0x7ed18fd1e199ee4f, a1Raw[4] = 0xe8c4f8797ea68393, a1Raw[5] = 0x760dd33a6c2b2ade, a1Raw[6] = 0x36cf48c5a898f355, a1Raw[7] = 0x59e4e46ca7e94d07, a1Raw[8] = 0x06e2d9149ad87556, a1Raw[9] = 0xfc4b7540dfac2504, a1Raw[10] = 0x105923c826a76ead, a1Raw[11] = 0xff49a4071d0837bb, a1Raw[12] = 0xc33f2b6a778a398a, a1Raw[13] = 0x6cc26ccafc36fe33, a1Raw[14] = 0xf45c5703c1686304, a1Raw[15] = 0x6424c557d437538e, a1Raw[16] = 0xcfa5a7340383f03c, a1Raw[17] = 0x1f3746de8893ba55, a1Raw[18] = 0xdc8c827375b0bba4, a1Raw[19] = 0xd9083f110df002fe, a1Raw[20] = 0x80b1bb32b3278aa0, a1Raw[21] = 0x99e4bf934f1ecbfa, a1Raw[22] = 0xae18cc77fd3ddbf2, a1Raw[23] = 0xb86f4fb6a0119fca, a1Raw[24] = 0x854943681fc7d988, a1Raw[25] = 0x3dd07f3a6b3d606c, a1Raw[26] = 0x0b74ccc2f4038aff, a1Raw[27] = 0xde02eaadad2745f5, a1Raw[28] = 0x3861e6946d74de98, a1Raw[29] = 0x99cbcbc65455659c, a1Raw[30] = 0xf4d8eb80bb707234, a1Raw[31] = 0xdb38b191ff5455dd;
    b1 = 505;
    r1Raw[0] = 0x0000000000000000, r1Raw[1] = 0x0000000000000000, r1Raw[2] = 0x0000000000000000, r1Raw[3] = 0x0000000000000000, r1Raw[4] = 0x0000000000000000, r1Raw[5] = 0x0000000000000000, r1Raw[6] = 0x0000000000000000, r1Raw[7] = 0x6c00000000000000, r1Raw[8] = 0xff79388b31410e91, r1Raw[9] = 0x2bfbe1be0c465215, r1Raw[10] = 0x9fe2e2f11ccd2e37, r1Raw[11] = 0x26fda31fa3c333dc, r1Raw[12] = 0xbdd189f0f2fd4d07, r1Raw[13] = 0xaaec1ba674d85655, r1Raw[14] = 0x0e6d9e918b5131e6, r1Raw[15] = 0xacb3c9c8d94fd29a, r1Raw[16] = 0x080dc5b22935b0ea, r1Raw[17] = 0x5bf896ea81bf584a, r1Raw[18] = 0x7620b247904d4edd, r1Raw[19] = 0x15fe93480e3a106f, r1Raw[20] = 0x67867e56d4ef1473, r1Raw[21] = 0x08d984d995f86dfc, r1Raw[22] = 0x1de8b8ae0782d0c6, r1Raw[23] = 0x78c8498aafa86ea7, r1Raw[24] = 0xab9f4b4e680707e0, r1Raw[25] = 0x483e6e8dbd112774, r1Raw[26] = 0xfdb91904e6eb6177, r1Raw[27] = 0x41b2107e221be005, r1Raw[28] = 0xf501637665664f15, r1Raw[29] = 0xe533c97f269e3d97, r1Raw[30] = 0x955c3198effa7bb7, r1Raw[31] = 0x1170de9f6d40233f;

    uint2048 a2, r2;
    uint32 b2;
    uint64 *a2Raw = (uint64 *) &a2, *r2Raw = (uint64 *) &r2;

    a2Raw[0] = 0x15cef599da5832a0, a2Raw[1] = 0x8b86316caae03494, a2Raw[2] = 0x08efda797eac0e1a, a2Raw[3] = 0x82cdf75c83be778f, a2Raw[4] = 0x77a538f77b75e8a5, a2Raw[5] = 0x6c2407498d0ab202, a2Raw[6] = 0xb0ea3db3b05687ca, a2Raw[7] = 0xb797ac80c277e752, a2Raw[8] = 0x10abf218f0695fbe, a2Raw[9] = 0x37a78246a8c71115, a2Raw[10] = 0xdd598e6ea15fce9d, a2Raw[11] = 0xa3f75100e77442bf, a2Raw[12] = 0x919d7607eb9f99f5, a2Raw[13] = 0xc7b3c38c0c312275, a2Raw[14] = 0xfab1a26e407d4654, a2Raw[15] = 0xcd83549b369ab8f2, a2Raw[16] = 0xe1d8d693ed36a47b, a2Raw[17] = 0x0ac072373bcb5096, a2Raw[18] = 0x593a4409242eff06, a2Raw[19] = 0x55dcc2ab77301681, a2Raw[20] = 0x811c5da3a7a83881, a2Raw[21] = 0xb03e84d16271c827, a2Raw[22] = 0x1da06521d1928ba9, a2Raw[23] = 0x2a9b049f061b8291, a2Raw[24] = 0x139e47f0937f06e0, a2Raw[25] = 0x4aca77e840006058, a2Raw[26] = 0x5db99670efca6cc8, a2Raw[27] = 0xd1880a60fc2d5c52, a2Raw[28] = 0xac53dfa57b692229, a2Raw[29] = 0x594993b6183d50ec, a2Raw[30] = 0xaf47c073086aace9, a2Raw[31] = 0x6eb12cc4862b31d7;
    b2 = 707;
    r2Raw[0] = 0x0000000000000000, r2Raw[1] = 0x0000000000000000, r2Raw[2] = 0x0000000000000000, r2Raw[3] = 0x0000000000000000, r2Raw[4] = 0x0000000000000000, r2Raw[5] = 0x0000000000000000, r2Raw[6] = 0x0000000000000000, r2Raw[7] = 0x0000000000000000, r2Raw[8] = 0x0000000000000000, r2Raw[9] = 0x0000000000000000, r2Raw[10] = 0x0000000000000000, r2Raw[11] = 0xae77acced2c19500, r2Raw[12] = 0x5c318b655701a4a0, r2Raw[13] = 0x477ed3cbf56070d4, r2Raw[14] = 0x166fbae41df3bc78, r2Raw[15] = 0xbd29c7bbdbaf452c, r2Raw[16] = 0x61203a4c68559013, r2Raw[17] = 0x8751ed9d82b43e53, r2Raw[18] = 0xbcbd640613bf3a95, r2Raw[19] = 0x855f90c7834afdf5, r2Raw[20] = 0xbd3c1235463888a8, r2Raw[21] = 0xeacc73750afe74e9, r2Raw[22] = 0x1fba88073ba215fe, r2Raw[23] = 0x8cebb03f5cfccfad, r2Raw[24] = 0x3d9e1c60618913ac, r2Raw[25] = 0xd58d137203ea32a6, r2Raw[26] = 0x6c1aa4d9b4d5c797, r2Raw[27] = 0x0ec6b49f69b523de, r2Raw[28] = 0x560391b9de5a84b7, r2Raw[29] = 0xc9d220492177f830, r2Raw[30] = 0xaee6155bb980b40a, r2Raw[31] = 0x08e2ed1d3d41c40a;

    uint2048 a3, r3;
    uint32 b3;
    uint64 *a3Raw = (uint64 *) &a3, *r3Raw = (uint64 *) &r3;

    a3Raw[0] = 0x0b3e3671363ccf23, a3Raw[1] = 0x30ff24bbd6797981, a3Raw[2] = 0xf38bf3ac9992a8b4, a3Raw[3] = 0x836862f9b213dbb6, a3Raw[4] = 0xaab7d3a22c53df98, a3Raw[5] = 0x22b4cb3fe40b7e14, a3Raw[6] = 0x033d480e6e09361c, a3Raw[7] = 0x40406e76c9911f03, a3Raw[8] = 0x7d473a0a9970e791, a3Raw[9] = 0xc12d92f4c8ea25a7, a3Raw[10] = 0x7bd6728262ea9dcb, a3Raw[11] = 0x7f069146ca1225e3, a3Raw[12] = 0x0a7d15baa8418e1e, a3Raw[13] = 0x7d7322b98dc95ec5, a3Raw[14] = 0x7fa3712e109a6811, a3Raw[15] = 0x8dccdf3a6fe429cb, a3Raw[16] = 0x96f3e0f329ebabb5, a3Raw[17] = 0xd6b8568e0d473ff4, a3Raw[18] = 0xf614c1a7146cbd73, a3Raw[19] = 0xa0136be948146e4d, a3Raw[20] = 0x92e6da387b9dbabd, a3Raw[21] = 0x8feb144e42e6e574, a3Raw[22] = 0xf16a3003436a99b2, a3Raw[23] = 0xbde1522ed3b2440d, a3Raw[24] = 0x3f5bad09684fac0d, a3Raw[25] = 0x8782cc2b9aacac39, a3Raw[26] = 0xa70ed6b7c4c11344, a3Raw[27] = 0x73a5c5e0e889f2ed, a3Raw[28] = 0x3db3fb6c715f267d, a3Raw[29] = 0x4a4037385329a219, a3Raw[30] = 0x4cf0c857c67f1d05, a3Raw[31] = 0xed800c32b19c9300;
    b3 = 1466;
    r3Raw[0] = 0x0000000000000000, r3Raw[1] = 0x0000000000000000, r3Raw[2] = 0x0000000000000000, r3Raw[3] = 0x0000000000000000, r3Raw[4] = 0x0000000000000000, r3Raw[5] = 0x0000000000000000, r3Raw[6] = 0x0000000000000000, r3Raw[7] = 0x0000000000000000, r3Raw[8] = 0x0000000000000000, r3Raw[9] = 0x0000000000000000, r3Raw[10] = 0x0000000000000000, r3Raw[11] = 0x0000000000000000, r3Raw[12] = 0x0000000000000000, r3Raw[13] = 0x0000000000000000, r3Raw[14] = 0x0000000000000000, r3Raw[15] = 0x0000000000000000, r3Raw[16] = 0x0000000000000000, r3Raw[17] = 0x0000000000000000, r3Raw[18] = 0x0000000000000000, r3Raw[19] = 0x0000000000000000, r3Raw[20] = 0x0000000000000000, r3Raw[21] = 0x0000000000000000, r3Raw[22] = 0x8c00000000000000, r3Raw[23] = 0x042cf8d9c4d8f33c, r3Raw[24] = 0xd0c3fc92ef59e5e6, r3Raw[25] = 0xdbce2fceb2664aa2, r3Raw[26] = 0x620da18be6c84f6e, r3Raw[27] = 0x52aadf4e88b14f7e, r3Raw[28] = 0x708ad32cff902df8, r3Raw[29] = 0x0c0cf52039b824d8, r3Raw[30] = 0x450101b9db26447c, r3Raw[31] = 0x9df51ce82a65c39e;

    // ACT
    uint2048 c0 = a0 << b0;
    uint2048 c1 = a1 << b1;
    uint2048 c2 = a2 << b2;
    uint2048 c3 = a3 << b3;

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
    ASSERT_EQ(c2, r2);
    ASSERT_EQ(c3, r3);
}

TEST(BigIntegerArithmeticTests, BitShiftLeft4096Bit) {
    // ARRANGE
    uint4096 a0, r0;
    uint32 b0;
    uint64 *a0Raw = (uint64 *) &a0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x9cf2466ba7b65480, a0Raw[1] = 0xb07842c557c16818, a0Raw[2] = 0x89c5d504e309ff34, a0Raw[3] = 0xb9100cf285999ebd, a0Raw[4] = 0x1d6fe07fb02b068e, a0Raw[5] = 0xf67175bca9cc812d, a0Raw[6] = 0x1c8862d7f768c567, a0Raw[7] = 0xe67c94c43675ee14, a0Raw[8] = 0xa27f21b3c4198bd6, a0Raw[9] = 0x5c19be0aa9a14833, a0Raw[10] = 0xdf850add8f894d34, a0Raw[11] = 0xca083af894fb4e31, a0Raw[12] = 0x06bd13b830da07ec, a0Raw[13] = 0x876e7bd1a7141f83, a0Raw[14] = 0x427ff90b67b0e161, a0Raw[15] = 0x9b328ed8c36695c9, a0Raw[16] = 0x1ba13fe79adca6c5, a0Raw[17] = 0x344c93159913c37a, a0Raw[18] = 0x7882d8d26641987f, a0Raw[19] = 0x358f632dd23927d4, a0Raw[20] = 0x286cb5d5f26a3e59, a0Raw[21] = 0x60d929591a429ced, a0Raw[22] = 0x6446bffdfe7c85eb, a0Raw[23] = 0x44a5f8c6fd7719f8, a0Raw[24] = 0xe170e654d4dc5383, a0Raw[25] = 0x54434361a298ed4e, a0Raw[26] = 0x0ce3d6917fe2d6bc, a0Raw[27] = 0x6d2f63b8abe8c76e, a0Raw[28] = 0x8e5b8dfe3478ab11, a0Raw[29] = 0x6e225c52afa02e7f, a0Raw[30] = 0xbabd98208eb8f9c1, a0Raw[31] = 0xf88852b0a916f9de, a0Raw[32] = 0x38e114e0e1f4157b, a0Raw[33] = 0x2706be3b091d3fcb, a0Raw[34] = 0x8c1a7867ee290f5a, a0Raw[35] = 0x72ce7af6332babb7, a0Raw[36] = 0xa15aaf5694486dea, a0Raw[37] = 0x799c1c762f82f84c, a0Raw[38] = 0x88c7cddb4b9f1473, a0Raw[39] = 0x25f3e1929261a76f, a0Raw[40] = 0x2461c0d7bafcb1c8, a0Raw[41] = 0x5d6a512e7666ba57, a0Raw[42] = 0xc0efc9c13ff2f3b2, a0Raw[43] = 0xea5b09d6e54eb30f, a0Raw[44] = 0x7d39cd74d33c7849, a0Raw[45] = 0x518d12b577eadd9b, a0Raw[46] = 0xa46a9fef80e48612, a0Raw[47] = 0xb90d5d13ddf3d328, a0Raw[48] = 0xa7ea17bebc25ad8e, a0Raw[49] = 0xb1d3fff137cabc0e, a0Raw[50] = 0xd10ad0ab6ffc46d3, a0Raw[51] = 0x50b1e03dedd040c9, a0Raw[52] = 0x4b4d77d087c193c7, a0Raw[53] = 0xc3a5fd60a9538707, a0Raw[54] = 0xa1306890cb912733, a0Raw[55] = 0xa2d4292f2903d8ee, a0Raw[56] = 0x01f65e5e003fa3f4, a0Raw[57] = 0xea712bf5e8f727fd, a0Raw[58] = 0x50be2840dfbc91fa, a0Raw[59] = 0x58abfc794919a184, a0Raw[60] = 0x25eda756d67726de, a0Raw[61] = 0x71162f3223ed82a4, a0Raw[62] = 0xde68becfd1926898, a0Raw[63] = 0x684a2f58fdded31b;
    b0 = 1597;
    r0Raw[0] = 0x0000000000000000, r0Raw[1] = 0x0000000000000000, r0Raw[2] = 0x0000000000000000, r0Raw[3] = 0x0000000000000000, r0Raw[4] = 0x0000000000000000, r0Raw[5] = 0x0000000000000000, r0Raw[6] = 0x0000000000000000, r0Raw[7] = 0x0000000000000000, r0Raw[8] = 0x0000000000000000, r0Raw[9] = 0x0000000000000000, r0Raw[10] = 0x0000000000000000, r0Raw[11] = 0x0000000000000000, r0Raw[12] = 0x0000000000000000, r0Raw[13] = 0x0000000000000000, r0Raw[14] = 0x0000000000000000, r0Raw[15] = 0x0000000000000000, r0Raw[16] = 0x0000000000000000, r0Raw[17] = 0x0000000000000000, r0Raw[18] = 0x0000000000000000, r0Raw[19] = 0x0000000000000000, r0Raw[20] = 0x0000000000000000, r0Raw[21] = 0x0000000000000000, r0Raw[22] = 0x0000000000000000, r0Raw[23] = 0x0000000000000000, r0Raw[24] = 0x0000000000000000, r0Raw[25] = 0x139e48cd74f6ca90, r0Raw[26] = 0x960f0858aaf82d03, r0Raw[27] = 0xb138baa09c613fe6, r0Raw[28] = 0xd722019e50b333d7, r0Raw[29] = 0xa3adfc0ff60560d1, r0Raw[30] = 0xfece2eb795399025, r0Raw[31] = 0x83910c5afeed18ac, r0Raw[32] = 0xdccf929886cebdc2, r0Raw[33] = 0x744fe4367883317a, r0Raw[34] = 0x8b8337c155342906, r0Raw[35] = 0x3bf0a15bb1f129a6, r0Raw[36] = 0x9941075f129f69c6, r0Raw[37] = 0x60d7a277061b40fd, r0Raw[38] = 0x30edcf7a34e283f0, r0Raw[39] = 0x284fff216cf61c2c, r0Raw[40] = 0xb36651db186cd2b9, r0Raw[41] = 0x437427fcf35b94d8, r0Raw[42] = 0xe6899262b322786f, r0Raw[43] = 0x8f105b1a4cc8330f, r0Raw[44] = 0x26b1ec65ba4724fa, r0Raw[45] = 0xa50d96babe4d47cb, r0Raw[46] = 0x6c1b252b2348539d, r0Raw[47] = 0x0c88d7ffbfcf90bd, r0Raw[48] = 0x6894bf18dfaee33f, r0Raw[49] = 0xdc2e1cca9a9b8a70, r0Raw[50] = 0x8a88686c34531da9, r0Raw[51] = 0xc19c7ad22ffc5ad7, r0Raw[52] = 0x2da5ec77157d18ed, r0Raw[53] = 0xf1cb71bfc68f1562, r0Raw[54] = 0x2dc44b8a55f405cf, r0Raw[55] = 0xd757b30411d71f38, r0Raw[56] = 0x7f110a561522df3b, r0Raw[57] = 0x671c229c1c3e82af, r0Raw[58] = 0x44e0d7c76123a7f9, r0Raw[59] = 0xf1834f0cfdc521eb, r0Raw[60] = 0x4e59cf5ec6657576, r0Raw[61] = 0x942b55ead2890dbd, r0Raw[62] = 0x6f33838ec5f05f09, r0Raw[63] = 0xf118f9bb6973e28e;

    uint4096 a1, r1;
    uint32 b1;
    uint64 *a1Raw = (uint64 *) &a1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0xe6a2ef6ea5ebf60e, a1Raw[1] = 0xcf2adb384b9cd50d, a1Raw[2] = 0x2cd1af2b54183d8f, a1Raw[3] = 0x7c9a921c75432f4a, a1Raw[4] = 0x6e0ea085eb56704b, a1Raw[5] = 0x1e29bee9aec70837, a1Raw[6] = 0xbbe4291f2d8c557e, a1Raw[7] = 0x33a45795a0b45481, a1Raw[8] = 0x4677d6fd4dff28de, a1Raw[9] = 0x32ded94074bd5ed4, a1Raw[10] = 0x24aab6e041f8f175, a1Raw[11] = 0x5867e55d625f847c, a1Raw[12] = 0x50741106de0e8194, a1Raw[13] = 0x9f6026497b02067f, a1Raw[14] = 0x7b401231abf0b22a, a1Raw[15] = 0x287387eddc12a59e, a1Raw[16] = 0x470fe35e939c4fa8, a1Raw[17] = 0x5f875a182d26d1f5, a1Raw[18] = 0x7c9c2f9567494e5d, a1Raw[19] = 0x80ba9bfbd4607977, a1Raw[20] = 0xb334844b907b71be, a1Raw[21] = 0xccc08f21155d858e, a1Raw[22] = 0xe060e91ebeb81c42, a1Raw[23] = 0xdaf291d1919bf662, a1Raw[24] = 0xbea9dfd28e60f018, a1Raw[25] = 0xb5f0506377e37791, a1Raw[26] = 0x67920ac85ee9c282, a1Raw[27] = 0xce4f4bd4ddd10e5e, a1Raw[28] = 0x4eede9315bd48af5, a1Raw[29] = 0x04a29d2de63a5e2c, a1Raw[30] = 0xe71fd6e25cc7b954, a1Raw[31] = 0x0aa317936b284a53, a1Raw[32] = 0x2c10f86f54b631e5, a1Raw[33] = 0xf10fa71cbcbc39d0, a1Raw[34] = 0xbe3354de3a02b564, a1Raw[35] = 0xabf4ce8515967d16, a1Raw[36] = 0x2a9142025ed4c04e, a1Raw[37] = 0x1d59a92dd587d845, a1Raw[38] = 0xfd6b5de4d059a385, a1Raw[39] = 0x4556a89dc7a9df79, a1Raw[40] = 0x8d78cd9c804d4b6e, a1Raw[41] = 0xd161ddc55e08eeca, a1Raw[42] = 0xddb82295be40fc89, a1Raw[43] = 0x0f0a41c8a0a2d7cc, a1Raw[44] = 0x2b438f8b46d79589, a1Raw[45] = 0x09745043568f8c2a, a1Raw[46] = 0xfad8bac4f1829335, a1Raw[47] = 0x7f601e827cb144aa, a1Raw[48] = 0x25eac8031a659bf1, a1Raw[49] = 0x6d1d804eee15f640, a1Raw[50] = 0xa60f4b7206959258, a1Raw[51] = 0x30ab8c5823637847, a1Raw[52] = 0x2b7e688efa4be363, a1Raw[53] = 0x860f819e2906ec90, a1Raw[54] = 0x71953b77dccd4413, a1Raw[55] = 0xd80bef15be12a434, a1Raw[56] = 0x8cfe8547937e0b35, a1Raw[57] = 0x2005857abcc9e6d8, a1Raw[58] = 0x03a37782e09628e3, a1Raw[59] = 0x6af1d89de2d7df64, a1Raw[60] = 0x707718229e9c37a2, a1Raw[61] = 0xffaefb2b5701dc23, a1Raw[62] = 0x969ff15d07ac92a0, a1Raw[63] = 0xf67af86feab3f759;
    b1 = 2441;
    r1Raw[0] = 0x0000000000000000, r1Raw[1] = 0x0000000000000000, r1Raw[2] = 0x0000000000000000, r1Raw[3] = 0x0000000000000000, r1Raw[4] = 0x0000000000000000, r1Raw[5] = 0x0000000000000000, r1Raw[6] = 0x0000000000000000, r1Raw[7] = 0x0000000000000000, r1Raw[8] = 0x0000000000000000, r1Raw[9] = 0x0000000000000000, r1Raw[10] = 0x0000000000000000, r1Raw[11] = 0x0000000000000000, r1Raw[12] = 0x0000000000000000, r1Raw[13] = 0x0000000000000000, r1Raw[14] = 0x0000000000000000, r1Raw[15] = 0x0000000000000000, r1Raw[16] = 0x0000000000000000, r1Raw[17] = 0x0000000000000000, r1Raw[18] = 0x0000000000000000, r1Raw[19] = 0x0000000000000000, r1Raw[20] = 0x0000000000000000, r1Raw[21] = 0x0000000000000000, r1Raw[22] = 0x0000000000000000, r1Raw[23] = 0x0000000000000000, r1Raw[24] = 0x0000000000000000, r1Raw[25] = 0x0000000000000000, r1Raw[26] = 0x0000000000000000, r1Raw[27] = 0x0000000000000000, r1Raw[28] = 0x0000000000000000, r1Raw[29] = 0x0000000000000000, r1Raw[30] = 0x0000000000000000, r1Raw[31] = 0x0000000000000000, r1Raw[32] = 0x0000000000000000, r1Raw[33] = 0x0000000000000000, r1Raw[34] = 0x0000000000000000, r1Raw[35] = 0x0000000000000000, r1Raw[36] = 0x0000000000000000, r1Raw[37] = 0x0000000000000000, r1Raw[38] = 0x45dedd4bd7ec1c00, r1Raw[39] = 0x55b6709739aa1bcd, r1Raw[40] = 0xa35e56a8307b1f9e, r1Raw[41] = 0x352438ea865e9459, r1Raw[42] = 0x1d410bd6ace096f9, r1Raw[43] = 0x537dd35d8e106edc, r1Raw[44] = 0xc8523e5b18aafc3c, r1Raw[45] = 0x48af2b4168a90377, r1Raw[46] = 0xefadfa9bfe51bc67, r1Raw[47] = 0xbdb280e97abda88c, r1Raw[48] = 0x556dc083f1e2ea65, r1Raw[49] = 0xcfcabac4bf08f849, r1Raw[50] = 0xe8220dbc1d0328b0, r1Raw[51] = 0xc04c92f6040cfea0, r1Raw[52] = 0x80246357e164553e, r1Raw[53] = 0xe70fdbb8254b3cf6, r1Raw[54] = 0x1fc6bd27389f5050, r1Raw[55] = 0x0eb4305a4da3ea8e, r1Raw[56] = 0x385f2ace929cbabf, r1Raw[57] = 0x7537f7a8c0f2eef9, r1Raw[58] = 0x69089720f6e37d01, r1Raw[59] = 0x811e422abb0b1d66, r1Raw[60] = 0xc1d23d7d70388599, r1Raw[61] = 0xe523a32337ecc5c0, r1Raw[62] = 0x53bfa51cc1e031b5, r1Raw[63] = 0xe0a0c6efc6ef237d;

    uint4096 a2, r2;
    uint32 b2;
    uint64 *a2Raw = (uint64 *) &a2, *r2Raw = (uint64 *) &r2;

    a2Raw[0] = 0xc975c33ecd957bfa, a2Raw[1] = 0xbda9d163f00cf2ae, a2Raw[2] = 0x971bb1ec63954684, a2Raw[3] = 0xc2f2a0294a2359ee, a2Raw[4] = 0x95f08345cb497686, a2Raw[5] = 0x1f463dc51bc7512f, a2Raw[6] = 0x2fb2e363b3f9f64c, a2Raw[7] = 0xfd8aab892621b84e, a2Raw[8] = 0x0d86b07ea1bdd3c5, a2Raw[9] = 0x1d72beb060aaafa5, a2Raw[10] = 0x25ef911c7ab51189, a2Raw[11] = 0xa905aedfb0fa99e6, a2Raw[12] = 0xe3156286e7d4d184, a2Raw[13] = 0x82d72f6149b9755a, a2Raw[14] = 0x729bdd596a97b580, a2Raw[15] = 0xb5950bb36573355c, a2Raw[16] = 0xd3342190098971dc, a2Raw[17] = 0x2de8813cdbf15c8c, a2Raw[18] = 0xcd6cfd504f6080b6, a2Raw[19] = 0xed8048439d9d5217, a2Raw[20] = 0xf4c76f1d5c066487, a2Raw[21] = 0x8da75c65edc0b8df, a2Raw[22] = 0x22b1f0f1ef83b31a, a2Raw[23] = 0xeaf56a2be1c5e49c, a2Raw[24] = 0x2829a7130d8bf2d5, a2Raw[25] = 0x3cd532a39c748ef3, a2Raw[26] = 0x6e3e4e6f5006bfe4, a2Raw[27] = 0x2fb0232ced87c5bd, a2Raw[28] = 0x9bc814810fad73a9, a2Raw[29] = 0x83d1b4ea51b0becb, a2Raw[30] = 0xcefc4ec30ef87bfe, a2Raw[31] = 0x8e3f3f67da7ceaab, a2Raw[32] = 0x7b757aa5f2eb931c, a2Raw[33] = 0x7eadd3214bfeff7a, a2Raw[34] = 0xba1d7fa1cafd0787, a2Raw[35] = 0x3fb16da235035f4d, a2Raw[36] = 0xd4462e8d4003523a, a2Raw[37] = 0x44f664b633b4126e, a2Raw[38] = 0x68ecdb35436709e7, a2Raw[39] = 0xd00a70d8e5f02d55, a2Raw[40] = 0x14a1e8cacc6db348, a2Raw[41] = 0x5fead789a3e31996, a2Raw[42] = 0x002316ade8cd431b, a2Raw[43] = 0x4330ab1f00af2600, a2Raw[44] = 0x3823802c20e36556, a2Raw[45] = 0xdec4504297a34555, a2Raw[46] = 0xea11be97cb752d5b, a2Raw[47] = 0xcea76631032d2a0f, a2Raw[48] = 0x8127b73721312114, a2Raw[49] = 0xb09a7981f5a18509, a2Raw[50] = 0xed6e447d6d128f62, a2Raw[51] = 0xec959ebf22517006, a2Raw[52] = 0xd2b27feb07bc3948, a2Raw[53] = 0x3c5579eced60baea, a2Raw[54] = 0x09c7e9a9141de537, a2Raw[55] = 0x001fe61eaf8ffabb, a2Raw[56] = 0xd3ba50a9c6fa13c3, a2Raw[57] = 0x87a133046b5828ab, a2Raw[58] = 0x22ad413bf1d42cf0, a2Raw[59] = 0xb940daae1161f706, a2Raw[60] = 0x4ba72fdf1fda117e, a2Raw[61] = 0xb7352505d33bacfb, a2Raw[62] = 0x38f1f36b2f182b93, a2Raw[63] = 0x7aa41db3c5ecba2e;
    b2 = 186;
    r2Raw[0] = 0x0000000000000000, r2Raw[1] = 0x0000000000000000, r2Raw[2] = 0xe800000000000000, r2Raw[3] = 0xbb25d70cfb3655ef, r2Raw[4] = 0x12f6a7458fc033ca, r2Raw[5] = 0xba5c6ec7b18e551a, r2Raw[6] = 0x1b0bca80a5288d67, r2Raw[7] = 0xbe57c20d172d25da, r2Raw[8] = 0x307d18f7146f1d44, r2Raw[9] = 0x38becb8d8ecfe7d9, r2Raw[10] = 0x17f62aae249886e1, r2Raw[11] = 0x94361ac1fa86f74f, r2Raw[12] = 0x2475cafac182aabe, r2Raw[13] = 0x9897be4471ead446, r2Raw[14] = 0x12a416bb7ec3ea67, r2Raw[15] = 0x6b8c558a1b9f5346, r2Raw[16] = 0x020b5cbd8526e5d5, r2Raw[17] = 0x71ca6f7565aa5ed6, r2Raw[18] = 0x72d6542ecd95ccd5, r2Raw[19] = 0x334cd086402625c7, r2Raw[20] = 0xd8b7a204f36fc572, r2Raw[21] = 0x5f35b3f5413d8202, r2Raw[22] = 0x1fb601210e767548, r2Raw[23] = 0x7fd31dbc75701992, r2Raw[24] = 0x6a369d7197b702e3, r2Raw[25] = 0x708ac7c3c7be0ecc, r2Raw[26] = 0x57abd5a8af871792, r2Raw[27] = 0xcca0a69c4c362fcb, r2Raw[28] = 0x90f354ca8e71d23b, r2Raw[29] = 0xf5b8f939bd401aff, r2Raw[30] = 0xa4bec08cb3b61f16, r2Raw[31] = 0x2e6f2052043eb5ce, r2Raw[32] = 0xfa0f46d3a946c2fb, r2Raw[33] = 0xaf3bf13b0c3be1ef, r2Raw[34] = 0x7238fcfd9f69f3aa, r2Raw[35] = 0xe9edd5ea97cbae4c, r2Raw[36] = 0x1dfab74c852ffbfd, r2Raw[37] = 0x36e875fe872bf41e, r2Raw[38] = 0xe8fec5b688d40d7d, r2Raw[39] = 0xbb5118ba35000d48, r2Raw[40] = 0x9d13d992d8ced049, r2Raw[41] = 0x55a3b36cd50d9c27, r2Raw[42] = 0x234029c36397c0b5, r2Raw[43] = 0x585287a32b31b6cd, r2Raw[44] = 0x6d7fab5e268f8c66, r2Raw[45] = 0x00008c5ab7a3350c, r2Raw[46] = 0x590cc2ac7c02bc98, r2Raw[47] = 0x54e08e00b0838d95, r2Raw[48] = 0x6f7b11410a5e8d15, r2Raw[49] = 0x3fa846fa5f2dd4b5, r2Raw[50] = 0x533a9d98c40cb4a8, r2Raw[51] = 0x26049edcdc84c484, r2Raw[52] = 0x8ac269e607d68614, r2Raw[53] = 0x1bb5b911f5b44a3d, r2Raw[54] = 0x23b2567afc8945c0, r2Raw[55] = 0xab4ac9ffac1ef0e5, r2Raw[56] = 0xdcf155e7b3b582eb, r2Raw[57] = 0xec271fa6a4507794, r2Raw[58] = 0x0c007f987abe3fea, r2Raw[59] = 0xaf4ee942a71be84f, r2Raw[60] = 0xc21e84cc11ad60a2, r2Raw[61] = 0x188ab504efc750b3, r2Raw[62] = 0xfae5036ab84587dc, r2Raw[63] = 0xed2e9cbf7c7f6845;

    uint4096 a3, r3;
    uint32 b3;
    uint64 *a3Raw = (uint64 *) &a3, *r3Raw = (uint64 *) &r3;

    a3Raw[0] = 0xca438fcd1b720888, a3Raw[1] = 0x74b0855a2f43e1d6, a3Raw[2] = 0xdf4e5e1fcc27173d, a3Raw[3] = 0xc4d72964d08b831a, a3Raw[4] = 0xd726c5f5a288b01d, a3Raw[5] = 0x2edd43d1e52f228f, a3Raw[6] = 0x0b813720c3d320ce, a3Raw[7] = 0x6396c1080e051d53, a3Raw[8] = 0x169551278fd8b4a7, a3Raw[9] = 0x596444cb6fd273a9, a3Raw[10] = 0x1792adb9e74b3694, a3Raw[11] = 0x0f07642129653623, a3Raw[12] = 0xdd4c0038b15d6645, a3Raw[13] = 0x8d36d3b701d70045, a3Raw[14] = 0x10e37920f3a81fb3, a3Raw[15] = 0xaa95fb07e4562161, a3Raw[16] = 0xe901e1c81a7f85ba, a3Raw[17] = 0x07eb5630f2cee649, a3Raw[18] = 0x344c9f5acc80c3f8, a3Raw[19] = 0xd0a3776814ed408e, a3Raw[20] = 0x6b7c498726a1a9a6, a3Raw[21] = 0xd34dcfe98940443e, a3Raw[22] = 0xe82e52d564279e0d, a3Raw[23] = 0x900c761e73bc0cfa, a3Raw[24] = 0xc1fbde45105ea433, a3Raw[25] = 0xed33385865bcdc1f, a3Raw[26] = 0x0292df4fba567fda, a3Raw[27] = 0xc56f653e94db05ca, a3Raw[28] = 0xfdbfac2b71e12b61, a3Raw[29] = 0x6a9e4260a0b1249e, a3Raw[30] = 0xae410c440e782203, a3Raw[31] = 0x847f05aa4126ee3b, a3Raw[32] = 0x9d7d60e763cc4c0b, a3Raw[33] = 0x175aecebca568b2f, a3Raw[34] = 0x17b98c0b8095c6cb, a3Raw[35] = 0x801a81dc3a63fc64, a3Raw[36] = 0xe4eeb6d6a7e68174, a3Raw[37] = 0xcd45660960bf1149, a3Raw[38] = 0x24312ff6ab2a5a6d, a3Raw[39] = 0xff42786385bf3246, a3Raw[40] = 0x583601ba6a93f1a9, a3Raw[41] = 0x2894595dbb8f63e1, a3Raw[42] = 0x9e0b5da814ff393d, a3Raw[43] = 0x1fbff35153aff14d, a3Raw[44] = 0xe5d7c3f29a1f3d16, a3Raw[45] = 0x2baba578ebc44424, a3Raw[46] = 0xc83bbe003b854a3c, a3Raw[47] = 0x6913c89e3dbcc2ac, a3Raw[48] = 0xfac18f2752284ab0, a3Raw[49] = 0x8af4dbebb1d326b3, a3Raw[50] = 0x2950c07b06d2e094, a3Raw[51] = 0xa072a130c93dd402, a3Raw[52] = 0xf1782716a53d7ed5, a3Raw[53] = 0x22d7f1589b58bf3a, a3Raw[54] = 0x900f718a8ff80f6f, a3Raw[55] = 0x857778f1e601244e, a3Raw[56] = 0x5521fbfb278ca9fa, a3Raw[57] = 0xafc2958ed1cf0d19, a3Raw[58] = 0x5f17dd8ee54a8566, a3Raw[59] = 0x53664b4bb091b84e, a3Raw[60] = 0xada45f8e4862ef1d, a3Raw[61] = 0x94073c7b12302238, a3Raw[62] = 0x871bceabd8f3970a, a3Raw[63] = 0x85a51692562c02c3;
    b3 = 441;
    r3Raw[0] = 0x0000000000000000, r3Raw[1] = 0x0000000000000000, r3Raw[2] = 0x0000000000000000, r3Raw[3] = 0x0000000000000000, r3Raw[4] = 0x0000000000000000, r3Raw[5] = 0x0000000000000000, r3Raw[6] = 0x1000000000000000, r3Raw[7] = 0xad94871f9a36e411, r3Raw[8] = 0x7ae9610ab45e87c3, r3Raw[9] = 0x35be9cbc3f984e2e, r3Raw[10] = 0x3b89ae52c9a11706, r3Raw[11] = 0x1fae4d8beb451160, r3Raw[12] = 0x9c5dba87a3ca5e45, r3Raw[13] = 0xa617026e4187a641, r3Raw[14] = 0x4ec72d82101c0a3a, r3Raw[15] = 0x522d2aa24f1fb169, r3Raw[16] = 0x28b2c88996dfa4e7, r3Raw[17] = 0x462f255b73ce966d, r3Raw[18] = 0x8a1e0ec84252ca6c, r3Raw[19] = 0x8bba98007162bacc, r3Raw[20] = 0x671a6da76e03ae00, r3Raw[21] = 0xc221c6f241e7503f, r3Raw[22] = 0x75552bf60fc8ac42, r3Raw[23] = 0x93d203c39034ff0b, r3Raw[24] = 0xf00fd6ac61e59dcc, r3Raw[25] = 0x1c68993eb5990187, r3Raw[26] = 0x4da146eed029da81, r3Raw[27] = 0x7cd6f8930e4d4353, r3Raw[28] = 0x1ba69b9fd3128088, r3Raw[29] = 0xf5d05ca5aac84f3c, r3Raw[30] = 0x672018ec3ce77819, r3Raw[31] = 0x3f83f7bc8a20bd48, r3Raw[32] = 0xb5da6670b0cb79b8, r3Raw[33] = 0x940525be9f74acff, r3Raw[34] = 0xc38adeca7d29b60b, r3Raw[35] = 0x3dfb7f5856e3c256, r3Raw[36] = 0x06d53c84c1416249, r3Raw[37] = 0x775c8218881cf044, r3Raw[38] = 0x1708fe0b54824ddc, r3Raw[39] = 0x5f3afac1cec79898, r3Raw[40] = 0x962eb5d9d794ad16, r3Raw[41] = 0xc82f731817012b8d, r3Raw[42] = 0xe9003503b874c7f8, r3Raw[43] = 0x93c9dd6dad4fcd02, r3Raw[44] = 0xdb9a8acc12c17e22, r3Raw[45] = 0x8c48625fed5654b4, r3Raw[46] = 0x53fe84f0c70b7e64, r3Raw[47] = 0xc2b06c0374d527e3, r3Raw[48] = 0x7a5128b2bb771ec7, r3Raw[49] = 0x9b3c16bb5029fe72, r3Raw[50] = 0x2c3f7fe6a2a75fe2, r3Raw[51] = 0x49cbaf87e5343e7a, r3Raw[52] = 0x7857574af1d78888, r3Raw[53] = 0x5990777c00770a94, r3Raw[54] = 0x60d227913c7b7985, r3Raw[55] = 0x67f5831e4ea45095, r3Raw[56] = 0x2915e9b7d763a64d, r3Raw[57] = 0x0452a180f60da5c1, r3Raw[58] = 0xab40e54261927ba8, r3Raw[59] = 0x75e2f04e2d4a7afd, r3Raw[60] = 0xde45afe2b136b17e, r3Raw[61] = 0x9d201ee3151ff01e, r3Raw[62] = 0xf50aeef1e3cc0248, r3Raw[63] = 0x32aa43f7f64f1953;

    // ACT
    uint4096 c0 = a0 << b0;
    uint4096 c1 = a1 << b1;
    uint4096 c2 = a2 << b2;
    uint4096 c3 = a3 << b3;

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
    ASSERT_EQ(c2, r2);
    ASSERT_EQ(c3, r3);
}


/* BigInteger Right Bit Shift Tests */

TEST(BigIntegerArithmeticTests, BitShiftRight128Bit) {
    // ARRANGE
    uint128 a0, r0;
    uint32 b0;
    uint64 *a0Raw = (uint64 *) &a0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x151646b40cd73e21, a0Raw[1] = 0x4a546e09c181eac;
    b0 = 110;
    r0Raw[0] = 0x1295;

    uint128 a1, r1;
    uint32 b1;
    uint64 *a1Raw = (uint64 *) &a1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0x3471299b86bdf9bf, a1Raw[1] = 0x6d040ed09aa60bea;
    b1 = 106;
    r1Raw[0] = 0x1b4103;

    uint128 a2, r2;
    uint32 b2;
    uint64 *a2Raw = (uint64 *) &a2, *r2Raw = (uint64 *) &r2;

    a2Raw[0] = 0x6417132ee50a3b55, a2Raw[1] = 0xec37a7fce4499f0e;
    b2 = 47;
    r2Raw[0] = 0x4ff9c8933e1cc82e, r2Raw[1] = 0x1d86f;

    uint128 a3, r3;
    uint32 b3;
    uint64 *a3Raw = (uint64 *) &a3, *r3Raw = (uint64 *) &r3;

    a3Raw[0] = 0x1c6ca5e5d79cc324, a3Raw[1] = 0x5f3f24cb95efdbfb;
    b3 = 39;
    r3Raw[0] = 0x972bdfb7f638d94b, r3Raw[1] = 0xbe7e49;

    // ACT
    uint128 c0 = a0 >> b0;
    uint128 c1 = a1 >> b1;
    uint128 c2 = a2 >> b2;
    uint128 c3 = a3 >> b3;

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
    ASSERT_EQ(c2, r2);
    ASSERT_EQ(c3, r3);
}

TEST(BigIntegerArithmeticTests, BitShiftRight256Bit) {
    // ARRANGE
    uint256 a0, r0;
    uint32 b0;
    uint64 *a0Raw = (uint64 *) &a0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x14e5593fa319c6db, a0Raw[1] = 0x795332056b5e8bb2, a0Raw[2] = 0x8ffa785e4d3767b7, a0Raw[3] = 0xcc320e5025af6529;
    b0 = 78;
    r0Raw[0] = 0x9edde54cc815ad7a, r0Raw[1] = 0x94a63fe9e17934dd, r0Raw[2] = 0x330c8394096bd;

    uint256 a1, r1;
    uint32 b1;
    uint64 *a1Raw = (uint64 *) &a1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0x724bfb9ab47fa6da, a1Raw[1] = 0x533f80016b3a2539, a1Raw[2] = 0x297032ad0c4f7b74, a1Raw[3] = 0xe3ecfb95ec9407d2;
    b1 = 41;
    r1Raw[0] = 0x00b59d129cb925fd, r1Raw[1] = 0x568627bdba299fc0, r1Raw[2] = 0xcaf64a03e914b819, r1Raw[3] = 0x71f67d;

    uint256 a2, r2;
    uint32 b2;
    uint64 *a2Raw = (uint64 *) &a2, *r2Raw = (uint64 *) &r2;

    a2Raw[0] = 0x237bf48c89f750bf, a2Raw[1] = 0x67aea1112837d67d, a2Raw[2] = 0xdcf9b3b152d005fa, a2Raw[3] = 0xdabc33d6820844b7;
    b2 = 134;
    r2Raw[0] = 0xdf73e6cec54b4017, r2Raw[1] = 0x36af0cf5a082112;

    uint256 a3, r3;
    uint32 b3;
    uint64 *a3Raw = (uint64 *) &a3, *r3Raw = (uint64 *) &r3;

    a3Raw[0] = 0x3ec1bcbbef1a019e, a3Raw[1] = 0x7ad4c48a3facf453, a3Raw[2] = 0xdeaf61fab3893d9d, a3Raw[3] = 0x9a88d2339698a617;
    b3 = 166;
    r3Raw[0] = 0xce5a62985f7abd87, r3Raw[1] = 0x26a2348;

    // ACT
    uint256 c0 = a0 >> b0;
    uint256 c1 = a1 >> b1;
    uint256 c2 = a2 >> b2;
    uint256 c3 = a3 >> b3;

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
    ASSERT_EQ(c2, r2);
    ASSERT_EQ(c3, r3);
}

TEST(BigIntegerArithmeticTests, BitShiftRight512Bit) {
    // ARRANGE
    uint512 a0, r0;
    uint32 b0;
    uint64 *a0Raw = (uint64 *) &a0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0xbe755d1b6366c841, a0Raw[1] = 0x1ff58ef0cf5da05a, a0Raw[2] = 0x9945d9fdefdbfc83, a0Raw[3] = 0x20d3b8f5a7048504, a0Raw[4] = 0x3cbd13b07253ae15, a0Raw[5] = 0x7a873dec27ebd147, a0Raw[6] = 0xcba81d35440c1468, a0Raw[7] = 0x7892ec33298b6621;
    b0 = 500;
    r0Raw[0] = 0x789;

    uint512 a1, r1;
    uint32 b1;
    uint64 *a1Raw = (uint64 *) &a1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0x9428341c429a9a17, a1Raw[1] = 0x8f5467361af3b449, a1Raw[2] = 0xf523f82b1b6af4bb, a1Raw[3] = 0x3239ae535d2f56d3, a1Raw[4] = 0x0891f2f7bd7b0813, a1Raw[5] = 0xea9628f768d3ba3d, a1Raw[6] = 0x1aa47600029025ea, a1Raw[7] = 0xaa6356535d2af650;
    b1 = 93;
    r1Raw[0] = 0xdb57a5dc7aa339b0, r1Raw[1] = 0xe97ab69fa91fc158, r1Raw[2] = 0xebd8409991cd729a, r1Raw[3] = 0x469dd1e8448f97bd, r1Raw[4] = 0x14812f5754b147bb, r1Raw[5] = 0xe957b280d523b000, r1Raw[6] = 0x5531ab29a;

    uint512 a2, r2;
    uint32 b2;
    uint64 *a2Raw = (uint64 *) &a2, *r2Raw = (uint64 *) &r2;

    a2Raw[0] = 0x92d7d2eaf43a81db, a2Raw[1] = 0xe89ff82739b0dda4, a2Raw[2] = 0x8912aa7e636501e9, a2Raw[3] = 0x6e2b8fb429658d83, a2Raw[4] = 0x5ba27128e1a56861, a2Raw[5] = 0x23638ef1b9aa42d1, a2Raw[6] = 0x2cf171afdb4fb55f, a2Raw[7] = 0x125819ebe2b63f18;
    b2 = 375;
    r2Raw[0] = 0xe2e35fb69f6abe46, r2Raw[1] = 0xb033d7c56c7e3059, r2Raw[2] = 0x24;

    uint512 a3, r3;
    uint32 b3;
    uint64 *a3Raw = (uint64 *) &a3, *r3Raw = (uint64 *) &r3;

    a3Raw[0] = 0xfa016d8214f2fdaa, a3Raw[1] = 0xd550db539ade57be, a3Raw[2] = 0xf2dedae48e484cfb, a3Raw[3] = 0xfc9a090701700f3a, a3Raw[4] = 0x1d9bb0ffe184b3ac, a3Raw[5] = 0xca2155627fe90d48, a3Raw[6] = 0xb32f08a447f1f493, a3Raw[7] = 0x66e50628a4b74d1d;
    b3 = 511;
    r3Raw[0] = 0x0;

    // ACT
    uint512 c0 = a0 >> b0;
    uint512 c1 = a1 >> b1;
    uint512 c2 = a2 >> b2;
    uint512 c3 = a3 >> b3;

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
    ASSERT_EQ(c2, r2);
    ASSERT_EQ(c3, r3);
}

TEST(BigIntegerArithmeticTests, BitShiftRight1024Bit) {
    // ARRANGE
    uint1024 a0, r0;
    uint32 b0;
    uint64 *a0Raw = (uint64 *) &a0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0x1d78abcaef10a802, a0Raw[1] = 0xef815b6ba63a6fb2, a0Raw[2] = 0x69efcb13b4798f05, a0Raw[3] = 0x4fd217a4ac60affc, a0Raw[4] = 0xec8279e160ad115e, a0Raw[5] = 0x415e98ecf3051fbe, a0Raw[6] = 0x1c9283be39809c52, a0Raw[7] = 0x048f1618c402b43a, a0Raw[8] = 0xfc95fd99d7b04167, a0Raw[9] = 0xe473f835a5dfec48, a0Raw[10] = 0x445f115f426fb3ed, a0Raw[11] = 0xe06271ced81bdd00, a0Raw[12] = 0x293d65c0bf41066f, a0Raw[13] = 0xde26f19f563e8228, a0Raw[14] = 0xfb2ff7ab36071e1c, a0Raw[15] = 0x4a205585f68190e6;
    b0 = 347;
    r0Raw[0] = 0x30138a482bd31d9e, r0Raw[1] = 0x80568743925077c7, r0Raw[2] = 0xf6082ce091e2c318, r0Raw[3] = 0xbbfd891f92bfb33a, r0Raw[4] = 0x4df67dbc8e7f06b4, r0Raw[5] = 0x037ba0088be22be8, r0Raw[6] = 0xe820cdfc0c4e39db, r0Raw[7] = 0xc7d0450527acb817, r0Raw[8] = 0xc0e3c39bc4de33ea, r0Raw[9] = 0xd0321cdf65fef566, r0Raw[10] = 0x9440ab0be;

    uint1024 a1, r1;
    uint32 b1;
    uint64 *a1Raw = (uint64 *) &a1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0x33079cf21bc262b2, a1Raw[1] = 0xafafc1795143664d, a1Raw[2] = 0x1e00d0b464164211, a1Raw[3] = 0x75755a94be5b7baa, a1Raw[4] = 0xd77ebdac7a7eefef, a1Raw[5] = 0xe22aad10f716d78f, a1Raw[6] = 0x045eec33010891cf, a1Raw[7] = 0xb56b0520bbb571b6, a1Raw[8] = 0x43bd9948cb9a668c, a1Raw[9] = 0x55d70d933d1930f8, a1Raw[10] = 0x11ceddbc2f480626, a1Raw[11] = 0xaa686606f3b9789b, a1Raw[12] = 0x09383dd27fc401c2, a1Raw[13] = 0x22b0d7f2e6bc5e17, a1Raw[14] = 0x27ecea7189e42d91, a1Raw[15] = 0x2597848767ab38fe;
    b1 = 76;
    r1Raw[0] = 0x211afafc17951436, r1Raw[1] = 0xbaa1e00d0b464164, r1Raw[2] = 0xfef75755a94be5b7, r1Raw[3] = 0x78fd77ebdac7a7ee, r1Raw[4] = 0x1cfe22aad10f716d, r1Raw[5] = 0x1b6045eec3301089, r1Raw[6] = 0x68cb56b0520bbb57, r1Raw[7] = 0x0f843bd9948cb9a6, r1Raw[8] = 0x62655d70d933d193, r1Raw[9] = 0x89b11ceddbc2f480, r1Raw[10] = 0x1c2aa686606f3b97, r1Raw[11] = 0xe1709383dd27fc40, r1Raw[12] = 0xd9122b0d7f2e6bc5, r1Raw[13] = 0x8fe27ecea7189e42, r1Raw[14] = 0x2597848767ab3;

    uint1024 a2, r2;
    uint32 b2;
    uint64 *a2Raw = (uint64 *) &a2, *r2Raw = (uint64 *) &r2;

    a2Raw[0] = 0xbd21639332dd445c, a2Raw[1] = 0xe8089c76caa99e33, a2Raw[2] = 0x741be5c2673bf580, a2Raw[3] = 0x5701f390c512dc4a, a2Raw[4] = 0xb956de31e227c0c6, a2Raw[5] = 0x98acb11905cbe86f, a2Raw[6] = 0x5d0d553116808303, a2Raw[7] = 0xd9a356a90dcd2feb, a2Raw[8] = 0x0d7561ecb9c44545, a2Raw[9] = 0xaca9cc62d4f96ed3, a2Raw[10] = 0xcf5a173c42418d01, a2Raw[11] = 0x0164313ae09bbe2d, a2Raw[12] = 0x997da5c8dd594d53, a2Raw[13] = 0x4512dac7a4b8e4c7, a2Raw[14] = 0x5dc7be966fff91aa, a2Raw[15] = 0x48838762715cfbcc;
    b2 = 374;
    r2Raw[0] = 0x3554c45a020c0e62, r2Raw[1] = 0x8d5aa43734bfad74, r2Raw[2] = 0xd587b2e711151766, r2Raw[3] = 0xa7318b53e5bb4c35, r2Raw[4] = 0x685cf109063406b2, r2Raw[5] = 0x90c4eb826ef8b73d, r2Raw[6] = 0xf697237565354c05, r2Raw[7] = 0x4b6b1e92e3931e65, r2Raw[8] = 0x1efa59bffe46a914, r2Raw[9] = 0x0e1d89c573ef3177, r2Raw[10] = 0x122;

    uint1024 a3, r3;
    uint32 b3;
    uint64 *a3Raw = (uint64 *) &a3, *r3Raw = (uint64 *) &r3;

    a3Raw[0] = 0x795a49f8696b8741, a3Raw[1] = 0xd19fb10aba7205f5, a3Raw[2] = 0xc1eaaf85266ebf33, a3Raw[3] = 0xfd7860e85865680c, a3Raw[4] = 0x205b1de044eeed29, a3Raw[5] = 0x0a35318af7d4b826, a3Raw[6] = 0x0a040a4e4bb5a0ff, a3Raw[7] = 0x2620644e627b7c6e, a3Raw[8] = 0x27a769a5916abb28, a3Raw[9] = 0x4fc561530c099e04, a3Raw[10] = 0x1e81f56418212d28, a3Raw[11] = 0x3a570c6218202500, a3Raw[12] = 0x1fe6e886b9093c9c, a3Raw[13] = 0xe1affd74a5f248e5, a3Raw[14] = 0xc35e91ab99f74b6f, a3Raw[15] = 0xbd7cba4b38f8a0b9;
    b3 = 935;
    r3Raw[0] = 0x9671f1417386bd23, r3Raw[1] = 0x17af974;

    // ACT
    uint1024 c0 = a0 >> b0;
    uint1024 c1 = a1 >> b1;
    uint1024 c2 = a2 >> b2;
    uint1024 c3 = a3 >> b3;

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
    ASSERT_EQ(c2, r2);
    ASSERT_EQ(c3, r3);
}

TEST(BigIntegerArithmeticTests, BitShiftRight2048Bit) {
    // ARRANGE
    uint2048 a0, r0;
    uint32 b0;
    uint64 *a0Raw = (uint64 *) &a0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0xbc899a108e5d3974, a0Raw[1] = 0x4fa3e0135bd0ba74, a0Raw[2] = 0x764dd8c382a6ffac, a0Raw[3] = 0x83837791a6dea64f, a0Raw[4] = 0x222341a6d7741ae8, a0Raw[5] = 0x1304d7d04b9d6903, a0Raw[6] = 0x5c49d24e967b628c, a0Raw[7] = 0xfdd36e154113ab46, a0Raw[8] = 0xbce1bd71f303d371, a0Raw[9] = 0xb0b2f403372a6935, a0Raw[10] = 0x09728a7733dccdb2, a0Raw[11] = 0x8d75a4b6abc86719, a0Raw[12] = 0x9df4a232bea1d991, a0Raw[13] = 0xf2739c0a49d60314, a0Raw[14] = 0x5db47db1374e873a, a0Raw[15] = 0x2d8010c2c4d7214e, a0Raw[16] = 0xa4c1e40c48043fd4, a0Raw[17] = 0xab08b06744e75008, a0Raw[18] = 0xc03564ddda227aef, a0Raw[19] = 0x829d09e96098e5da, a0Raw[20] = 0xe9384932b39d3cd5, a0Raw[21] = 0x34782ec3707125ce, a0Raw[22] = 0x96dcfd5e140666c7, a0Raw[23] = 0x6b620f067e737f37, a0Raw[24] = 0x56d2301bd95b349b, a0Raw[25] = 0x973ed1dd87036056, a0Raw[26] = 0x216698f1546b0e83, a0Raw[27] = 0x5e04415651c51e30, a0Raw[28] = 0xd0a1d47046e030e1, a0Raw[29] = 0x5856e744d252729d, a0Raw[30] = 0xe42130ff430a6e15, a0Raw[31] = 0xa5bba68be92de7f7;
    b0 = 54;
    r0Raw[0] = 0x8f804d6f42e9d2f2, r0Raw[1] = 0x37630e0a9bfeb13e, r0Raw[2] = 0x0dde469b7a993dd9, r0Raw[3] = 0x8d069b5dd06ba20e, r0Raw[4] = 0x135f412e75a40c88, r0Raw[5] = 0x27493a59ed8a304c, r0Raw[6] = 0x4db855044ead1971, r0Raw[7] = 0x86f5c7cc0f4dc7f7, r0Raw[8] = 0xcbd00cdca9a4d6f3, r0Raw[9] = 0xca29dccf7336cac2, r0Raw[10] = 0xd692daaf219c6425, r0Raw[11] = 0xd288cafa87664635, r0Raw[12] = 0xce702927580c5277, r0Raw[13] = 0xd1f6c4dd3a1cebc9, r0Raw[14] = 0x00430b135c853976, r0Raw[15] = 0x0790312010ff50b6, r0Raw[16] = 0x22c19d139d402293, r0Raw[17] = 0xd593776889ebbeac, r0Raw[18] = 0x7427a58263976b00, r0Raw[19] = 0xe124cace74f3560a, r0Raw[20] = 0xe0bb0dc1c4973ba4, r0Raw[21] = 0x73f57850199b1cd1, r0Raw[22] = 0x883c19f9cdfcde5b, r0Raw[23] = 0x48c06f656cd26dad, r0Raw[24] = 0xfb47761c0d81595b, r0Raw[25] = 0x9a63c551ac3a0e5c, r0Raw[26] = 0x110559471478c085, r0Raw[27] = 0x8751c11b80c38578, r0Raw[28] = 0x5b9d134949ca7742, r0Raw[29] = 0x84c3fd0c29b85561, r0Raw[30] = 0xee9a2fa4b79fdf90, r0Raw[31] = 0x296;

    uint2048 a1, r1;
    uint32 b1;
    uint64 *a1Raw = (uint64 *) &a1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0x58b59d8addc141b9, a1Raw[1] = 0xeb109f2581574ed6, a1Raw[2] = 0x52fb7d2a9de24ea3, a1Raw[3] = 0x2c8459e45123979e, a1Raw[4] = 0x76c17767c6df1443, a1Raw[5] = 0x221624108288a75a, a1Raw[6] = 0xd07693761805cb02, a1Raw[7] = 0xfe842c0a4c181b36, a1Raw[8] = 0x21604ba483d68edd, a1Raw[9] = 0xcbd2796d88cddfe6, a1Raw[10] = 0xdbbb053171053000, a1Raw[11] = 0x1d56860329733719, a1Raw[12] = 0xb22c9db8f26e3eab, a1Raw[13] = 0x3362c253ea7da1ec, a1Raw[14] = 0x85701be04be72dcd, a1Raw[15] = 0x47420ae402d595db, a1Raw[16] = 0x890dcdd045eb206f, a1Raw[17] = 0x9d8fb80982184c64, a1Raw[18] = 0x45f7ccda26ba98ea, a1Raw[19] = 0x80dc0c85502f2945, a1Raw[20] = 0x597c041dbd3d5af7, a1Raw[21] = 0xc93d666ca5d29a34, a1Raw[22] = 0x64689453edadc7da, a1Raw[23] = 0x640996f22e5d4bed, a1Raw[24] = 0xae087fbb9a486763, a1Raw[25] = 0x4cf581ed5dbf014d, a1Raw[26] = 0x1538673a3c2dc22f, a1Raw[27] = 0x9e912ffa81e98c57, a1Raw[28] = 0x90b96d73a91720d5, a1Raw[29] = 0xb25c3079bb219a5d, a1Raw[30] = 0xf85c2042725e1a95, a1Raw[31] = 0xfee85a9a5bd755d1;
    b1 = 1624;
    r1Raw[0] = 0x2dc22f4cf581ed5d, r1Raw[1] = 0xe98c571538673a3c, r1Raw[2] = 0x1720d59e912ffa81, r1Raw[3] = 0x219a5d90b96d73a9, r1Raw[4] = 0x5e1a95b25c3079bb, r1Raw[5] = 0xd755d1f85c204272, r1Raw[6] = 0xfee85a9a5b;

    uint2048 a2, r2;
    uint32 b2;
    uint64 *a2Raw = (uint64 *) &a2, *r2Raw = (uint64 *) &r2;

    a2Raw[0] = 0x31e7ad48dc2ab415, a2Raw[1] = 0x331824cff17e5c72, a2Raw[2] = 0x956d9694f723f7b2, a2Raw[3] = 0x6cd500625929b779, a2Raw[4] = 0xf3c5f55737dfd8f0, a2Raw[5] = 0x5c775dc567767eb1, a2Raw[6] = 0x5f6cae4ab4e3b4f6, a2Raw[7] = 0x074a90b687147af9, a2Raw[8] = 0x7b11e7d0ad5b9410, a2Raw[9] = 0x37f793dda4e99c8f, a2Raw[10] = 0x6ba20f15b84fadab, a2Raw[11] = 0x51e5ab4387263964, a2Raw[12] = 0x5f159d61d92718fe, a2Raw[13] = 0x84be9f60bfa93fbb, a2Raw[14] = 0x57cb7f239ed1b397, a2Raw[15] = 0x393018f2974b6da8, a2Raw[16] = 0xf4095971ee2fdbeb, a2Raw[17] = 0x24260c2e035e8500, a2Raw[18] = 0x5605328fd2e4e4eb, a2Raw[19] = 0xbf20be701e8722c0, a2Raw[20] = 0x9a6d3b8687441abf, a2Raw[21] = 0xd256f92a21aa8a04, a2Raw[22] = 0x0a1defe91c0d011f, a2Raw[23] = 0x46aae047a44b61f6, a2Raw[24] = 0xc94077ac632afabe, a2Raw[25] = 0xa1dc883c84eda667, a2Raw[26] = 0x6369ef29c2091977, a2Raw[27] = 0x1c13c96aef234a05, a2Raw[28] = 0x2c82425cbcd2038e, a2Raw[29] = 0xd47648bd49019572, a2Raw[30] = 0xf653c3e35f519825, a2Raw[31] = 0xa237782207927d8;
    b2 = 1530;
    r2Raw[0] = 0x501deb18cabeaf91, r2Raw[1] = 0x77220f213b6999f2, r2Raw[2] = 0xda7bca7082465de8, r2Raw[3] = 0x04f25abbc8d28158, r2Raw[4] = 0x2090972f3480e387, r2Raw[5] = 0x1d922f5240655c8b, r2Raw[6] = 0x94f0f8d7d4660975, r2Raw[7] = 0x88dde0881e49f63d, r2Raw[8] = 0x2;

    uint2048 a3, r3;
    uint32 b3;
    uint64 *a3Raw = (uint64 *) &a3, *r3Raw = (uint64 *) &r3;

    a3Raw[0] = 0x73c027ba4b268a81, a3Raw[1] = 0xb089711c746f2e0a, a3Raw[2] = 0xa2aedadab776c1fd, a3Raw[3] = 0xd0872058eb538f1f, a3Raw[4] = 0x0cfb3cfc6ed7f7f7, a3Raw[5] = 0x8c4287650265bdbb, a3Raw[6] = 0xf3e4e63eb93c208c, a3Raw[7] = 0xe5b326aed882fe39, a3Raw[8] = 0x6ee1cc75204aba32, a3Raw[9] = 0xc3a5581439b40331, a3Raw[10] = 0x05782604e9d7463d, a3Raw[11] = 0xa6d09d3c7d4869b2, a3Raw[12] = 0x39e8af9887e5a32c, a3Raw[13] = 0xaebda2ab8177ca66, a3Raw[14] = 0x74a9b02842234799, a3Raw[15] = 0xb5b9706049ae9a61, a3Raw[16] = 0x9e14b00e71d55323, a3Raw[17] = 0xa093e16a8c3af6b4, a3Raw[18] = 0x8d5546a51925e934, a3Raw[19] = 0xbab95d601ff26c22, a3Raw[20] = 0xc6116ad73c7b5f40, a3Raw[21] = 0x6fcb911d02d13bdc, a3Raw[22] = 0x8f547db425b9f422, a3Raw[23] = 0xc7809a09d82ee8b4, a3Raw[24] = 0x5b036f08c2067a1d, a3Raw[25] = 0xf26ea4752b5820cb, a3Raw[26] = 0x6a16d11efb1c49ee, a3Raw[27] = 0x7563028405216202, a3Raw[28] = 0x6a454485bfcfb22b, a3Raw[29] = 0xe1394c003ccdceb9, a3Raw[30] = 0xc318a1c795cb11e8, a3Raw[31] = 0x30b4f2b6e609b3eb;
    b3 = 1424;
    r3Raw[0] = 0xe8b48f547db425b9, r3Raw[1] = 0x7a1dc7809a09d82e, r3Raw[2] = 0x20cb5b036f08c206, r3Raw[3] = 0x49eef26ea4752b58, r3Raw[4] = 0x62026a16d11efb1c, r3Raw[5] = 0xb22b756302840521, r3Raw[6] = 0xceb96a454485bfcf, r3Raw[7] = 0x11e8e1394c003ccd, r3Raw[8] = 0xb3ebc318a1c795cb, r3Raw[9] = 0x30b4f2b6e609;

    // ACT
    uint2048 c0 = a0 >> b0;
    uint2048 c1 = a1 >> b1;
    uint2048 c2 = a2 >> b2;
    uint2048 c3 = a3 >> b3;

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
    ASSERT_EQ(c2, r2);
    ASSERT_EQ(c3, r3);
}

TEST(BigIntegerArithmeticTests, BitShiftRight4096Bit) {
    // ARRANGE
    uint4096 a0, r0;
    uint32 b0;
    uint64 *a0Raw = (uint64 *) &a0, *r0Raw = (uint64 *) &r0;

    a0Raw[0] = 0xcc177b295d6ecc32, a0Raw[1] = 0xc6fb5f6134eb658c, a0Raw[2] = 0x54c4105ed2fe2b41, a0Raw[3] = 0x68977e2666dd9a11, a0Raw[4] = 0x7362902060687523, a0Raw[5] = 0x25c02d5f8e787318, a0Raw[6] = 0x8d299f0efaeab21e, a0Raw[7] = 0x1950422f088d88f9, a0Raw[8] = 0x09f5384aaa140392, a0Raw[9] = 0xd63554662b2a0c17, a0Raw[10] = 0x3378f7d13b810c80, a0Raw[11] = 0xb30dc0d6cfd55fa6, a0Raw[12] = 0xaa6aff3614c17d51, a0Raw[13] = 0x2fa0c8cbc17bacb5, a0Raw[14] = 0x58e2f01f8d10e20e, a0Raw[15] = 0xbc81e729b1d0bd07, a0Raw[16] = 0x02534bdb229d9167, a0Raw[17] = 0xee7b191ca29181d6, a0Raw[18] = 0x63e77faa99a0f015, a0Raw[19] = 0x079dadd559756598, a0Raw[20] = 0x359373c8fd24ed74, a0Raw[21] = 0x100e2b4d70c28e6c, a0Raw[22] = 0x1922349f7655ba00, a0Raw[23] = 0x81fe823758185fd1, a0Raw[24] = 0xa2ab8117b56b6eab, a0Raw[25] = 0x94fb3fd7db7e7784, a0Raw[26] = 0xffdb90fde23316dd, a0Raw[27] = 0x7aceee26770eab11, a0Raw[28] = 0xbd852182757f3732, a0Raw[29] = 0xd1932510f820e5a4, a0Raw[30] = 0x5c27febe057550b6, a0Raw[31] = 0x7422bfdd42f1ba13, a0Raw[32] = 0x7193c0fb32c811e7, a0Raw[33] = 0x2c669f720c891f7f, a0Raw[34] = 0x89a32a09ec56dd16, a0Raw[35] = 0xeb450dbbb29385d3, a0Raw[36] = 0xc50c0c7b743b1e9b, a0Raw[37] = 0xd7e2197e5cbf1444, a0Raw[38] = 0xb1a3ff78c46c1974, a0Raw[39] = 0xf5952567d7ddea73, a0Raw[40] = 0x2b65055bf82097ce, a0Raw[41] = 0x890dbcc9fa99387d, a0Raw[42] = 0xefff9277ec789041, a0Raw[43] = 0x63f39424d3b5550f, a0Raw[44] = 0x30b373a15cdf4d98, a0Raw[45] = 0xed062e1d2e3923ac, a0Raw[46] = 0x8027684ff8a1a70e, a0Raw[47] = 0xe1fbbcdb08a6641e, a0Raw[48] = 0x55d53a2eb52f0df9, a0Raw[49] = 0x36ed48a16b5fb06f, a0Raw[50] = 0x7582cda7dc5b2080, a0Raw[51] = 0xba0d31ccc13a1abc, a0Raw[52] = 0x95963a5a2928f4f6, a0Raw[53] = 0xd73b3f79f0611c9c, a0Raw[54] = 0xebe00e4737ac4226, a0Raw[55] = 0xc236647af18b7e06, a0Raw[56] = 0xcff3ac3e781cc1a9, a0Raw[57] = 0x9e28683521ac3dbb, a0Raw[58] = 0x4cc8e264b66faa88, a0Raw[59] = 0x4dc767416961ba1b, a0Raw[60] = 0x44f90af52e8d7d71, a0Raw[61] = 0x59c15ad344657160, a0Raw[62] = 0x83c73076c22bd7a8, a0Raw[63] = 0x97d655653cb68a65;
    b0 = 1723;
    r0Raw[0] = 0x59ddc4cee1d5623f, r0Raw[1] = 0xb0a4304eafe6e64f, r0Raw[2] = 0x3264a21f041cb497, r0Raw[3] = 0x84ffd7c0aeaa16da, r0Raw[4] = 0x8457fba85e37426b, r0Raw[5] = 0x32781f6659023cee, r0Raw[6] = 0x8cd3ee419123efee, r0Raw[7] = 0x3465413d8adba2c5, r0Raw[8] = 0x68a1b7765270ba71, r0Raw[9] = 0xa1818f6e8763d37d, r0Raw[10] = 0xfc432fcb97e28898, r0Raw[11] = 0x347fef188d832e9a, r0Raw[12] = 0xb2a4acfafbbd4e76, r0Raw[13] = 0x6ca0ab7f0412f9de, r0Raw[14] = 0x21b7993f53270fa5, r0Raw[15] = 0xfff24efd8f120831, r0Raw[16] = 0x7e72849a76aaa1fd, r0Raw[17] = 0x166e742b9be9b30c, r0Raw[18] = 0xa0c5c3a5c7247586, r0Raw[19] = 0x04ed09ff1434e1dd, r0Raw[20] = 0x3f779b6114cc83d0, r0Raw[21] = 0xbaa745d6a5e1bf3c, r0Raw[22] = 0xdda9142d6bf60dea, r0Raw[23] = 0xb059b4fb8b641006, r0Raw[24] = 0x41a639982743578e, r0Raw[25] = 0xb2c74b45251e9ed7, r0Raw[26] = 0xe767ef3e0c239392, r0Raw[27] = 0x7c01c8e6f58844da, r0Raw[28] = 0x46cc8f5e316fc0dd, r0Raw[29] = 0xfe7587cf03983538, r0Raw[30] = 0xc50d06a43587b779, r0Raw[31] = 0x991c4c96cdf55113, r0Raw[32] = 0xb8ece82d2c374369, r0Raw[33] = 0x9f215ea5d1afae29, r0Raw[34] = 0x382b5a688cae2c08, r0Raw[35] = 0x78e60ed8457af50b, r0Raw[36] = 0xfacaaca796d14cb0, r0Raw[37] = 0x12;

    uint4096 a1, r1;
    uint32 b1;
    uint64 *a1Raw = (uint64 *) &a1, *r1Raw = (uint64 *) &r1;

    a1Raw[0] = 0x7bd9c484a67b6380, a1Raw[1] = 0xd79a6451e2f34811, a1Raw[2] = 0xf23894e855dde1b8, a1Raw[3] = 0x8725172575396906, a1Raw[4] = 0x24545e7357a93c6f, a1Raw[5] = 0xfd6890708a2b3d21, a1Raw[6] = 0xb30c98457de4abe9, a1Raw[7] = 0xa682fad4df5b017e, a1Raw[8] = 0x254317fd775f5be9, a1Raw[9] = 0x3c5ebbf712420d17, a1Raw[10] = 0xacfa0a397162ee9e, a1Raw[11] = 0xd1256a86bbbef8b1, a1Raw[12] = 0x461814c807f732f1, a1Raw[13] = 0xd763ba5544c6c69e, a1Raw[14] = 0xfe0a3d24ed4107b0, a1Raw[15] = 0xecccf16d126eac3f, a1Raw[16] = 0x594c2f6b407ff715, a1Raw[17] = 0x9b0c9cd669128afe, a1Raw[18] = 0x9f399f729b34e09b, a1Raw[19] = 0x60befbc68f239779, a1Raw[20] = 0x5f9278a871c0f204, a1Raw[21] = 0xaea72180a85e45d6, a1Raw[22] = 0xfb0dfbfe973680bd, a1Raw[23] = 0x8764f4b1549f1471, a1Raw[24] = 0xa880b9414acbc1b6, a1Raw[25] = 0x359e6a261c027f92, a1Raw[26] = 0xef1243e03fb40d7b, a1Raw[27] = 0x8e7c6c8ee9b23aa6, a1Raw[28] = 0x993b704653ebc1ed, a1Raw[29] = 0x436edc3dd3bc57ac, a1Raw[30] = 0x0d91e74340180b30, a1Raw[31] = 0x8c86a4112959c8b3, a1Raw[32] = 0xe985149f1c4639cc, a1Raw[33] = 0x9a1027e3a421bd71, a1Raw[34] = 0x8a21add59f7f3432, a1Raw[35] = 0xa843443e689b1d51, a1Raw[36] = 0x34f94acb84942f6d, a1Raw[37] = 0xc65ad5c21cf421ad, a1Raw[38] = 0x099379fb26cc56af, a1Raw[39] = 0xa9d363be5f86bdb8, a1Raw[40] = 0xe48211d2258f6dc7, a1Raw[41] = 0xfaa6d783fe11449a, a1Raw[42] = 0x71526c317d34d0be, a1Raw[43] = 0xc6c8050fdee122bd, a1Raw[44] = 0x98c24cfcae1d3d79, a1Raw[45] = 0x53b80ebca6586950, a1Raw[46] = 0xb85501ecd48b3a01, a1Raw[47] = 0x5391ed37fddee3aa, a1Raw[48] = 0x31139066dddfdef8, a1Raw[49] = 0x7f6f18711e4d4e6b, a1Raw[50] = 0x13b288d5745643bd, a1Raw[51] = 0xa0d81bcc90b4cbd2, a1Raw[52] = 0xf6a8934ae404dd6c, a1Raw[53] = 0x74bf10c370b67d46, a1Raw[54] = 0xb3c318fdb3c083b9, a1Raw[55] = 0xe5609c8ed204d27c, a1Raw[56] = 0xcf640aecdea1a5e4, a1Raw[57] = 0xa123f3c222c78fe2, a1Raw[58] = 0xa7aec3f64cf29843, a1Raw[59] = 0x947661bd37672612, a1Raw[60] = 0x46d7a2b83b4fe7b1, a1Raw[61] = 0xedd2407174b19daa, a1Raw[62] = 0xa8334b4d26fb3cef, a1Raw[63] = 0xac12ca1ce9773fba;
    b1 = 2686;
    r1Raw[0] = 0xc549b0c5f4d342fb, r1Raw[1] = 0x1b20143f7b848af5, r1Raw[2] = 0x630933f2b874f5e7, r1Raw[3] = 0x4ee03af29961a542, r1Raw[4] = 0xe15407b3522ce805, r1Raw[5] = 0x4e47b4dff77b8eaa, r1Raw[6] = 0xc44e419b777f7be1, r1Raw[7] = 0xfdbc61c4793539ac, r1Raw[8] = 0x4eca2355d1590ef5, r1Raw[9] = 0x83606f3242d32f48, r1Raw[10] = 0xdaa24d2b901375b2, r1Raw[11] = 0xd2fc430dc2d9f51b, r1Raw[12] = 0xcf0c63f6cf020ee5, r1Raw[13] = 0x9582723b481349f2, r1Raw[14] = 0x3d902bb37a869793, r1Raw[15] = 0x848fcf088b1e3f8b, r1Raw[16] = 0x9ebb0fd933ca610e, r1Raw[17] = 0x51d986f4dd9c984a, r1Raw[18] = 0x1b5e8ae0ed3f9ec6, r1Raw[19] = 0xb74901c5d2c676a9, r1Raw[20] = 0xa0cd2d349becf3bf, r1Raw[21] = 0xb04b2873a5dcfeea, r1Raw[22] = 0x2;

    uint4096 a2, r2;
    uint32 b2;
    uint64 *a2Raw = (uint64 *) &a2, *r2Raw = (uint64 *) &r2;

    a2Raw[0] = 0x005830a4867df73e, a2Raw[1] = 0x51d5a8ee80e9a3de, a2Raw[2] = 0xc639d17011aa5ed3, a2Raw[3] = 0x5d6d07dc6fb3582c, a2Raw[4] = 0x38aa250fae66ac2b, a2Raw[5] = 0x904d0e23d231b543, a2Raw[6] = 0xf48ab918fb8d888b, a2Raw[7] = 0x5e0487413d2fdcf4, a2Raw[8] = 0x84c4945f6d5bbab1, a2Raw[9] = 0x3e3b60294e90abea, a2Raw[10] = 0xb44d2b698295dae8, a2Raw[11] = 0x3d91c71da6b5cb70, a2Raw[12] = 0x9268d05207322def, a2Raw[13] = 0x67c7e0cb0ecd9de5, a2Raw[14] = 0x9cb2b67704669d7a, a2Raw[15] = 0x75a0585bf6ca62d5, a2Raw[16] = 0x2c16c3c1b0798348, a2Raw[17] = 0xef531e938ff355df, a2Raw[18] = 0x23c54b820cd2ed89, a2Raw[19] = 0xe8b3132da9e9da60, a2Raw[20] = 0xe54d200a4f53344a, a2Raw[21] = 0x19ddebde3ab82e51, a2Raw[22] = 0xbfd6bf29ed06563d, a2Raw[23] = 0x60018b56ed72418f, a2Raw[24] = 0xde845d5331c19dbe, a2Raw[25] = 0x4aa0313a5b9b02d7, a2Raw[26] = 0x7afcd0c5f660f472, a2Raw[27] = 0x3d48bbe7e338be60, a2Raw[28] = 0xdf5eaf9a131bd455, a2Raw[29] = 0xa07b24d7e05e6de5, a2Raw[30] = 0x6b040ece1be45cb7, a2Raw[31] = 0x1d4e05b4e28e42dd, a2Raw[32] = 0xd2eddc516ed5cc8d, a2Raw[33] = 0x87595cc4f7fa8f8b, a2Raw[34] = 0x84075300cfddfe8b, a2Raw[35] = 0x87c95b04f9e2dae3, a2Raw[36] = 0x02d5275e8268e5ce, a2Raw[37] = 0x4529a49d2449a5dc, a2Raw[38] = 0x99daae4319e992fe, a2Raw[39] = 0x3148bfd3ac196363, a2Raw[40] = 0x02cb814a6166287f, a2Raw[41] = 0xee7365bcca0888ca, a2Raw[42] = 0xa026a58c9f50ed6b, a2Raw[43] = 0x4853edb0a5cc7df9, a2Raw[44] = 0x6042aa584f7abfa7, a2Raw[45] = 0x422344ad75df99bc, a2Raw[46] = 0x6d62790e99aefcec, a2Raw[47] = 0x6be1285a106a7da1, a2Raw[48] = 0x6cd3f8865ff6113a, a2Raw[49] = 0x91c6fbeef3475736, a2Raw[50] = 0x11f15489b47e6ef6, a2Raw[51] = 0xce8dd23eca73163e, a2Raw[52] = 0x4447992ee25d565d, a2Raw[53] = 0x43368f2daa0de399, a2Raw[54] = 0x74be933859a5b9db, a2Raw[55] = 0xd1078745e5783b41, a2Raw[56] = 0x44d8836c41bf0e40, a2Raw[57] = 0x3027873b19a808d2, a2Raw[58] = 0x58eaeaeba0afd20a, a2Raw[59] = 0x8218c51d0dc29642, a2Raw[60] = 0x3ebc1c7bedad60b2, a2Raw[61] = 0xd0dd3ee53c2e3d19, a2Raw[62] = 0x1133a2bbb14baa6c, a2Raw[63] = 0x66d49a2122cef613;
    b2 = 903;
    r2Raw[0] = 0xab39656cee08cd3a, r2Raw[1] = 0x90eb40b0b7ed94c5, r2Raw[2] = 0xbe582d878360f306, r2Raw[3] = 0x13dea63d271fe6ab, r2Raw[4] = 0xc0478a970419a5db, r2Raw[5] = 0x95d166265b53d3b4, r2Raw[6] = 0xa3ca9a40149ea668, r2Raw[7] = 0x7a33bbd7bc75705c, r2Raw[8] = 0x1f7fad7e53da0cac, r2Raw[9] = 0x7cc00316addae483, r2Raw[10] = 0xafbd08baa663833b, r2Raw[11] = 0xe495406274b73605, r2Raw[12] = 0xc0f5f9a18becc1e8, r2Raw[13] = 0xaa7a9177cfc6717c, r2Raw[14] = 0xcbbebd5f342637a8, r2Raw[15] = 0x6f40f649afc0bcdb, r2Raw[16] = 0xbad6081d9c37c8b9, r2Raw[17] = 0x1a3a9c0b69c51c85, r2Raw[18] = 0x17a5dbb8a2ddab99, r2Raw[19] = 0x170eb2b989eff51f, r2Raw[20] = 0xc7080ea6019fbbfd, r2Raw[21] = 0x9d0f92b609f3c5b5, r2Raw[22] = 0xb805aa4ebd04d1cb, r2Raw[23] = 0xfc8a53493a48934b, r2Raw[24] = 0xc733b55c8633d325, r2Raw[25] = 0xfe62917fa75832c6, r2Raw[26] = 0x9405970294c2cc50, r2Raw[27] = 0xd7dce6cb79941111, r2Raw[28] = 0xf3404d4b193ea1da, r2Raw[29] = 0x4e90a7db614b98fb, r2Raw[30] = 0x78c08554b09ef57f, r2Raw[31] = 0xd88446895aebbf33, r2Raw[32] = 0x42dac4f21d335df9, r2Raw[33] = 0x74d7c250b420d4fb, r2Raw[34] = 0x6cd9a7f10cbfec22, r2Raw[35] = 0xed238df7dde68eae, r2Raw[36] = 0x7c23e2a91368fcdd, r2Raw[37] = 0xbb9d1ba47d94e62c, r2Raw[38] = 0x32888f325dc4baac, r2Raw[39] = 0xb6866d1e5b541bc7, r2Raw[40] = 0x82e97d2670b34b73, r2Raw[41] = 0x81a20f0e8bcaf076, r2Raw[42] = 0xa489b106d8837e1c, r2Raw[43] = 0x14604f0e76335011, r2Raw[44] = 0x84b1d5d5d7415fa4, r2Raw[45] = 0x6504318a3a1b852c, r2Raw[46] = 0x327d7838f7db5ac1, r2Raw[47] = 0xd9a1ba7dca785c7a, r2Raw[48] = 0x2622674577629754, r2Raw[49] = 0xcda93442459dec;

    uint4096 a3, r3;
    uint32 b3;
    uint64 *a3Raw = (uint64 *) &a3, *r3Raw = (uint64 *) &r3;

    a3Raw[0] = 0x06816485800ba39f, a3Raw[1] = 0x92c4e57df47c503b, a3Raw[2] = 0x71699afba65b08fd, a3Raw[3] = 0xa07cd6fbc3391d76, a3Raw[4] = 0xbb8838541018a8fd, a3Raw[5] = 0x603ba16a376fe917, a3Raw[6] = 0xb286f154b06b267a, a3Raw[7] = 0xc5fdadbde7802c79, a3Raw[8] = 0x599200cd97867481, a3Raw[9] = 0xa76f4201b121ebcf, a3Raw[10] = 0x6924d819237578b0, a3Raw[11] = 0x15e66cacfda46f26, a3Raw[12] = 0x837412711b250863, a3Raw[13] = 0xf68221f59962a583, a3Raw[14] = 0xbe3dbd23074c4d9e, a3Raw[15] = 0xeea31dd913833ee3, a3Raw[16] = 0x579e47f03e51e659, a3Raw[17] = 0xd4581f3615b4fbcd, a3Raw[18] = 0xb9ca474a1415f205, a3Raw[19] = 0x0bc2fa4f5d3378ab, a3Raw[20] = 0x389ffc8401f3dc8d, a3Raw[21] = 0x1952e8cfb39c0a12, a3Raw[22] = 0xe3ebeba379b2d247, a3Raw[23] = 0x38418b247a0555d0, a3Raw[24] = 0xdd79ca1e0606ba26, a3Raw[25] = 0x7bb2da52df9d10b6, a3Raw[26] = 0x052ddcaac00186c3, a3Raw[27] = 0xd4d205dfc9a8edc3, a3Raw[28] = 0x8810e0e6c7519e4d, a3Raw[29] = 0x36550e4b90c67654, a3Raw[30] = 0x717ca1c26e17d597, a3Raw[31] = 0xe9d5f580bf34d948, a3Raw[32] = 0x9e32aac366d25af6, a3Raw[33] = 0x8c74d76860dea7ff, a3Raw[34] = 0x514f6fa42a18c926, a3Raw[35] = 0x9cb6d32e8c560c30, a3Raw[36] = 0x8b94cabe130d088e, a3Raw[37] = 0x7a395cc609352fce, a3Raw[38] = 0xc871cbd597eb846f, a3Raw[39] = 0xaa47abdc099fbb0d, a3Raw[40] = 0xce0c277a4355c744, a3Raw[41] = 0x7e0da7dd85df0933, a3Raw[42] = 0x9a9e12ca2ab300e6, a3Raw[43] = 0xcf54127c846317bb, a3Raw[44] = 0x87957cf081148570, a3Raw[45] = 0x0711e0a95ead6c2d, a3Raw[46] = 0xbeeaa2b140774b0d, a3Raw[47] = 0x4186d35aabf572fb, a3Raw[48] = 0x8d82b898367dbc2a, a3Raw[49] = 0xd2cb3d88a64e0f58, a3Raw[50] = 0x66d9d0a96453c4b5, a3Raw[51] = 0xd6deb7059dd2276d, a3Raw[52] = 0x7a67f317f96d282e, a3Raw[53] = 0x0728ea526cb23899, a3Raw[54] = 0x2f486d701936ffdd, a3Raw[55] = 0x4a9d31abc80f26c4, a3Raw[56] = 0x483b2a9d2d14a38d, a3Raw[57] = 0xe46903e1ba47c8fe, a3Raw[58] = 0x29666c3d05201633, a3Raw[59] = 0x7634a1ec8f2ce251, a3Raw[60] = 0x608121b45b95ee53, a3Raw[61] = 0xe935bfce82d6126b, a3Raw[62] = 0x6bf7f5e92afff17b, a3Raw[63] = 0x4b7a1ab5c9044617;
    b3 = 495;
    r3Raw[0] = 0x019b2f0ce9038bfb, r3Raw[1] = 0x84036243d79eb324, r3Raw[2] = 0xb03246eaf1614ede, r3Raw[3] = 0xd959fb48de4cd249, r3Raw[4] = 0x24e2364a10c62bcc, r3Raw[5] = 0x43eb32c54b0706e8, r3Raw[6] = 0x7a460e989b3ded04, r3Raw[7] = 0x3bb227067dc77c7b, r3Raw[8] = 0x8fe07ca3ccb3dd46, r3Raw[9] = 0x3e6c2b69f79aaf3c, r3Raw[10] = 0x8e94282be40ba8b0, r3Raw[11] = 0xf49eba66f1577394, r3Raw[12] = 0xf90803e7b91a1785, r3Raw[13] = 0xd19f67381424713f, r3Raw[14] = 0xd746f365a48e32a5, r3Raw[15] = 0x1648f40aaba1c7d7, r3Raw[16] = 0x943c0c0d744c7083, r3Raw[17] = 0xb4a5bf3a216dbaf3, r3Raw[18] = 0xb95580030d86f765, r3Raw[19] = 0x0bbf9351db860a5b, r3Raw[20] = 0xc1cd8ea33c9ba9a4, r3Raw[21] = 0x1c97218ceca91021, r3Raw[22] = 0x4384dc2fab2e6caa, r3Raw[23] = 0xeb017e69b290e2f9, r3Raw[24] = 0x5586cda4b5edd3ab, r3Raw[25] = 0xaed0c1bd4fff3c65, r3Raw[26] = 0xdf485431924d18e9, r3Raw[27] = 0xa65d18ac1860a29e, r3Raw[28] = 0x957c261a111d396d, r3Raw[29] = 0xb98c126a5f9d1729, r3Raw[30] = 0x97ab2fd708def472, r3Raw[31] = 0x57b8133f761b90e3, r3Raw[32] = 0x4ef486ab8e89548f, r3Raw[33] = 0x4fbb0bbe12679c18, r3Raw[34] = 0x2594556601ccfc1b, r3Raw[35] = 0x24f908c62f77353c, r3Raw[36] = 0xf9e102290ae19ea8, r3Raw[37] = 0xc152bd5ad85b0f2a, r3Raw[38] = 0x456280ee961a0e23, r3Raw[39] = 0xa6b557eae5f77dd5, r3Raw[40] = 0x71306cfb7854830d, r3Raw[41] = 0x7b114c9c1eb11b05, r3Raw[42] = 0xa152c8a7896ba596, r3Raw[43] = 0x6e0b3ba44edacdb3, r3Raw[44] = 0xe62ff2da505dadbd, r3Raw[45] = 0xd4a4d9647132f4cf, r3Raw[46] = 0xdae0326dffba0e51, r3Raw[47] = 0x6357901e4d885e90, r3Raw[48] = 0x553a5a29471a953a, r3Raw[49] = 0x07c3748f91fc9076, r3Raw[50] = 0xd87a0a402c67c8d2, r3Raw[51] = 0x43d91e59c4a252cc, r3Raw[52] = 0x4368b72bdca6ec69, r3Raw[53] = 0x7f9d05ac24d6c102, r3Raw[54] = 0xebd255ffe2f7d26b, r3Raw[55] = 0x356b92088c2ed7ef, r3Raw[56] = 0x96f4;

    // ACT
    uint4096 c0 = a0 >> b0;
    uint4096 c1 = a1 >> b1;
    uint4096 c2 = a2 >> b2;
    uint4096 c3 = a3 >> b3;

    // ASSERT
    ASSERT_EQ(c0, r0);
    ASSERT_EQ(c1, r1);
    ASSERT_EQ(c2, r2);
    ASSERT_EQ(c3, r3);
}
