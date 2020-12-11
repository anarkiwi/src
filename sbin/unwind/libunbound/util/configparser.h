#define SPACE 257
#define LETTER 258
#define NEWLINE 259
#define COMMENT 260
#define COLON 261
#define ANY 262
#define ZONESTR 263
#define STRING_ARG 264
#define VAR_FORCE_TOPLEVEL 265
#define VAR_SERVER 266
#define VAR_VERBOSITY 267
#define VAR_NUM_THREADS 268
#define VAR_PORT 269
#define VAR_OUTGOING_RANGE 270
#define VAR_INTERFACE 271
#define VAR_PREFER_IP4 272
#define VAR_DO_IP4 273
#define VAR_DO_IP6 274
#define VAR_PREFER_IP6 275
#define VAR_DO_UDP 276
#define VAR_DO_TCP 277
#define VAR_TCP_MSS 278
#define VAR_OUTGOING_TCP_MSS 279
#define VAR_TCP_IDLE_TIMEOUT 280
#define VAR_EDNS_TCP_KEEPALIVE 281
#define VAR_EDNS_TCP_KEEPALIVE_TIMEOUT 282
#define VAR_CHROOT 283
#define VAR_USERNAME 284
#define VAR_DIRECTORY 285
#define VAR_LOGFILE 286
#define VAR_PIDFILE 287
#define VAR_MSG_CACHE_SIZE 288
#define VAR_MSG_CACHE_SLABS 289
#define VAR_NUM_QUERIES_PER_THREAD 290
#define VAR_RRSET_CACHE_SIZE 291
#define VAR_RRSET_CACHE_SLABS 292
#define VAR_OUTGOING_NUM_TCP 293
#define VAR_INFRA_HOST_TTL 294
#define VAR_INFRA_LAME_TTL 295
#define VAR_INFRA_CACHE_SLABS 296
#define VAR_INFRA_CACHE_NUMHOSTS 297
#define VAR_INFRA_CACHE_LAME_SIZE 298
#define VAR_NAME 299
#define VAR_STUB_ZONE 300
#define VAR_STUB_HOST 301
#define VAR_STUB_ADDR 302
#define VAR_TARGET_FETCH_POLICY 303
#define VAR_HARDEN_SHORT_BUFSIZE 304
#define VAR_HARDEN_LARGE_QUERIES 305
#define VAR_FORWARD_ZONE 306
#define VAR_FORWARD_HOST 307
#define VAR_FORWARD_ADDR 308
#define VAR_DO_NOT_QUERY_ADDRESS 309
#define VAR_HIDE_IDENTITY 310
#define VAR_HIDE_VERSION 311
#define VAR_IDENTITY 312
#define VAR_VERSION 313
#define VAR_HARDEN_GLUE 314
#define VAR_MODULE_CONF 315
#define VAR_TRUST_ANCHOR_FILE 316
#define VAR_TRUST_ANCHOR 317
#define VAR_VAL_OVERRIDE_DATE 318
#define VAR_BOGUS_TTL 319
#define VAR_VAL_CLEAN_ADDITIONAL 320
#define VAR_VAL_PERMISSIVE_MODE 321
#define VAR_INCOMING_NUM_TCP 322
#define VAR_MSG_BUFFER_SIZE 323
#define VAR_KEY_CACHE_SIZE 324
#define VAR_KEY_CACHE_SLABS 325
#define VAR_TRUSTED_KEYS_FILE 326
#define VAR_VAL_NSEC3_KEYSIZE_ITERATIONS 327
#define VAR_USE_SYSLOG 328
#define VAR_OUTGOING_INTERFACE 329
#define VAR_ROOT_HINTS 330
#define VAR_DO_NOT_QUERY_LOCALHOST 331
#define VAR_CACHE_MAX_TTL 332
#define VAR_HARDEN_DNSSEC_STRIPPED 333
#define VAR_ACCESS_CONTROL 334
#define VAR_LOCAL_ZONE 335
#define VAR_LOCAL_DATA 336
#define VAR_INTERFACE_AUTOMATIC 337
#define VAR_STATISTICS_INTERVAL 338
#define VAR_DO_DAEMONIZE 339
#define VAR_USE_CAPS_FOR_ID 340
#define VAR_STATISTICS_CUMULATIVE 341
#define VAR_OUTGOING_PORT_PERMIT 342
#define VAR_OUTGOING_PORT_AVOID 343
#define VAR_DLV_ANCHOR_FILE 344
#define VAR_DLV_ANCHOR 345
#define VAR_NEG_CACHE_SIZE 346
#define VAR_HARDEN_REFERRAL_PATH 347
#define VAR_PRIVATE_ADDRESS 348
#define VAR_PRIVATE_DOMAIN 349
#define VAR_REMOTE_CONTROL 350
#define VAR_CONTROL_ENABLE 351
#define VAR_CONTROL_INTERFACE 352
#define VAR_CONTROL_PORT 353
#define VAR_SERVER_KEY_FILE 354
#define VAR_SERVER_CERT_FILE 355
#define VAR_CONTROL_KEY_FILE 356
#define VAR_CONTROL_CERT_FILE 357
#define VAR_CONTROL_USE_CERT 358
#define VAR_EXTENDED_STATISTICS 359
#define VAR_LOCAL_DATA_PTR 360
#define VAR_JOSTLE_TIMEOUT 361
#define VAR_STUB_PRIME 362
#define VAR_UNWANTED_REPLY_THRESHOLD 363
#define VAR_LOG_TIME_ASCII 364
#define VAR_DOMAIN_INSECURE 365
#define VAR_PYTHON 366
#define VAR_PYTHON_SCRIPT 367
#define VAR_VAL_SIG_SKEW_MIN 368
#define VAR_VAL_SIG_SKEW_MAX 369
#define VAR_CACHE_MIN_TTL 370
#define VAR_VAL_LOG_LEVEL 371
#define VAR_AUTO_TRUST_ANCHOR_FILE 372
#define VAR_KEEP_MISSING 373
#define VAR_ADD_HOLDDOWN 374
#define VAR_DEL_HOLDDOWN 375
#define VAR_SO_RCVBUF 376
#define VAR_EDNS_BUFFER_SIZE 377
#define VAR_PREFETCH 378
#define VAR_PREFETCH_KEY 379
#define VAR_SO_SNDBUF 380
#define VAR_SO_REUSEPORT 381
#define VAR_HARDEN_BELOW_NXDOMAIN 382
#define VAR_IGNORE_CD_FLAG 383
#define VAR_LOG_QUERIES 384
#define VAR_LOG_REPLIES 385
#define VAR_LOG_LOCAL_ACTIONS 386
#define VAR_TCP_UPSTREAM 387
#define VAR_SSL_UPSTREAM 388
#define VAR_SSL_SERVICE_KEY 389
#define VAR_SSL_SERVICE_PEM 390
#define VAR_SSL_PORT 391
#define VAR_FORWARD_FIRST 392
#define VAR_STUB_SSL_UPSTREAM 393
#define VAR_FORWARD_SSL_UPSTREAM 394
#define VAR_TLS_CERT_BUNDLE 395
#define VAR_HTTPS_PORT 396
#define VAR_HTTP_ENDPOINT 397
#define VAR_HTTP_MAX_STREAMS 398
#define VAR_HTTP_QUERY_BUFFER_SIZE 399
#define VAR_HTTP_RESPONSE_BUFFER_SIZE 400
#define VAR_HTTP_NODELAY 401
#define VAR_HTTP_NOTLS_DOWNSTREAM 402
#define VAR_STUB_FIRST 403
#define VAR_MINIMAL_RESPONSES 404
#define VAR_RRSET_ROUNDROBIN 405
#define VAR_MAX_UDP_SIZE 406
#define VAR_DELAY_CLOSE 407
#define VAR_UDP_CONNECT 408
#define VAR_UNBLOCK_LAN_ZONES 409
#define VAR_INSECURE_LAN_ZONES 410
#define VAR_INFRA_CACHE_MIN_RTT 411
#define VAR_INFRA_KEEP_PROBING 412
#define VAR_DNS64_PREFIX 413
#define VAR_DNS64_SYNTHALL 414
#define VAR_DNS64_IGNORE_AAAA 415
#define VAR_DNSTAP 416
#define VAR_DNSTAP_ENABLE 417
#define VAR_DNSTAP_SOCKET_PATH 418
#define VAR_DNSTAP_IP 419
#define VAR_DNSTAP_TLS 420
#define VAR_DNSTAP_TLS_SERVER_NAME 421
#define VAR_DNSTAP_TLS_CERT_BUNDLE 422
#define VAR_DNSTAP_TLS_CLIENT_KEY_FILE 423
#define VAR_DNSTAP_TLS_CLIENT_CERT_FILE 424
#define VAR_DNSTAP_SEND_IDENTITY 425
#define VAR_DNSTAP_SEND_VERSION 426
#define VAR_DNSTAP_BIDIRECTIONAL 427
#define VAR_DNSTAP_IDENTITY 428
#define VAR_DNSTAP_VERSION 429
#define VAR_DNSTAP_LOG_RESOLVER_QUERY_MESSAGES 430
#define VAR_DNSTAP_LOG_RESOLVER_RESPONSE_MESSAGES 431
#define VAR_DNSTAP_LOG_CLIENT_QUERY_MESSAGES 432
#define VAR_DNSTAP_LOG_CLIENT_RESPONSE_MESSAGES 433
#define VAR_DNSTAP_LOG_FORWARDER_QUERY_MESSAGES 434
#define VAR_DNSTAP_LOG_FORWARDER_RESPONSE_MESSAGES 435
#define VAR_RESPONSE_IP_TAG 436
#define VAR_RESPONSE_IP 437
#define VAR_RESPONSE_IP_DATA 438
#define VAR_HARDEN_ALGO_DOWNGRADE 439
#define VAR_IP_TRANSPARENT 440
#define VAR_IP_DSCP 441
#define VAR_DISABLE_DNSSEC_LAME_CHECK 442
#define VAR_IP_RATELIMIT 443
#define VAR_IP_RATELIMIT_SLABS 444
#define VAR_IP_RATELIMIT_SIZE 445
#define VAR_RATELIMIT 446
#define VAR_RATELIMIT_SLABS 447
#define VAR_RATELIMIT_SIZE 448
#define VAR_RATELIMIT_FOR_DOMAIN 449
#define VAR_RATELIMIT_BELOW_DOMAIN 450
#define VAR_IP_RATELIMIT_FACTOR 451
#define VAR_RATELIMIT_FACTOR 452
#define VAR_SEND_CLIENT_SUBNET 453
#define VAR_CLIENT_SUBNET_ZONE 454
#define VAR_CLIENT_SUBNET_ALWAYS_FORWARD 455
#define VAR_CLIENT_SUBNET_OPCODE 456
#define VAR_MAX_CLIENT_SUBNET_IPV4 457
#define VAR_MAX_CLIENT_SUBNET_IPV6 458
#define VAR_MIN_CLIENT_SUBNET_IPV4 459
#define VAR_MIN_CLIENT_SUBNET_IPV6 460
#define VAR_MAX_ECS_TREE_SIZE_IPV4 461
#define VAR_MAX_ECS_TREE_SIZE_IPV6 462
#define VAR_CAPS_WHITELIST 463
#define VAR_CACHE_MAX_NEGATIVE_TTL 464
#define VAR_PERMIT_SMALL_HOLDDOWN 465
#define VAR_QNAME_MINIMISATION 466
#define VAR_QNAME_MINIMISATION_STRICT 467
#define VAR_IP_FREEBIND 468
#define VAR_DEFINE_TAG 469
#define VAR_LOCAL_ZONE_TAG 470
#define VAR_ACCESS_CONTROL_TAG 471
#define VAR_LOCAL_ZONE_OVERRIDE 472
#define VAR_ACCESS_CONTROL_TAG_ACTION 473
#define VAR_ACCESS_CONTROL_TAG_DATA 474
#define VAR_VIEW 475
#define VAR_ACCESS_CONTROL_VIEW 476
#define VAR_VIEW_FIRST 477
#define VAR_SERVE_EXPIRED 478
#define VAR_SERVE_EXPIRED_TTL 479
#define VAR_SERVE_EXPIRED_TTL_RESET 480
#define VAR_SERVE_EXPIRED_REPLY_TTL 481
#define VAR_SERVE_EXPIRED_CLIENT_TIMEOUT 482
#define VAR_FAKE_DSA 483
#define VAR_FAKE_SHA1 484
#define VAR_LOG_IDENTITY 485
#define VAR_HIDE_TRUSTANCHOR 486
#define VAR_TRUST_ANCHOR_SIGNALING 487
#define VAR_AGGRESSIVE_NSEC 488
#define VAR_USE_SYSTEMD 489
#define VAR_SHM_ENABLE 490
#define VAR_SHM_KEY 491
#define VAR_ROOT_KEY_SENTINEL 492
#define VAR_DNSCRYPT 493
#define VAR_DNSCRYPT_ENABLE 494
#define VAR_DNSCRYPT_PORT 495
#define VAR_DNSCRYPT_PROVIDER 496
#define VAR_DNSCRYPT_SECRET_KEY 497
#define VAR_DNSCRYPT_PROVIDER_CERT 498
#define VAR_DNSCRYPT_PROVIDER_CERT_ROTATED 499
#define VAR_DNSCRYPT_SHARED_SECRET_CACHE_SIZE 500
#define VAR_DNSCRYPT_SHARED_SECRET_CACHE_SLABS 501
#define VAR_DNSCRYPT_NONCE_CACHE_SIZE 502
#define VAR_DNSCRYPT_NONCE_CACHE_SLABS 503
#define VAR_IPSECMOD_ENABLED 504
#define VAR_IPSECMOD_HOOK 505
#define VAR_IPSECMOD_IGNORE_BOGUS 506
#define VAR_IPSECMOD_MAX_TTL 507
#define VAR_IPSECMOD_WHITELIST 508
#define VAR_IPSECMOD_STRICT 509
#define VAR_CACHEDB 510
#define VAR_CACHEDB_BACKEND 511
#define VAR_CACHEDB_SECRETSEED 512
#define VAR_CACHEDB_REDISHOST 513
#define VAR_CACHEDB_REDISPORT 514
#define VAR_CACHEDB_REDISTIMEOUT 515
#define VAR_CACHEDB_REDISEXPIRERECORDS 516
#define VAR_UDP_UPSTREAM_WITHOUT_DOWNSTREAM 517
#define VAR_FOR_UPSTREAM 518
#define VAR_AUTH_ZONE 519
#define VAR_ZONEFILE 520
#define VAR_MASTER 521
#define VAR_URL 522
#define VAR_FOR_DOWNSTREAM 523
#define VAR_FALLBACK_ENABLED 524
#define VAR_TLS_ADDITIONAL_PORT 525
#define VAR_LOW_RTT 526
#define VAR_LOW_RTT_PERMIL 527
#define VAR_FAST_SERVER_PERMIL 528
#define VAR_FAST_SERVER_NUM 529
#define VAR_ALLOW_NOTIFY 530
#define VAR_TLS_WIN_CERT 531
#define VAR_TCP_CONNECTION_LIMIT 532
#define VAR_FORWARD_NO_CACHE 533
#define VAR_STUB_NO_CACHE 534
#define VAR_LOG_SERVFAIL 535
#define VAR_DENY_ANY 536
#define VAR_UNKNOWN_SERVER_TIME_LIMIT 537
#define VAR_LOG_TAG_QUERYREPLY 538
#define VAR_STREAM_WAIT_SIZE 539
#define VAR_TLS_CIPHERS 540
#define VAR_TLS_CIPHERSUITES 541
#define VAR_TLS_USE_SNI 542
#define VAR_IPSET 543
#define VAR_IPSET_NAME_V4 544
#define VAR_IPSET_NAME_V6 545
#define VAR_TLS_SESSION_TICKET_KEYS 546
#define VAR_RPZ 547
#define VAR_TAGS 548
#define VAR_RPZ_ACTION_OVERRIDE 549
#define VAR_RPZ_CNAME_OVERRIDE 550
#define VAR_RPZ_LOG 551
#define VAR_RPZ_LOG_NAME 552
#define VAR_DYNLIB 553
#define VAR_DYNLIB_FILE 554
#define VAR_EDNS_CLIENT_STRING 555
#define VAR_EDNS_CLIENT_STRING_OPCODE 556
#ifndef YYSTYPE_DEFINED
#define YYSTYPE_DEFINED
typedef union {
	char*	str;
} YYSTYPE;
#endif /* YYSTYPE_DEFINED */
extern YYSTYPE yylval;
