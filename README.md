### JXcore Addon Sample
JXcore native addon with multiple JavaScript engine support

### How To Compile

Let's compile JXcore. Get the source codes from Github and compile.
```
 $> git clone https://github.com/jxcore/jxcore
 $> git clone https://github.com/jxcore/jxcore-addon
 $> cd jxcore
 $> ./configure 
 $> sudo make install
```

On Windows;
```
 $> git clone https://github.com/jxcore/jxcore
 $> git clone https://github.com/jxcore/jxcore-addon
 $> cd jxcore
 $> vcbuild.bat
```

Make sure JXcore is accessible from the command line. Try
```
jx -jsv
```

The command above should show you the name of the JavaScript engine powering JXcore. 
If you are having problem with compiling JXcore, you can also install JXcore from 
[JXcore.com/downloads](http://jxcore.com/downloads)

If you have JXcore is installed, not it's time to install npm for JXcore.

```
 $> sudo jx install 
```

Lets compile this addon. Get the source codes from Github and compile.
```
 $> cd ../jxcore-addon
 $> jx install
```

Check if it works
```
 $> jx test.js
```

If you are looking for ([details on how to compile JXcore, visit this link.](https://github.com/jxcore/jxcore/blob/master/doc/HOW_TO_COMPILE.md) )

### Looking for an advanced example ? 

[Leveldown Addon with JXcore Macro](https://github.com/thaliproject/leveldown)

### Tip

If you are having a problem, try deleting `USER_HOME/.node_gyp/` folder

`jx install` compiles the addon for the engine it has built-in. For example, if you have 
JXcore with SpiderMonkey is installed, it will compile the addon for SpiderMonkey. 