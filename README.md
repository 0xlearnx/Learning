# 📚 C Learning Archive
> Centralized mission tracker & version control hub for completed C projects.

## 🎯 Purpose
This repository is an **archive and progress tracker**. Active development happens in **separate, dedicated repositories** created per mission. Once a project is complete, tested, and finalized, developers push their code here into a personal folder for long-term reference, comparison, and version control.

## 🔄 Workflow
1. 🛠️ **Create a separate repo** for the current mission
2. 💻 **Develop & iterate** freely in that repo
3. ✅ **Finalize** (clean compile, zero leaks, tested features)
4. 📦 **Archive here** by pushing to your named folder in this repo
5. 📖 **Review & compare** implementations after merging

Each archived folder must be **self-contained**: source code, `Makefile`, and a `README.md` with build/run instructions.

## 🎯 Current Mission: Multi-Client TCP Server
Develop in your personal repo, then archive when:
- [ ] Listens on a configurable port (`-p` flag or env)
- [ ] Handles ≥2 concurrent clients (`pthreads`, `fork`, or `select`/`poll`)
- [ ] Echoes messages as `[HH:MM:SS] client_id: payload`
- [ ] Handles `Ctrl+C` gracefully (signal handler + clean socket close)
- [ ] Compiles cleanly: `gcc -Wall -Wextra -Werror`
- [ ] Zero memory leaks (`valgrind --leak-check=full`)

## 📥 How to Archive Completed Work
```bash
# 1. Sync this archive repo
git checkout main
git pull origin main

# 2. Prepare your named folder at the repo root
mkdir -p your_name/multi-tcp
cp -r /path/to/your/finalized/project/* your_name/multi-tcp/

# 3. Commit & push to archive
git add your_name/multi-tcp/
git commit -m "archive(your_name): multi-tcp server complete"
git push origin main
