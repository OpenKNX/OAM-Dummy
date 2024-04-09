#pragma once


#define paramDelay(time) (uint32_t)( \
            (time & 0xC000) == 0xC000 ? (time & 0x3FFF) * 100 : \
            (time & 0xC000) == 0x0000 ? (time & 0x3FFF) * 1000 : \
            (time & 0xC000) == 0x4000 ? (time & 0x3FFF) * 60000 : \
            (time & 0xC000) == 0x8000 ? ((time & 0x3FFF) > 1000 ? 3600000 : \
                                         (time & 0x3FFF) * 3600000 ) : 0 )
                                             
#define MAIN_OpenKnxId 0xA0
#define MAIN_ApplicationNumber 4
#define MAIN_ApplicationVersion 53
#define MAIN_ParameterSize 0
#define MAIN_MaxKoNumber 999
#define MAIN_OrderNumber "0xA004"
// Parameter with single occurrence




#define DUMMY_ChannelCount 999

// Parameter per channel
#define DUMMY_ParamBlockOffset 0
#define DUMMY_ParamBlockSize -1
#define DUMMY_ParamCalcIndex(index) (index + DUMMY_ParamBlockOffset + _channelIndex * DUMMY_ParamBlockSize)



// deprecated
#define DUMMY_KoOffset 1

// Communication objects per channel (multiple occurrence)
#define DUMMY_KoBlockOffset 1
#define DUMMY_KoBlockSize 1

#define DUMMY_KoCalcNumber(index) (index + DUMMY_KoBlockOffset + _channelIndex * DUMMY_KoBlockSize)
#define DUMMY_KoCalcIndex(number) ((number >= DUMMY_KoCalcNumber(0) && number < DUMMY_KoCalcNumber(DUMMY_KoBlockSize)) ? (number - DUMMY_KoBlockOffset) % DUMMY_KoBlockSize : -1)
#define DUMMY_KoCalcChannel(number) ((number >= DUMMY_KoBlockOffset && number < DUMMY_KoBlockOffset + DUMMY_ChannelCount * DUMMY_KoBlockSize) ? (number - DUMMY_KoBlockOffset) / DUMMY_KoBlockSize : -1)

#define DUMMY_KoKO 0

// {{0:Objekt}}
#define KoDUMMY_KO                                  (knx.getGroupObject(DUMMY_KoCalcNumber(DUMMY_KoKO)))

