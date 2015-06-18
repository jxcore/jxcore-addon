{
  'targets': [
    {
      'target_name': 'binding',
      'sources': [ 'binding.cc' ],
      'xcode_settings': {
        'OTHER_CPLUSPLUSFLAGS': ['-std=c++11', '-stdlib=libstdc++']
      },
      # for SM builds
      'cflags': [ '-std=c++0x', '-D__STDC_LIMIT_MACROS', '-Wno-invalid-offsetof']
    }
  ]
}
