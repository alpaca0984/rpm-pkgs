# rpm-pkgs

# usage

At CentOS7

Install alpaca-main repository.
```
$ sudo yum install https://github.com/alpaca0984/rpm-pkgs/raw/master/x86_64/alpaca-yum-repos-1-1.el7.centos.noarch.rpm
```

Install vim which is built with lua.
```
$ sudo yum install --enablerepo=alpaca-main --disablerepo=updates,base vim
```