// Communication objects with single occurrence
#define KoDUMMY_KO1 1
#define KoDUMMY_KO2 2
#define KoDUMMY_KO3 3
#define KoDUMMY_KO4 4
#define KoDUMMY_KO5 5
#define KoDUMMY_KO6 6
#define KoDUMMY_KO7 7
#define KoDUMMY_KO8 8
#define KoDUMMY_KO9 9
#define KoDUMMY_KO10 10
#define KoDUMMY_KO11 11
#define KoDUMMY_KO12 12
#define KoDUMMY_KO13 13
#define KoDUMMY_KO14 14
#define KoDUMMY_KO15 15
#define KoDUMMY_KO16 16
#define KoDUMMY_KO17 17
#define KoDUMMY_KO18 18
#define KoDUMMY_KO19 19
#define KoDUMMY_KO20 20
#define KoDUMMY_KO21 21
#define KoDUMMY_KO22 22
#define KoDUMMY_KO23 23
#define KoDUMMY_KO24 24
#define KoDUMMY_KO25 25
#define KoDUMMY_KO26 26
#define KoDUMMY_KO27 27
#define KoDUMMY_KO28 28
#define KoDUMMY_KO29 29
#define KoDUMMY_KO30 30
#define KoDUMMY_KO31 31
#define KoDUMMY_KO32 32
#define KoDUMMY_KO33 33
#define KoDUMMY_KO34 34
#define KoDUMMY_KO35 35
#define KoDUMMY_KO36 36
#define KoDUMMY_KO37 37
#define KoDUMMY_KO38 38
#define KoDUMMY_KO39 39
#define KoDUMMY_KO40 40
#define KoDUMMY_KO41 41
#define KoDUMMY_KO42 42
#define KoDUMMY_KO43 43
#define KoDUMMY_KO44 44
#define KoDUMMY_KO45 45
#define KoDUMMY_KO46 46
#define KoDUMMY_KO47 47
#define KoDUMMY_KO48 48
#define KoDUMMY_KO49 49
#define KoDUMMY_KO50 50
#define KoDUMMY_KO51 51
#define KoDUMMY_KO52 52
#define KoDUMMY_KO53 53
#define KoDUMMY_KO54 54
#define KoDUMMY_KO55 55
#define KoDUMMY_KO56 56
#define KoDUMMY_KO57 57
#define KoDUMMY_KO58 58
#define KoDUMMY_KO59 59
#define KoDUMMY_KO60 60
#define KoDUMMY_KO61 61
#define KoDUMMY_KO62 62
#define KoDUMMY_KO63 63
#define KoDUMMY_KO64 64
#define KoDUMMY_KO65 65
#define KoDUMMY_KO66 66
#define KoDUMMY_KO67 67
#define KoDUMMY_KO68 68
#define KoDUMMY_KO69 69
#define KoDUMMY_KO70 70
#define KoDUMMY_KO71 71
#define KoDUMMY_KO72 72
#define KoDUMMY_KO73 73
#define KoDUMMY_KO74 74
#define KoDUMMY_KO75 75
#define KoDUMMY_KO76 76
#define KoDUMMY_KO77 77
#define KoDUMMY_KO78 78
#define KoDUMMY_KO79 79
#define KoDUMMY_KO80 80
#define KoDUMMY_KO81 81
#define KoDUMMY_KO82 82
#define KoDUMMY_KO83 83
#define KoDUMMY_KO84 84
#define KoDUMMY_KO85 85
#define KoDUMMY_KO86 86
#define KoDUMMY_KO87 87
#define KoDUMMY_KO88 88
#define KoDUMMY_KO89 89
#define KoDUMMY_KO90 90
#define KoDUMMY_KO91 91
#define KoDUMMY_KO92 92
#define KoDUMMY_KO93 93
#define KoDUMMY_KO94 94
#define KoDUMMY_KO95 95
#define KoDUMMY_KO96 96
#define KoDUMMY_KO97 97
#define KoDUMMY_KO98 98
#define KoDUMMY_KO99 99
#define KoDUMMY_KO100 100
#define KoDUMMY_KO101 101
#define KoDUMMY_KO102 102
#define KoDUMMY_KO103 103
#define KoDUMMY_KO104 104
#define KoDUMMY_KO105 105
#define KoDUMMY_KO106 106
#define KoDUMMY_KO107 107
#define KoDUMMY_KO108 108
#define KoDUMMY_KO109 109
#define KoDUMMY_KO110 110
#define KoDUMMY_KO111 111
#define KoDUMMY_KO112 112
#define KoDUMMY_KO113 113
#define KoDUMMY_KO114 114
#define KoDUMMY_KO115 115
#define KoDUMMY_KO116 116
#define KoDUMMY_KO117 117
#define KoDUMMY_KO118 118
#define KoDUMMY_KO119 119
#define KoDUMMY_KO120 120
#define KoDUMMY_KO121 121
#define KoDUMMY_KO122 122
#define KoDUMMY_KO123 123
#define KoDUMMY_KO124 124
#define KoDUMMY_KO125 125
#define KoDUMMY_KO126 126
#define KoDUMMY_KO127 127
#define KoDUMMY_KO128 128
#define KoDUMMY_KO129 129
#define KoDUMMY_KO130 130
#define KoDUMMY_KO131 131
#define KoDUMMY_KO132 132
#define KoDUMMY_KO133 133
#define KoDUMMY_KO134 134
#define KoDUMMY_KO135 135
#define KoDUMMY_KO136 136
#define KoDUMMY_KO137 137
#define KoDUMMY_KO138 138
#define KoDUMMY_KO139 139
#define KoDUMMY_KO140 140
#define KoDUMMY_KO141 141
#define KoDUMMY_KO142 142
#define KoDUMMY_KO143 143
#define KoDUMMY_KO144 144
#define KoDUMMY_KO145 145
#define KoDUMMY_KO146 146
#define KoDUMMY_KO147 147
#define KoDUMMY_KO148 148
#define KoDUMMY_KO149 149
#define KoDUMMY_KO150 150
#define KoDUMMY_KO151 151
#define KoDUMMY_KO152 152
#define KoDUMMY_KO153 153
#define KoDUMMY_KO154 154
#define KoDUMMY_KO155 155
#define KoDUMMY_KO156 156
#define KoDUMMY_KO157 157
#define KoDUMMY_KO158 158
#define KoDUMMY_KO159 159
#define KoDUMMY_KO160 160
#define KoDUMMY_KO161 161
#define KoDUMMY_KO162 162
#define KoDUMMY_KO163 163
#define KoDUMMY_KO164 164
#define KoDUMMY_KO165 165
#define KoDUMMY_KO166 166
#define KoDUMMY_KO167 167
#define KoDUMMY_KO168 168
#define KoDUMMY_KO169 169
#define KoDUMMY_KO170 170
#define KoDUMMY_KO171 171
#define KoDUMMY_KO172 172
#define KoDUMMY_KO173 173
#define KoDUMMY_KO174 174
#define KoDUMMY_KO175 175
#define KoDUMMY_KO176 176
#define KoDUMMY_KO177 177
#define KoDUMMY_KO178 178
#define KoDUMMY_KO179 179
#define KoDUMMY_KO180 180
#define KoDUMMY_KO181 181
#define KoDUMMY_KO182 182
#define KoDUMMY_KO183 183
#define KoDUMMY_KO184 184
#define KoDUMMY_KO185 185
#define KoDUMMY_KO186 186
#define KoDUMMY_KO187 187
#define KoDUMMY_KO188 188
#define KoDUMMY_KO189 189
#define KoDUMMY_KO190 190
#define KoDUMMY_KO191 191
#define KoDUMMY_KO192 192
#define KoDUMMY_KO193 193
#define KoDUMMY_KO194 194
#define KoDUMMY_KO195 195
#define KoDUMMY_KO196 196
#define KoDUMMY_KO197 197
#define KoDUMMY_KO198 198
#define KoDUMMY_KO199 199
#define KoDUMMY_KO200 200
#define KoDUMMY_KO201 201
#define KoDUMMY_KO202 202
#define KoDUMMY_KO203 203
#define KoDUMMY_KO204 204
#define KoDUMMY_KO205 205
#define KoDUMMY_KO206 206
#define KoDUMMY_KO207 207
#define KoDUMMY_KO208 208
#define KoDUMMY_KO209 209
#define KoDUMMY_KO210 210
#define KoDUMMY_KO211 211
#define KoDUMMY_KO212 212
#define KoDUMMY_KO213 213
#define KoDUMMY_KO214 214
#define KoDUMMY_KO215 215
#define KoDUMMY_KO216 216
#define KoDUMMY_KO217 217
#define KoDUMMY_KO218 218
#define KoDUMMY_KO219 219
#define KoDUMMY_KO220 220
#define KoDUMMY_KO221 221
#define KoDUMMY_KO222 222
#define KoDUMMY_KO223 223
#define KoDUMMY_KO224 224
#define KoDUMMY_KO225 225
#define KoDUMMY_KO226 226
#define KoDUMMY_KO227 227
#define KoDUMMY_KO228 228
#define KoDUMMY_KO229 229
#define KoDUMMY_KO230 230
#define KoDUMMY_KO231 231
#define KoDUMMY_KO232 232
#define KoDUMMY_KO233 233
#define KoDUMMY_KO234 234
#define KoDUMMY_KO235 235
#define KoDUMMY_KO236 236
#define KoDUMMY_KO237 237
#define KoDUMMY_KO238 238
#define KoDUMMY_KO239 239
#define KoDUMMY_KO240 240
#define KoDUMMY_KO241 241
#define KoDUMMY_KO242 242
#define KoDUMMY_KO243 243
#define KoDUMMY_KO244 244
#define KoDUMMY_KO245 245
#define KoDUMMY_KO246 246
#define KoDUMMY_KO247 247
#define KoDUMMY_KO248 248
#define KoDUMMY_KO249 249
#define KoDUMMY_KO250 250
#define KoDUMMY_KO251 251
#define KoDUMMY_KO252 252
#define KoDUMMY_KO253 253
#define KoDUMMY_KO254 254
#define KoDUMMY_KO255 255
#define KoDUMMY_KO256 256
#define KoDUMMY_KO257 257
#define KoDUMMY_KO258 258
#define KoDUMMY_KO259 259
#define KoDUMMY_KO260 260
#define KoDUMMY_KO261 261
#define KoDUMMY_KO262 262
#define KoDUMMY_KO263 263
#define KoDUMMY_KO264 264
#define KoDUMMY_KO265 265
#define KoDUMMY_KO266 266
#define KoDUMMY_KO267 267
#define KoDUMMY_KO268 268
#define KoDUMMY_KO269 269
#define KoDUMMY_KO270 270
#define KoDUMMY_KO271 271
#define KoDUMMY_KO272 272
#define KoDUMMY_KO273 273
#define KoDUMMY_KO274 274
#define KoDUMMY_KO275 275
#define KoDUMMY_KO276 276
#define KoDUMMY_KO277 277
#define KoDUMMY_KO278 278
#define KoDUMMY_KO279 279
#define KoDUMMY_KO280 280
#define KoDUMMY_KO281 281
#define KoDUMMY_KO282 282
#define KoDUMMY_KO283 283
#define KoDUMMY_KO284 284
#define KoDUMMY_KO285 285
#define KoDUMMY_KO286 286
#define KoDUMMY_KO287 287
#define KoDUMMY_KO288 288
#define KoDUMMY_KO289 289
#define KoDUMMY_KO290 290
#define KoDUMMY_KO291 291
#define KoDUMMY_KO292 292
#define KoDUMMY_KO293 293
#define KoDUMMY_KO294 294
#define KoDUMMY_KO295 295
#define KoDUMMY_KO296 296
#define KoDUMMY_KO297 297
#define KoDUMMY_KO298 298
#define KoDUMMY_KO299 299
#define KoDUMMY_KO300 300
#define KoDUMMY_KO301 301
#define KoDUMMY_KO302 302
#define KoDUMMY_KO303 303
#define KoDUMMY_KO304 304
#define KoDUMMY_KO305 305
#define KoDUMMY_KO306 306
#define KoDUMMY_KO307 307
#define KoDUMMY_KO308 308
#define KoDUMMY_KO309 309
#define KoDUMMY_KO310 310
#define KoDUMMY_KO311 311
#define KoDUMMY_KO312 312
#define KoDUMMY_KO313 313
#define KoDUMMY_KO314 314
#define KoDUMMY_KO315 315
#define KoDUMMY_KO316 316
#define KoDUMMY_KO317 317
#define KoDUMMY_KO318 318
#define KoDUMMY_KO319 319
#define KoDUMMY_KO320 320
#define KoDUMMY_KO321 321
#define KoDUMMY_KO322 322
#define KoDUMMY_KO323 323
#define KoDUMMY_KO324 324
#define KoDUMMY_KO325 325
#define KoDUMMY_KO326 326
#define KoDUMMY_KO327 327
#define KoDUMMY_KO328 328
#define KoDUMMY_KO329 329
#define KoDUMMY_KO330 330
#define KoDUMMY_KO331 331
#define KoDUMMY_KO332 332
#define KoDUMMY_KO333 333
#define KoDUMMY_KO334 334
#define KoDUMMY_KO335 335
#define KoDUMMY_KO336 336
#define KoDUMMY_KO337 337
#define KoDUMMY_KO338 338
#define KoDUMMY_KO339 339
#define KoDUMMY_KO340 340
#define KoDUMMY_KO341 341
#define KoDUMMY_KO342 342
#define KoDUMMY_KO343 343
#define KoDUMMY_KO344 344
#define KoDUMMY_KO345 345
#define KoDUMMY_KO346 346
#define KoDUMMY_KO347 347
#define KoDUMMY_KO348 348
#define KoDUMMY_KO349 349
#define KoDUMMY_KO350 350
#define KoDUMMY_KO351 351
#define KoDUMMY_KO352 352
#define KoDUMMY_KO353 353
#define KoDUMMY_KO354 354
#define KoDUMMY_KO355 355
#define KoDUMMY_KO356 356
#define KoDUMMY_KO357 357
#define KoDUMMY_KO358 358
#define KoDUMMY_KO359 359
#define KoDUMMY_KO360 360
#define KoDUMMY_KO361 361
#define KoDUMMY_KO362 362
#define KoDUMMY_KO363 363
#define KoDUMMY_KO364 364
#define KoDUMMY_KO365 365
#define KoDUMMY_KO366 366
#define KoDUMMY_KO367 367
#define KoDUMMY_KO368 368
#define KoDUMMY_KO369 369
#define KoDUMMY_KO370 370
#define KoDUMMY_KO371 371
#define KoDUMMY_KO372 372
#define KoDUMMY_KO373 373
#define KoDUMMY_KO374 374
#define KoDUMMY_KO375 375
#define KoDUMMY_KO376 376
#define KoDUMMY_KO377 377
#define KoDUMMY_KO378 378
#define KoDUMMY_KO379 379
#define KoDUMMY_KO380 380
#define KoDUMMY_KO381 381
#define KoDUMMY_KO382 382
#define KoDUMMY_KO383 383
#define KoDUMMY_KO384 384
#define KoDUMMY_KO385 385
#define KoDUMMY_KO386 386
#define KoDUMMY_KO387 387
#define KoDUMMY_KO388 388
#define KoDUMMY_KO389 389
#define KoDUMMY_KO390 390
#define KoDUMMY_KO391 391
#define KoDUMMY_KO392 392
#define KoDUMMY_KO393 393
#define KoDUMMY_KO394 394
#define KoDUMMY_KO395 395
#define KoDUMMY_KO396 396
#define KoDUMMY_KO397 397
#define KoDUMMY_KO398 398
#define KoDUMMY_KO399 399
#define KoDUMMY_KO400 400
#define KoDUMMY_KO401 401
#define KoDUMMY_KO402 402
#define KoDUMMY_KO403 403
#define KoDUMMY_KO404 404
#define KoDUMMY_KO405 405
#define KoDUMMY_KO406 406
#define KoDUMMY_KO407 407
#define KoDUMMY_KO408 408
#define KoDUMMY_KO409 409
#define KoDUMMY_KO410 410
#define KoDUMMY_KO411 411
#define KoDUMMY_KO412 412
#define KoDUMMY_KO413 413
#define KoDUMMY_KO414 414
#define KoDUMMY_KO415 415
#define KoDUMMY_KO416 416
#define KoDUMMY_KO417 417
#define KoDUMMY_KO418 418
#define KoDUMMY_KO419 419
#define KoDUMMY_KO420 420
#define KoDUMMY_KO421 421
#define KoDUMMY_KO422 422
#define KoDUMMY_KO423 423
#define KoDUMMY_KO424 424
#define KoDUMMY_KO425 425
#define KoDUMMY_KO426 426
#define KoDUMMY_KO427 427
#define KoDUMMY_KO428 428
#define KoDUMMY_KO429 429
#define KoDUMMY_KO430 430
#define KoDUMMY_KO431 431
#define KoDUMMY_KO432 432
#define KoDUMMY_KO433 433
#define KoDUMMY_KO434 434
#define KoDUMMY_KO435 435
#define KoDUMMY_KO436 436
#define KoDUMMY_KO437 437
#define KoDUMMY_KO438 438
#define KoDUMMY_KO439 439
#define KoDUMMY_KO440 440
#define KoDUMMY_KO441 441
#define KoDUMMY_KO442 442
#define KoDUMMY_KO443 443
#define KoDUMMY_KO444 444
#define KoDUMMY_KO445 445
#define KoDUMMY_KO446 446
#define KoDUMMY_KO447 447
#define KoDUMMY_KO448 448
#define KoDUMMY_KO449 449
#define KoDUMMY_KO450 450
#define KoDUMMY_KO451 451
#define KoDUMMY_KO452 452
#define KoDUMMY_KO453 453
#define KoDUMMY_KO454 454
#define KoDUMMY_KO455 455
#define KoDUMMY_KO456 456
#define KoDUMMY_KO457 457
#define KoDUMMY_KO458 458
#define KoDUMMY_KO459 459
#define KoDUMMY_KO460 460
#define KoDUMMY_KO461 461
#define KoDUMMY_KO462 462
#define KoDUMMY_KO463 463
#define KoDUMMY_KO464 464
#define KoDUMMY_KO465 465
#define KoDUMMY_KO466 466
#define KoDUMMY_KO467 467
#define KoDUMMY_KO468 468
#define KoDUMMY_KO469 469
#define KoDUMMY_KO470 470
#define KoDUMMY_KO471 471
#define KoDUMMY_KO472 472
#define KoDUMMY_KO473 473
#define KoDUMMY_KO474 474
#define KoDUMMY_KO475 475
#define KoDUMMY_KO476 476
#define KoDUMMY_KO477 477
#define KoDUMMY_KO478 478
#define KoDUMMY_KO479 479
#define KoDUMMY_KO480 480
#define KoDUMMY_KO481 481
#define KoDUMMY_KO482 482
#define KoDUMMY_KO483 483
#define KoDUMMY_KO484 484
#define KoDUMMY_KO485 485
#define KoDUMMY_KO486 486
#define KoDUMMY_KO487 487
#define KoDUMMY_KO488 488
#define KoDUMMY_KO489 489
#define KoDUMMY_KO490 490
#define KoDUMMY_KO491 491
#define KoDUMMY_KO492 492
#define KoDUMMY_KO493 493
#define KoDUMMY_KO494 494
#define KoDUMMY_KO495 495
#define KoDUMMY_KO496 496
#define KoDUMMY_KO497 497
#define KoDUMMY_KO498 498
#define KoDUMMY_KO499 499
#define KoDUMMY_KO500 500
#define KoDUMMY_KO501 501
#define KoDUMMY_KO502 502
#define KoDUMMY_KO503 503
#define KoDUMMY_KO504 504
#define KoDUMMY_KO505 505
#define KoDUMMY_KO506 506
#define KoDUMMY_KO507 507
#define KoDUMMY_KO508 508
#define KoDUMMY_KO509 509
#define KoDUMMY_KO510 510
#define KoDUMMY_KO511 511
#define KoDUMMY_KO512 512
#define KoDUMMY_KO513 513
#define KoDUMMY_KO514 514
#define KoDUMMY_KO515 515
#define KoDUMMY_KO516 516
#define KoDUMMY_KO517 517
#define KoDUMMY_KO518 518
#define KoDUMMY_KO519 519
#define KoDUMMY_KO520 520
#define KoDUMMY_KO521 521
#define KoDUMMY_KO522 522
#define KoDUMMY_KO523 523
#define KoDUMMY_KO524 524
#define KoDUMMY_KO525 525
#define KoDUMMY_KO526 526
#define KoDUMMY_KO527 527
#define KoDUMMY_KO528 528
#define KoDUMMY_KO529 529
#define KoDUMMY_KO530 530
#define KoDUMMY_KO531 531
#define KoDUMMY_KO532 532
#define KoDUMMY_KO533 533
#define KoDUMMY_KO534 534
#define KoDUMMY_KO535 535
#define KoDUMMY_KO536 536
#define KoDUMMY_KO537 537
#define KoDUMMY_KO538 538
#define KoDUMMY_KO539 539
#define KoDUMMY_KO540 540
#define KoDUMMY_KO541 541
#define KoDUMMY_KO542 542
#define KoDUMMY_KO543 543
#define KoDUMMY_KO544 544
#define KoDUMMY_KO545 545
#define KoDUMMY_KO546 546
#define KoDUMMY_KO547 547
#define KoDUMMY_KO548 548
#define KoDUMMY_KO549 549
#define KoDUMMY_KO550 550
#define KoDUMMY_KO551 551
#define KoDUMMY_KO552 552
#define KoDUMMY_KO553 553
#define KoDUMMY_KO554 554
#define KoDUMMY_KO555 555
#define KoDUMMY_KO556 556
#define KoDUMMY_KO557 557
#define KoDUMMY_KO558 558
#define KoDUMMY_KO559 559
#define KoDUMMY_KO560 560
#define KoDUMMY_KO561 561
#define KoDUMMY_KO562 562
#define KoDUMMY_KO563 563
#define KoDUMMY_KO564 564
#define KoDUMMY_KO565 565
#define KoDUMMY_KO566 566
#define KoDUMMY_KO567 567
#define KoDUMMY_KO568 568
#define KoDUMMY_KO569 569
#define KoDUMMY_KO570 570
#define KoDUMMY_KO571 571
#define KoDUMMY_KO572 572
#define KoDUMMY_KO573 573
#define KoDUMMY_KO574 574
#define KoDUMMY_KO575 575
#define KoDUMMY_KO576 576
#define KoDUMMY_KO577 577
#define KoDUMMY_KO578 578
#define KoDUMMY_KO579 579
#define KoDUMMY_KO580 580
#define KoDUMMY_KO581 581
#define KoDUMMY_KO582 582
#define KoDUMMY_KO583 583
#define KoDUMMY_KO584 584
#define KoDUMMY_KO585 585
#define KoDUMMY_KO586 586
#define KoDUMMY_KO587 587
#define KoDUMMY_KO588 588
#define KoDUMMY_KO589 589
#define KoDUMMY_KO590 590
#define KoDUMMY_KO591 591
#define KoDUMMY_KO592 592
#define KoDUMMY_KO593 593
#define KoDUMMY_KO594 594
#define KoDUMMY_KO595 595
#define KoDUMMY_KO596 596
#define KoDUMMY_KO597 597
#define KoDUMMY_KO598 598
#define KoDUMMY_KO599 599
#define KoDUMMY_KO600 600
#define KoDUMMY_KO601 601
#define KoDUMMY_KO602 602
#define KoDUMMY_KO603 603
#define KoDUMMY_KO604 604
#define KoDUMMY_KO605 605
#define KoDUMMY_KO606 606
#define KoDUMMY_KO607 607
#define KoDUMMY_KO608 608
#define KoDUMMY_KO609 609
#define KoDUMMY_KO610 610
#define KoDUMMY_KO611 611
#define KoDUMMY_KO612 612
#define KoDUMMY_KO613 613
#define KoDUMMY_KO614 614
#define KoDUMMY_KO615 615
#define KoDUMMY_KO616 616
#define KoDUMMY_KO617 617
#define KoDUMMY_KO618 618
#define KoDUMMY_KO619 619
#define KoDUMMY_KO620 620
#define KoDUMMY_KO621 621
#define KoDUMMY_KO622 622
#define KoDUMMY_KO623 623
#define KoDUMMY_KO624 624
#define KoDUMMY_KO625 625
#define KoDUMMY_KO626 626
#define KoDUMMY_KO627 627
#define KoDUMMY_KO628 628
#define KoDUMMY_KO629 629
#define KoDUMMY_KO630 630
#define KoDUMMY_KO631 631
#define KoDUMMY_KO632 632
#define KoDUMMY_KO633 633
#define KoDUMMY_KO634 634
#define KoDUMMY_KO635 635
#define KoDUMMY_KO636 636
#define KoDUMMY_KO637 637
#define KoDUMMY_KO638 638
#define KoDUMMY_KO639 639
#define KoDUMMY_KO640 640
#define KoDUMMY_KO641 641
#define KoDUMMY_KO642 642
#define KoDUMMY_KO643 643
#define KoDUMMY_KO644 644
#define KoDUMMY_KO645 645
#define KoDUMMY_KO646 646
#define KoDUMMY_KO647 647
#define KoDUMMY_KO648 648
#define KoDUMMY_KO649 649
#define KoDUMMY_KO650 650
#define KoDUMMY_KO651 651
#define KoDUMMY_KO652 652
#define KoDUMMY_KO653 653
#define KoDUMMY_KO654 654
#define KoDUMMY_KO655 655
#define KoDUMMY_KO656 656
#define KoDUMMY_KO657 657
#define KoDUMMY_KO658 658
#define KoDUMMY_KO659 659
#define KoDUMMY_KO660 660
#define KoDUMMY_KO661 661
#define KoDUMMY_KO662 662
#define KoDUMMY_KO663 663
#define KoDUMMY_KO664 664
#define KoDUMMY_KO665 665
#define KoDUMMY_KO666 666
#define KoDUMMY_KO667 667
#define KoDUMMY_KO668 668
#define KoDUMMY_KO669 669
#define KoDUMMY_KO670 670
#define KoDUMMY_KO671 671
#define KoDUMMY_KO672 672
#define KoDUMMY_KO673 673
#define KoDUMMY_KO674 674
#define KoDUMMY_KO675 675
#define KoDUMMY_KO676 676
#define KoDUMMY_KO677 677
#define KoDUMMY_KO678 678
#define KoDUMMY_KO679 679
#define KoDUMMY_KO680 680
#define KoDUMMY_KO681 681
#define KoDUMMY_KO682 682
#define KoDUMMY_KO683 683
#define KoDUMMY_KO684 684
#define KoDUMMY_KO685 685
#define KoDUMMY_KO686 686
#define KoDUMMY_KO687 687
#define KoDUMMY_KO688 688
#define KoDUMMY_KO689 689
#define KoDUMMY_KO690 690
#define KoDUMMY_KO691 691
#define KoDUMMY_KO692 692
#define KoDUMMY_KO693 693
#define KoDUMMY_KO694 694
#define KoDUMMY_KO695 695
#define KoDUMMY_KO696 696
#define KoDUMMY_KO697 697
#define KoDUMMY_KO698 698
#define KoDUMMY_KO699 699
#define KoDUMMY_KO700 700
#define KoDUMMY_KO701 701
#define KoDUMMY_KO702 702
#define KoDUMMY_KO703 703
#define KoDUMMY_KO704 704
#define KoDUMMY_KO705 705
#define KoDUMMY_KO706 706
#define KoDUMMY_KO707 707
#define KoDUMMY_KO708 708
#define KoDUMMY_KO709 709
#define KoDUMMY_KO710 710
#define KoDUMMY_KO711 711
#define KoDUMMY_KO712 712
#define KoDUMMY_KO713 713
#define KoDUMMY_KO714 714
#define KoDUMMY_KO715 715
#define KoDUMMY_KO716 716
#define KoDUMMY_KO717 717
#define KoDUMMY_KO718 718
#define KoDUMMY_KO719 719
#define KoDUMMY_KO720 720
#define KoDUMMY_KO721 721
#define KoDUMMY_KO722 722
#define KoDUMMY_KO723 723
#define KoDUMMY_KO724 724
#define KoDUMMY_KO725 725
#define KoDUMMY_KO726 726
#define KoDUMMY_KO727 727
#define KoDUMMY_KO728 728
#define KoDUMMY_KO729 729
#define KoDUMMY_KO730 730
#define KoDUMMY_KO731 731
#define KoDUMMY_KO732 732
#define KoDUMMY_KO733 733
#define KoDUMMY_KO734 734
#define KoDUMMY_KO735 735
#define KoDUMMY_KO736 736
#define KoDUMMY_KO737 737
#define KoDUMMY_KO738 738
#define KoDUMMY_KO739 739
#define KoDUMMY_KO740 740
#define KoDUMMY_KO741 741
#define KoDUMMY_KO742 742
#define KoDUMMY_KO743 743
#define KoDUMMY_KO744 744
#define KoDUMMY_KO745 745
#define KoDUMMY_KO746 746
#define KoDUMMY_KO747 747
#define KoDUMMY_KO748 748
#define KoDUMMY_KO749 749
#define KoDUMMY_KO750 750
#define KoDUMMY_KO751 751
#define KoDUMMY_KO752 752
#define KoDUMMY_KO753 753
#define KoDUMMY_KO754 754
#define KoDUMMY_KO755 755
#define KoDUMMY_KO756 756
#define KoDUMMY_KO757 757
#define KoDUMMY_KO758 758
#define KoDUMMY_KO759 759
#define KoDUMMY_KO760 760
#define KoDUMMY_KO761 761
#define KoDUMMY_KO762 762
#define KoDUMMY_KO763 763
#define KoDUMMY_KO764 764
#define KoDUMMY_KO765 765
#define KoDUMMY_KO766 766
#define KoDUMMY_KO767 767
#define KoDUMMY_KO768 768
#define KoDUMMY_KO769 769
#define KoDUMMY_KO770 770
#define KoDUMMY_KO771 771
#define KoDUMMY_KO772 772
#define KoDUMMY_KO773 773
#define KoDUMMY_KO774 774
#define KoDUMMY_KO775 775
#define KoDUMMY_KO776 776
#define KoDUMMY_KO777 777
#define KoDUMMY_KO778 778
#define KoDUMMY_KO779 779
#define KoDUMMY_KO780 780
#define KoDUMMY_KO781 781
#define KoDUMMY_KO782 782
#define KoDUMMY_KO783 783
#define KoDUMMY_KO784 784
#define KoDUMMY_KO785 785
#define KoDUMMY_KO786 786
#define KoDUMMY_KO787 787
#define KoDUMMY_KO788 788
#define KoDUMMY_KO789 789
#define KoDUMMY_KO790 790
#define KoDUMMY_KO791 791
#define KoDUMMY_KO792 792
#define KoDUMMY_KO793 793
#define KoDUMMY_KO794 794
#define KoDUMMY_KO795 795
#define KoDUMMY_KO796 796
#define KoDUMMY_KO797 797
#define KoDUMMY_KO798 798
#define KoDUMMY_KO799 799
#define KoDUMMY_KO800 800
#define KoDUMMY_KO801 801
#define KoDUMMY_KO802 802
#define KoDUMMY_KO803 803
#define KoDUMMY_KO804 804
#define KoDUMMY_KO805 805
#define KoDUMMY_KO806 806
#define KoDUMMY_KO807 807
#define KoDUMMY_KO808 808
#define KoDUMMY_KO809 809
#define KoDUMMY_KO810 810
#define KoDUMMY_KO811 811
#define KoDUMMY_KO812 812
#define KoDUMMY_KO813 813
#define KoDUMMY_KO814 814
#define KoDUMMY_KO815 815
#define KoDUMMY_KO816 816
#define KoDUMMY_KO817 817
#define KoDUMMY_KO818 818
#define KoDUMMY_KO819 819
#define KoDUMMY_KO820 820
#define KoDUMMY_KO821 821
#define KoDUMMY_KO822 822
#define KoDUMMY_KO823 823
#define KoDUMMY_KO824 824
#define KoDUMMY_KO825 825
#define KoDUMMY_KO826 826
#define KoDUMMY_KO827 827
#define KoDUMMY_KO828 828
#define KoDUMMY_KO829 829
#define KoDUMMY_KO830 830
#define KoDUMMY_KO831 831
#define KoDUMMY_KO832 832
#define KoDUMMY_KO833 833
#define KoDUMMY_KO834 834
#define KoDUMMY_KO835 835
#define KoDUMMY_KO836 836
#define KoDUMMY_KO837 837
#define KoDUMMY_KO838 838
#define KoDUMMY_KO839 839
#define KoDUMMY_KO840 840
#define KoDUMMY_KO841 841
#define KoDUMMY_KO842 842
#define KoDUMMY_KO843 843
#define KoDUMMY_KO844 844
#define KoDUMMY_KO845 845
#define KoDUMMY_KO846 846
#define KoDUMMY_KO847 847
#define KoDUMMY_KO848 848
#define KoDUMMY_KO849 849
#define KoDUMMY_KO850 850
#define KoDUMMY_KO851 851
#define KoDUMMY_KO852 852
#define KoDUMMY_KO853 853
#define KoDUMMY_KO854 854
#define KoDUMMY_KO855 855
#define KoDUMMY_KO856 856
#define KoDUMMY_KO857 857
#define KoDUMMY_KO858 858
#define KoDUMMY_KO859 859
#define KoDUMMY_KO860 860
#define KoDUMMY_KO861 861
#define KoDUMMY_KO862 862
#define KoDUMMY_KO863 863
#define KoDUMMY_KO864 864
#define KoDUMMY_KO865 865
#define KoDUMMY_KO866 866
#define KoDUMMY_KO867 867
#define KoDUMMY_KO868 868
#define KoDUMMY_KO869 869
#define KoDUMMY_KO870 870
#define KoDUMMY_KO871 871
#define KoDUMMY_KO872 872
#define KoDUMMY_KO873 873
#define KoDUMMY_KO874 874
#define KoDUMMY_KO875 875
#define KoDUMMY_KO876 876
#define KoDUMMY_KO877 877
#define KoDUMMY_KO878 878
#define KoDUMMY_KO879 879
#define KoDUMMY_KO880 880
#define KoDUMMY_KO881 881
#define KoDUMMY_KO882 882
#define KoDUMMY_KO883 883
#define KoDUMMY_KO884 884
#define KoDUMMY_KO885 885
#define KoDUMMY_KO886 886
#define KoDUMMY_KO887 887
#define KoDUMMY_KO888 888
#define KoDUMMY_KO889 889
#define KoDUMMY_KO890 890
#define KoDUMMY_KO891 891
#define KoDUMMY_KO892 892
#define KoDUMMY_KO893 893
#define KoDUMMY_KO894 894
#define KoDUMMY_KO895 895
#define KoDUMMY_KO896 896
#define KoDUMMY_KO897 897
#define KoDUMMY_KO898 898
#define KoDUMMY_KO899 899
#define KoDUMMY_KO900 900
#define KoDUMMY_KO901 901
#define KoDUMMY_KO902 902
#define KoDUMMY_KO903 903
#define KoDUMMY_KO904 904
#define KoDUMMY_KO905 905
#define KoDUMMY_KO906 906
#define KoDUMMY_KO907 907
#define KoDUMMY_KO908 908
#define KoDUMMY_KO909 909
#define KoDUMMY_KO910 910
#define KoDUMMY_KO911 911
#define KoDUMMY_KO912 912
#define KoDUMMY_KO913 913
#define KoDUMMY_KO914 914
#define KoDUMMY_KO915 915
#define KoDUMMY_KO916 916
#define KoDUMMY_KO917 917
#define KoDUMMY_KO918 918
#define KoDUMMY_KO919 919
#define KoDUMMY_KO920 920
#define KoDUMMY_KO921 921
#define KoDUMMY_KO922 922
#define KoDUMMY_KO923 923
#define KoDUMMY_KO924 924
#define KoDUMMY_KO925 925
#define KoDUMMY_KO926 926
#define KoDUMMY_KO927 927
#define KoDUMMY_KO928 928
#define KoDUMMY_KO929 929
#define KoDUMMY_KO930 930
#define KoDUMMY_KO931 931
#define KoDUMMY_KO932 932
#define KoDUMMY_KO933 933
#define KoDUMMY_KO934 934
#define KoDUMMY_KO935 935
#define KoDUMMY_KO936 936
#define KoDUMMY_KO937 937
#define KoDUMMY_KO938 938
#define KoDUMMY_KO939 939
#define KoDUMMY_KO940 940
#define KoDUMMY_KO941 941
#define KoDUMMY_KO942 942
#define KoDUMMY_KO943 943
#define KoDUMMY_KO944 944
#define KoDUMMY_KO945 945
#define KoDUMMY_KO946 946
#define KoDUMMY_KO947 947
#define KoDUMMY_KO948 948
#define KoDUMMY_KO949 949
#define KoDUMMY_KO950 950
#define KoDUMMY_KO951 951
#define KoDUMMY_KO952 952
#define KoDUMMY_KO953 953
#define KoDUMMY_KO954 954
#define KoDUMMY_KO955 955
#define KoDUMMY_KO956 956
#define KoDUMMY_KO957 957
#define KoDUMMY_KO958 958
#define KoDUMMY_KO959 959
#define KoDUMMY_KO960 960
#define KoDUMMY_KO961 961
#define KoDUMMY_KO962 962
#define KoDUMMY_KO963 963
#define KoDUMMY_KO964 964
#define KoDUMMY_KO965 965
#define KoDUMMY_KO966 966
#define KoDUMMY_KO967 967
#define KoDUMMY_KO968 968
#define KoDUMMY_KO969 969
#define KoDUMMY_KO970 970
#define KoDUMMY_KO971 971
#define KoDUMMY_KO972 972
#define KoDUMMY_KO973 973
#define KoDUMMY_KO974 974
#define KoDUMMY_KO975 975
#define KoDUMMY_KO976 976
#define KoDUMMY_KO977 977
#define KoDUMMY_KO978 978
#define KoDUMMY_KO979 979
#define KoDUMMY_KO980 980
#define KoDUMMY_KO981 981
#define KoDUMMY_KO982 982
#define KoDUMMY_KO983 983
#define KoDUMMY_KO984 984
#define KoDUMMY_KO985 985
#define KoDUMMY_KO986 986
#define KoDUMMY_KO987 987
#define KoDUMMY_KO988 988
#define KoDUMMY_KO989 989
#define KoDUMMY_KO990 990
#define KoDUMMY_KO991 991
#define KoDUMMY_KO992 992
#define KoDUMMY_KO993 993
#define KoDUMMY_KO994 994
#define KoDUMMY_KO995 995
#define KoDUMMY_KO996 996
#define KoDUMMY_KO997 997
#define KoDUMMY_KO998 998
#define KoDUMMY_KO999 999

