# bpftrace-toolkit

## Quick Install

```
docker run -v $(pwd):/output quay.io/iovisor/bpftrace:master-vanilla_llvm_clang_glibc2.23 /bin/bash -c "cp /usr/bin/bpftrace /output"
./bpftrace --version
```

## Merge bpftrace repo

Add:

```
git subtree add -P bpftrace https://github.com/iovisor/bpftrace master --squash
```

Update:

```
git subtree pull -P bpftrace https://github.com/iovisor/bpftrace master --squash
```

## References

- https://github.com/iovisor/bpftrace
- http://www.brendangregg.com/bpf-performance-tools-book.html
