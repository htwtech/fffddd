  /* add this to firedancer/src/app/fdctl/commands/run_agave.c */
  /* after string if( config->frankendancer.rpc.bigtable_ledger_storage ) ADD1( "--enable-rpc-bigtable-ledger-storage" ); */

  if( strcmp( config->frankendancer.rpc.geyser_plugin_config, "" ) ) ADD( "--geyser-plugin-config", config->frankendancer.rpc.geyser_plugin_config );
  if( config->frankendancer.rpc.rpc_threads ) ADDU( "--rpc-threads", config->frankendancer.rpc.rpc_threads );
  if( config->frankendancer.rpc.no_os_cpu_stats_reporting ) ADD1( "--no-os-cpu-stats-reporting" );
  if( config->frankendancer.rpc.no_os_disk_stats_reporting ) ADD1( "--no-os-disk-stats-reporting" );
  if( config->frankendancer.rpc.no_os_memory_stats_reporting ) ADD1( "--no-os-memory-stats-reporting" );
  if( config->frankendancer.rpc.no_os_network_stats_reporting ) ADD1( "--no-os-network-stats-reporting" );
  if( config->frankendancer.rpc.rocksdb_compaction_threads ) ADDU( "--rocksdb-compaction-threads", config->frankendancer.rpc.rocksdb_compaction_threads );
  if( config->frankendancer.rpc.rocksdb_flush_threads ) ADDU( "--rocksdb-flush-threads", config->frankendancer.rpc.rocksdb_flush_threads );
  if( config->frankendancer.rpc.replay_transactions_threads ) ADDU( "--replay-transactions-threads", config->frankendancer.rpc.replay_transactions_threads );
  if( config->frankendancer.rpc.rayon_global_threads ) ADDU( "--rayon-global-threads", config->frankendancer.rpc.rayon_global_threads );
  if( config->frankendancer.rpc.disable_banking_trace ) ADD1( "--disable-banking-trace" );
  if( config->frankendancer.rpc.skip_preflight_health_check ) ADD1( "--skip-preflight-health-check" );
  if( config->frankendancer.rpc.block_production_num_workers ) ADDU( "--block-production-num-workers", config->frankendancer.rpc.block_production_num_workers );
  if( config->frankendancer.rpc.accounts_db_foreground_threads ) ADDU( "--accounts-db-background-threads", config->frankendancer.rpc.accounts_db_background_threads );
  if( config->frankendancer.rpc.accounts_db_foreground_threads ) ADDU( "--accounts-db-foreground-threads", config->frankendancer.rpc.accounts_db_foreground_threads );
  if( config->frankendancer.rpc.accounts_index_flush_threads  ) ADDU( "--accounts-index-flush-threads", config->frankendancer.rpc.accounts_index_flush_threads );
  if( config->frankendancer.rpc.rpc_blocking_threads ) ADDU( "--rpc-blocking-threads", config->frankendancer.rpc.rpc_blocking_threads );
/*  if( config->frankendancer.rpc.rpc_niceness_adjustment ) ADDU( "--rpc-niceness-adjustment", config->frankendancer.rpc.rpc_niceness_adjustment ); */
  if( config->frankendancer.rpc.rpc_scan_and_fix_roots ) ADD1( "--rpc-scan-and-fix-roots" );
  if( config->frankendancer.rpc.accounts_db_cache_limit_mb ) ADDU( "--accounts-db-cache-limit-mb", config->frankendancer.rpc.accounts_db_cache_limit_mb );
  if( config->frankendancer.rpc.accounts_db_read_cache_limit ) ADDU( "--accounts-db-read-cache-limit", config->frankendancer.rpc.accounts_db_read_cache_limit );
  if( strcmp( config->frankendancer.rpc.accounts_db_access_storages_method, "" ) ) ADD( "--accounts-db-access-storages-method", config->frankendancer.rpc.accounts_db_access_storages_method );
  if( config->frankendancer.rpc.accounts_index_scan_results_limit_mb ) ADDU( "--accounts-index-scan-results-limit-mb", config->frankendancer.rpc.accounts_index_scan_results_limit_mb );
  if( config->frankendancer.rpc.accounts_db_ancient_append_vecs ) ADDU( "--accounts-db-ancient-append-vecs", config->frankendancer.rpc.accounts_db_ancient_append_vecs );
  if( config->frankendancer.rpc.accounts_index_bins )  ADDU( "--accounts-index-bins", config->frankendancer.rpc.accounts_index_bins );
  if( strcmp( config->frankendancer.rpc.wal_recovery_mode, "" ) ) ADD( "--wal-recovery-mode", config->frankendancer.rpc.wal_recovery_mode );
  if( config->frankendancer.rpc.replay_forks_threads ) ADDU( "--replay-forks-threads", config->frankendancer.rpc.replay_forks_threads );
  if( config->frankendancer.rpc.log_messages_bytes_limit ) ADDU( "--log-messages-bytes-limit", config->frankendancer.rpc.log_messages_bytes_limit );
  if( config->frankendancer.rpc.rpc_send_batch_size ) ADDU( "--rpc-send-batch-size", config->frankendancer.rpc.rpc_send_batch_size );
  if( config->frankendancer.rpc.rpc_send_leader_count ) ADDU( "--rpc-send-leader-count", config->frankendancer.rpc.rpc_send_leader_count );
  if( config->frankendancer.rpc.rpc_send_retry_ms ) ADDU( "--rpc-send-retry-ms", config->frankendancer.rpc.rpc_send_retry_ms );
  if( config->frankendancer.rpc.rpc_send_default_max_retries ) ADDU( "--rpc-send-default-max-retries", config->frankendancer.rpc.rpc_send_default_max_retries );
  if( config->frankendancer.rpc.rpc_send_service_max_retries ) ADDU( "--rpc-send-service-max-retries", config->frankendancer.rpc.rpc_send_service_max_retries );
  if( config->frankendancer.rpc.rpc_send_transaction_retry_pool_max_size ) ADDU( "--rpc-send-transaction-retry-pool-max-size", config->frankendancer.rpc.rpc_send_transaction_retry_pool_max_size );

