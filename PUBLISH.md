# Publish esp32-uart-recovery

The repository is prepared locally. It has not been published: the GitHub connector was disconnected and the saved command-line login was invalid during preparation.

## GitHub CLI (recommended)

Open PowerShell in this repository folder. Log in interactively; never paste an access token into a chat or commit it:

```powershell
gh auth login --hostname github.com --web --git-protocol https
gh auth status
gh api user --jq .login
```

Verify that the reported account is the intended owner. This folder is initialized on `main` with the public files staged, but no commit yet, so your identity can be set before publishing:

```powershell
git status --short
git ls-files
git diff --cached --stat
```

If you are using the ZIP download, first open its extracted project folder and run these commands to recreate the local Git setup (the ZIP excludes `.git`):

```powershell
git init -b main
git add -- README.md LICENSE .gitignore PUBLISH.md docs sketches
```

Only the README, LICENSE, .gitignore, publication/evidence docs, diagnostic sketch and two reviewed screenshots should be tracked. The `.bin` backup, credentials and raw MAC-bearing logs must be absent. Ignore rules do not protect files already tracked or data embedded in images or text.

Set a repository-local author name and use the authenticated account's GitHub noreply email so the commit does not expose your personal email. Replace the display name if preferred:

```powershell
$githubLogin = gh api user --jq .login
$githubId = gh api user --jq .id
git config --local user.name $githubLogin
git config --local user.email "$githubId+$githubLogin@users.noreply.github.com"
git commit -m "Document ESP32 UART recovery using a NodeMCU bridge"
```

Create a new public repository and push the prepared main branch:

```powershell
gh repo create esp32-uart-recovery --public --source . --remote origin --description "Recovering ESP32 UART access using an ESP8266 NodeMCU USB bridge: diagnosis, wiring and tests." --push
gh repo view --web
```

If the name already exists, inspect that repository first; choose another name rather than overwriting unrelated work. If creating under an organization, use its explicit OWNER/esp32-uart-recovery name. If authentication fails, complete GitHub's browser flow and rerun `gh auth status`.

## Browser alternative

1. Sign in at [GitHub's new repository page](https://github.com/new), choose the intended owner and name `esp32-uart-recovery`, select Public, and create an empty repository without a generated README, license or .gitignore.
2. Use **uploading an existing file**, and upload the contents of this folder while preserving `docs/` and `sketches/` paths. Do not upload the enclosing folder, `.git` directory or ZIP file. Commit the files.
3. Open the README, confirm both images render, inspect the sketch and license, and check the complete file list for private material.

The resulting address will be `https://github.com/YOUR-HANDLE/esp32-uart-recovery`. Copy the actual address after publication; it is not a live link supplied by this draft.

Suggested topics: `esp32`, `esp8266`, `nodemcu`, `uart`, `hardware-debugging`, `arduino`, `windows-11`.

References: [GitHub CLI repository creation](https://cli.github.com/manual/gh_repo_create) and [GitHub's repository creation guide](https://docs.github.com/en/repositories/creating-and-managing-repositories/creating-a-new-repository).
