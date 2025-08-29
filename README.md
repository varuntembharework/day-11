# 📚 Library Management System (Day 11 – Skeleton)

## 🔹 Project Overview
The **Library Management System (LMS)** is a **C++ console-based project** designed to manage library operations like book management, user management, and transactions (issue/return).

This project will be developed step by step over **Day 11 → Day 15**, where each day we add new features to make it **100% functional and portfolio-ready**.

---

## 🔹 Day 11 Goals
- ✅ Build the **project skeleton** (blueprint)  
- ✅ Create a **menu-driven structure** (Admin + User menus)  
- ✅ Define **data structures** (`Book`, `User`, `Transaction`)  
- ✅ Implement **placeholder functions** for all core features  

At this stage, the system runs with menus but shows `"Feature coming soon..."` messages.

---

## 🔹 Code Architecture
### **Data Structures**
- **Book** → Holds book details (ID, Title, Author, Quantity).  
- **User** → Holds user details (ID, Name, Role: Student/Faculty).  
- **Transaction** → Tracks issue/return activities (Book ID, User ID, Dates, Status).  

### **Menus**
- **Main Menu**
  - Admin Login
  - User Menu
  - Exit
- **Admin Menu**
  - Add/View/Search/Delete Books
  - Add/View/Search Users
  - View Transactions
- **User Menu**
  - View/Search Books
  - Issue/Return Books

---

## 🔹 Next Steps (Day 12 → Day 15)
- **Day 12** → Implement Book Management (Add, View, Search, Delete) with file storage.  
- **Day 13** → Implement User Management (Add, View, Search, Authentication).  
- **Day 14** → Implement Issue & Return System (with transaction logs + late fees).  
- **Day 15** → Final polish (formatting, error handling, reporting, documentation).  
