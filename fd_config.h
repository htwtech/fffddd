/* add this to firedancer/src/app/shared/fd_config.h */
/* after string:  int    bigtable_ledger_storage; */ 
    char   geyser_plugin_config[ PATH_MAX ];
    uint   rpc_threads;
    int    no_os_cpu_stats_reporting;
    int    no_os_disk_stats_reporting;
    int    no_os_memory_stats_reporting;
    int    no_os_network_stats_reporting;
    uint   rocksdb_compaction_threads;
    uint   rocksdb_flush_threads;
    uint   rocksdb_flush_hreads;
    uint   replay_transactions_threads;
    uint   rayon_global_threads;
    int    disable_banking_trace;
    int    skip_preflight_health_check;
    uint   block_production_num_workers;
    uint   accounts_db_background_threads;
    uint   accounts_db_foreground_threads;
    uint   accounts_index_flush_threads;
    uint   rpc_blocking_threads;
/*    uint   rpc.rpc_niceness_adjustment; */
    int    rpc_scan_and_fix_roots;
    uint   accounts_db_cache_limit_mb;
    uint   accounts_db_read_cache_limit;
    char   accounts_db_access_storages_method[ FD_BASE58_ENCODED_32_SZ ];
    uint   accounts_index_scan_results_limit_mb;
    uint   accounts_db_ancient_append_vecs;
    uint   accounts_index_bins;
    char   wal_recovery_mode[ FD_BASE58_ENCODED_32_SZ ];
    uint   replay_forks_threads;
    uint   log_messages_bytes_limit;
    uint   rpc_send_batch_size;
    uint   rpc_send_leader_count;
    uint   rpc_send_retry_ms;
    uint   rpc_send_default_max_retries;
    uint   rpc_send_service_max_retries;
    uint   rpc_send_transaction_retry_pool_max_size;
