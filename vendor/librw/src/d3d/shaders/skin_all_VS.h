#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 9.29.952.3111
//
//   fxc /nologo /T vs_2_0 /DDIRECTIONALS /DPOINTLIGHTS /DSPOTLIGHTS /Fh
//    skin_all_VS.h skin_VS.hlsl
//
//
// Parameters:
//
//   float4 ambientLight;
//   float4x3 boneMatrices[64];
//   float4x4 combinedMat;
//   int4 firstLight;
//   float4 fogData;
//   
//   struct
//   {
//       float4 color;
//       float4 position;
//       float4 direction;
//
//   } lights[8];
//   
//   float4 matCol;
//   float3x3 normalMat;
//   int numDirLights;
//   int numPointLights;
//   int numSpotLights;
//   float4 surfProps;
//   float4x4 worldMat;
//
//
// Registers:
//
//   Name           Reg   Size
//   -------------- ----- ----
//   numDirLights   i0       1
//   numPointLights i1       1
//   numSpotLights  i2       1
//   combinedMat    c0       4
//   worldMat       c4       4
//   normalMat      c8       3
//   matCol         c12      1
//   surfProps      c13      1
//   fogData        c14      1
//   ambientLight   c15      1
//   firstLight     c16      1
//   lights         c17     24
//   boneMatrices   c41    192
//

    vs_2_0
    def c11, 3, 0, 1, 0
    dcl_position v0
    dcl_normal v1
    dcl_texcoord v2
    dcl_color v3
    dcl_blendweight v4
    dcl_blendindices v5
    mul r0, v5, c11.x
    mova a0.x, r0.x
    dp3 r1.z, v1, c43[a0.x]
    dp4 r2.x, v0, c41[a0.x]
    dp4 r2.y, v0, c42[a0.x]
    dp4 r2.z, v0, c43[a0.x]
    dp3 r1.x, v1, c41[a0.x]
    dp3 r1.y, v1, c42[a0.x]
    mova a0.x, r0.y
    dp3 r3.z, v1, c43[a0.x]
    dp4 r4.x, v0, c41[a0.x]
    dp4 r4.y, v0, c42[a0.x]
    dp4 r4.z, v0, c43[a0.x]
    mul r4.xyz, r4, v4.y
    mad r2.xyz, r2, v4.x, r4
    dp3 r3.x, v1, c41[a0.x]
    dp3 r3.y, v1, c42[a0.x]
    mul r3.xyz, r3, v4.y
    mad r1.xyz, r1, v4.x, r3
    mova a0.x, r0.z
    dp3 r0.z, v1, c43[a0.x]
    dp4 r3.x, v0, c41[a0.x]
    dp4 r3.y, v0, c42[a0.x]
    dp4 r3.z, v0, c43[a0.x]
    mad r2.xyz, r3, v4.z, r2
    dp3 r0.x, v1, c41[a0.x]
    dp3 r0.y, v1, c42[a0.x]
    mad r0.xyz, r0, v4.z, r1
    mova a0.x, r0.w
    dp3 r1.z, v1, c43[a0.x]
    dp4 r3.x, v0, c41[a0.x]
    dp4 r3.y, v0, c42[a0.x]
    dp4 r3.z, v0, c43[a0.x]
    mad r2.xyz, r3, v4.w, r2
    dp3 r1.x, v1, c41[a0.x]
    dp3 r1.y, v1, c42[a0.x]
    mad r0.xyz, r1, v4.w, r0
    mul r1.xyz, r2.y, c5
    mad r1.xyz, c4, r2.x, r1
    mad r1.xyz, c6, r2.z, r1
    add r1.xyz, r1, c7
    mul r3.xyz, r0.y, c9
    mad r0.xyw, c8.xyzz, r0.x, r3.xyzz
    mad r0.xyz, c10, r0.z, r0.xyww
    mov r3.x, c13.x
    mad r3.xyz, c15, r3.x, v3
    mov r4.xyz, r3
    mov r0.w, c11.y
    rep i0
      add r1.w, r0.w, c16.x
      mul r1.w, r1.w, c11.x
      mova a0.x, r1.w
      dp3 r1.w, r0, -c19[a0.x]
      max r1.w, r1.w, c11.y
      mul r5.xyz, r1.w, c17[a0.x]
      mad r4.xyz, r5, c13.z, r4
      add r0.w, r0.w, c11.z
    endrep
    mov r3.xyz, r4
    mov r0.w, c11.y
    rep i1
      add r1.w, r0.w, c16.y
      mul r1.w, r1.w, c11.x
      mova a0.x, r1.w
      add r5.xyz, r1, -c18[a0.x]
      dp3 r1.w, r5, r5
      rsq r1.w, r1.w
      mul r5.xyz, r1.w, r5
      dp3 r2.w, r0, -r5
      max r2.w, r2.w, c11.y
      mul r5.xyz, r2.w, c17[a0.x]
      rcp r1.w, r1.w
      rcp r2.w, c17[a0.x].w
      mad r1.w, r1.w, -r2.w, c11.z
      max r1.w, r1.w, c11.y
      mul r5.xyz, r1.w, r5
      mad r3.xyz, r5, c13.z, r3
      add r0.w, r0.w, c11.z
    endrep
    mov r4.xyz, r3
    mov r0.w, c11.y
    rep i2
      add r1.w, r0.w, c16.z
      mul r1.w, r1.w, c11.x
      mova a0.x, r1.w
      add r5.xyz, r1, -c18[a0.x]
      dp3 r1.w, r5, r5
      rsq r1.w, r1.w
      mul r5.xyz, r1.w, r5
      dp3 r2.w, r0, -r5
      dp3 r3.w, r5, c19[a0.x]
      max r2.w, r2.w, c11.y
      add r3.w, r3.w, c18[a0.x].w
      mov r5.z, c11.z
      add r5.x, r5.z, c18[a0.x].w
      rcp r5.x, r5.x
      mul r3.w, r3.w, r5.x
      slt r5.x, r3.w, c11.y
      mad r2.w, r5.x, -r2.w, r2.w
      max r3.w, r3.w, c19[a0.x].w
      mul r2.w, r2.w, r3.w
      mul r5.xyz, r2.w, c17[a0.x]
      rcp r1.w, r1.w
      rcp r2.w, c17[a0.x].w
      mad r1.w, r1.w, -r2.w, c11.z
      max r1.w, r1.w, c11.y
      mul r5.xyz, r1.w, r5
      mad r4.xyz, r5, c13.z, r4
      add r0.w, r0.w, c11.z
    endrep
    mov r4.w, v3.w
    max r0, r4, c11.y
    min r0, r0, c11.z
    mul oD0, r0, c12
    mul r0, r2.y, c1
    mad r0, c0, r2.x, r0
    mad r0, c2, r2.z, r0
    add r0, r0, c3
    mov oPos, r0
    add r0.x, r0.w, -c14.y
    mul r0.x, r0.x, c14.z
    max r0.x, r0.x, c14.w
    min oT0.z, r0.x, c11.z
    mov oT0.xy, v2

