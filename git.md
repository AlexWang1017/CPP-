
# 🚀 第一次開 C++ 專案的 Git 操作流程

本文件說明如何將一個 C++ 專案從本機端初始化並推送到 GitHub 遠端倉庫，適用於 Windows 平台、命令列操作（PowerShell 或 Git Bash）。

---

## 📂 前置條件

- 已安裝 [Git](https://git-scm.com/)
- 已在 [GitHub](https://github.com/) 上建立一個空倉庫
- 本機已有專案目錄，例如：`D:\C++`

---

## 🧰 步驟總覽

### 1️⃣ 初始化 Git 倉庫

```bash
cd D:\C++  # 進入你的專案資料夾
git init
```

---

### 2️⃣ 新增遠端 GitHub 倉庫

```bash
git remote add origin https://github.com/你的帳號/你的倉庫.git
```

📌 範例：

```bash
git remote add origin https://github.com/AlexWang1017/CPP-.git
```

---

### 3️⃣ 建立 README.md（可選但建議）

```bash
echo "# C++ Project" > README.md
```

---

### 4️⃣ 加入所有檔案並建立第一次提交

```bash
git add .
git commit -m "Initial commit"
```

---

### 5️⃣ 建立 `main` 分支並切換過去

```bash
git checkout -b main
```

---

### 6️⃣ 推送到 GitHub 並關聯分支

```bash
git push -u origin main
```

成功時會看到：

```
Branch 'main' set up to track remote branch 'main' from 'origin'.
```

---

## 🔁 後續操作（每次更新）

只要你有做任何修改：

```bash
git add .
git commit -m "更新說明"
git push
```

---

## 📝 備註

- 若 GitHub 上預設分支是 `master`，請將上述指令中的 `main` 換成 `master`。
- 若你看到錯誤訊息 `error: src refspec main does not match any`，表示你還沒建立 `main` 分支或沒有提交紀錄。

---

