from setuptools import setup

package_name = 'my_python_package'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
     install_requires=[
        'setuptools',
        'roboticstoolbox-python', 
    ],
    zip_safe=True,
    maintainer='gordon',
    maintainer_email='gordon@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    # 移除 tests_require
    entry_points={
        'console_scripts': [
            'pose_publisher = my_python_package.pose_publisher:main',
            'trajectory_publisher = my_python_package.trajectory_publisher:main'
        ],
    },
)
