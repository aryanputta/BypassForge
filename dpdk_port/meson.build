project('bypassforge-dpdk', 'c')

dpdk = dependency('libdpdk', required : true)

executable(
  'bypassforge_dpdk',
  'main.c',
  dependencies : [dpdk],
  install : false,
)

