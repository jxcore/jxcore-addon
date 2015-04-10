{
  'targets': [
    {
      'target_name': 'binding',
      'sources': [ 'binding.cc' ],
      'xcode_settings': {
        'OTHER_CPLUSPLUSFLAGS': ['-std=c++11', '-stdlib=libstdc++']
      }
    }
  ]
}
