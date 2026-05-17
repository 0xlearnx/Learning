# 📚 C Networking Learning Repository
> A collaborative space to learn, experiment, and build progressive network systems in C.

## 🎯 Repository Purpose
This is a **learning-focused repository** that will host multiple C projects over time. Each developer works independently on their own branch, tests thoroughly, and pushes completed code to `main` inside a dedicated named folder.

**🔥 Current Focus:** Progressive TCP Server Evolution
1. `simple-tcp` → Blocking single-client server
2. `multi-tcp` → Concurrent multi-client server 
3. `epoll-tcp` → Event-driven C10K-ready server
4. `xdp-tool` → Kernel-space packet limiter/observer

## 👥 Collaboration Workflow
- ✅ Work & test on your **own branch** 
- ✅ Never push incomplete or broken code to `main`
- ✅ When your project is complete & tested, push it to:
  `main/<your_name>/<project_name>/`
- ✅ Each folder must be **self-contained** (source code + `Makefile` + run instructions)
- ✅ Compare implementations after merging to learn trade-offs & optimizations

> Each developer maintains their own namespace. `main` stays clean, organized, and fully runnable.

## ✅ Current Task: `multi-tcp` Server
Build a concurrent TCP server that:
- [ ] Listens on a configurable port
- [ ] Handles ≥2 clients simultaneously (`pthreads`, `fork`, or `select`/`poll`)
- [ ] Echoes messages as `[HH:MM:SS] client_id: payload`
- [ ] Handles `Ctrl+C` gracefully (signal handler + clean socket close)
- [ ] Compiles cleanly: `gcc -Wall -Wextra -Werror`
- [ ] Includes a `README.md` inside your folder with build/run steps

## 🔄 How to Push Completed Code to `main`
```bash
# 1. Sync with latest main
git checkout main
git pull origin main

# 2. Finish & test on your branch
git checkout your_branch
make clean && make
./server -p 8080  # verify it works

# 3. Create your named folder at the repo root
mkdir -p your_name/multi-tcp
cp -r src/ Makefile README.md your_name/multi-tcp/

# 4. Commit & push to main
git checkout main
git add your_name/multi-tcp/
git commit -m "feat(your_name): complete multi-tcp server"
git push origin main
