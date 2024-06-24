# Ask the user for the total number of files
$totalFiles = Read-Host -Prompt 'Enter the total number of files to create'

# Loop from 1 to the total number of files
for ($i = 1; $i -le $totalFiles; $i++) {
    # Create the file name
    $fileName = "chapter$i.md"

    # Create the file
    New-Item -ItemType File -Path . -Name $fileName
}

Write-Host "Created $totalFiles files."