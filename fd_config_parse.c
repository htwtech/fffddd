/* add this to firedancer/src/app/shared/fd_config_parse.c */
/* after string:   CFG_POP      ( bool,   rpc.bigtable_ledger_storage                      );  */
  CFG_POP      ( cstr,   rpc.geyser_plugin_config                         );
  CFG_POP      ( uint,   rpc.rpc_threads                                  );
  CFG_POP      ( bool,   rpc.no_os_cpu_stats_reporting                    );
  CFG_POP      ( bool,   rpc.no_os_disk_stats_reporting                   );
  CFG_POP      ( bool,   rpc.no_os_memory_stats_reporting                 );
  CFG_POP      ( bool,   rpc.no_os_network_stats_reporting                );
  CFG_POP      ( uint,   rpc.rocksdb_compaction_threads                   );
  CFG_POP      ( uint,   rpc.rocksdb_flush_threads                        );
  CFG_POP      ( uint,   rpc.replay_transactions_threads                  );
  CFG_POP      ( uint,   rpc.rayon_global_threads                         );
  CFG_POP      ( bool,   rpc.disable_banking_trace                        );
  CFG_POP      ( bool,   rpc.skip_preflight_health_check                  );
  CFG_POP      ( uint,   rpc.block_production_num_workers                 );
  CFG_POP      ( uint,   rpc.accounts_db_background_threads               );
  CFG_POP      ( uint,   rpc.accounts_db_foreground_threads               );
  CFG_POP      ( uint,   rpc.accounts_index_flush_threads                 );
  CFG_POP      ( uint,   rpc.rpc_blocking_threads                         );
/*  CFG_POP      ( int,    rpc.rpc_niceness_adjustment                      ); */
  CFG_POP      ( bool,   rpc.rpc_scan_and_fix_roots                       );
  CFG_POP      ( uint,   rpc.accounts_db_cache_limit_mb                   );
  CFG_POP      ( uint,   rpc.accounts_db_read_cache_limit                 );
  CFG_POP      ( cstr,   rpc.accounts_db_access_storages_method           );
  CFG_POP      ( uint,   rpc.accounts_index_scan_results_limit_mb         );
  CFG_POP      ( uint,   rpc.accounts_db_ancient_append_vecs              );
  CFG_POP      ( cstr,   rpc.wal_recovery_mode                            );
  CFG_POP      ( uint,   rpc.replay_forks_threads                         );
  CFG_POP      ( uint,   rpc.log_messages_bytes_limit                     );
  CFG_POP      ( uint,   rpc.rpc_send_batch_size                          );
  CFG_POP      ( uint,   rpc.rpc_send_leader_count                        );
  CFG_POP      ( uint,   rpc.rpc_send_retry_ms                            );
  CFG_POP      ( uint,   rpc.rpc_send_default_max_retries                 );
  CFG_POP      ( uint,   rpc.rpc_send_service_max_retries                 );
  CFG_POP      ( uint,   rpc.rpc_send_transaction_retry_pool_max_size     );