// {{0:Objekt}}
#define KoDUMMY_KO1                           (knx.getGroupObject(KoDUMMY_KO1))
// {{0:Objekt}}
#define KoDUMMY_KO2                           (knx.getGroupObject(KoDUMMY_KO2))
// {{0:Objekt}}
#define KoDUMMY_KO3                           (knx.getGroupObject(KoDUMMY_KO3))
// {{0:Objekt}}
#define KoDUMMY_KO4                           (knx.getGroupObject(KoDUMMY_KO4))
// {{0:Objekt}}
#define KoDUMMY_KO5                           (knx.getGroupObject(KoDUMMY_KO5))
// {{0:Objekt}}
#define KoDUMMY_KO6                           (knx.getGroupObject(KoDUMMY_KO6))
// {{0:Objekt}}
#define KoDUMMY_KO7                           (knx.getGroupObject(KoDUMMY_KO7))
// {{0:Objekt}}
#define KoDUMMY_KO8                           (knx.getGroupObject(KoDUMMY_KO8))
// {{0:Objekt}}
#define KoDUMMY_KO9                           (knx.getGroupObject(KoDUMMY_KO9))
// {{0:Objekt}}
#define KoDUMMY_KO10                          (knx.getGroupObject(KoDUMMY_KO10))
// {{0:Objekt}}
#define KoDUMMY_KO11                          (knx.getGroupObject(KoDUMMY_KO11))
// {{0:Objekt}}
#define KoDUMMY_KO12                          (knx.getGroupObject(KoDUMMY_KO12))
// {{0:Objekt}}
#define KoDUMMY_KO13                          (knx.getGroupObject(KoDUMMY_KO13))
// {{0:Objekt}}
#define KoDUMMY_KO14                          (knx.getGroupObject(KoDUMMY_KO14))
// {{0:Objekt}}
#define KoDUMMY_KO15                          (knx.getGroupObject(KoDUMMY_KO15))
// {{0:Objekt}}
#define KoDUMMY_KO16                          (knx.getGroupObject(KoDUMMY_KO16))
// {{0:Objekt}}
#define KoDUMMY_KO17                          (knx.getGroupObject(KoDUMMY_KO17))
// {{0:Objekt}}
#define KoDUMMY_KO18                          (knx.getGroupObject(KoDUMMY_KO18))
// {{0:Objekt}}
#define KoDUMMY_KO19                          (knx.getGroupObject(KoDUMMY_KO19))
// {{0:Objekt}}
#define KoDUMMY_KO20                          (knx.getGroupObject(KoDUMMY_KO20))
// {{0:Objekt}}
#define KoDUMMY_KO21                          (knx.getGroupObject(KoDUMMY_KO21))
// {{0:Objekt}}
#define KoDUMMY_KO22                          (knx.getGroupObject(KoDUMMY_KO22))
// {{0:Objekt}}
#define KoDUMMY_KO23                          (knx.getGroupObject(KoDUMMY_KO23))
// {{0:Objekt}}
#define KoDUMMY_KO24                          (knx.getGroupObject(KoDUMMY_KO24))
// {{0:Objekt}}
#define KoDUMMY_KO25                          (knx.getGroupObject(KoDUMMY_KO25))
// {{0:Objekt}}
#define KoDUMMY_KO26                          (knx.getGroupObject(KoDUMMY_KO26))
// {{0:Objekt}}
#define KoDUMMY_KO27                          (knx.getGroupObject(KoDUMMY_KO27))
// {{0:Objekt}}
#define KoDUMMY_KO28                          (knx.getGroupObject(KoDUMMY_KO28))
// {{0:Objekt}}
#define KoDUMMY_KO29                          (knx.getGroupObject(KoDUMMY_KO29))
// {{0:Objekt}}
#define KoDUMMY_KO30                          (knx.getGroupObject(KoDUMMY_KO30))
// {{0:Objekt}}
#define KoDUMMY_KO31                          (knx.getGroupObject(KoDUMMY_KO31))
// {{0:Objekt}}
#define KoDUMMY_KO32                          (knx.getGroupObject(KoDUMMY_KO32))
// {{0:Objekt}}
#define KoDUMMY_KO33                          (knx.getGroupObject(KoDUMMY_KO33))
// {{0:Objekt}}
#define KoDUMMY_KO34                          (knx.getGroupObject(KoDUMMY_KO34))
// {{0:Objekt}}
#define KoDUMMY_KO35                          (knx.getGroupObject(KoDUMMY_KO35))
// {{0:Objekt}}
#define KoDUMMY_KO36                          (knx.getGroupObject(KoDUMMY_KO36))
// {{0:Objekt}}
#define KoDUMMY_KO37                          (knx.getGroupObject(KoDUMMY_KO37))
// {{0:Objekt}}
#define KoDUMMY_KO38                          (knx.getGroupObject(KoDUMMY_KO38))
// {{0:Objekt}}
#define KoDUMMY_KO39                          (knx.getGroupObject(KoDUMMY_KO39))
// {{0:Objekt}}
#define KoDUMMY_KO40                          (knx.getGroupObject(KoDUMMY_KO40))
// {{0:Objekt}}
#define KoDUMMY_KO41                          (knx.getGroupObject(KoDUMMY_KO41))
// {{0:Objekt}}
#define KoDUMMY_KO42                          (knx.getGroupObject(KoDUMMY_KO42))
// {{0:Objekt}}
#define KoDUMMY_KO43                          (knx.getGroupObject(KoDUMMY_KO43))
// {{0:Objekt}}
#define KoDUMMY_KO44                          (knx.getGroupObject(KoDUMMY_KO44))
// {{0:Objekt}}
#define KoDUMMY_KO45                          (knx.getGroupObject(KoDUMMY_KO45))
// {{0:Objekt}}
#define KoDUMMY_KO46                          (knx.getGroupObject(KoDUMMY_KO46))
// {{0:Objekt}}
#define KoDUMMY_KO47                          (knx.getGroupObject(KoDUMMY_KO47))
// {{0:Objekt}}
#define KoDUMMY_KO48                          (knx.getGroupObject(KoDUMMY_KO48))
// {{0:Objekt}}
#define KoDUMMY_KO49                          (knx.getGroupObject(KoDUMMY_KO49))
// {{0:Objekt}}
#define KoDUMMY_KO50                          (knx.getGroupObject(KoDUMMY_KO50))
// {{0:Objekt}}
#define KoDUMMY_KO51                          (knx.getGroupObject(KoDUMMY_KO51))
// {{0:Objekt}}
#define KoDUMMY_KO52                          (knx.getGroupObject(KoDUMMY_KO52))
// {{0:Objekt}}
#define KoDUMMY_KO53                          (knx.getGroupObject(KoDUMMY_KO53))
// {{0:Objekt}}
#define KoDUMMY_KO54                          (knx.getGroupObject(KoDUMMY_KO54))
// {{0:Objekt}}
#define KoDUMMY_KO55                          (knx.getGroupObject(KoDUMMY_KO55))
// {{0:Objekt}}
#define KoDUMMY_KO56                          (knx.getGroupObject(KoDUMMY_KO56))
// {{0:Objekt}}
#define KoDUMMY_KO57                          (knx.getGroupObject(KoDUMMY_KO57))
// {{0:Objekt}}
#define KoDUMMY_KO58                          (knx.getGroupObject(KoDUMMY_KO58))
// {{0:Objekt}}
#define KoDUMMY_KO59                          (knx.getGroupObject(KoDUMMY_KO59))
// {{0:Objekt}}
#define KoDUMMY_KO60                          (knx.getGroupObject(KoDUMMY_KO60))
// {{0:Objekt}}
#define KoDUMMY_KO61                          (knx.getGroupObject(KoDUMMY_KO61))
// {{0:Objekt}}
#define KoDUMMY_KO62                          (knx.getGroupObject(KoDUMMY_KO62))
// {{0:Objekt}}
#define KoDUMMY_KO63                          (knx.getGroupObject(KoDUMMY_KO63))
// {{0:Objekt}}
#define KoDUMMY_KO64                          (knx.getGroupObject(KoDUMMY_KO64))
// {{0:Objekt}}
#define KoDUMMY_KO65                          (knx.getGroupObject(KoDUMMY_KO65))
// {{0:Objekt}}
#define KoDUMMY_KO66                          (knx.getGroupObject(KoDUMMY_KO66))
// {{0:Objekt}}
#define KoDUMMY_KO67                          (knx.getGroupObject(KoDUMMY_KO67))
// {{0:Objekt}}
#define KoDUMMY_KO68                          (knx.getGroupObject(KoDUMMY_KO68))
// {{0:Objekt}}
#define KoDUMMY_KO69                          (knx.getGroupObject(KoDUMMY_KO69))
// {{0:Objekt}}
#define KoDUMMY_KO70                          (knx.getGroupObject(KoDUMMY_KO70))
// {{0:Objekt}}
#define KoDUMMY_KO71                          (knx.getGroupObject(KoDUMMY_KO71))
// {{0:Objekt}}
#define KoDUMMY_KO72                          (knx.getGroupObject(KoDUMMY_KO72))
// {{0:Objekt}}
#define KoDUMMY_KO73                          (knx.getGroupObject(KoDUMMY_KO73))
// {{0:Objekt}}
#define KoDUMMY_KO74                          (knx.getGroupObject(KoDUMMY_KO74))
// {{0:Objekt}}
#define KoDUMMY_KO75                          (knx.getGroupObject(KoDUMMY_KO75))
// {{0:Objekt}}
#define KoDUMMY_KO76                          (knx.getGroupObject(KoDUMMY_KO76))
// {{0:Objekt}}
#define KoDUMMY_KO77                          (knx.getGroupObject(KoDUMMY_KO77))
// {{0:Objekt}}
#define KoDUMMY_KO78                          (knx.getGroupObject(KoDUMMY_KO78))
// {{0:Objekt}}
#define KoDUMMY_KO79                          (knx.getGroupObject(KoDUMMY_KO79))
// {{0:Objekt}}
#define KoDUMMY_KO80                          (knx.getGroupObject(KoDUMMY_KO80))
// {{0:Objekt}}
#define KoDUMMY_KO81                          (knx.getGroupObject(KoDUMMY_KO81))
// {{0:Objekt}}
#define KoDUMMY_KO82                          (knx.getGroupObject(KoDUMMY_KO82))
// {{0:Objekt}}
#define KoDUMMY_KO83                          (knx.getGroupObject(KoDUMMY_KO83))
// {{0:Objekt}}
#define KoDUMMY_KO84                          (knx.getGroupObject(KoDUMMY_KO84))
// {{0:Objekt}}
#define KoDUMMY_KO85                          (knx.getGroupObject(KoDUMMY_KO85))
// {{0:Objekt}}
#define KoDUMMY_KO86                          (knx.getGroupObject(KoDUMMY_KO86))
// {{0:Objekt}}
#define KoDUMMY_KO87                          (knx.getGroupObject(KoDUMMY_KO87))
// {{0:Objekt}}
#define KoDUMMY_KO88                          (knx.getGroupObject(KoDUMMY_KO88))
// {{0:Objekt}}
#define KoDUMMY_KO89                          (knx.getGroupObject(KoDUMMY_KO89))
// {{0:Objekt}}
#define KoDUMMY_KO90                          (knx.getGroupObject(KoDUMMY_KO90))
// {{0:Objekt}}
#define KoDUMMY_KO91                          (knx.getGroupObject(KoDUMMY_KO91))
// {{0:Objekt}}
#define KoDUMMY_KO92                          (knx.getGroupObject(KoDUMMY_KO92))
// {{0:Objekt}}
#define KoDUMMY_KO93                          (knx.getGroupObject(KoDUMMY_KO93))
// {{0:Objekt}}
#define KoDUMMY_KO94                          (knx.getGroupObject(KoDUMMY_KO94))
// {{0:Objekt}}
#define KoDUMMY_KO95                          (knx.getGroupObject(KoDUMMY_KO95))
// {{0:Objekt}}
#define KoDUMMY_KO96                          (knx.getGroupObject(KoDUMMY_KO96))
// {{0:Objekt}}
#define KoDUMMY_KO97                          (knx.getGroupObject(KoDUMMY_KO97))
// {{0:Objekt}}
#define KoDUMMY_KO98                          (knx.getGroupObject(KoDUMMY_KO98))
// {{0:Objekt}}
#define KoDUMMY_KO99                          (knx.getGroupObject(KoDUMMY_KO99))
// {{0:Objekt}}
#define KoDUMMY_KO100                         (knx.getGroupObject(KoDUMMY_KO100))
// {{0:Objekt}}
#define KoDUMMY_KO101                         (knx.getGroupObject(KoDUMMY_KO101))
// {{0:Objekt}}
#define KoDUMMY_KO102                         (knx.getGroupObject(KoDUMMY_KO102))
// {{0:Objekt}}
#define KoDUMMY_KO103                         (knx.getGroupObject(KoDUMMY_KO103))
// {{0:Objekt}}
#define KoDUMMY_KO104                         (knx.getGroupObject(KoDUMMY_KO104))
// {{0:Objekt}}
#define KoDUMMY_KO105                         (knx.getGroupObject(KoDUMMY_KO105))
// {{0:Objekt}}
#define KoDUMMY_KO106                         (knx.getGroupObject(KoDUMMY_KO106))
// {{0:Objekt}}
#define KoDUMMY_KO107                         (knx.getGroupObject(KoDUMMY_KO107))
// {{0:Objekt}}
#define KoDUMMY_KO108                         (knx.getGroupObject(KoDUMMY_KO108))
// {{0:Objekt}}
#define KoDUMMY_KO109                         (knx.getGroupObject(KoDUMMY_KO109))
// {{0:Objekt}}
#define KoDUMMY_KO110                         (knx.getGroupObject(KoDUMMY_KO110))
// {{0:Objekt}}
#define KoDUMMY_KO111                         (knx.getGroupObject(KoDUMMY_KO111))
// {{0:Objekt}}
#define KoDUMMY_KO112                         (knx.getGroupObject(KoDUMMY_KO112))
// {{0:Objekt}}
#define KoDUMMY_KO113                         (knx.getGroupObject(KoDUMMY_KO113))
// {{0:Objekt}}
#define KoDUMMY_KO114                         (knx.getGroupObject(KoDUMMY_KO114))
// {{0:Objekt}}
#define KoDUMMY_KO115                         (knx.getGroupObject(KoDUMMY_KO115))
// {{0:Objekt}}
#define KoDUMMY_KO116                         (knx.getGroupObject(KoDUMMY_KO116))
// {{0:Objekt}}
#define KoDUMMY_KO117                         (knx.getGroupObject(KoDUMMY_KO117))
// {{0:Objekt}}
#define KoDUMMY_KO118                         (knx.getGroupObject(KoDUMMY_KO118))
// {{0:Objekt}}
#define KoDUMMY_KO119                         (knx.getGroupObject(KoDUMMY_KO119))
// {{0:Objekt}}
#define KoDUMMY_KO120                         (knx.getGroupObject(KoDUMMY_KO120))
// {{0:Objekt}}
#define KoDUMMY_KO121                         (knx.getGroupObject(KoDUMMY_KO121))
// {{0:Objekt}}
#define KoDUMMY_KO122                         (knx.getGroupObject(KoDUMMY_KO122))
// {{0:Objekt}}
#define KoDUMMY_KO123                         (knx.getGroupObject(KoDUMMY_KO123))
// {{0:Objekt}}
#define KoDUMMY_KO124                         (knx.getGroupObject(KoDUMMY_KO124))
// {{0:Objekt}}
#define KoDUMMY_KO125                         (knx.getGroupObject(KoDUMMY_KO125))
// {{0:Objekt}}
#define KoDUMMY_KO126                         (knx.getGroupObject(KoDUMMY_KO126))
// {{0:Objekt}}
#define KoDUMMY_KO127                         (knx.getGroupObject(KoDUMMY_KO127))
// {{0:Objekt}}
#define KoDUMMY_KO128                         (knx.getGroupObject(KoDUMMY_KO128))
// {{0:Objekt}}
#define KoDUMMY_KO129                         (knx.getGroupObject(KoDUMMY_KO129))
// {{0:Objekt}}
#define KoDUMMY_KO130                         (knx.getGroupObject(KoDUMMY_KO130))
// {{0:Objekt}}
#define KoDUMMY_KO131                         (knx.getGroupObject(KoDUMMY_KO131))
// {{0:Objekt}}
#define KoDUMMY_KO132                         (knx.getGroupObject(KoDUMMY_KO132))
// {{0:Objekt}}
#define KoDUMMY_KO133                         (knx.getGroupObject(KoDUMMY_KO133))
// {{0:Objekt}}
#define KoDUMMY_KO134                         (knx.getGroupObject(KoDUMMY_KO134))
// {{0:Objekt}}
#define KoDUMMY_KO135                         (knx.getGroupObject(KoDUMMY_KO135))
// {{0:Objekt}}
#define KoDUMMY_KO136                         (knx.getGroupObject(KoDUMMY_KO136))
// {{0:Objekt}}
#define KoDUMMY_KO137                         (knx.getGroupObject(KoDUMMY_KO137))
// {{0:Objekt}}
#define KoDUMMY_KO138                         (knx.getGroupObject(KoDUMMY_KO138))
// {{0:Objekt}}
#define KoDUMMY_KO139                         (knx.getGroupObject(KoDUMMY_KO139))
// {{0:Objekt}}
#define KoDUMMY_KO140                         (knx.getGroupObject(KoDUMMY_KO140))
// {{0:Objekt}}
#define KoDUMMY_KO141                         (knx.getGroupObject(KoDUMMY_KO141))
// {{0:Objekt}}
#define KoDUMMY_KO142                         (knx.getGroupObject(KoDUMMY_KO142))
// {{0:Objekt}}
#define KoDUMMY_KO143                         (knx.getGroupObject(KoDUMMY_KO143))
// {{0:Objekt}}
#define KoDUMMY_KO144                         (knx.getGroupObject(KoDUMMY_KO144))
// {{0:Objekt}}
#define KoDUMMY_KO145                         (knx.getGroupObject(KoDUMMY_KO145))
// {{0:Objekt}}
#define KoDUMMY_KO146                         (knx.getGroupObject(KoDUMMY_KO146))
// {{0:Objekt}}
#define KoDUMMY_KO147                         (knx.getGroupObject(KoDUMMY_KO147))
// {{0:Objekt}}
#define KoDUMMY_KO148                         (knx.getGroupObject(KoDUMMY_KO148))
// {{0:Objekt}}
#define KoDUMMY_KO149                         (knx.getGroupObject(KoDUMMY_KO149))
// {{0:Objekt}}
#define KoDUMMY_KO150                         (knx.getGroupObject(KoDUMMY_KO150))
// {{0:Objekt}}
#define KoDUMMY_KO151                         (knx.getGroupObject(KoDUMMY_KO151))
// {{0:Objekt}}
#define KoDUMMY_KO152                         (knx.getGroupObject(KoDUMMY_KO152))
// {{0:Objekt}}
#define KoDUMMY_KO153                         (knx.getGroupObject(KoDUMMY_KO153))
// {{0:Objekt}}
#define KoDUMMY_KO154                         (knx.getGroupObject(KoDUMMY_KO154))
// {{0:Objekt}}
#define KoDUMMY_KO155                         (knx.getGroupObject(KoDUMMY_KO155))
// {{0:Objekt}}
#define KoDUMMY_KO156                         (knx.getGroupObject(KoDUMMY_KO156))
// {{0:Objekt}}
#define KoDUMMY_KO157                         (knx.getGroupObject(KoDUMMY_KO157))
// {{0:Objekt}}
#define KoDUMMY_KO158                         (knx.getGroupObject(KoDUMMY_KO158))
// {{0:Objekt}}
#define KoDUMMY_KO159                         (knx.getGroupObject(KoDUMMY_KO159))
// {{0:Objekt}}
#define KoDUMMY_KO160                         (knx.getGroupObject(KoDUMMY_KO160))
// {{0:Objekt}}
#define KoDUMMY_KO161                         (knx.getGroupObject(KoDUMMY_KO161))
// {{0:Objekt}}
#define KoDUMMY_KO162                         (knx.getGroupObject(KoDUMMY_KO162))
// {{0:Objekt}}
#define KoDUMMY_KO163                         (knx.getGroupObject(KoDUMMY_KO163))
// {{0:Objekt}}
#define KoDUMMY_KO164                         (knx.getGroupObject(KoDUMMY_KO164))
// {{0:Objekt}}
#define KoDUMMY_KO165                         (knx.getGroupObject(KoDUMMY_KO165))
// {{0:Objekt}}
#define KoDUMMY_KO166                         (knx.getGroupObject(KoDUMMY_KO166))
// {{0:Objekt}}
#define KoDUMMY_KO167                         (knx.getGroupObject(KoDUMMY_KO167))
// {{0:Objekt}}
#define KoDUMMY_KO168                         (knx.getGroupObject(KoDUMMY_KO168))
// {{0:Objekt}}
#define KoDUMMY_KO169                         (knx.getGroupObject(KoDUMMY_KO169))
// {{0:Objekt}}
#define KoDUMMY_KO170                         (knx.getGroupObject(KoDUMMY_KO170))
// {{0:Objekt}}
#define KoDUMMY_KO171                         (knx.getGroupObject(KoDUMMY_KO171))
// {{0:Objekt}}
#define KoDUMMY_KO172                         (knx.getGroupObject(KoDUMMY_KO172))
// {{0:Objekt}}
#define KoDUMMY_KO173                         (knx.getGroupObject(KoDUMMY_KO173))
// {{0:Objekt}}
#define KoDUMMY_KO174                         (knx.getGroupObject(KoDUMMY_KO174))
// {{0:Objekt}}
#define KoDUMMY_KO175                         (knx.getGroupObject(KoDUMMY_KO175))
// {{0:Objekt}}
#define KoDUMMY_KO176                         (knx.getGroupObject(KoDUMMY_KO176))
// {{0:Objekt}}
#define KoDUMMY_KO177                         (knx.getGroupObject(KoDUMMY_KO177))
// {{0:Objekt}}
#define KoDUMMY_KO178                         (knx.getGroupObject(KoDUMMY_KO178))
// {{0:Objekt}}
#define KoDUMMY_KO179                         (knx.getGroupObject(KoDUMMY_KO179))
// {{0:Objekt}}
#define KoDUMMY_KO180                         (knx.getGroupObject(KoDUMMY_KO180))
// {{0:Objekt}}
#define KoDUMMY_KO181                         (knx.getGroupObject(KoDUMMY_KO181))
// {{0:Objekt}}
#define KoDUMMY_KO182                         (knx.getGroupObject(KoDUMMY_KO182))
// {{0:Objekt}}
#define KoDUMMY_KO183                         (knx.getGroupObject(KoDUMMY_KO183))
// {{0:Objekt}}
#define KoDUMMY_KO184                         (knx.getGroupObject(KoDUMMY_KO184))
// {{0:Objekt}}
#define KoDUMMY_KO185                         (knx.getGroupObject(KoDUMMY_KO185))
// {{0:Objekt}}
#define KoDUMMY_KO186                         (knx.getGroupObject(KoDUMMY_KO186))
// {{0:Objekt}}
#define KoDUMMY_KO187                         (knx.getGroupObject(KoDUMMY_KO187))
// {{0:Objekt}}
#define KoDUMMY_KO188                         (knx.getGroupObject(KoDUMMY_KO188))
// {{0:Objekt}}
#define KoDUMMY_KO189                         (knx.getGroupObject(KoDUMMY_KO189))
// {{0:Objekt}}
#define KoDUMMY_KO190                         (knx.getGroupObject(KoDUMMY_KO190))
// {{0:Objekt}}
#define KoDUMMY_KO191                         (knx.getGroupObject(KoDUMMY_KO191))
// {{0:Objekt}}
#define KoDUMMY_KO192                         (knx.getGroupObject(KoDUMMY_KO192))
// {{0:Objekt}}
#define KoDUMMY_KO193                         (knx.getGroupObject(KoDUMMY_KO193))
// {{0:Objekt}}
#define KoDUMMY_KO194                         (knx.getGroupObject(KoDUMMY_KO194))
// {{0:Objekt}}
#define KoDUMMY_KO195                         (knx.getGroupObject(KoDUMMY_KO195))
// {{0:Objekt}}
#define KoDUMMY_KO196                         (knx.getGroupObject(KoDUMMY_KO196))
// {{0:Objekt}}
#define KoDUMMY_KO197                         (knx.getGroupObject(KoDUMMY_KO197))
// {{0:Objekt}}
#define KoDUMMY_KO198                         (knx.getGroupObject(KoDUMMY_KO198))
// {{0:Objekt}}
#define KoDUMMY_KO199                         (knx.getGroupObject(KoDUMMY_KO199))
// {{0:Objekt}}
#define KoDUMMY_KO200                         (knx.getGroupObject(KoDUMMY_KO200))
// {{0:Objekt}}
#define KoDUMMY_KO201                         (knx.getGroupObject(KoDUMMY_KO201))
// {{0:Objekt}}
#define KoDUMMY_KO202                         (knx.getGroupObject(KoDUMMY_KO202))
// {{0:Objekt}}
#define KoDUMMY_KO203                         (knx.getGroupObject(KoDUMMY_KO203))
// {{0:Objekt}}
#define KoDUMMY_KO204                         (knx.getGroupObject(KoDUMMY_KO204))
// {{0:Objekt}}
#define KoDUMMY_KO205                         (knx.getGroupObject(KoDUMMY_KO205))
// {{0:Objekt}}
#define KoDUMMY_KO206                         (knx.getGroupObject(KoDUMMY_KO206))
// {{0:Objekt}}
#define KoDUMMY_KO207                         (knx.getGroupObject(KoDUMMY_KO207))
// {{0:Objekt}}
#define KoDUMMY_KO208                         (knx.getGroupObject(KoDUMMY_KO208))
// {{0:Objekt}}
#define KoDUMMY_KO209                         (knx.getGroupObject(KoDUMMY_KO209))
// {{0:Objekt}}
#define KoDUMMY_KO210                         (knx.getGroupObject(KoDUMMY_KO210))
// {{0:Objekt}}
#define KoDUMMY_KO211                         (knx.getGroupObject(KoDUMMY_KO211))
// {{0:Objekt}}
#define KoDUMMY_KO212                         (knx.getGroupObject(KoDUMMY_KO212))
// {{0:Objekt}}
#define KoDUMMY_KO213                         (knx.getGroupObject(KoDUMMY_KO213))
// {{0:Objekt}}
#define KoDUMMY_KO214                         (knx.getGroupObject(KoDUMMY_KO214))
// {{0:Objekt}}
#define KoDUMMY_KO215                         (knx.getGroupObject(KoDUMMY_KO215))
// {{0:Objekt}}
#define KoDUMMY_KO216                         (knx.getGroupObject(KoDUMMY_KO216))
// {{0:Objekt}}
#define KoDUMMY_KO217                         (knx.getGroupObject(KoDUMMY_KO217))
// {{0:Objekt}}
#define KoDUMMY_KO218                         (knx.getGroupObject(KoDUMMY_KO218))
// {{0:Objekt}}
#define KoDUMMY_KO219                         (knx.getGroupObject(KoDUMMY_KO219))
// {{0:Objekt}}
#define KoDUMMY_KO220                         (knx.getGroupObject(KoDUMMY_KO220))
// {{0:Objekt}}
#define KoDUMMY_KO221                         (knx.getGroupObject(KoDUMMY_KO221))
// {{0:Objekt}}
#define KoDUMMY_KO222                         (knx.getGroupObject(KoDUMMY_KO222))
// {{0:Objekt}}
#define KoDUMMY_KO223                         (knx.getGroupObject(KoDUMMY_KO223))
// {{0:Objekt}}
#define KoDUMMY_KO224                         (knx.getGroupObject(KoDUMMY_KO224))
// {{0:Objekt}}
#define KoDUMMY_KO225                         (knx.getGroupObject(KoDUMMY_KO225))
// {{0:Objekt}}
#define KoDUMMY_KO226                         (knx.getGroupObject(KoDUMMY_KO226))
// {{0:Objekt}}
#define KoDUMMY_KO227                         (knx.getGroupObject(KoDUMMY_KO227))
// {{0:Objekt}}
#define KoDUMMY_KO228                         (knx.getGroupObject(KoDUMMY_KO228))
// {{0:Objekt}}
#define KoDUMMY_KO229                         (knx.getGroupObject(KoDUMMY_KO229))
// {{0:Objekt}}
#define KoDUMMY_KO230                         (knx.getGroupObject(KoDUMMY_KO230))
// {{0:Objekt}}
#define KoDUMMY_KO231                         (knx.getGroupObject(KoDUMMY_KO231))
// {{0:Objekt}}
#define KoDUMMY_KO232                         (knx.getGroupObject(KoDUMMY_KO232))
// {{0:Objekt}}
#define KoDUMMY_KO233                         (knx.getGroupObject(KoDUMMY_KO233))
// {{0:Objekt}}
#define KoDUMMY_KO234                         (knx.getGroupObject(KoDUMMY_KO234))
// {{0:Objekt}}
#define KoDUMMY_KO235                         (knx.getGroupObject(KoDUMMY_KO235))
// {{0:Objekt}}
#define KoDUMMY_KO236                         (knx.getGroupObject(KoDUMMY_KO236))
// {{0:Objekt}}
#define KoDUMMY_KO237                         (knx.getGroupObject(KoDUMMY_KO237))
// {{0:Objekt}}
#define KoDUMMY_KO238                         (knx.getGroupObject(KoDUMMY_KO238))
// {{0:Objekt}}
#define KoDUMMY_KO239                         (knx.getGroupObject(KoDUMMY_KO239))
// {{0:Objekt}}
#define KoDUMMY_KO240                         (knx.getGroupObject(KoDUMMY_KO240))
// {{0:Objekt}}
#define KoDUMMY_KO241                         (knx.getGroupObject(KoDUMMY_KO241))
// {{0:Objekt}}
#define KoDUMMY_KO242                         (knx.getGroupObject(KoDUMMY_KO242))
// {{0:Objekt}}
#define KoDUMMY_KO243                         (knx.getGroupObject(KoDUMMY_KO243))
// {{0:Objekt}}
#define KoDUMMY_KO244                         (knx.getGroupObject(KoDUMMY_KO244))
// {{0:Objekt}}
#define KoDUMMY_KO245                         (knx.getGroupObject(KoDUMMY_KO245))
// {{0:Objekt}}
#define KoDUMMY_KO246                         (knx.getGroupObject(KoDUMMY_KO246))
// {{0:Objekt}}
#define KoDUMMY_KO247                         (knx.getGroupObject(KoDUMMY_KO247))
// {{0:Objekt}}
#define KoDUMMY_KO248                         (knx.getGroupObject(KoDUMMY_KO248))
// {{0:Objekt}}
#define KoDUMMY_KO249                         (knx.getGroupObject(KoDUMMY_KO249))
// {{0:Objekt}}
#define KoDUMMY_KO250                         (knx.getGroupObject(KoDUMMY_KO250))
// {{0:Objekt}}
#define KoDUMMY_KO251                         (knx.getGroupObject(KoDUMMY_KO251))
// {{0:Objekt}}
#define KoDUMMY_KO252                         (knx.getGroupObject(KoDUMMY_KO252))
// {{0:Objekt}}
#define KoDUMMY_KO253                         (knx.getGroupObject(KoDUMMY_KO253))
// {{0:Objekt}}
#define KoDUMMY_KO254                         (knx.getGroupObject(KoDUMMY_KO254))
// {{0:Objekt}}
#define KoDUMMY_KO255                         (knx.getGroupObject(KoDUMMY_KO255))
// {{0:Objekt}}
#define KoDUMMY_KO256                         (knx.getGroupObject(KoDUMMY_KO256))
// {{0:Objekt}}
#define KoDUMMY_KO257                         (knx.getGroupObject(KoDUMMY_KO257))
// {{0:Objekt}}
#define KoDUMMY_KO258                         (knx.getGroupObject(KoDUMMY_KO258))
// {{0:Objekt}}
#define KoDUMMY_KO259                         (knx.getGroupObject(KoDUMMY_KO259))
// {{0:Objekt}}
#define KoDUMMY_KO260                         (knx.getGroupObject(KoDUMMY_KO260))
// {{0:Objekt}}
#define KoDUMMY_KO261                         (knx.getGroupObject(KoDUMMY_KO261))
// {{0:Objekt}}
#define KoDUMMY_KO262                         (knx.getGroupObject(KoDUMMY_KO262))
// {{0:Objekt}}
#define KoDUMMY_KO263                         (knx.getGroupObject(KoDUMMY_KO263))
// {{0:Objekt}}
#define KoDUMMY_KO264                         (knx.getGroupObject(KoDUMMY_KO264))
// {{0:Objekt}}
#define KoDUMMY_KO265                         (knx.getGroupObject(KoDUMMY_KO265))
// {{0:Objekt}}
#define KoDUMMY_KO266                         (knx.getGroupObject(KoDUMMY_KO266))
// {{0:Objekt}}
#define KoDUMMY_KO267                         (knx.getGroupObject(KoDUMMY_KO267))
// {{0:Objekt}}
#define KoDUMMY_KO268                         (knx.getGroupObject(KoDUMMY_KO268))
// {{0:Objekt}}
#define KoDUMMY_KO269                         (knx.getGroupObject(KoDUMMY_KO269))
// {{0:Objekt}}
#define KoDUMMY_KO270                         (knx.getGroupObject(KoDUMMY_KO270))
// {{0:Objekt}}
#define KoDUMMY_KO271                         (knx.getGroupObject(KoDUMMY_KO271))
// {{0:Objekt}}
#define KoDUMMY_KO272                         (knx.getGroupObject(KoDUMMY_KO272))
// {{0:Objekt}}
#define KoDUMMY_KO273                         (knx.getGroupObject(KoDUMMY_KO273))
// {{0:Objekt}}
#define KoDUMMY_KO274                         (knx.getGroupObject(KoDUMMY_KO274))
// {{0:Objekt}}
#define KoDUMMY_KO275                         (knx.getGroupObject(KoDUMMY_KO275))
// {{0:Objekt}}
#define KoDUMMY_KO276                         (knx.getGroupObject(KoDUMMY_KO276))
// {{0:Objekt}}
#define KoDUMMY_KO277                         (knx.getGroupObject(KoDUMMY_KO277))
// {{0:Objekt}}
#define KoDUMMY_KO278                         (knx.getGroupObject(KoDUMMY_KO278))
// {{0:Objekt}}
#define KoDUMMY_KO279                         (knx.getGroupObject(KoDUMMY_KO279))
// {{0:Objekt}}
#define KoDUMMY_KO280                         (knx.getGroupObject(KoDUMMY_KO280))
// {{0:Objekt}}
#define KoDUMMY_KO281                         (knx.getGroupObject(KoDUMMY_KO281))
// {{0:Objekt}}
#define KoDUMMY_KO282                         (knx.getGroupObject(KoDUMMY_KO282))
// {{0:Objekt}}
#define KoDUMMY_KO283                         (knx.getGroupObject(KoDUMMY_KO283))
// {{0:Objekt}}
#define KoDUMMY_KO284                         (knx.getGroupObject(KoDUMMY_KO284))
// {{0:Objekt}}
#define KoDUMMY_KO285                         (knx.getGroupObject(KoDUMMY_KO285))
// {{0:Objekt}}
#define KoDUMMY_KO286                         (knx.getGroupObject(KoDUMMY_KO286))
// {{0:Objekt}}
#define KoDUMMY_KO287                         (knx.getGroupObject(KoDUMMY_KO287))
// {{0:Objekt}}
#define KoDUMMY_KO288                         (knx.getGroupObject(KoDUMMY_KO288))
// {{0:Objekt}}
#define KoDUMMY_KO289                         (knx.getGroupObject(KoDUMMY_KO289))
// {{0:Objekt}}
#define KoDUMMY_KO290                         (knx.getGroupObject(KoDUMMY_KO290))
// {{0:Objekt}}
#define KoDUMMY_KO291                         (knx.getGroupObject(KoDUMMY_KO291))
// {{0:Objekt}}
#define KoDUMMY_KO292                         (knx.getGroupObject(KoDUMMY_KO292))
// {{0:Objekt}}
#define KoDUMMY_KO293                         (knx.getGroupObject(KoDUMMY_KO293))
// {{0:Objekt}}
#define KoDUMMY_KO294                         (knx.getGroupObject(KoDUMMY_KO294))
// {{0:Objekt}}
#define KoDUMMY_KO295                         (knx.getGroupObject(KoDUMMY_KO295))
// {{0:Objekt}}
#define KoDUMMY_KO296                         (knx.getGroupObject(KoDUMMY_KO296))
// {{0:Objekt}}
#define KoDUMMY_KO297                         (knx.getGroupObject(KoDUMMY_KO297))
// {{0:Objekt}}
#define KoDUMMY_KO298                         (knx.getGroupObject(KoDUMMY_KO298))
// {{0:Objekt}}
#define KoDUMMY_KO299                         (knx.getGroupObject(KoDUMMY_KO299))
// {{0:Objekt}}
#define KoDUMMY_KO300                         (knx.getGroupObject(KoDUMMY_KO300))
// {{0:Objekt}}
#define KoDUMMY_KO301                         (knx.getGroupObject(KoDUMMY_KO301))
// {{0:Objekt}}
#define KoDUMMY_KO302                         (knx.getGroupObject(KoDUMMY_KO302))
// {{0:Objekt}}
#define KoDUMMY_KO303                         (knx.getGroupObject(KoDUMMY_KO303))
// {{0:Objekt}}
#define KoDUMMY_KO304                         (knx.getGroupObject(KoDUMMY_KO304))
// {{0:Objekt}}
#define KoDUMMY_KO305                         (knx.getGroupObject(KoDUMMY_KO305))
// {{0:Objekt}}
#define KoDUMMY_KO306                         (knx.getGroupObject(KoDUMMY_KO306))
// {{0:Objekt}}
#define KoDUMMY_KO307                         (knx.getGroupObject(KoDUMMY_KO307))
// {{0:Objekt}}
#define KoDUMMY_KO308                         (knx.getGroupObject(KoDUMMY_KO308))
// {{0:Objekt}}
#define KoDUMMY_KO309                         (knx.getGroupObject(KoDUMMY_KO309))
// {{0:Objekt}}
#define KoDUMMY_KO310                         (knx.getGroupObject(KoDUMMY_KO310))
// {{0:Objekt}}
#define KoDUMMY_KO311                         (knx.getGroupObject(KoDUMMY_KO311))
// {{0:Objekt}}
#define KoDUMMY_KO312                         (knx.getGroupObject(KoDUMMY_KO312))
// {{0:Objekt}}
#define KoDUMMY_KO313                         (knx.getGroupObject(KoDUMMY_KO313))
// {{0:Objekt}}
#define KoDUMMY_KO314                         (knx.getGroupObject(KoDUMMY_KO314))
// {{0:Objekt}}
#define KoDUMMY_KO315                         (knx.getGroupObject(KoDUMMY_KO315))
// {{0:Objekt}}
#define KoDUMMY_KO316                         (knx.getGroupObject(KoDUMMY_KO316))
// {{0:Objekt}}
#define KoDUMMY_KO317                         (knx.getGroupObject(KoDUMMY_KO317))
// {{0:Objekt}}
#define KoDUMMY_KO318                         (knx.getGroupObject(KoDUMMY_KO318))
// {{0:Objekt}}
#define KoDUMMY_KO319                         (knx.getGroupObject(KoDUMMY_KO319))
// {{0:Objekt}}
#define KoDUMMY_KO320                         (knx.getGroupObject(KoDUMMY_KO320))
// {{0:Objekt}}
#define KoDUMMY_KO321                         (knx.getGroupObject(KoDUMMY_KO321))
// {{0:Objekt}}
#define KoDUMMY_KO322                         (knx.getGroupObject(KoDUMMY_KO322))
// {{0:Objekt}}
#define KoDUMMY_KO323                         (knx.getGroupObject(KoDUMMY_KO323))
// {{0:Objekt}}
#define KoDUMMY_KO324                         (knx.getGroupObject(KoDUMMY_KO324))
// {{0:Objekt}}
#define KoDUMMY_KO325                         (knx.getGroupObject(KoDUMMY_KO325))
// {{0:Objekt}}
#define KoDUMMY_KO326                         (knx.getGroupObject(KoDUMMY_KO326))
// {{0:Objekt}}
#define KoDUMMY_KO327                         (knx.getGroupObject(KoDUMMY_KO327))
// {{0:Objekt}}
#define KoDUMMY_KO328                         (knx.getGroupObject(KoDUMMY_KO328))
// {{0:Objekt}}
#define KoDUMMY_KO329                         (knx.getGroupObject(KoDUMMY_KO329))
// {{0:Objekt}}
#define KoDUMMY_KO330                         (knx.getGroupObject(KoDUMMY_KO330))
// {{0:Objekt}}
#define KoDUMMY_KO331                         (knx.getGroupObject(KoDUMMY_KO331))
// {{0:Objekt}}
#define KoDUMMY_KO332                         (knx.getGroupObject(KoDUMMY_KO332))
// {{0:Objekt}}
#define KoDUMMY_KO333                         (knx.getGroupObject(KoDUMMY_KO333))
// {{0:Objekt}}
#define KoDUMMY_KO334                         (knx.getGroupObject(KoDUMMY_KO334))
// {{0:Objekt}}
#define KoDUMMY_KO335                         (knx.getGroupObject(KoDUMMY_KO335))
// {{0:Objekt}}
#define KoDUMMY_KO336                         (knx.getGroupObject(KoDUMMY_KO336))
// {{0:Objekt}}
#define KoDUMMY_KO337                         (knx.getGroupObject(KoDUMMY_KO337))
// {{0:Objekt}}
#define KoDUMMY_KO338                         (knx.getGroupObject(KoDUMMY_KO338))
// {{0:Objekt}}
#define KoDUMMY_KO339                         (knx.getGroupObject(KoDUMMY_KO339))
// {{0:Objekt}}
#define KoDUMMY_KO340                         (knx.getGroupObject(KoDUMMY_KO340))
// {{0:Objekt}}
#define KoDUMMY_KO341                         (knx.getGroupObject(KoDUMMY_KO341))
// {{0:Objekt}}
#define KoDUMMY_KO342                         (knx.getGroupObject(KoDUMMY_KO342))
// {{0:Objekt}}
#define KoDUMMY_KO343                         (knx.getGroupObject(KoDUMMY_KO343))
// {{0:Objekt}}
#define KoDUMMY_KO344                         (knx.getGroupObject(KoDUMMY_KO344))
// {{0:Objekt}}
#define KoDUMMY_KO345                         (knx.getGroupObject(KoDUMMY_KO345))
// {{0:Objekt}}
#define KoDUMMY_KO346                         (knx.getGroupObject(KoDUMMY_KO346))
// {{0:Objekt}}
#define KoDUMMY_KO347                         (knx.getGroupObject(KoDUMMY_KO347))
// {{0:Objekt}}
#define KoDUMMY_KO348                         (knx.getGroupObject(KoDUMMY_KO348))
// {{0:Objekt}}
#define KoDUMMY_KO349                         (knx.getGroupObject(KoDUMMY_KO349))
// {{0:Objekt}}
#define KoDUMMY_KO350                         (knx.getGroupObject(KoDUMMY_KO350))
// {{0:Objekt}}
#define KoDUMMY_KO351                         (knx.getGroupObject(KoDUMMY_KO351))
// {{0:Objekt}}
#define KoDUMMY_KO352                         (knx.getGroupObject(KoDUMMY_KO352))
// {{0:Objekt}}
#define KoDUMMY_KO353                         (knx.getGroupObject(KoDUMMY_KO353))
// {{0:Objekt}}
#define KoDUMMY_KO354                         (knx.getGroupObject(KoDUMMY_KO354))
// {{0:Objekt}}
#define KoDUMMY_KO355                         (knx.getGroupObject(KoDUMMY_KO355))
// {{0:Objekt}}
#define KoDUMMY_KO356                         (knx.getGroupObject(KoDUMMY_KO356))
// {{0:Objekt}}
#define KoDUMMY_KO357                         (knx.getGroupObject(KoDUMMY_KO357))
// {{0:Objekt}}
#define KoDUMMY_KO358                         (knx.getGroupObject(KoDUMMY_KO358))
// {{0:Objekt}}
#define KoDUMMY_KO359                         (knx.getGroupObject(KoDUMMY_KO359))
// {{0:Objekt}}
#define KoDUMMY_KO360                         (knx.getGroupObject(KoDUMMY_KO360))
// {{0:Objekt}}
#define KoDUMMY_KO361                         (knx.getGroupObject(KoDUMMY_KO361))
// {{0:Objekt}}
#define KoDUMMY_KO362                         (knx.getGroupObject(KoDUMMY_KO362))
// {{0:Objekt}}
#define KoDUMMY_KO363                         (knx.getGroupObject(KoDUMMY_KO363))
// {{0:Objekt}}
#define KoDUMMY_KO364                         (knx.getGroupObject(KoDUMMY_KO364))
// {{0:Objekt}}
#define KoDUMMY_KO365                         (knx.getGroupObject(KoDUMMY_KO365))
// {{0:Objekt}}
#define KoDUMMY_KO366                         (knx.getGroupObject(KoDUMMY_KO366))
// {{0:Objekt}}
#define KoDUMMY_KO367                         (knx.getGroupObject(KoDUMMY_KO367))
// {{0:Objekt}}
#define KoDUMMY_KO368                         (knx.getGroupObject(KoDUMMY_KO368))
// {{0:Objekt}}
#define KoDUMMY_KO369                         (knx.getGroupObject(KoDUMMY_KO369))
// {{0:Objekt}}
#define KoDUMMY_KO370                         (knx.getGroupObject(KoDUMMY_KO370))
// {{0:Objekt}}
#define KoDUMMY_KO371                         (knx.getGroupObject(KoDUMMY_KO371))
// {{0:Objekt}}
#define KoDUMMY_KO372                         (knx.getGroupObject(KoDUMMY_KO372))
// {{0:Objekt}}
#define KoDUMMY_KO373                         (knx.getGroupObject(KoDUMMY_KO373))
// {{0:Objekt}}
#define KoDUMMY_KO374                         (knx.getGroupObject(KoDUMMY_KO374))
// {{0:Objekt}}
#define KoDUMMY_KO375                         (knx.getGroupObject(KoDUMMY_KO375))
// {{0:Objekt}}
#define KoDUMMY_KO376                         (knx.getGroupObject(KoDUMMY_KO376))
// {{0:Objekt}}
#define KoDUMMY_KO377                         (knx.getGroupObject(KoDUMMY_KO377))
// {{0:Objekt}}
#define KoDUMMY_KO378                         (knx.getGroupObject(KoDUMMY_KO378))
// {{0:Objekt}}
#define KoDUMMY_KO379                         (knx.getGroupObject(KoDUMMY_KO379))
// {{0:Objekt}}
#define KoDUMMY_KO380                         (knx.getGroupObject(KoDUMMY_KO380))
// {{0:Objekt}}
#define KoDUMMY_KO381                         (knx.getGroupObject(KoDUMMY_KO381))
// {{0:Objekt}}
#define KoDUMMY_KO382                         (knx.getGroupObject(KoDUMMY_KO382))
// {{0:Objekt}}
#define KoDUMMY_KO383                         (knx.getGroupObject(KoDUMMY_KO383))
// {{0:Objekt}}
#define KoDUMMY_KO384                         (knx.getGroupObject(KoDUMMY_KO384))
// {{0:Objekt}}
#define KoDUMMY_KO385                         (knx.getGroupObject(KoDUMMY_KO385))
// {{0:Objekt}}
#define KoDUMMY_KO386                         (knx.getGroupObject(KoDUMMY_KO386))
// {{0:Objekt}}
#define KoDUMMY_KO387                         (knx.getGroupObject(KoDUMMY_KO387))
// {{0:Objekt}}
#define KoDUMMY_KO388                         (knx.getGroupObject(KoDUMMY_KO388))
// {{0:Objekt}}
#define KoDUMMY_KO389                         (knx.getGroupObject(KoDUMMY_KO389))
// {{0:Objekt}}
#define KoDUMMY_KO390                         (knx.getGroupObject(KoDUMMY_KO390))
// {{0:Objekt}}
#define KoDUMMY_KO391                         (knx.getGroupObject(KoDUMMY_KO391))
// {{0:Objekt}}
#define KoDUMMY_KO392                         (knx.getGroupObject(KoDUMMY_KO392))
// {{0:Objekt}}
#define KoDUMMY_KO393                         (knx.getGroupObject(KoDUMMY_KO393))
// {{0:Objekt}}
#define KoDUMMY_KO394                         (knx.getGroupObject(KoDUMMY_KO394))
// {{0:Objekt}}
#define KoDUMMY_KO395                         (knx.getGroupObject(KoDUMMY_KO395))
// {{0:Objekt}}
#define KoDUMMY_KO396                         (knx.getGroupObject(KoDUMMY_KO396))
// {{0:Objekt}}
#define KoDUMMY_KO397                         (knx.getGroupObject(KoDUMMY_KO397))
// {{0:Objekt}}
#define KoDUMMY_KO398                         (knx.getGroupObject(KoDUMMY_KO398))
// {{0:Objekt}}
#define KoDUMMY_KO399                         (knx.getGroupObject(KoDUMMY_KO399))
// {{0:Objekt}}
#define KoDUMMY_KO400                         (knx.getGroupObject(KoDUMMY_KO400))
// {{0:Objekt}}
#define KoDUMMY_KO401                         (knx.getGroupObject(KoDUMMY_KO401))
// {{0:Objekt}}
#define KoDUMMY_KO402                         (knx.getGroupObject(KoDUMMY_KO402))
// {{0:Objekt}}
#define KoDUMMY_KO403                         (knx.getGroupObject(KoDUMMY_KO403))
// {{0:Objekt}}
#define KoDUMMY_KO404                         (knx.getGroupObject(KoDUMMY_KO404))
// {{0:Objekt}}
#define KoDUMMY_KO405                         (knx.getGroupObject(KoDUMMY_KO405))
// {{0:Objekt}}
#define KoDUMMY_KO406                         (knx.getGroupObject(KoDUMMY_KO406))
// {{0:Objekt}}
#define KoDUMMY_KO407                         (knx.getGroupObject(KoDUMMY_KO407))
// {{0:Objekt}}
#define KoDUMMY_KO408                         (knx.getGroupObject(KoDUMMY_KO408))
// {{0:Objekt}}
#define KoDUMMY_KO409                         (knx.getGroupObject(KoDUMMY_KO409))
// {{0:Objekt}}
#define KoDUMMY_KO410                         (knx.getGroupObject(KoDUMMY_KO410))
// {{0:Objekt}}
#define KoDUMMY_KO411                         (knx.getGroupObject(KoDUMMY_KO411))
// {{0:Objekt}}
#define KoDUMMY_KO412                         (knx.getGroupObject(KoDUMMY_KO412))
// {{0:Objekt}}
#define KoDUMMY_KO413                         (knx.getGroupObject(KoDUMMY_KO413))
// {{0:Objekt}}
#define KoDUMMY_KO414                         (knx.getGroupObject(KoDUMMY_KO414))
// {{0:Objekt}}
#define KoDUMMY_KO415                         (knx.getGroupObject(KoDUMMY_KO415))
// {{0:Objekt}}
#define KoDUMMY_KO416                         (knx.getGroupObject(KoDUMMY_KO416))
// {{0:Objekt}}
#define KoDUMMY_KO417                         (knx.getGroupObject(KoDUMMY_KO417))
// {{0:Objekt}}
#define KoDUMMY_KO418                         (knx.getGroupObject(KoDUMMY_KO418))
// {{0:Objekt}}
#define KoDUMMY_KO419                         (knx.getGroupObject(KoDUMMY_KO419))
// {{0:Objekt}}
#define KoDUMMY_KO420                         (knx.getGroupObject(KoDUMMY_KO420))
// {{0:Objekt}}
#define KoDUMMY_KO421                         (knx.getGroupObject(KoDUMMY_KO421))
// {{0:Objekt}}
#define KoDUMMY_KO422                         (knx.getGroupObject(KoDUMMY_KO422))
// {{0:Objekt}}
#define KoDUMMY_KO423                         (knx.getGroupObject(KoDUMMY_KO423))
// {{0:Objekt}}
#define KoDUMMY_KO424                         (knx.getGroupObject(KoDUMMY_KO424))
// {{0:Objekt}}
#define KoDUMMY_KO425                         (knx.getGroupObject(KoDUMMY_KO425))
// {{0:Objekt}}
#define KoDUMMY_KO426                         (knx.getGroupObject(KoDUMMY_KO426))
// {{0:Objekt}}
#define KoDUMMY_KO427                         (knx.getGroupObject(KoDUMMY_KO427))
// {{0:Objekt}}
#define KoDUMMY_KO428                         (knx.getGroupObject(KoDUMMY_KO428))
// {{0:Objekt}}
#define KoDUMMY_KO429                         (knx.getGroupObject(KoDUMMY_KO429))
// {{0:Objekt}}
#define KoDUMMY_KO430                         (knx.getGroupObject(KoDUMMY_KO430))
// {{0:Objekt}}
#define KoDUMMY_KO431                         (knx.getGroupObject(KoDUMMY_KO431))
// {{0:Objekt}}
#define KoDUMMY_KO432                         (knx.getGroupObject(KoDUMMY_KO432))
// {{0:Objekt}}
#define KoDUMMY_KO433                         (knx.getGroupObject(KoDUMMY_KO433))
// {{0:Objekt}}
#define KoDUMMY_KO434                         (knx.getGroupObject(KoDUMMY_KO434))
// {{0:Objekt}}
#define KoDUMMY_KO435                         (knx.getGroupObject(KoDUMMY_KO435))
// {{0:Objekt}}
#define KoDUMMY_KO436                         (knx.getGroupObject(KoDUMMY_KO436))
// {{0:Objekt}}
#define KoDUMMY_KO437                         (knx.getGroupObject(KoDUMMY_KO437))
// {{0:Objekt}}
#define KoDUMMY_KO438                         (knx.getGroupObject(KoDUMMY_KO438))
// {{0:Objekt}}
#define KoDUMMY_KO439                         (knx.getGroupObject(KoDUMMY_KO439))
// {{0:Objekt}}
#define KoDUMMY_KO440                         (knx.getGroupObject(KoDUMMY_KO440))
// {{0:Objekt}}
#define KoDUMMY_KO441                         (knx.getGroupObject(KoDUMMY_KO441))
// {{0:Objekt}}
#define KoDUMMY_KO442                         (knx.getGroupObject(KoDUMMY_KO442))
// {{0:Objekt}}
#define KoDUMMY_KO443                         (knx.getGroupObject(KoDUMMY_KO443))
// {{0:Objekt}}
#define KoDUMMY_KO444                         (knx.getGroupObject(KoDUMMY_KO444))
// {{0:Objekt}}
#define KoDUMMY_KO445                         (knx.getGroupObject(KoDUMMY_KO445))
// {{0:Objekt}}
#define KoDUMMY_KO446                         (knx.getGroupObject(KoDUMMY_KO446))
// {{0:Objekt}}
#define KoDUMMY_KO447                         (knx.getGroupObject(KoDUMMY_KO447))
// {{0:Objekt}}
#define KoDUMMY_KO448                         (knx.getGroupObject(KoDUMMY_KO448))
// {{0:Objekt}}
#define KoDUMMY_KO449                         (knx.getGroupObject(KoDUMMY_KO449))
// {{0:Objekt}}
#define KoDUMMY_KO450                         (knx.getGroupObject(KoDUMMY_KO450))
// {{0:Objekt}}
#define KoDUMMY_KO451                         (knx.getGroupObject(KoDUMMY_KO451))
// {{0:Objekt}}
#define KoDUMMY_KO452                         (knx.getGroupObject(KoDUMMY_KO452))
// {{0:Objekt}}
#define KoDUMMY_KO453                         (knx.getGroupObject(KoDUMMY_KO453))
// {{0:Objekt}}
#define KoDUMMY_KO454                         (knx.getGroupObject(KoDUMMY_KO454))
// {{0:Objekt}}
#define KoDUMMY_KO455                         (knx.getGroupObject(KoDUMMY_KO455))
// {{0:Objekt}}
#define KoDUMMY_KO456                         (knx.getGroupObject(KoDUMMY_KO456))
// {{0:Objekt}}
#define KoDUMMY_KO457                         (knx.getGroupObject(KoDUMMY_KO457))
// {{0:Objekt}}
#define KoDUMMY_KO458                         (knx.getGroupObject(KoDUMMY_KO458))
// {{0:Objekt}}
#define KoDUMMY_KO459                         (knx.getGroupObject(KoDUMMY_KO459))
// {{0:Objekt}}
#define KoDUMMY_KO460                         (knx.getGroupObject(KoDUMMY_KO460))
// {{0:Objekt}}
#define KoDUMMY_KO461                         (knx.getGroupObject(KoDUMMY_KO461))
// {{0:Objekt}}
#define KoDUMMY_KO462                         (knx.getGroupObject(KoDUMMY_KO462))
// {{0:Objekt}}
#define KoDUMMY_KO463                         (knx.getGroupObject(KoDUMMY_KO463))
// {{0:Objekt}}
#define KoDUMMY_KO464                         (knx.getGroupObject(KoDUMMY_KO464))
// {{0:Objekt}}
#define KoDUMMY_KO465                         (knx.getGroupObject(KoDUMMY_KO465))
// {{0:Objekt}}
#define KoDUMMY_KO466                         (knx.getGroupObject(KoDUMMY_KO466))
// {{0:Objekt}}
#define KoDUMMY_KO467                         (knx.getGroupObject(KoDUMMY_KO467))
// {{0:Objekt}}
#define KoDUMMY_KO468                         (knx.getGroupObject(KoDUMMY_KO468))
// {{0:Objekt}}
#define KoDUMMY_KO469                         (knx.getGroupObject(KoDUMMY_KO469))
// {{0:Objekt}}
#define KoDUMMY_KO470                         (knx.getGroupObject(KoDUMMY_KO470))
// {{0:Objekt}}
#define KoDUMMY_KO471                         (knx.getGroupObject(KoDUMMY_KO471))
// {{0:Objekt}}
#define KoDUMMY_KO472                         (knx.getGroupObject(KoDUMMY_KO472))
// {{0:Objekt}}
#define KoDUMMY_KO473                         (knx.getGroupObject(KoDUMMY_KO473))
// {{0:Objekt}}
#define KoDUMMY_KO474                         (knx.getGroupObject(KoDUMMY_KO474))
// {{0:Objekt}}
#define KoDUMMY_KO475                         (knx.getGroupObject(KoDUMMY_KO475))
// {{0:Objekt}}
#define KoDUMMY_KO476                         (knx.getGroupObject(KoDUMMY_KO476))
// {{0:Objekt}}
#define KoDUMMY_KO477                         (knx.getGroupObject(KoDUMMY_KO477))
// {{0:Objekt}}
#define KoDUMMY_KO478                         (knx.getGroupObject(KoDUMMY_KO478))
// {{0:Objekt}}
#define KoDUMMY_KO479                         (knx.getGroupObject(KoDUMMY_KO479))
// {{0:Objekt}}
#define KoDUMMY_KO480                         (knx.getGroupObject(KoDUMMY_KO480))
// {{0:Objekt}}
#define KoDUMMY_KO481                         (knx.getGroupObject(KoDUMMY_KO481))
// {{0:Objekt}}
#define KoDUMMY_KO482                         (knx.getGroupObject(KoDUMMY_KO482))
// {{0:Objekt}}
#define KoDUMMY_KO483                         (knx.getGroupObject(KoDUMMY_KO483))
// {{0:Objekt}}
#define KoDUMMY_KO484                         (knx.getGroupObject(KoDUMMY_KO484))
// {{0:Objekt}}
#define KoDUMMY_KO485                         (knx.getGroupObject(KoDUMMY_KO485))
// {{0:Objekt}}
#define KoDUMMY_KO486                         (knx.getGroupObject(KoDUMMY_KO486))
// {{0:Objekt}}
#define KoDUMMY_KO487                         (knx.getGroupObject(KoDUMMY_KO487))
// {{0:Objekt}}
#define KoDUMMY_KO488                         (knx.getGroupObject(KoDUMMY_KO488))
// {{0:Objekt}}
#define KoDUMMY_KO489                         (knx.getGroupObject(KoDUMMY_KO489))
// {{0:Objekt}}
#define KoDUMMY_KO490                         (knx.getGroupObject(KoDUMMY_KO490))
// {{0:Objekt}}
#define KoDUMMY_KO491                         (knx.getGroupObject(KoDUMMY_KO491))
// {{0:Objekt}}
#define KoDUMMY_KO492                         (knx.getGroupObject(KoDUMMY_KO492))
// {{0:Objekt}}
#define KoDUMMY_KO493                         (knx.getGroupObject(KoDUMMY_KO493))
// {{0:Objekt}}
#define KoDUMMY_KO494                         (knx.getGroupObject(KoDUMMY_KO494))
// {{0:Objekt}}
#define KoDUMMY_KO495                         (knx.getGroupObject(KoDUMMY_KO495))
// {{0:Objekt}}
#define KoDUMMY_KO496                         (knx.getGroupObject(KoDUMMY_KO496))
// {{0:Objekt}}
#define KoDUMMY_KO497                         (knx.getGroupObject(KoDUMMY_KO497))
// {{0:Objekt}}
#define KoDUMMY_KO498                         (knx.getGroupObject(KoDUMMY_KO498))
// {{0:Objekt}}
#define KoDUMMY_KO499                         (knx.getGroupObject(KoDUMMY_KO499))
// {{0:Objekt}}
#define KoDUMMY_KO500                         (knx.getGroupObject(KoDUMMY_KO500))
// {{0:Objekt}}
#define KoDUMMY_KO501                         (knx.getGroupObject(KoDUMMY_KO501))
// {{0:Objekt}}
#define KoDUMMY_KO502                         (knx.getGroupObject(KoDUMMY_KO502))
// {{0:Objekt}}
#define KoDUMMY_KO503                         (knx.getGroupObject(KoDUMMY_KO503))
// {{0:Objekt}}
#define KoDUMMY_KO504                         (knx.getGroupObject(KoDUMMY_KO504))
// {{0:Objekt}}
#define KoDUMMY_KO505                         (knx.getGroupObject(KoDUMMY_KO505))
// {{0:Objekt}}
#define KoDUMMY_KO506                         (knx.getGroupObject(KoDUMMY_KO506))
// {{0:Objekt}}
#define KoDUMMY_KO507                         (knx.getGroupObject(KoDUMMY_KO507))
// {{0:Objekt}}
#define KoDUMMY_KO508                         (knx.getGroupObject(KoDUMMY_KO508))
// {{0:Objekt}}
#define KoDUMMY_KO509                         (knx.getGroupObject(KoDUMMY_KO509))
// {{0:Objekt}}
#define KoDUMMY_KO510                         (knx.getGroupObject(KoDUMMY_KO510))
// {{0:Objekt}}
#define KoDUMMY_KO511                         (knx.getGroupObject(KoDUMMY_KO511))
// {{0:Objekt}}
#define KoDUMMY_KO512                         (knx.getGroupObject(KoDUMMY_KO512))
// {{0:Objekt}}
#define KoDUMMY_KO513                         (knx.getGroupObject(KoDUMMY_KO513))
// {{0:Objekt}}
#define KoDUMMY_KO514                         (knx.getGroupObject(KoDUMMY_KO514))
// {{0:Objekt}}
#define KoDUMMY_KO515                         (knx.getGroupObject(KoDUMMY_KO515))
// {{0:Objekt}}
#define KoDUMMY_KO516                         (knx.getGroupObject(KoDUMMY_KO516))
// {{0:Objekt}}
#define KoDUMMY_KO517                         (knx.getGroupObject(KoDUMMY_KO517))
// {{0:Objekt}}
#define KoDUMMY_KO518                         (knx.getGroupObject(KoDUMMY_KO518))
// {{0:Objekt}}
#define KoDUMMY_KO519                         (knx.getGroupObject(KoDUMMY_KO519))
// {{0:Objekt}}
#define KoDUMMY_KO520                         (knx.getGroupObject(KoDUMMY_KO520))
// {{0:Objekt}}
#define KoDUMMY_KO521                         (knx.getGroupObject(KoDUMMY_KO521))
// {{0:Objekt}}
#define KoDUMMY_KO522                         (knx.getGroupObject(KoDUMMY_KO522))
// {{0:Objekt}}
#define KoDUMMY_KO523                         (knx.getGroupObject(KoDUMMY_KO523))
// {{0:Objekt}}
#define KoDUMMY_KO524                         (knx.getGroupObject(KoDUMMY_KO524))
// {{0:Objekt}}
#define KoDUMMY_KO525                         (knx.getGroupObject(KoDUMMY_KO525))
// {{0:Objekt}}
#define KoDUMMY_KO526                         (knx.getGroupObject(KoDUMMY_KO526))
// {{0:Objekt}}
#define KoDUMMY_KO527                         (knx.getGroupObject(KoDUMMY_KO527))
// {{0:Objekt}}
#define KoDUMMY_KO528                         (knx.getGroupObject(KoDUMMY_KO528))
// {{0:Objekt}}
#define KoDUMMY_KO529                         (knx.getGroupObject(KoDUMMY_KO529))
// {{0:Objekt}}
#define KoDUMMY_KO530                         (knx.getGroupObject(KoDUMMY_KO530))
// {{0:Objekt}}
#define KoDUMMY_KO531                         (knx.getGroupObject(KoDUMMY_KO531))
// {{0:Objekt}}
#define KoDUMMY_KO532                         (knx.getGroupObject(KoDUMMY_KO532))
// {{0:Objekt}}
#define KoDUMMY_KO533                         (knx.getGroupObject(KoDUMMY_KO533))
// {{0:Objekt}}
#define KoDUMMY_KO534                         (knx.getGroupObject(KoDUMMY_KO534))
// {{0:Objekt}}
#define KoDUMMY_KO535                         (knx.getGroupObject(KoDUMMY_KO535))
// {{0:Objekt}}
#define KoDUMMY_KO536                         (knx.getGroupObject(KoDUMMY_KO536))
// {{0:Objekt}}
#define KoDUMMY_KO537                         (knx.getGroupObject(KoDUMMY_KO537))
// {{0:Objekt}}
#define KoDUMMY_KO538                         (knx.getGroupObject(KoDUMMY_KO538))
// {{0:Objekt}}
#define KoDUMMY_KO539                         (knx.getGroupObject(KoDUMMY_KO539))
// {{0:Objekt}}
#define KoDUMMY_KO540                         (knx.getGroupObject(KoDUMMY_KO540))
// {{0:Objekt}}
#define KoDUMMY_KO541                         (knx.getGroupObject(KoDUMMY_KO541))
// {{0:Objekt}}
#define KoDUMMY_KO542                         (knx.getGroupObject(KoDUMMY_KO542))
// {{0:Objekt}}
#define KoDUMMY_KO543                         (knx.getGroupObject(KoDUMMY_KO543))
// {{0:Objekt}}
#define KoDUMMY_KO544                         (knx.getGroupObject(KoDUMMY_KO544))
// {{0:Objekt}}
#define KoDUMMY_KO545                         (knx.getGroupObject(KoDUMMY_KO545))
// {{0:Objekt}}
#define KoDUMMY_KO546                         (knx.getGroupObject(KoDUMMY_KO546))
// {{0:Objekt}}
#define KoDUMMY_KO547                         (knx.getGroupObject(KoDUMMY_KO547))
// {{0:Objekt}}
#define KoDUMMY_KO548                         (knx.getGroupObject(KoDUMMY_KO548))
// {{0:Objekt}}
#define KoDUMMY_KO549                         (knx.getGroupObject(KoDUMMY_KO549))
// {{0:Objekt}}
#define KoDUMMY_KO550                         (knx.getGroupObject(KoDUMMY_KO550))
// {{0:Objekt}}
#define KoDUMMY_KO551                         (knx.getGroupObject(KoDUMMY_KO551))
// {{0:Objekt}}
#define KoDUMMY_KO552                         (knx.getGroupObject(KoDUMMY_KO552))
// {{0:Objekt}}
#define KoDUMMY_KO553                         (knx.getGroupObject(KoDUMMY_KO553))
// {{0:Objekt}}
#define KoDUMMY_KO554                         (knx.getGroupObject(KoDUMMY_KO554))
// {{0:Objekt}}
#define KoDUMMY_KO555                         (knx.getGroupObject(KoDUMMY_KO555))
// {{0:Objekt}}
#define KoDUMMY_KO556                         (knx.getGroupObject(KoDUMMY_KO556))
// {{0:Objekt}}
#define KoDUMMY_KO557                         (knx.getGroupObject(KoDUMMY_KO557))
// {{0:Objekt}}
#define KoDUMMY_KO558                         (knx.getGroupObject(KoDUMMY_KO558))
// {{0:Objekt}}
#define KoDUMMY_KO559                         (knx.getGroupObject(KoDUMMY_KO559))
// {{0:Objekt}}
#define KoDUMMY_KO560                         (knx.getGroupObject(KoDUMMY_KO560))
// {{0:Objekt}}
#define KoDUMMY_KO561                         (knx.getGroupObject(KoDUMMY_KO561))
// {{0:Objekt}}
#define KoDUMMY_KO562                         (knx.getGroupObject(KoDUMMY_KO562))
// {{0:Objekt}}
#define KoDUMMY_KO563                         (knx.getGroupObject(KoDUMMY_KO563))
// {{0:Objekt}}
#define KoDUMMY_KO564                         (knx.getGroupObject(KoDUMMY_KO564))
// {{0:Objekt}}
#define KoDUMMY_KO565                         (knx.getGroupObject(KoDUMMY_KO565))
// {{0:Objekt}}
#define KoDUMMY_KO566                         (knx.getGroupObject(KoDUMMY_KO566))
// {{0:Objekt}}
#define KoDUMMY_KO567                         (knx.getGroupObject(KoDUMMY_KO567))
// {{0:Objekt}}
#define KoDUMMY_KO568                         (knx.getGroupObject(KoDUMMY_KO568))
// {{0:Objekt}}
#define KoDUMMY_KO569                         (knx.getGroupObject(KoDUMMY_KO569))
// {{0:Objekt}}
#define KoDUMMY_KO570                         (knx.getGroupObject(KoDUMMY_KO570))
// {{0:Objekt}}
#define KoDUMMY_KO571                         (knx.getGroupObject(KoDUMMY_KO571))
// {{0:Objekt}}
#define KoDUMMY_KO572                         (knx.getGroupObject(KoDUMMY_KO572))
// {{0:Objekt}}
#define KoDUMMY_KO573                         (knx.getGroupObject(KoDUMMY_KO573))
// {{0:Objekt}}
#define KoDUMMY_KO574                         (knx.getGroupObject(KoDUMMY_KO574))
// {{0:Objekt}}
#define KoDUMMY_KO575                         (knx.getGroupObject(KoDUMMY_KO575))
// {{0:Objekt}}
#define KoDUMMY_KO576                         (knx.getGroupObject(KoDUMMY_KO576))
// {{0:Objekt}}
#define KoDUMMY_KO577                         (knx.getGroupObject(KoDUMMY_KO577))
// {{0:Objekt}}
#define KoDUMMY_KO578                         (knx.getGroupObject(KoDUMMY_KO578))
// {{0:Objekt}}
#define KoDUMMY_KO579                         (knx.getGroupObject(KoDUMMY_KO579))
// {{0:Objekt}}
#define KoDUMMY_KO580                         (knx.getGroupObject(KoDUMMY_KO580))
// {{0:Objekt}}
#define KoDUMMY_KO581                         (knx.getGroupObject(KoDUMMY_KO581))
// {{0:Objekt}}
#define KoDUMMY_KO582                         (knx.getGroupObject(KoDUMMY_KO582))
// {{0:Objekt}}
#define KoDUMMY_KO583                         (knx.getGroupObject(KoDUMMY_KO583))
// {{0:Objekt}}
#define KoDUMMY_KO584                         (knx.getGroupObject(KoDUMMY_KO584))
// {{0:Objekt}}
#define KoDUMMY_KO585                         (knx.getGroupObject(KoDUMMY_KO585))
// {{0:Objekt}}
#define KoDUMMY_KO586                         (knx.getGroupObject(KoDUMMY_KO586))
// {{0:Objekt}}
#define KoDUMMY_KO587                         (knx.getGroupObject(KoDUMMY_KO587))
// {{0:Objekt}}
#define KoDUMMY_KO588                         (knx.getGroupObject(KoDUMMY_KO588))
// {{0:Objekt}}
#define KoDUMMY_KO589                         (knx.getGroupObject(KoDUMMY_KO589))
// {{0:Objekt}}
#define KoDUMMY_KO590                         (knx.getGroupObject(KoDUMMY_KO590))
// {{0:Objekt}}
#define KoDUMMY_KO591                         (knx.getGroupObject(KoDUMMY_KO591))
// {{0:Objekt}}
#define KoDUMMY_KO592                         (knx.getGroupObject(KoDUMMY_KO592))
// {{0:Objekt}}
#define KoDUMMY_KO593                         (knx.getGroupObject(KoDUMMY_KO593))
// {{0:Objekt}}
#define KoDUMMY_KO594                         (knx.getGroupObject(KoDUMMY_KO594))
// {{0:Objekt}}
#define KoDUMMY_KO595                         (knx.getGroupObject(KoDUMMY_KO595))
// {{0:Objekt}}
#define KoDUMMY_KO596                         (knx.getGroupObject(KoDUMMY_KO596))
// {{0:Objekt}}
#define KoDUMMY_KO597                         (knx.getGroupObject(KoDUMMY_KO597))
// {{0:Objekt}}
#define KoDUMMY_KO598                         (knx.getGroupObject(KoDUMMY_KO598))
// {{0:Objekt}}
#define KoDUMMY_KO599                         (knx.getGroupObject(KoDUMMY_KO599))
// {{0:Objekt}}
#define KoDUMMY_KO600                         (knx.getGroupObject(KoDUMMY_KO600))
// {{0:Objekt}}
#define KoDUMMY_KO601                         (knx.getGroupObject(KoDUMMY_KO601))
// {{0:Objekt}}
#define KoDUMMY_KO602                         (knx.getGroupObject(KoDUMMY_KO602))
// {{0:Objekt}}
#define KoDUMMY_KO603                         (knx.getGroupObject(KoDUMMY_KO603))
// {{0:Objekt}}
#define KoDUMMY_KO604                         (knx.getGroupObject(KoDUMMY_KO604))
// {{0:Objekt}}
#define KoDUMMY_KO605                         (knx.getGroupObject(KoDUMMY_KO605))
// {{0:Objekt}}
#define KoDUMMY_KO606                         (knx.getGroupObject(KoDUMMY_KO606))
// {{0:Objekt}}
#define KoDUMMY_KO607                         (knx.getGroupObject(KoDUMMY_KO607))
// {{0:Objekt}}
#define KoDUMMY_KO608                         (knx.getGroupObject(KoDUMMY_KO608))
// {{0:Objekt}}
#define KoDUMMY_KO609                         (knx.getGroupObject(KoDUMMY_KO609))
// {{0:Objekt}}
#define KoDUMMY_KO610                         (knx.getGroupObject(KoDUMMY_KO610))
// {{0:Objekt}}
#define KoDUMMY_KO611                         (knx.getGroupObject(KoDUMMY_KO611))
// {{0:Objekt}}
#define KoDUMMY_KO612                         (knx.getGroupObject(KoDUMMY_KO612))
// {{0:Objekt}}
#define KoDUMMY_KO613                         (knx.getGroupObject(KoDUMMY_KO613))
// {{0:Objekt}}
#define KoDUMMY_KO614                         (knx.getGroupObject(KoDUMMY_KO614))
// {{0:Objekt}}
#define KoDUMMY_KO615                         (knx.getGroupObject(KoDUMMY_KO615))
// {{0:Objekt}}
#define KoDUMMY_KO616                         (knx.getGroupObject(KoDUMMY_KO616))
// {{0:Objekt}}
#define KoDUMMY_KO617                         (knx.getGroupObject(KoDUMMY_KO617))
// {{0:Objekt}}
#define KoDUMMY_KO618                         (knx.getGroupObject(KoDUMMY_KO618))
// {{0:Objekt}}
#define KoDUMMY_KO619                         (knx.getGroupObject(KoDUMMY_KO619))
// {{0:Objekt}}
#define KoDUMMY_KO620                         (knx.getGroupObject(KoDUMMY_KO620))
// {{0:Objekt}}
#define KoDUMMY_KO621                         (knx.getGroupObject(KoDUMMY_KO621))
// {{0:Objekt}}
#define KoDUMMY_KO622                         (knx.getGroupObject(KoDUMMY_KO622))
// {{0:Objekt}}
#define KoDUMMY_KO623                         (knx.getGroupObject(KoDUMMY_KO623))
// {{0:Objekt}}
#define KoDUMMY_KO624                         (knx.getGroupObject(KoDUMMY_KO624))
// {{0:Objekt}}
#define KoDUMMY_KO625                         (knx.getGroupObject(KoDUMMY_KO625))
// {{0:Objekt}}
#define KoDUMMY_KO626                         (knx.getGroupObject(KoDUMMY_KO626))
// {{0:Objekt}}
#define KoDUMMY_KO627                         (knx.getGroupObject(KoDUMMY_KO627))
// {{0:Objekt}}
#define KoDUMMY_KO628                         (knx.getGroupObject(KoDUMMY_KO628))
// {{0:Objekt}}
#define KoDUMMY_KO629                         (knx.getGroupObject(KoDUMMY_KO629))
// {{0:Objekt}}
#define KoDUMMY_KO630                         (knx.getGroupObject(KoDUMMY_KO630))
// {{0:Objekt}}
#define KoDUMMY_KO631                         (knx.getGroupObject(KoDUMMY_KO631))
// {{0:Objekt}}
#define KoDUMMY_KO632                         (knx.getGroupObject(KoDUMMY_KO632))
// {{0:Objekt}}
#define KoDUMMY_KO633                         (knx.getGroupObject(KoDUMMY_KO633))
// {{0:Objekt}}
#define KoDUMMY_KO634                         (knx.getGroupObject(KoDUMMY_KO634))
// {{0:Objekt}}
#define KoDUMMY_KO635                         (knx.getGroupObject(KoDUMMY_KO635))
// {{0:Objekt}}
#define KoDUMMY_KO636                         (knx.getGroupObject(KoDUMMY_KO636))
// {{0:Objekt}}
#define KoDUMMY_KO637                         (knx.getGroupObject(KoDUMMY_KO637))
// {{0:Objekt}}
#define KoDUMMY_KO638                         (knx.getGroupObject(KoDUMMY_KO638))
// {{0:Objekt}}
#define KoDUMMY_KO639                         (knx.getGroupObject(KoDUMMY_KO639))
// {{0:Objekt}}
#define KoDUMMY_KO640                         (knx.getGroupObject(KoDUMMY_KO640))
// {{0:Objekt}}
#define KoDUMMY_KO641                         (knx.getGroupObject(KoDUMMY_KO641))
// {{0:Objekt}}
#define KoDUMMY_KO642                         (knx.getGroupObject(KoDUMMY_KO642))
// {{0:Objekt}}
#define KoDUMMY_KO643                         (knx.getGroupObject(KoDUMMY_KO643))
// {{0:Objekt}}
#define KoDUMMY_KO644                         (knx.getGroupObject(KoDUMMY_KO644))
// {{0:Objekt}}
#define KoDUMMY_KO645                         (knx.getGroupObject(KoDUMMY_KO645))
// {{0:Objekt}}
#define KoDUMMY_KO646                         (knx.getGroupObject(KoDUMMY_KO646))
// {{0:Objekt}}
#define KoDUMMY_KO647                         (knx.getGroupObject(KoDUMMY_KO647))
// {{0:Objekt}}
#define KoDUMMY_KO648                         (knx.getGroupObject(KoDUMMY_KO648))
// {{0:Objekt}}
#define KoDUMMY_KO649                         (knx.getGroupObject(KoDUMMY_KO649))
// {{0:Objekt}}
#define KoDUMMY_KO650                         (knx.getGroupObject(KoDUMMY_KO650))
// {{0:Objekt}}
#define KoDUMMY_KO651                         (knx.getGroupObject(KoDUMMY_KO651))
// {{0:Objekt}}
#define KoDUMMY_KO652                         (knx.getGroupObject(KoDUMMY_KO652))
// {{0:Objekt}}
#define KoDUMMY_KO653                         (knx.getGroupObject(KoDUMMY_KO653))
// {{0:Objekt}}
#define KoDUMMY_KO654                         (knx.getGroupObject(KoDUMMY_KO654))
// {{0:Objekt}}
#define KoDUMMY_KO655                         (knx.getGroupObject(KoDUMMY_KO655))
// {{0:Objekt}}
#define KoDUMMY_KO656                         (knx.getGroupObject(KoDUMMY_KO656))
// {{0:Objekt}}
#define KoDUMMY_KO657                         (knx.getGroupObject(KoDUMMY_KO657))
// {{0:Objekt}}
#define KoDUMMY_KO658                         (knx.getGroupObject(KoDUMMY_KO658))
// {{0:Objekt}}
#define KoDUMMY_KO659                         (knx.getGroupObject(KoDUMMY_KO659))
// {{0:Objekt}}
#define KoDUMMY_KO660                         (knx.getGroupObject(KoDUMMY_KO660))
// {{0:Objekt}}
#define KoDUMMY_KO661                         (knx.getGroupObject(KoDUMMY_KO661))
// {{0:Objekt}}
#define KoDUMMY_KO662                         (knx.getGroupObject(KoDUMMY_KO662))
// {{0:Objekt}}
#define KoDUMMY_KO663                         (knx.getGroupObject(KoDUMMY_KO663))
// {{0:Objekt}}
#define KoDUMMY_KO664                         (knx.getGroupObject(KoDUMMY_KO664))
// {{0:Objekt}}
#define KoDUMMY_KO665                         (knx.getGroupObject(KoDUMMY_KO665))
// {{0:Objekt}}
#define KoDUMMY_KO666                         (knx.getGroupObject(KoDUMMY_KO666))
// {{0:Objekt}}
#define KoDUMMY_KO667                         (knx.getGroupObject(KoDUMMY_KO667))
// {{0:Objekt}}
#define KoDUMMY_KO668                         (knx.getGroupObject(KoDUMMY_KO668))
// {{0:Objekt}}
#define KoDUMMY_KO669                         (knx.getGroupObject(KoDUMMY_KO669))
// {{0:Objekt}}
#define KoDUMMY_KO670                         (knx.getGroupObject(KoDUMMY_KO670))
// {{0:Objekt}}
#define KoDUMMY_KO671                         (knx.getGroupObject(KoDUMMY_KO671))
// {{0:Objekt}}
#define KoDUMMY_KO672                         (knx.getGroupObject(KoDUMMY_KO672))
// {{0:Objekt}}
#define KoDUMMY_KO673                         (knx.getGroupObject(KoDUMMY_KO673))
// {{0:Objekt}}
#define KoDUMMY_KO674                         (knx.getGroupObject(KoDUMMY_KO674))
// {{0:Objekt}}
#define KoDUMMY_KO675                         (knx.getGroupObject(KoDUMMY_KO675))
// {{0:Objekt}}
#define KoDUMMY_KO676                         (knx.getGroupObject(KoDUMMY_KO676))
// {{0:Objekt}}
#define KoDUMMY_KO677                         (knx.getGroupObject(KoDUMMY_KO677))
// {{0:Objekt}}
#define KoDUMMY_KO678                         (knx.getGroupObject(KoDUMMY_KO678))
// {{0:Objekt}}
#define KoDUMMY_KO679                         (knx.getGroupObject(KoDUMMY_KO679))
// {{0:Objekt}}
#define KoDUMMY_KO680                         (knx.getGroupObject(KoDUMMY_KO680))
// {{0:Objekt}}
#define KoDUMMY_KO681                         (knx.getGroupObject(KoDUMMY_KO681))
// {{0:Objekt}}
#define KoDUMMY_KO682                         (knx.getGroupObject(KoDUMMY_KO682))
// {{0:Objekt}}
#define KoDUMMY_KO683                         (knx.getGroupObject(KoDUMMY_KO683))
// {{0:Objekt}}
#define KoDUMMY_KO684                         (knx.getGroupObject(KoDUMMY_KO684))
// {{0:Objekt}}
#define KoDUMMY_KO685                         (knx.getGroupObject(KoDUMMY_KO685))
// {{0:Objekt}}
#define KoDUMMY_KO686                         (knx.getGroupObject(KoDUMMY_KO686))
// {{0:Objekt}}
#define KoDUMMY_KO687                         (knx.getGroupObject(KoDUMMY_KO687))
// {{0:Objekt}}
#define KoDUMMY_KO688                         (knx.getGroupObject(KoDUMMY_KO688))
// {{0:Objekt}}
#define KoDUMMY_KO689                         (knx.getGroupObject(KoDUMMY_KO689))
// {{0:Objekt}}
#define KoDUMMY_KO690                         (knx.getGroupObject(KoDUMMY_KO690))
// {{0:Objekt}}
#define KoDUMMY_KO691                         (knx.getGroupObject(KoDUMMY_KO691))
// {{0:Objekt}}
#define KoDUMMY_KO692                         (knx.getGroupObject(KoDUMMY_KO692))
// {{0:Objekt}}
#define KoDUMMY_KO693                         (knx.getGroupObject(KoDUMMY_KO693))
// {{0:Objekt}}
#define KoDUMMY_KO694                         (knx.getGroupObject(KoDUMMY_KO694))
// {{0:Objekt}}
#define KoDUMMY_KO695                         (knx.getGroupObject(KoDUMMY_KO695))
// {{0:Objekt}}
#define KoDUMMY_KO696                         (knx.getGroupObject(KoDUMMY_KO696))
// {{0:Objekt}}
#define KoDUMMY_KO697                         (knx.getGroupObject(KoDUMMY_KO697))
// {{0:Objekt}}
#define KoDUMMY_KO698                         (knx.getGroupObject(KoDUMMY_KO698))
// {{0:Objekt}}
#define KoDUMMY_KO699                         (knx.getGroupObject(KoDUMMY_KO699))
// {{0:Objekt}}
#define KoDUMMY_KO700                         (knx.getGroupObject(KoDUMMY_KO700))
// {{0:Objekt}}
#define KoDUMMY_KO701                         (knx.getGroupObject(KoDUMMY_KO701))
// {{0:Objekt}}
#define KoDUMMY_KO702                         (knx.getGroupObject(KoDUMMY_KO702))
// {{0:Objekt}}
#define KoDUMMY_KO703                         (knx.getGroupObject(KoDUMMY_KO703))
// {{0:Objekt}}
#define KoDUMMY_KO704                         (knx.getGroupObject(KoDUMMY_KO704))
// {{0:Objekt}}
#define KoDUMMY_KO705                         (knx.getGroupObject(KoDUMMY_KO705))
// {{0:Objekt}}
#define KoDUMMY_KO706                         (knx.getGroupObject(KoDUMMY_KO706))
// {{0:Objekt}}
#define KoDUMMY_KO707                         (knx.getGroupObject(KoDUMMY_KO707))
// {{0:Objekt}}
#define KoDUMMY_KO708                         (knx.getGroupObject(KoDUMMY_KO708))
// {{0:Objekt}}
#define KoDUMMY_KO709                         (knx.getGroupObject(KoDUMMY_KO709))
// {{0:Objekt}}
#define KoDUMMY_KO710                         (knx.getGroupObject(KoDUMMY_KO710))
// {{0:Objekt}}
#define KoDUMMY_KO711                         (knx.getGroupObject(KoDUMMY_KO711))
// {{0:Objekt}}
#define KoDUMMY_KO712                         (knx.getGroupObject(KoDUMMY_KO712))
// {{0:Objekt}}
#define KoDUMMY_KO713                         (knx.getGroupObject(KoDUMMY_KO713))
// {{0:Objekt}}
#define KoDUMMY_KO714                         (knx.getGroupObject(KoDUMMY_KO714))
// {{0:Objekt}}
#define KoDUMMY_KO715                         (knx.getGroupObject(KoDUMMY_KO715))
// {{0:Objekt}}
#define KoDUMMY_KO716                         (knx.getGroupObject(KoDUMMY_KO716))
// {{0:Objekt}}
#define KoDUMMY_KO717                         (knx.getGroupObject(KoDUMMY_KO717))
// {{0:Objekt}}
#define KoDUMMY_KO718                         (knx.getGroupObject(KoDUMMY_KO718))
// {{0:Objekt}}
#define KoDUMMY_KO719                         (knx.getGroupObject(KoDUMMY_KO719))
// {{0:Objekt}}
#define KoDUMMY_KO720                         (knx.getGroupObject(KoDUMMY_KO720))
// {{0:Objekt}}
#define KoDUMMY_KO721                         (knx.getGroupObject(KoDUMMY_KO721))
// {{0:Objekt}}
#define KoDUMMY_KO722                         (knx.getGroupObject(KoDUMMY_KO722))
// {{0:Objekt}}
#define KoDUMMY_KO723                         (knx.getGroupObject(KoDUMMY_KO723))
// {{0:Objekt}}
#define KoDUMMY_KO724                         (knx.getGroupObject(KoDUMMY_KO724))
// {{0:Objekt}}
#define KoDUMMY_KO725                         (knx.getGroupObject(KoDUMMY_KO725))
// {{0:Objekt}}
#define KoDUMMY_KO726                         (knx.getGroupObject(KoDUMMY_KO726))
// {{0:Objekt}}
#define KoDUMMY_KO727                         (knx.getGroupObject(KoDUMMY_KO727))
// {{0:Objekt}}
#define KoDUMMY_KO728                         (knx.getGroupObject(KoDUMMY_KO728))
// {{0:Objekt}}
#define KoDUMMY_KO729                         (knx.getGroupObject(KoDUMMY_KO729))
// {{0:Objekt}}
#define KoDUMMY_KO730                         (knx.getGroupObject(KoDUMMY_KO730))
// {{0:Objekt}}
#define KoDUMMY_KO731                         (knx.getGroupObject(KoDUMMY_KO731))
// {{0:Objekt}}
#define KoDUMMY_KO732                         (knx.getGroupObject(KoDUMMY_KO732))
// {{0:Objekt}}
#define KoDUMMY_KO733                         (knx.getGroupObject(KoDUMMY_KO733))
// {{0:Objekt}}
#define KoDUMMY_KO734                         (knx.getGroupObject(KoDUMMY_KO734))
// {{0:Objekt}}
#define KoDUMMY_KO735                         (knx.getGroupObject(KoDUMMY_KO735))
// {{0:Objekt}}
#define KoDUMMY_KO736                         (knx.getGroupObject(KoDUMMY_KO736))
// {{0:Objekt}}
#define KoDUMMY_KO737                         (knx.getGroupObject(KoDUMMY_KO737))
// {{0:Objekt}}
#define KoDUMMY_KO738                         (knx.getGroupObject(KoDUMMY_KO738))
// {{0:Objekt}}
#define KoDUMMY_KO739                         (knx.getGroupObject(KoDUMMY_KO739))
// {{0:Objekt}}
#define KoDUMMY_KO740                         (knx.getGroupObject(KoDUMMY_KO740))
// {{0:Objekt}}
#define KoDUMMY_KO741                         (knx.getGroupObject(KoDUMMY_KO741))
// {{0:Objekt}}
#define KoDUMMY_KO742                         (knx.getGroupObject(KoDUMMY_KO742))
// {{0:Objekt}}
#define KoDUMMY_KO743                         (knx.getGroupObject(KoDUMMY_KO743))
// {{0:Objekt}}
#define KoDUMMY_KO744                         (knx.getGroupObject(KoDUMMY_KO744))
// {{0:Objekt}}
#define KoDUMMY_KO745                         (knx.getGroupObject(KoDUMMY_KO745))
// {{0:Objekt}}
#define KoDUMMY_KO746                         (knx.getGroupObject(KoDUMMY_KO746))
// {{0:Objekt}}
#define KoDUMMY_KO747                         (knx.getGroupObject(KoDUMMY_KO747))
// {{0:Objekt}}
#define KoDUMMY_KO748                         (knx.getGroupObject(KoDUMMY_KO748))
// {{0:Objekt}}
#define KoDUMMY_KO749                         (knx.getGroupObject(KoDUMMY_KO749))
// {{0:Objekt}}
#define KoDUMMY_KO750                         (knx.getGroupObject(KoDUMMY_KO750))
// {{0:Objekt}}
#define KoDUMMY_KO751                         (knx.getGroupObject(KoDUMMY_KO751))
// {{0:Objekt}}
#define KoDUMMY_KO752                         (knx.getGroupObject(KoDUMMY_KO752))
// {{0:Objekt}}
#define KoDUMMY_KO753                         (knx.getGroupObject(KoDUMMY_KO753))
// {{0:Objekt}}
#define KoDUMMY_KO754                         (knx.getGroupObject(KoDUMMY_KO754))
// {{0:Objekt}}
#define KoDUMMY_KO755                         (knx.getGroupObject(KoDUMMY_KO755))
// {{0:Objekt}}
#define KoDUMMY_KO756                         (knx.getGroupObject(KoDUMMY_KO756))
// {{0:Objekt}}
#define KoDUMMY_KO757                         (knx.getGroupObject(KoDUMMY_KO757))
// {{0:Objekt}}
#define KoDUMMY_KO758                         (knx.getGroupObject(KoDUMMY_KO758))
// {{0:Objekt}}
#define KoDUMMY_KO759                         (knx.getGroupObject(KoDUMMY_KO759))
// {{0:Objekt}}
#define KoDUMMY_KO760                         (knx.getGroupObject(KoDUMMY_KO760))
// {{0:Objekt}}
#define KoDUMMY_KO761                         (knx.getGroupObject(KoDUMMY_KO761))
// {{0:Objekt}}
#define KoDUMMY_KO762                         (knx.getGroupObject(KoDUMMY_KO762))
// {{0:Objekt}}
#define KoDUMMY_KO763                         (knx.getGroupObject(KoDUMMY_KO763))
// {{0:Objekt}}
#define KoDUMMY_KO764                         (knx.getGroupObject(KoDUMMY_KO764))
// {{0:Objekt}}
#define KoDUMMY_KO765                         (knx.getGroupObject(KoDUMMY_KO765))
// {{0:Objekt}}
#define KoDUMMY_KO766                         (knx.getGroupObject(KoDUMMY_KO766))
// {{0:Objekt}}
#define KoDUMMY_KO767                         (knx.getGroupObject(KoDUMMY_KO767))
// {{0:Objekt}}
#define KoDUMMY_KO768                         (knx.getGroupObject(KoDUMMY_KO768))
// {{0:Objekt}}
#define KoDUMMY_KO769                         (knx.getGroupObject(KoDUMMY_KO769))
// {{0:Objekt}}
#define KoDUMMY_KO770                         (knx.getGroupObject(KoDUMMY_KO770))
// {{0:Objekt}}
#define KoDUMMY_KO771                         (knx.getGroupObject(KoDUMMY_KO771))
// {{0:Objekt}}
#define KoDUMMY_KO772                         (knx.getGroupObject(KoDUMMY_KO772))
// {{0:Objekt}}
#define KoDUMMY_KO773                         (knx.getGroupObject(KoDUMMY_KO773))
// {{0:Objekt}}
#define KoDUMMY_KO774                         (knx.getGroupObject(KoDUMMY_KO774))
// {{0:Objekt}}
#define KoDUMMY_KO775                         (knx.getGroupObject(KoDUMMY_KO775))
// {{0:Objekt}}
#define KoDUMMY_KO776                         (knx.getGroupObject(KoDUMMY_KO776))
// {{0:Objekt}}
#define KoDUMMY_KO777                         (knx.getGroupObject(KoDUMMY_KO777))
// {{0:Objekt}}
#define KoDUMMY_KO778                         (knx.getGroupObject(KoDUMMY_KO778))
// {{0:Objekt}}
#define KoDUMMY_KO779                         (knx.getGroupObject(KoDUMMY_KO779))
// {{0:Objekt}}
#define KoDUMMY_KO780                         (knx.getGroupObject(KoDUMMY_KO780))
// {{0:Objekt}}
#define KoDUMMY_KO781                         (knx.getGroupObject(KoDUMMY_KO781))
// {{0:Objekt}}
#define KoDUMMY_KO782                         (knx.getGroupObject(KoDUMMY_KO782))
// {{0:Objekt}}
#define KoDUMMY_KO783                         (knx.getGroupObject(KoDUMMY_KO783))
// {{0:Objekt}}
#define KoDUMMY_KO784                         (knx.getGroupObject(KoDUMMY_KO784))
// {{0:Objekt}}
#define KoDUMMY_KO785                         (knx.getGroupObject(KoDUMMY_KO785))
// {{0:Objekt}}
#define KoDUMMY_KO786                         (knx.getGroupObject(KoDUMMY_KO786))
// {{0:Objekt}}
#define KoDUMMY_KO787                         (knx.getGroupObject(KoDUMMY_KO787))
// {{0:Objekt}}
#define KoDUMMY_KO788                         (knx.getGroupObject(KoDUMMY_KO788))
// {{0:Objekt}}
#define KoDUMMY_KO789                         (knx.getGroupObject(KoDUMMY_KO789))
// {{0:Objekt}}
#define KoDUMMY_KO790                         (knx.getGroupObject(KoDUMMY_KO790))
// {{0:Objekt}}
#define KoDUMMY_KO791                         (knx.getGroupObject(KoDUMMY_KO791))
// {{0:Objekt}}
#define KoDUMMY_KO792                         (knx.getGroupObject(KoDUMMY_KO792))
// {{0:Objekt}}
#define KoDUMMY_KO793                         (knx.getGroupObject(KoDUMMY_KO793))
// {{0:Objekt}}
#define KoDUMMY_KO794                         (knx.getGroupObject(KoDUMMY_KO794))
// {{0:Objekt}}
#define KoDUMMY_KO795                         (knx.getGroupObject(KoDUMMY_KO795))
// {{0:Objekt}}
#define KoDUMMY_KO796                         (knx.getGroupObject(KoDUMMY_KO796))
// {{0:Objekt}}
#define KoDUMMY_KO797                         (knx.getGroupObject(KoDUMMY_KO797))
// {{0:Objekt}}
#define KoDUMMY_KO798                         (knx.getGroupObject(KoDUMMY_KO798))
// {{0:Objekt}}
#define KoDUMMY_KO799                         (knx.getGroupObject(KoDUMMY_KO799))
// {{0:Objekt}}
#define KoDUMMY_KO800                         (knx.getGroupObject(KoDUMMY_KO800))
// {{0:Objekt}}
#define KoDUMMY_KO801                         (knx.getGroupObject(KoDUMMY_KO801))
// {{0:Objekt}}
#define KoDUMMY_KO802                         (knx.getGroupObject(KoDUMMY_KO802))
// {{0:Objekt}}
#define KoDUMMY_KO803                         (knx.getGroupObject(KoDUMMY_KO803))
// {{0:Objekt}}
#define KoDUMMY_KO804                         (knx.getGroupObject(KoDUMMY_KO804))
// {{0:Objekt}}
#define KoDUMMY_KO805                         (knx.getGroupObject(KoDUMMY_KO805))
// {{0:Objekt}}
#define KoDUMMY_KO806                         (knx.getGroupObject(KoDUMMY_KO806))
// {{0:Objekt}}
#define KoDUMMY_KO807                         (knx.getGroupObject(KoDUMMY_KO807))
// {{0:Objekt}}
#define KoDUMMY_KO808                         (knx.getGroupObject(KoDUMMY_KO808))
// {{0:Objekt}}
#define KoDUMMY_KO809                         (knx.getGroupObject(KoDUMMY_KO809))
// {{0:Objekt}}
#define KoDUMMY_KO810                         (knx.getGroupObject(KoDUMMY_KO810))
// {{0:Objekt}}
#define KoDUMMY_KO811                         (knx.getGroupObject(KoDUMMY_KO811))
// {{0:Objekt}}
#define KoDUMMY_KO812                         (knx.getGroupObject(KoDUMMY_KO812))
// {{0:Objekt}}
#define KoDUMMY_KO813                         (knx.getGroupObject(KoDUMMY_KO813))
// {{0:Objekt}}
#define KoDUMMY_KO814                         (knx.getGroupObject(KoDUMMY_KO814))
// {{0:Objekt}}
#define KoDUMMY_KO815                         (knx.getGroupObject(KoDUMMY_KO815))
// {{0:Objekt}}
#define KoDUMMY_KO816                         (knx.getGroupObject(KoDUMMY_KO816))
// {{0:Objekt}}
#define KoDUMMY_KO817                         (knx.getGroupObject(KoDUMMY_KO817))
// {{0:Objekt}}
#define KoDUMMY_KO818                         (knx.getGroupObject(KoDUMMY_KO818))
// {{0:Objekt}}
#define KoDUMMY_KO819                         (knx.getGroupObject(KoDUMMY_KO819))
// {{0:Objekt}}
#define KoDUMMY_KO820                         (knx.getGroupObject(KoDUMMY_KO820))
// {{0:Objekt}}
#define KoDUMMY_KO821                         (knx.getGroupObject(KoDUMMY_KO821))
// {{0:Objekt}}
#define KoDUMMY_KO822                         (knx.getGroupObject(KoDUMMY_KO822))
// {{0:Objekt}}
#define KoDUMMY_KO823                         (knx.getGroupObject(KoDUMMY_KO823))
// {{0:Objekt}}
#define KoDUMMY_KO824                         (knx.getGroupObject(KoDUMMY_KO824))
// {{0:Objekt}}
#define KoDUMMY_KO825                         (knx.getGroupObject(KoDUMMY_KO825))
// {{0:Objekt}}
#define KoDUMMY_KO826                         (knx.getGroupObject(KoDUMMY_KO826))
// {{0:Objekt}}
#define KoDUMMY_KO827                         (knx.getGroupObject(KoDUMMY_KO827))
// {{0:Objekt}}
#define KoDUMMY_KO828                         (knx.getGroupObject(KoDUMMY_KO828))
// {{0:Objekt}}
#define KoDUMMY_KO829                         (knx.getGroupObject(KoDUMMY_KO829))
// {{0:Objekt}}
#define KoDUMMY_KO830                         (knx.getGroupObject(KoDUMMY_KO830))
// {{0:Objekt}}
#define KoDUMMY_KO831                         (knx.getGroupObject(KoDUMMY_KO831))
// {{0:Objekt}}
#define KoDUMMY_KO832                         (knx.getGroupObject(KoDUMMY_KO832))
// {{0:Objekt}}
#define KoDUMMY_KO833                         (knx.getGroupObject(KoDUMMY_KO833))
// {{0:Objekt}}
#define KoDUMMY_KO834                         (knx.getGroupObject(KoDUMMY_KO834))
// {{0:Objekt}}
#define KoDUMMY_KO835                         (knx.getGroupObject(KoDUMMY_KO835))
// {{0:Objekt}}
#define KoDUMMY_KO836                         (knx.getGroupObject(KoDUMMY_KO836))
// {{0:Objekt}}
#define KoDUMMY_KO837                         (knx.getGroupObject(KoDUMMY_KO837))
// {{0:Objekt}}
#define KoDUMMY_KO838                         (knx.getGroupObject(KoDUMMY_KO838))
// {{0:Objekt}}
#define KoDUMMY_KO839                         (knx.getGroupObject(KoDUMMY_KO839))
// {{0:Objekt}}
#define KoDUMMY_KO840                         (knx.getGroupObject(KoDUMMY_KO840))
// {{0:Objekt}}
#define KoDUMMY_KO841                         (knx.getGroupObject(KoDUMMY_KO841))
// {{0:Objekt}}
#define KoDUMMY_KO842                         (knx.getGroupObject(KoDUMMY_KO842))
// {{0:Objekt}}
#define KoDUMMY_KO843                         (knx.getGroupObject(KoDUMMY_KO843))
// {{0:Objekt}}
#define KoDUMMY_KO844                         (knx.getGroupObject(KoDUMMY_KO844))
// {{0:Objekt}}
#define KoDUMMY_KO845                         (knx.getGroupObject(KoDUMMY_KO845))
// {{0:Objekt}}
#define KoDUMMY_KO846                         (knx.getGroupObject(KoDUMMY_KO846))
// {{0:Objekt}}
#define KoDUMMY_KO847                         (knx.getGroupObject(KoDUMMY_KO847))
// {{0:Objekt}}
#define KoDUMMY_KO848                         (knx.getGroupObject(KoDUMMY_KO848))
// {{0:Objekt}}
#define KoDUMMY_KO849                         (knx.getGroupObject(KoDUMMY_KO849))
// {{0:Objekt}}
#define KoDUMMY_KO850                         (knx.getGroupObject(KoDUMMY_KO850))
// {{0:Objekt}}
#define KoDUMMY_KO851                         (knx.getGroupObject(KoDUMMY_KO851))
// {{0:Objekt}}
#define KoDUMMY_KO852                         (knx.getGroupObject(KoDUMMY_KO852))
// {{0:Objekt}}
#define KoDUMMY_KO853                         (knx.getGroupObject(KoDUMMY_KO853))
// {{0:Objekt}}
#define KoDUMMY_KO854                         (knx.getGroupObject(KoDUMMY_KO854))
// {{0:Objekt}}
#define KoDUMMY_KO855                         (knx.getGroupObject(KoDUMMY_KO855))
// {{0:Objekt}}
#define KoDUMMY_KO856                         (knx.getGroupObject(KoDUMMY_KO856))
// {{0:Objekt}}
#define KoDUMMY_KO857                         (knx.getGroupObject(KoDUMMY_KO857))
// {{0:Objekt}}
#define KoDUMMY_KO858                         (knx.getGroupObject(KoDUMMY_KO858))
// {{0:Objekt}}
#define KoDUMMY_KO859                         (knx.getGroupObject(KoDUMMY_KO859))
// {{0:Objekt}}
#define KoDUMMY_KO860                         (knx.getGroupObject(KoDUMMY_KO860))
// {{0:Objekt}}
#define KoDUMMY_KO861                         (knx.getGroupObject(KoDUMMY_KO861))
// {{0:Objekt}}
#define KoDUMMY_KO862                         (knx.getGroupObject(KoDUMMY_KO862))
// {{0:Objekt}}
#define KoDUMMY_KO863                         (knx.getGroupObject(KoDUMMY_KO863))
// {{0:Objekt}}
#define KoDUMMY_KO864                         (knx.getGroupObject(KoDUMMY_KO864))
// {{0:Objekt}}
#define KoDUMMY_KO865                         (knx.getGroupObject(KoDUMMY_KO865))
// {{0:Objekt}}
#define KoDUMMY_KO866                         (knx.getGroupObject(KoDUMMY_KO866))
// {{0:Objekt}}
#define KoDUMMY_KO867                         (knx.getGroupObject(KoDUMMY_KO867))
// {{0:Objekt}}
#define KoDUMMY_KO868                         (knx.getGroupObject(KoDUMMY_KO868))
// {{0:Objekt}}
#define KoDUMMY_KO869                         (knx.getGroupObject(KoDUMMY_KO869))
// {{0:Objekt}}
#define KoDUMMY_KO870                         (knx.getGroupObject(KoDUMMY_KO870))
// {{0:Objekt}}
#define KoDUMMY_KO871                         (knx.getGroupObject(KoDUMMY_KO871))
// {{0:Objekt}}
#define KoDUMMY_KO872                         (knx.getGroupObject(KoDUMMY_KO872))
// {{0:Objekt}}
#define KoDUMMY_KO873                         (knx.getGroupObject(KoDUMMY_KO873))
// {{0:Objekt}}
#define KoDUMMY_KO874                         (knx.getGroupObject(KoDUMMY_KO874))
// {{0:Objekt}}
#define KoDUMMY_KO875                         (knx.getGroupObject(KoDUMMY_KO875))
// {{0:Objekt}}
#define KoDUMMY_KO876                         (knx.getGroupObject(KoDUMMY_KO876))
// {{0:Objekt}}
#define KoDUMMY_KO877                         (knx.getGroupObject(KoDUMMY_KO877))
// {{0:Objekt}}
#define KoDUMMY_KO878                         (knx.getGroupObject(KoDUMMY_KO878))
// {{0:Objekt}}
#define KoDUMMY_KO879                         (knx.getGroupObject(KoDUMMY_KO879))
// {{0:Objekt}}
#define KoDUMMY_KO880                         (knx.getGroupObject(KoDUMMY_KO880))
// {{0:Objekt}}
#define KoDUMMY_KO881                         (knx.getGroupObject(KoDUMMY_KO881))
// {{0:Objekt}}
#define KoDUMMY_KO882                         (knx.getGroupObject(KoDUMMY_KO882))
// {{0:Objekt}}
#define KoDUMMY_KO883                         (knx.getGroupObject(KoDUMMY_KO883))
// {{0:Objekt}}
#define KoDUMMY_KO884                         (knx.getGroupObject(KoDUMMY_KO884))
// {{0:Objekt}}
#define KoDUMMY_KO885                         (knx.getGroupObject(KoDUMMY_KO885))
// {{0:Objekt}}
#define KoDUMMY_KO886                         (knx.getGroupObject(KoDUMMY_KO886))
// {{0:Objekt}}
#define KoDUMMY_KO887                         (knx.getGroupObject(KoDUMMY_KO887))
// {{0:Objekt}}
#define KoDUMMY_KO888                         (knx.getGroupObject(KoDUMMY_KO888))
// {{0:Objekt}}
#define KoDUMMY_KO889                         (knx.getGroupObject(KoDUMMY_KO889))
// {{0:Objekt}}
#define KoDUMMY_KO890                         (knx.getGroupObject(KoDUMMY_KO890))
// {{0:Objekt}}
#define KoDUMMY_KO891                         (knx.getGroupObject(KoDUMMY_KO891))
// {{0:Objekt}}
#define KoDUMMY_KO892                         (knx.getGroupObject(KoDUMMY_KO892))
// {{0:Objekt}}
#define KoDUMMY_KO893                         (knx.getGroupObject(KoDUMMY_KO893))
// {{0:Objekt}}
#define KoDUMMY_KO894                         (knx.getGroupObject(KoDUMMY_KO894))
// {{0:Objekt}}
#define KoDUMMY_KO895                         (knx.getGroupObject(KoDUMMY_KO895))
// {{0:Objekt}}
#define KoDUMMY_KO896                         (knx.getGroupObject(KoDUMMY_KO896))
// {{0:Objekt}}
#define KoDUMMY_KO897                         (knx.getGroupObject(KoDUMMY_KO897))
// {{0:Objekt}}
#define KoDUMMY_KO898                         (knx.getGroupObject(KoDUMMY_KO898))
// {{0:Objekt}}
#define KoDUMMY_KO899                         (knx.getGroupObject(KoDUMMY_KO899))
// {{0:Objekt}}
#define KoDUMMY_KO900                         (knx.getGroupObject(KoDUMMY_KO900))
// {{0:Objekt}}
#define KoDUMMY_KO901                         (knx.getGroupObject(KoDUMMY_KO901))
// {{0:Objekt}}
#define KoDUMMY_KO902                         (knx.getGroupObject(KoDUMMY_KO902))
// {{0:Objekt}}
#define KoDUMMY_KO903                         (knx.getGroupObject(KoDUMMY_KO903))
// {{0:Objekt}}
#define KoDUMMY_KO904                         (knx.getGroupObject(KoDUMMY_KO904))
// {{0:Objekt}}
#define KoDUMMY_KO905                         (knx.getGroupObject(KoDUMMY_KO905))
// {{0:Objekt}}
#define KoDUMMY_KO906                         (knx.getGroupObject(KoDUMMY_KO906))
// {{0:Objekt}}
#define KoDUMMY_KO907                         (knx.getGroupObject(KoDUMMY_KO907))
// {{0:Objekt}}
#define KoDUMMY_KO908                         (knx.getGroupObject(KoDUMMY_KO908))
// {{0:Objekt}}
#define KoDUMMY_KO909                         (knx.getGroupObject(KoDUMMY_KO909))
// {{0:Objekt}}
#define KoDUMMY_KO910                         (knx.getGroupObject(KoDUMMY_KO910))
// {{0:Objekt}}
#define KoDUMMY_KO911                         (knx.getGroupObject(KoDUMMY_KO911))
// {{0:Objekt}}
#define KoDUMMY_KO912                         (knx.getGroupObject(KoDUMMY_KO912))
// {{0:Objekt}}
#define KoDUMMY_KO913                         (knx.getGroupObject(KoDUMMY_KO913))
// {{0:Objekt}}
#define KoDUMMY_KO914                         (knx.getGroupObject(KoDUMMY_KO914))
// {{0:Objekt}}
#define KoDUMMY_KO915                         (knx.getGroupObject(KoDUMMY_KO915))
// {{0:Objekt}}
#define KoDUMMY_KO916                         (knx.getGroupObject(KoDUMMY_KO916))
// {{0:Objekt}}
#define KoDUMMY_KO917                         (knx.getGroupObject(KoDUMMY_KO917))
// {{0:Objekt}}
#define KoDUMMY_KO918                         (knx.getGroupObject(KoDUMMY_KO918))
// {{0:Objekt}}
#define KoDUMMY_KO919                         (knx.getGroupObject(KoDUMMY_KO919))
// {{0:Objekt}}
#define KoDUMMY_KO920                         (knx.getGroupObject(KoDUMMY_KO920))
// {{0:Objekt}}
#define KoDUMMY_KO921                         (knx.getGroupObject(KoDUMMY_KO921))
// {{0:Objekt}}
#define KoDUMMY_KO922                         (knx.getGroupObject(KoDUMMY_KO922))
// {{0:Objekt}}
#define KoDUMMY_KO923                         (knx.getGroupObject(KoDUMMY_KO923))
// {{0:Objekt}}
#define KoDUMMY_KO924                         (knx.getGroupObject(KoDUMMY_KO924))
// {{0:Objekt}}
#define KoDUMMY_KO925                         (knx.getGroupObject(KoDUMMY_KO925))
// {{0:Objekt}}
#define KoDUMMY_KO926                         (knx.getGroupObject(KoDUMMY_KO926))
// {{0:Objekt}}
#define KoDUMMY_KO927                         (knx.getGroupObject(KoDUMMY_KO927))
// {{0:Objekt}}
#define KoDUMMY_KO928                         (knx.getGroupObject(KoDUMMY_KO928))
// {{0:Objekt}}
#define KoDUMMY_KO929                         (knx.getGroupObject(KoDUMMY_KO929))
// {{0:Objekt}}
#define KoDUMMY_KO930                         (knx.getGroupObject(KoDUMMY_KO930))
// {{0:Objekt}}
#define KoDUMMY_KO931                         (knx.getGroupObject(KoDUMMY_KO931))
// {{0:Objekt}}
#define KoDUMMY_KO932                         (knx.getGroupObject(KoDUMMY_KO932))
// {{0:Objekt}}
#define KoDUMMY_KO933                         (knx.getGroupObject(KoDUMMY_KO933))
// {{0:Objekt}}
#define KoDUMMY_KO934                         (knx.getGroupObject(KoDUMMY_KO934))
// {{0:Objekt}}
#define KoDUMMY_KO935                         (knx.getGroupObject(KoDUMMY_KO935))
// {{0:Objekt}}
#define KoDUMMY_KO936                         (knx.getGroupObject(KoDUMMY_KO936))
// {{0:Objekt}}
#define KoDUMMY_KO937                         (knx.getGroupObject(KoDUMMY_KO937))
// {{0:Objekt}}
#define KoDUMMY_KO938                         (knx.getGroupObject(KoDUMMY_KO938))
// {{0:Objekt}}
#define KoDUMMY_KO939                         (knx.getGroupObject(KoDUMMY_KO939))
// {{0:Objekt}}
#define KoDUMMY_KO940                         (knx.getGroupObject(KoDUMMY_KO940))
// {{0:Objekt}}
#define KoDUMMY_KO941                         (knx.getGroupObject(KoDUMMY_KO941))
// {{0:Objekt}}
#define KoDUMMY_KO942                         (knx.getGroupObject(KoDUMMY_KO942))
// {{0:Objekt}}
#define KoDUMMY_KO943                         (knx.getGroupObject(KoDUMMY_KO943))
// {{0:Objekt}}
#define KoDUMMY_KO944                         (knx.getGroupObject(KoDUMMY_KO944))
// {{0:Objekt}}
#define KoDUMMY_KO945                         (knx.getGroupObject(KoDUMMY_KO945))
// {{0:Objekt}}
#define KoDUMMY_KO946                         (knx.getGroupObject(KoDUMMY_KO946))
// {{0:Objekt}}
#define KoDUMMY_KO947                         (knx.getGroupObject(KoDUMMY_KO947))
// {{0:Objekt}}
#define KoDUMMY_KO948                         (knx.getGroupObject(KoDUMMY_KO948))
// {{0:Objekt}}
#define KoDUMMY_KO949                         (knx.getGroupObject(KoDUMMY_KO949))
// {{0:Objekt}}
#define KoDUMMY_KO950                         (knx.getGroupObject(KoDUMMY_KO950))
// {{0:Objekt}}
#define KoDUMMY_KO951                         (knx.getGroupObject(KoDUMMY_KO951))
// {{0:Objekt}}
#define KoDUMMY_KO952                         (knx.getGroupObject(KoDUMMY_KO952))
// {{0:Objekt}}
#define KoDUMMY_KO953                         (knx.getGroupObject(KoDUMMY_KO953))
// {{0:Objekt}}
#define KoDUMMY_KO954                         (knx.getGroupObject(KoDUMMY_KO954))
// {{0:Objekt}}
#define KoDUMMY_KO955                         (knx.getGroupObject(KoDUMMY_KO955))
// {{0:Objekt}}
#define KoDUMMY_KO956                         (knx.getGroupObject(KoDUMMY_KO956))
// {{0:Objekt}}
#define KoDUMMY_KO957                         (knx.getGroupObject(KoDUMMY_KO957))
// {{0:Objekt}}
#define KoDUMMY_KO958                         (knx.getGroupObject(KoDUMMY_KO958))
// {{0:Objekt}}
#define KoDUMMY_KO959                         (knx.getGroupObject(KoDUMMY_KO959))
// {{0:Objekt}}
#define KoDUMMY_KO960                         (knx.getGroupObject(KoDUMMY_KO960))
// {{0:Objekt}}
#define KoDUMMY_KO961                         (knx.getGroupObject(KoDUMMY_KO961))
// {{0:Objekt}}
#define KoDUMMY_KO962                         (knx.getGroupObject(KoDUMMY_KO962))
// {{0:Objekt}}
#define KoDUMMY_KO963                         (knx.getGroupObject(KoDUMMY_KO963))
// {{0:Objekt}}
#define KoDUMMY_KO964                         (knx.getGroupObject(KoDUMMY_KO964))
// {{0:Objekt}}
#define KoDUMMY_KO965                         (knx.getGroupObject(KoDUMMY_KO965))
// {{0:Objekt}}
#define KoDUMMY_KO966                         (knx.getGroupObject(KoDUMMY_KO966))
// {{0:Objekt}}
#define KoDUMMY_KO967                         (knx.getGroupObject(KoDUMMY_KO967))
// {{0:Objekt}}
#define KoDUMMY_KO968                         (knx.getGroupObject(KoDUMMY_KO968))
// {{0:Objekt}}
#define KoDUMMY_KO969                         (knx.getGroupObject(KoDUMMY_KO969))
// {{0:Objekt}}
#define KoDUMMY_KO970                         (knx.getGroupObject(KoDUMMY_KO970))
// {{0:Objekt}}
#define KoDUMMY_KO971                         (knx.getGroupObject(KoDUMMY_KO971))
// {{0:Objekt}}
#define KoDUMMY_KO972                         (knx.getGroupObject(KoDUMMY_KO972))
// {{0:Objekt}}
#define KoDUMMY_KO973                         (knx.getGroupObject(KoDUMMY_KO973))
// {{0:Objekt}}
#define KoDUMMY_KO974                         (knx.getGroupObject(KoDUMMY_KO974))
// {{0:Objekt}}
#define KoDUMMY_KO975                         (knx.getGroupObject(KoDUMMY_KO975))
// {{0:Objekt}}
#define KoDUMMY_KO976                         (knx.getGroupObject(KoDUMMY_KO976))
// {{0:Objekt}}
#define KoDUMMY_KO977                         (knx.getGroupObject(KoDUMMY_KO977))
// {{0:Objekt}}
#define KoDUMMY_KO978                         (knx.getGroupObject(KoDUMMY_KO978))
// {{0:Objekt}}
#define KoDUMMY_KO979                         (knx.getGroupObject(KoDUMMY_KO979))
// {{0:Objekt}}
#define KoDUMMY_KO980                         (knx.getGroupObject(KoDUMMY_KO980))
// {{0:Objekt}}
#define KoDUMMY_KO981                         (knx.getGroupObject(KoDUMMY_KO981))
// {{0:Objekt}}
#define KoDUMMY_KO982                         (knx.getGroupObject(KoDUMMY_KO982))
// {{0:Objekt}}
#define KoDUMMY_KO983                         (knx.getGroupObject(KoDUMMY_KO983))
// {{0:Objekt}}
#define KoDUMMY_KO984                         (knx.getGroupObject(KoDUMMY_KO984))
// {{0:Objekt}}
#define KoDUMMY_KO985                         (knx.getGroupObject(KoDUMMY_KO985))
// {{0:Objekt}}
#define KoDUMMY_KO986                         (knx.getGroupObject(KoDUMMY_KO986))
// {{0:Objekt}}
#define KoDUMMY_KO987                         (knx.getGroupObject(KoDUMMY_KO987))
// {{0:Objekt}}
#define KoDUMMY_KO988                         (knx.getGroupObject(KoDUMMY_KO988))
// {{0:Objekt}}
#define KoDUMMY_KO989                         (knx.getGroupObject(KoDUMMY_KO989))
// {{0:Objekt}}
#define KoDUMMY_KO990                         (knx.getGroupObject(KoDUMMY_KO990))
// {{0:Objekt}}
#define KoDUMMY_KO991                         (knx.getGroupObject(KoDUMMY_KO991))
// {{0:Objekt}}
#define KoDUMMY_KO992                         (knx.getGroupObject(KoDUMMY_KO992))
// {{0:Objekt}}
#define KoDUMMY_KO993                         (knx.getGroupObject(KoDUMMY_KO993))
// {{0:Objekt}}
#define KoDUMMY_KO994                         (knx.getGroupObject(KoDUMMY_KO994))
// {{0:Objekt}}
#define KoDUMMY_KO995                         (knx.getGroupObject(KoDUMMY_KO995))
// {{0:Objekt}}
#define KoDUMMY_KO996                         (knx.getGroupObject(KoDUMMY_KO996))
// {{0:Objekt}}
#define KoDUMMY_KO997                         (knx.getGroupObject(KoDUMMY_KO997))
// {{0:Objekt}}
#define KoDUMMY_KO998                         (knx.getGroupObject(KoDUMMY_KO998))
// {{0:Objekt}}
#define KoDUMMY_KO999                         (knx.getGroupObject(KoDUMMY_KO999))

