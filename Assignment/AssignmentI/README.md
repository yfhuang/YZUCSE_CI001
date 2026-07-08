# Assignment I — Git/GitHub & GitHub Pages

This assignment practices the basics of **Git**, **GitHub**, and **Markdown**, and publishes a simple website using **GitHub Pages**.

---

## Objectives

- Create and manage a GitHub repository
- Write clear documentation using Markdown
- Publish a static site with GitHub Pages (optionally with a custom domain)
- (Optional) Build documentation using Sphinx

---

## Tasks

### 1) Create / verify your GitHub account
- Sign in to GitHub: https://github.com/
- Update your profile (name, avatar, short bio as needed)

---

### 2) Create new repositories (2 repos)
Create **two** new repositories on GitHub.

Reference: https://docs.github.com/en/repositories/creating-and-managing-repositories/creating-a-new-repository

---

#### Part A: Course Repository (`11501_CI001`)

1. **Course repository**: `11501_CI001`
    - Use this repo to store CI001 assignment files and documentation
    - Initialize with:
      - `README.md`
      - (Optional) `.gitignore`

2. Write a `README.md` that includes:
    - A short introduction of yourself
    - What this repository is used for
    - A link to your GitHub Pages site (after you publish it)
    - Notes about how you organize files/folders

**README.md template for course repository:**

```markdown
# 11501_CI001 — Course Repository

## Course Information
- **Course ID**: 11501_CI001
- **Course Name**: C++ Programming Laboratory (I)
- **Instructor**: [Yu-Feng Huang](yfhuang@saturn.yzu.edu.tw)

## About Me
- **Student ID**: student_id
- **Student Name**: student_name
- **Student E-mail**: [student_name](student_id@mail.yzu.edu.tw)

## Repository Purpose
This repository stores assignments, projects, and documentation for the CI001 course.

## GitHub Pages Site
Visit my personal website: [https://<username>.github.io/](https://<username>.github.io/)
```

Markdown reference:  
https://docs.github.com/en/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax

---

#### Part B: Personal Website Repository (`<username>.github.io`)

1. **Personal website repository** (for GitHub Pages)
    - Suggested name: `<username>.github.io` (recommended for a user site)
    - Initialize with:
      - `README.md`
      - `index.html` (default front page)
      - (Optional) `.gitignore`

2. Write a `README.md` that includes:
    - A brief introduction of yourself
    - Purpose of this personal website
    - Links to other projects or repositories
    - Contact information (optional)

**README.md template for personal website repository:**

```markdown
# Welcome to My GitHub Pages Site

## About Me
- **Name**: Your Name
- **Email**: your_email@mail.yzu.edu.tw
- **GitHub**: [@username](https://github.com/<username>)

## About This Site
This is my personal portfolio and project showcase website built with GitHub Pages.

## Featured Projects
- [Project Name](https://github.com/<username>/project-name) — Brief description
- [Course Repository](https://github.com/<username>/11501_CI001) — CI001 Course assignments

## Contact
Feel free to reach out to me at your_email@mail.yzu.edu.tw
```

3. Create an `index.html` file in the root of your repository to serve as the default front page:

```html
<!DOCTYPE html>
<html>
  <head>
    <title>Welcome</title>
  </head>
  <body>
    <h1>Welcome to my GitHub Pages site</h1>
    <p>Add your content here</p>
  </body>
</html>
```

Push this file to your repository so it becomes your site's home page.

4. Enable GitHub Pages for your repository and publish your site with the `index.html` as the default page.

References:  
- About GitHub Pages: https://docs.github.com/en/pages/getting-started-with-github-pages/about-github-pages  
- Custom domain (optional): https://docs.github.com/en/pages/configuring-a-custom-domain-for-your-github-pages-site

After publishing, record your Pages URL, for example:
- `https://<username>.github.io/`
- or `https://<username>.github.io/<repo>/`

---

### 3) Submit
Prepare the following links for submission:
- Name: `<Your Name>`
- Student ID: `<Your Student ID>`
- GitHub Username: `<Your GitHub Username>`
- GitHub Profile: `https://github.com/<username>`
- Course Repository URL: `https://github.com/<username>/11501_CI001`
- GitHub Pages URL: `https://<username>.github.io/`
- Notes (optional): `<Anything you want the TA/instructor to know>`

Submit using the course form (if provided by your instructor):  
https://forms.cloud.microsoft/r/4UQyA0Dhgb

---

## Helpful Resources

- Git & GitHub beginner guide (freeCodeCamp):  
  https://www.freecodecamp.org/news/the-beginners-guide-to-git-github/
- GitHub getting started:  
  https://docs.github.com/en/get-started

---

## Checklist

- [ ] GitHub account is set up
- [ ] Repositories created and pushed successfully
- [ ] README.md written with Markdown
- [ ] GitHub Pages enabled and accessible
- [ ] Submission form completed with correct links
- [ ] (Optional) Sphinx docs built/published

---

## Rubric

### Course Repository (`11501_CI001`)
- [ ] Repository created and accessible
- [ ] README.md file exists and contains:
  - [ ] Course ID (e.g., 11501_CI001)
  - [ ] Course Name
  - [ ] Instructor Name
  - [ ] Brief description of repository purpose
  - [ ] Link to personal GitHub Pages site
  - [ ] File/folder organization notes

### Personal Website Repository (`<username>.github.io`)
- [ ] Repository created and accessible
- [ ] `README.md` file exists with introduction and site description
- [ ] `index.html` file exists in repository root
- [ ] GitHub Pages is enabled and site is live at `https://<username>.github.io/`
- [ ] `index.html` is served as the default front page