// approximately 133 instruction slots used
#endif

const BYTE g_vs20_main[] =
{
      0,   2, 254, 255, 254, 255, 
    171,   0,  67,  84,  65,  66, 
     28,   0,   0,   0, 119,   2, 
      0,   0,   0,   2, 254, 255, 
     13,   0,   0,   0,  28,   0, 
      0,   0,   0,   1,   0,   0, 
    112,   2,   0,   0,  32,   1, 
      0,   0,   2,   0,  15,   0, 
      1,   0,  62,   0,  48,   1, 
      0,   0,   0,   0,   0,   0, 
     64,   1,   0,   0,   2,   0, 
     41,   0, 192,   0, 166,   0, 
     80,   1,   0,   0,   0,   0, 
      0,   0,  96,   1,   0,   0, 
      2,   0,   0,   0,   4,   0, 
      2,   0, 108,   1,   0,   0, 
      0,   0,   0,   0, 124,   1, 
      0,   0,   2,   0,  16,   0, 
      1,   0,  66,   0, 136,   1, 
      0,   0,   0,   0,   0,   0, 
    152,   1,   0,   0,   2,   0, 
     14,   0,   1,   0,  58,   0, 
     48,   1,   0,   0,   0,   0, 
      0,   0, 160,   1,   0,   0, 
      2,   0,  17,   0,  24,   0, 
     70,   0, 236,   1,   0,   0, 
      0,   0,   0,   0, 252,   1, 
      0,   0,   2,   0,  12,   0, 
      1,   0,  50,   0,  48,   1, 
      0,   0,   0,   0,   0,   0, 
      3,   2,   0,   0,   2,   0, 
      8,   0,   3,   0,  34,   0, 
     16,   2,   0,   0,   0,   0, 
      0,   0,  32,   2,   0,   0, 
      1,   0,   0,   0,   1,   0, 
      2,   0,  48,   2,   0,   0, 
      0,   0,   0,   0,  64,   2, 
      0,   0,   1,   0,   1,   0, 
      1,   0,   6,   0,  48,   2, 
      0,   0,   0,   0,   0,   0, 
     79,   2,   0,   0,   1,   0, 
      2,   0,   1,   0,  10,   0, 
     48,   2,   0,   0,   0,   0, 
      0,   0,  93,   2,   0,   0, 
      2,   0,  13,   0,   1,   0, 
     54,   0,  48,   1,   0,   0, 
      0,   0,   0,   0, 103,   2, 
      0,   0,   2,   0,   4,   0, 
      4,   0,  18,   0, 108,   1, 
      0,   0,   0,   0,   0,   0, 
     97, 109,  98, 105, 101, 110, 
    116,  76, 105, 103, 104, 116, 
      0, 171, 171, 171,   1,   0, 
      3,   0,   1,   0,   4,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,  98, 111, 110, 101, 
     77,  97, 116, 114, 105,  99, 
    101, 115,   0, 171, 171, 171, 
      3,   0,   3,   0,   4,   0, 
      3,   0,  64,   0,   0,   0, 
      0,   0,   0,   0,  99, 111, 
    109,  98, 105, 110, 101, 100, 
     77,  97, 116,   0,   3,   0, 
      3,   0,   4,   0,   4,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0, 102, 105, 114, 115, 
    116,  76, 105, 103, 104, 116, 
      0, 171,   1,   0,   2,   0, 
      1,   0,   4,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
    102, 111, 103,  68,  97, 116, 
     97,   0, 108, 105, 103, 104, 
    116, 115,   0,  99, 111, 108, 
    111, 114,   0, 171, 171, 171, 
      1,   0,   3,   0,   1,   0, 
      4,   0,   1,   0,   0,   0, 
      0,   0,   0,   0, 112, 111, 
    115, 105, 116, 105, 111, 110, 
      0, 100, 105, 114, 101,  99, 
    116, 105, 111, 110,   0, 171, 
    167,   1,   0,   0, 176,   1, 
      0,   0, 192,   1,   0,   0, 
    176,   1,   0,   0, 201,   1, 
      0,   0, 176,   1,   0,   0, 
      5,   0,   0,   0,   1,   0, 
     12,   0,   8,   0,   3,   0, 
    212,   1,   0,   0, 109,  97, 
    116,  67, 111, 108,   0, 110, 
    111, 114, 109,  97, 108,  77, 
     97, 116,   0, 171, 171, 171, 
      3,   0,   3,   0,   3,   0, 
      3,   0,   1,   0,   0,   0, 
      0,   0,   0,   0, 110, 117, 
    109,  68, 105, 114,  76, 105, 
    103, 104, 116, 115,   0, 171, 
    171, 171,   0,   0,   2,   0, 
      1,   0,   1,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
    110, 117, 109,  80, 111, 105, 
    110, 116,  76, 105, 103, 104, 
    116, 115,   0, 110, 117, 109, 
     83, 112, 111, 116,  76, 105, 
    103, 104, 116, 115,   0, 115, 
    117, 114, 102,  80, 114, 111, 
    112, 115,   0, 119, 111, 114, 
    108, 100,  77,  97, 116,   0, 
    118, 115,  95,  50,  95,  48, 
      0,  77, 105,  99, 114, 111, 
    115, 111, 102, 116,  32,  40, 
     82,  41,  32,  72,  76,  83, 
     76,  32,  83, 104,  97, 100, 
    101, 114,  32,  67, 111, 109, 
    112, 105, 108, 101, 114,  32, 
     57,  46,  50,  57,  46,  57, 
     53,  50,  46,  51,  49,  49, 
     49,   0,  81,   0,   0,   5, 
     11,   0,  15, 160,   0,   0, 
     64,  64,   0,   0,   0,   0, 
      0,   0, 128,  63,   0,   0, 
      0,   0,  31,   0,   0,   2, 
      0,   0,   0, 128,   0,   0, 
     15, 144,  31,   0,   0,   2, 
      3,   0,   0, 128,   1,   0, 
     15, 144,  31,   0,   0,   2, 
      5,   0,   0, 128,   2,   0, 
     15, 144,  31,   0,   0,   2, 
     10,   0,   0, 128,   3,   0, 
     15, 144,  31,   0,   0,   2, 
      1,   0,   0, 128,   4,   0, 
     15, 144,  31,   0,   0,   2, 
      2,   0,   0, 128,   5,   0, 
     15, 144,   5,   0,   0,   3, 
      0,   0,  15, 128,   5,   0, 
    228, 144,  11,   0,   0, 160, 
     46,   0,   0,   2,   0,   0, 
      1, 176,   0,   0,   0, 128, 
      8,   0,   0,   4,   1,   0, 
      4, 128,   1,   0, 228, 144, 
     43,  32, 228, 160,   0,   0, 
      0, 176,   9,   0,   0,   4, 
      2,   0,   1, 128,   0,   0, 
    228, 144,  41,  32, 228, 160, 
      0,   0,   0, 176,   9,   0, 
      0,   4,   2,   0,   2, 128, 
      0,   0, 228, 144,  42,  32, 
    228, 160,   0,   0,   0, 176, 
      9,   0,   0,   4,   2,   0, 
      4, 128,   0,   0, 228, 144, 
     43,  32, 228, 160,   0,   0, 
      0, 176,   8,   0,   0,   4, 
      1,   0,   1, 128,   1,   0, 
    228, 144,  41,  32, 228, 160, 
      0,   0,   0, 176,   8,   0, 
      0,   4,   1,   0,   2, 128, 
      1,   0, 228, 144,  42,  32, 
    228, 160,   0,   0,   0, 176, 
     46,   0,   0,   2,   0,   0, 
      1, 176,   0,   0,  85, 128, 
      8,   0,   0,   4,   3,   0, 
      4, 128,   1,   0, 228, 144, 
     43,  32, 228, 160,   0,   0, 
      0, 176,   9,   0,   0,   4, 
      4,   0,   1, 128,   0,   0, 
    228, 144,  41,  32, 228, 160, 
      0,   0,   0, 176,   9,   0, 
      0,   4,   4,   0,   2, 128, 
      0,   0, 228, 144,  42,  32, 
    228, 160,   0,   0,   0, 176, 
      9,   0,   0,   4,   4,   0, 
      4, 128,   0,   0, 228, 144, 
     43,  32, 228, 160,   0,   0, 
      0, 176,   5,   0,   0,   3, 
      4,   0,   7, 128,   4,   0, 
    228, 128,   4,   0,  85, 144, 
      4,   0,   0,   4,   2,   0, 
      7, 128,   2,   0, 228, 128, 
      4,   0,   0, 144,   4,   0, 
    228, 128,   8,   0,   0,   4, 
      3,   0,   1, 128,   1,   0, 
    228, 144,  41,  32, 228, 160, 
      0,   0,   0, 176,   8,   0, 
      0,   4,   3,   0,   2, 128, 
      1,   0, 228, 144,  42,  32, 
    228, 160,   0,   0,   0, 176, 
      5,   0,   0,   3,   3,   0, 
      7, 128,   3,   0, 228, 128, 
      4,   0,  85, 144,   4,   0, 
      0,   4,   1,   0,   7, 128, 
      1,   0, 228, 128,   4,   0, 
      0, 144,   3,   0, 228, 128, 
     46,   0,   0,   2,   0,   0, 
      1, 176,   0,   0, 170, 128, 
      8,   0,   0,   4,   0,   0, 
      4, 128,   1,   0, 228, 144, 
     43,  32, 228, 160,   0,   0, 
      0, 176,   9,   0,   0,   4, 
      3,   0,   1, 128,   0,   0, 
    228, 144,  41,  32, 228, 160, 
      0,   0,   0, 176,   9,   0, 
      0,   4,   3,   0,   2, 128, 
      0,   0, 228, 144,  42,  32, 
    228, 160,   0,   0,   0, 176, 
      9,   0,   0,   4,   3,   0, 
      4, 128,   0,   0, 228, 144, 
     43,  32, 228, 160,   0,   0, 
      0, 176,   4,   0,   0,   4, 
      2,   0,   7, 128,   3,   0, 
    228, 128,   4,   0, 170, 144, 
      2,   0, 228, 128,   8,   0, 
      0,   4,   0,   0,   1, 128, 
      1,   0, 228, 144,  41,  32, 
    228, 160,   0,   0,   0, 176, 
      8,   0,   0,   4,   0,   0, 
      2, 128,   1,   0, 228, 144, 
     42,  32, 228, 160,   0,   0, 
      0, 176,   4,   0,   0,   4, 
      0,   0,   7, 128,   0,   0, 
    228, 128,   4,   0, 170, 144, 
      1,   0, 228, 128,  46,   0, 
      0,   2,   0,   0,   1, 176, 
      0,   0, 255, 128,   8,   0, 
      0,   4,   1,   0,   4, 128, 
      1,   0, 228, 144,  43,  32, 
    228, 160,   0,   0,   0, 176, 
      9,   0,   0,   4,   3,   0, 
      1, 128,   0,   0, 228, 144, 
     41,  32, 228, 160,   0,   0, 
      0, 176,   9,   0,   0,   4, 
      3,   0,   2, 128,   0,   0, 
    228, 144,  42,  32, 228, 160, 
      0,   0,   0, 176,   9,   0, 
      0,   4,   3,   0,   4, 128, 
      0,   0, 228, 144,  43,  32, 
    228, 160,   0,   0,   0, 176, 
      4,   0,   0,   4,   2,   0, 
      7, 128,   3,   0, 228, 128, 
      4,   0, 255, 144,   2,   0, 
    228, 128,   8,   0,   0,   4, 
      1,   0,   1, 128,   1,   0, 
    228, 144,  41,  32, 228, 160, 
      0,   0,   0, 176,   8,   0, 
      0,   4,   1,   0,   2, 128, 
      1,   0, 228, 144,  42,  32, 
    228, 160,   0,   0,   0, 176, 
      4,   0,   0,   4,   0,   0, 
      7, 128,   1,   0, 228, 128, 
      4,   0, 255, 144,   0,   0, 
    228, 128,   5,   0,   0,   3, 
      1,   0,   7, 128,   2,   0, 
     85, 128,   5,   0, 228, 160, 
      4,   0,   0,   4,   1,   0, 
      7, 128,   4,   0, 228, 160, 
      2,   0,   0, 128,   1,   0, 
    228, 128,   4,   0,   0,   4, 
      1,   0,   7, 128,   6,   0, 
    228, 160,   2,   0, 170, 128, 
      1,   0, 228, 128,   2,   0, 
      0,   3,   1,   0,   7, 128, 
      1,   0, 228, 128,   7,   0, 
    228, 160,   5,   0,   0,   3, 
      3,   0,   7, 128,   0,   0, 
     85, 128,   9,   0, 228, 160, 
      4,   0,   0,   4,   0,   0, 
     11, 128,   8,   0, 164, 160, 
      0,   0,   0, 128,   3,   0, 
    164, 128,   4,   0,   0,   4, 
      0,   0,   7, 128,  10,   0, 
    228, 160,   0,   0, 170, 128, 
      0,   0, 244, 128,   1,   0, 
      0,   2,   3,   0,   1, 128, 
     13,   0,   0, 160,   4,   0, 
      0,   4,   3,   0,   7, 128, 
     15,   0, 228, 160,   3,   0, 
      0, 128,   3,   0, 228, 144, 
      1,   0,   0,   2,   4,   0, 
      7, 128,   3,   0, 228, 128, 
      1,   0,   0,   2,   0,   0, 
      8, 128,  11,   0,  85, 160, 
     38,   0,   0,   1,   0,   0, 
    228, 240,   2,   0,   0,   3, 
      1,   0,   8, 128,   0,   0, 
    255, 128,  16,   0,   0, 160, 
      5,   0,   0,   3,   1,   0, 
      8, 128,   1,   0, 255, 128, 
     11,   0,   0, 160,  46,   0, 
      0,   2,   0,   0,   1, 176, 
      1,   0, 255, 128,   8,   0, 
      0,   4,   1,   0,   8, 128, 
      0,   0, 228, 128,  19,  32, 
    228, 161,   0,   0,   0, 176, 
     11,   0,   0,   3,   1,   0, 
      8, 128,   1,   0, 255, 128, 
     11,   0,  85, 160,   5,   0, 
      0,   4,   5,   0,   7, 128, 
      1,   0, 255, 128,  17,  32, 
    228, 160,   0,   0,   0, 176, 
      4,   0,   0,   4,   4,   0, 
      7, 128,   5,   0, 228, 128, 
     13,   0, 170, 160,   4,   0, 
    228, 128,   2,   0,   0,   3, 
      0,   0,   8, 128,   0,   0, 
    255, 128,  11,   0, 170, 160, 
     39,   0,   0,   0,   1,   0, 
      0,   2,   3,   0,   7, 128, 
      4,   0, 228, 128,   1,   0, 
      0,   2,   0,   0,   8, 128, 
     11,   0,  85, 160,  38,   0, 
      0,   1,   1,   0, 228, 240, 
      2,   0,   0,   3,   1,   0, 
      8, 128,   0,   0, 255, 128, 
     16,   0,  85, 160,   5,   0, 
      0,   3,   1,   0,   8, 128, 
      1,   0, 255, 128,  11,   0, 
      0, 160,  46,   0,   0,   2, 
      0,   0,   1, 176,   1,   0, 
    255, 128,   2,   0,   0,   4, 
      5,   0,   7, 128,   1,   0, 
    228, 128,  18,  32, 228, 161, 
      0,   0,   0, 176,   8,   0, 
      0,   3,   1,   0,   8, 128, 
      5,   0, 228, 128,   5,   0, 
    228, 128,   7,   0,   0,   2, 
      1,   0,   8, 128,   1,   0, 
    255, 128,   5,   0,   0,   3, 
      5,   0,   7, 128,   1,   0, 
    255, 128,   5,   0, 228, 128, 
      8,   0,   0,   3,   2,   0, 
      8, 128,   0,   0, 228, 128, 
      5,   0, 228, 129,  11,   0, 
      0,   3,   2,   0,   8, 128, 
      2,   0, 255, 128,  11,   0, 
     85, 160,   5,   0,   0,   4, 
      5,   0,   7, 128,   2,   0, 
    255, 128,  17,  32, 228, 160, 
      0,   0,   0, 176,   6,   0, 
      0,   2,   1,   0,   8, 128, 
      1,   0, 255, 128,   6,   0, 
      0,   3,   2,   0,   8, 128, 
     17,  32, 255, 160,   0,   0, 
      0, 176,   4,   0,   0,   4, 
      1,   0,   8, 128,   1,   0, 
    255, 128,   2,   0, 255, 129, 
     11,   0, 170, 160,  11,   0, 
      0,   3,   1,   0,   8, 128, 
      1,   0, 255, 128,  11,   0, 
     85, 160,   5,   0,   0,   3, 
      5,   0,   7, 128,   1,   0, 
    255, 128,   5,   0, 228, 128, 
      4,   0,   0,   4,   3,   0, 
      7, 128,   5,   0, 228, 128, 
     13,   0, 170, 160,   3,   0, 
    228, 128,   2,   0,   0,   3, 
      0,   0,   8, 128,   0,   0, 
    255, 128,  11,   0, 170, 160, 
     39,   0,   0,   0,   1,   0, 
      0,   2,   4,   0,   7, 128, 
      3,   0, 228, 128,   1,   0, 
      0,   2,   0,   0,   8, 128, 
     11,   0,  85, 160,  38,   0, 
      0,   1,   2,   0, 228, 240, 
      2,   0,   0,   3,   1,   0, 
      8, 128,   0,   0, 255, 128, 
     16,   0, 170, 160,   5,   0, 
      0,   3,   1,   0,   8, 128, 
      1,   0, 255, 128,  11,   0, 
      0, 160,  46,   0,   0,   2, 
      0,   0,   1, 176,   1,   0, 
    255, 128,   2,   0,   0,   4, 
      5,   0,   7, 128,   1,   0, 
    228, 128,  18,  32, 228, 161, 
      0,   0,   0, 176,   8,   0, 
      0,   3,   1,   0,   8, 128, 
      5,   0, 228, 128,   5,   0, 
    228, 128,   7,   0,   0,   2, 
      1,   0,   8, 128,   1,   0, 
    255, 128,   5,   0,   0,   3, 
      5,   0,   7, 128,   1,   0, 
    255, 128,   5,   0, 228, 128, 
      8,   0,   0,   3,   2,   0, 
      8, 128,   0,   0, 228, 128, 
      5,   0, 228, 129,   8,   0, 
      0,   4,   3,   0,   8, 128, 
      5,   0, 228, 128,  19,  32, 
    228, 160,   0,   0,   0, 176, 
     11,   0,   0,   3,   2,   0, 
      8, 128,   2,   0, 255, 128, 
     11,   0,  85, 160,   2,   0, 
      0,   4,   3,   0,   8, 128, 
      3,   0, 255, 128,  18,  32, 
    255, 160,   0,   0,   0, 176, 
      1,   0,   0,   2,   5,   0, 
      4, 128,  11,   0, 170, 160, 
      2,   0,   0,   4,   5,   0, 
      1, 128,   5,   0, 170, 128, 
     18,  32, 255, 160,   0,   0, 
      0, 176,   6,   0,   0,   2, 
      5,   0,   1, 128,   5,   0, 
      0, 128,   5,   0,   0,   3, 
      3,   0,   8, 128,   3,   0, 
    255, 128,   5,   0,   0, 128, 
     12,   0,   0,   3,   5,   0, 
      1, 128,   3,   0, 255, 128, 
     11,   0,  85, 160,   4,   0, 
      0,   4,   2,   0,   8, 128, 
      5,   0,   0, 128,   2,   0, 
    255, 129,   2,   0, 255, 128, 
     11,   0,   0,   4,   3,   0, 
      8, 128,   3,   0, 255, 128, 
     19,  32, 255, 160,   0,   0, 
      0, 176,   5,   0,   0,   3, 
      2,   0,   8, 128,   2,   0, 
    255, 128,   3,   0, 255, 128, 
      5,   0,   0,   4,   5,   0, 
      7, 128,   2,   0, 255, 128, 
     17,  32, 228, 160,   0,   0, 
      0, 176,   6,   0,   0,   2, 
      1,   0,   8, 128,   1,   0, 
    255, 128,   6,   0,   0,   3, 
      2,   0,   8, 128,  17,  32, 
    255, 160,   0,   0,   0, 176, 
      4,   0,   0,   4,   1,   0, 
      8, 128,   1,   0, 255, 128, 
      2,   0, 255, 129,  11,   0, 
    170, 160,  11,   0,   0,   3, 
      1,   0,   8, 128,   1,   0, 
    255, 128,  11,   0,  85, 160, 
      5,   0,   0,   3,   5,   0, 
      7, 128,   1,   0, 255, 128, 
      5,   0, 228, 128,   4,   0, 
      0,   4,   4,   0,   7, 128, 
      5,   0, 228, 128,  13,   0, 
    170, 160,   4,   0, 228, 128, 
      2,   0,   0,   3,   0,   0, 
      8, 128,   0,   0, 255, 128, 
     11,   0, 170, 160,  39,   0, 
      0,   0,   1,   0,   0,   2, 
      4,   0,   8, 128,   3,   0, 
    255, 144,  11,   0,   0,   3, 
      0,   0,  15, 128,   4,   0, 
    228, 128,  11,   0,  85, 160, 
     10,   0,   0,   3,   0,   0, 
     15, 128,   0,   0, 228, 128, 
     11,   0, 170, 160,   5,   0, 
      0,   3,   0,   0,  15, 208, 
      0,   0, 228, 128,  12,   0, 
    228, 160,   5,   0,   0,   3, 
      0,   0,  15, 128,   2,   0, 
     85, 128,   1,   0, 228, 160, 
      4,   0,   0,   4,   0,   0, 
     15, 128,   0,   0, 228, 160, 
      2,   0,   0, 128,   0,   0, 
    228, 128,   4,   0,   0,   4, 
      0,   0,  15, 128,   2,   0, 
    228, 160,   2,   0, 170, 128, 
      0,   0, 228, 128,   2,   0, 
      0,   3,   0,   0,  15, 128, 
      0,   0, 228, 128,   3,   0, 
    228, 160,   1,   0,   0,   2, 
      0,   0,  15, 192,   0,   0, 
    228, 128,   2,   0,   0,   3, 
      0,   0,   1, 128,   0,   0, 
    255, 128,  14,   0,  85, 161, 
      5,   0,   0,   3,   0,   0, 
      1, 128,   0,   0,   0, 128, 
     14,   0, 170, 160,  11,   0, 
      0,   3,   0,   0,   1, 128, 
      0,   0,   0, 128,  14,   0, 
    255, 160,  10,   0,   0,   3, 
      0,   0,   4, 224,   0,   0, 
      0, 128,  11,   0, 170, 160, 
      1,   0,   0,   2,   0,   0, 
      3, 224,   2,   0, 228, 144, 
    255, 255,   0,   0
};
