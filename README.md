<h2 align = "center">✨ Nexonic Remastered - Open Source</h2>
<p>Welcome to the official release of the Nexonic Roleplay Open.MP gamemode. This project has been designed and developed by Navin (acecultz) to serve as a modern, reliable, and extensible roleplay foundation for Open.MP servers. The codebase focuses on clean architecture, maintainability, stability, and performance while remaining easy to customize and expand for different roleplay communities.
  
This repository is the only official source for the Nexonic Roleplay gamemode. It is published to provide the community with an authentic, up-to-date version of the project and to ensure transparency in its development.

Any unofficial copies, modified redistributions, or leaked versions should not be considered legitimate. We appreciate everyone who supports the project and hope this release helps developers build, learn, and create better Open.MP roleplay experiences.</p>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Redirect Button</title>
    <style>
        .author-btn {
            padding: 12px 24px;
            background-color: #007bff;
            color: white;
            border: none;
            border-radius: 5px;
            cursor: pointer;
            font-size: 16px;
        }
        .author-btn:hover {
            background-color: #0056b3;
        }
    </style>
</head>
<body>
    <!-- Method 1: Button with onclick redirect -->
    <button class="author-btn" onclick="window.location.href='https://author-page.com'">
        Visit Author's Page
    </button>

    <!-- Method 2: Using JavaScript function -->
    <button class="author-btn" onclick="redirectToAuthor()">
        Visit Author's Page
    </button>

    <!-- Method 3: Using anchor tag styled as button -->
    <a href="https://author-page.com" class="author-btn" style="text-decoration: none; display: inline-block;">
        Visit Author's Page
    </a>

    <script>
        function redirectToAuthor() {
            window.location.href = 'https://author-page.com';
            // Or use: window.location.replace('https://author-page.com');
        }
    </script>
</body>
</html>
