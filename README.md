## jxcore-addon
JXcore native addon with multiple JavaScript engine support

## how-to
First clone JXcore and this repo from Github and compile.
```
 $> git clone https://github.com/jxcore/jxcore
 $> git clone https://github.com/jxcore/jxcore-addon
 $> cd jxcore
 $> ./configure 
 $> sudo make install
```

You should have JXcore installed. Check it and force npmjx.

```
 $> sudo jx install 
```

Clone this repo;
```
 $> cd ../jxcore-addon
 $> jx install
```

Check if it works
```
 $> jx test.js
```

You can also try with JXcore SpiderMonkey [details to compile](https://github.com/jxcore/jxcore/blob/master/doc/HOW_TO_COMPILE.md) 

Simply compile the addon for each engine by `jx install`. 
It will compile the addon for SpiderMonkey. No code update is required.

#### Looking for a more advanced example ? 

[Leveldown Addon with JXcore Macro](https://github.com/thaliproject/leveldown)

##### Tip

If you are having a problem, try deleting USER_HOME/.node_gyp/ folder
