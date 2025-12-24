# Bash Commands Cheat Sheet

## 📂 File & Directory Operations
- `ls` : List directory contents  
  - `ls -l` : Long format (details)  
  - `ls -a` : Include hidden files  
- `pwd` : Print current working directory  
- `cd [dir]` : Change directory  
  - `cd ~` : Go to home directory  
  - `cd -` : Go to previous directory  
- `mkdir [name]` : Create new directory  
- `touch [file]` : Create empty file / update timestamp  
- `cp [src] [dest]` : Copy file/directory (`-R` for recursive)  
- `mv [src] [dest]` : Move/rename file/directory  
- `rm [file]` : Remove file  
  - `rm -r [dir]` : Remove directory recursively  
  - `rm -rf [dir]` : Force remove (⚠️ dangerous)

---

## 📖 File Viewing
- `cat [file]` : Show file contents  
- `less [file]` : View file one page at a time (`q` to quit)  
- `head [file]` : Show first 10 lines  
- `tail [file]` : Show last 10 lines  
- `tail -f [file]` : Follow file updates (logs)  
- `nano [file]` / `vim [file]` : Edit file

---

## 🔍 Search
- `grep "[pattern]" [file]` : Search pattern in file  
  - `-i` : Ignore case  
  - `-r` : Recursive search in directory  
- `find [dir] -name "[pattern]"` : Find files by name

---

## 🔒 Permissions
- `chmod [permissions] [file]` : Change file permissions  
  - `chmod +x script.sh` : Make file executable  
- `chown [user]:[group] [file]` : Change file owner/group

---

## ⚙️ Process Management
- `ps aux` : List running processes  
- `top` / `htop` : Real‑time process/system usage  
- `kill [PID]` : Terminate process by ID  
- `kill -9 [PID]` : Force kill process

---

## 💾 System Info
- `df -h` : Disk usage (human readable)  
- `free -h` : Memory usage (human readable)

---

## 🔀 I/O Redirection & Pipes
- `>` : Redirect output (overwrite)  
- `>>` : Append output  
- `2>` : Redirect errors  
- `|` : Pipe output to another command  
  - Example: `ls -l | grep ".txt"`

---

## 🌐 Networking
- `ping [host]` : Test connectivity  
- `curl [url]` : Fetch webpage contents  
- `wget [url]` : Download file  
- `ssh user@host` : Connect to remote server  
- `scp [src] user@host:[dest]` : Copy files securely

---

## 📝 Notes
- Always be careful with `rm -rf` — it can delete everything without confirmation.  
- Use `man [command]` to read manual pages for any command.  
- Combine commands with pipes (`|`) for powerful workflows.

