
# 📝 Git 常用指令備忘錄

本文件列出日常開發中最常用的 Git 指令，適合初學者快速查閱與操作。

---

## 📁 倉庫操作

### 初始化新倉庫
```bash
git init
```

### 新增遠端（GitHub）
```bash
git remote add origin https://github.com/你的帳號/你的倉庫.git
```

---

## 📄 檔案管理

### 加入單一檔案到暫存區
```bash
git add 檔案名稱
```

### 加入所有變更（新增/修改）檔案
```bash
git add .
```

### 查看目前狀態（哪些被修改、哪些已追蹤）
```bash
git status
```

### 忽略特定檔案（建立 .gitignore）
```bash
# 範例內容：
*.exe
.vscode/
*.log
```

---

## ✅ 提交與推送

### 提交變更（建立紀錄）
```bash
git commit -m "你的修改說明"
```

### 推送到遠端（第一次需加 -u 建立關聯）
```bash
git push -u origin main
```

### 推送後續更新
```bash
git push
```

---

## 🔄 分支操作（常用）

### 建立新分支並切換
```bash
git checkout -b 分支名稱
```

### 查看所有分支
```bash
git branch
```

### 切換到現有分支
```bash
git checkout 分支名稱
```

---

## ⬇️ 拉取遠端變更

### 從遠端拉取更新
```bash
git pull
```

### 若尚未關聯主分支，建立追蹤
```bash
git branch --set-upstream-to=origin/main main
```

---

## 🧼 撤銷與還原

### 撤銷尚未加入的修改
```bash
git restore 檔案名稱
```

### 從暫存區移除（但保留變更）
```bash
git restore --staged 檔案名稱
```

---

📄 建議檔名：`GIT-CHEATSHEET.md`
