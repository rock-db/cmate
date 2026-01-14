use crate::{err, info};

/// make cleanしてプロジェクトをクリーンアップ
pub fn clean_project(make: String) {
    info!("Cleaning project...");
    let status = std::process::Command::new(make)
        .arg("clean")
        .status()
        .unwrap_or_else(|e| {
            err!("Failed to clean project: {}", e);
            std::process::exit(1);
        });

    if !status.success() {
        err!("make clean failed with status: {}", status);
    } else {
        info!("Project cleaned successfully.");
    }
}