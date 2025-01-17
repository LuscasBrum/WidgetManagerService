# WidgetManagerService

WidgetManagerService
Widget Manager Service Plugin for Unreal Engine 5

The Widget Manager Service is a plugin for Unreal Engine 5 designed to streamline the management of UI widgets across levels. It provides an intuitive system to organize, activate, and persist widgets using layers, ensuring that only one widget per layer is active at any given time. This system is highly modular and minimally intrusive, making it easy to integrate into any Unreal Engine project.

Features
* Widget Layer Management: Automatically deactivate widgets of the same layer when a new widget is activated.
* Persistent Widget States: Automatically reactivate widgets when transitioning between levels, maintaining their state.
* Blueprint and C++ Compatibility: Fully accessible through both Blueprint and C++ for flexibility.
* Subsystem Integration: Uses UWidgetManagerGameSubsystem to manage widgets globally, avoiding reliance on GameInstance for lightweight integration.
* Easy Setup: Register and manage widgets directly in the AWidgetManagerServiceHUD.

Ideal Use Cases
* Games or applications with complex UI systems that require layered widgets.
* Projects needing seamless UI transitions across levels.
* Developers looking for a modular, reusable widget management solution.
